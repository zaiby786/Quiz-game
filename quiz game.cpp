#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	cout<<"                                   ======= ======= ======= ======= "<<endl;
	cout<<"                                   ====      Instractions      === "<<endl;
    cout<<"                                   ======= ======= ======= ======= "<<endl;
	cout<<"               You have 10 questions if you attempt more than 5 questions succefully you'll clear the test "<<endl;
	cout<<"               otherwise you'll have to attempt again and if you'll unable to pass the test in 2nd attempt "<<endl;
	cout<<"                     you'll get 3rd and last attempt to pass the test. Press any key to start quiz.        "<<endl;
	cout<<endl<<endl;
	getch();
	system("cls");
	cout<<"                                   ======= ======= ======= ======= "<<endl;
	cout<<"                                   ====This Is Your 1st Attempt=== "<<endl;
    cout<<"                                   ======= ======= ======= ======= "<<endl;
	string questions[10] = {
	"People use the__________number system, but computer use the Binary number system",
	"The term___________is a combination of words binary digit",
	"The most widely used text code system among personal computers is___________",
	"A processor’s built-in instructions are stored as__________",
	"__________are high-speed memory locations built directly into the CPU that hold data while they are being processed",
	"The__________is run when the system turn’s on and verifies that the hardware is working",
	"Digital cameras use__________to store pictures on removeable cards?",
	"The computer uses__________when it runs out of RAM, swapping program instruction or data out to the hard drive",
	"A__________is a portion of a computer program that is being run by a CPU",
	"The___________contains the list of all commands a CPU understands"
						};
	string options[10][4] = {
	{"Bit","Decimal","Hexa_Decimal","Binary"},
	{"Bit","Byte","Gega_Byte","Killo_Byte"},
	{"HTML","ASCII","ASME","NFPA"},
	{"ROM","RAM","Micro-Code","Hard Drive"},
	{"Flash Drive","Buses","Registers","Non Of These"},
	{"Virus Scan","Power on Self-Test (POST)","Memory Scan","Speed Test"},
	{"USB","SD_Card","Flash Memory","Cache Memory"},
	{"Virtual Memory","Volatile","Non_Volatile","Permanent"},
	{"Instruction","Processor","Thread","Non of these"},
	{"Hardware","Control Unit","RAM","ROM"},
					    };
	string correctOptions[10] = {
		"Decimal","Bit","ASCII","Micro-Code",
		"Registers","Power on Self-Test (POST)","Flash Memory",
		"Virtual Memory","Thread","Control Unit"
								};
	int userOptions[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	
	for( int i=0; i<10; i++ ){
		cout<<"Question # "<<(i+1)<<endl;
		cout<< questions[i]<<endl;
		cout<< "1."<<options[i][0]<<endl;
		cout<< "2."<<options[i][1]<<endl;
		cout<< "3."<<options[i][2]<<endl;
		cout<< "4."<<options[i][3]<<endl<<endl;
		
		cout<<"Select Option (1-4) or 0 to skip and press enter: ";
		cin >> userOptions[i];
		cout<<endl<<"-----------------------------"<<endl<<endl;
	}
	
	getch();
	
	cout<<"                                   ======= ======= ======= ======= "<<endl;
	cout<<"                                   ======= Correct Options ======= "<<endl;
	cout<<"                                   ======= ======= ======= ======= "<<endl;

	for( int i=0; i<10; i++ ){
		cout<<"Question # "<<(i+1)<<endl;
		cout<< questions[i]<<endl;
		cout<< "1."<<options[i][0]<<endl;
		cout<< "2."<<options[i][1]<<endl;
		cout<< "3."<<options[i][2]<<endl;
		cout<< "4."<<options[i][3]<<endl;
		
		if( userOptions[i] == 0 || userOptions[i] >= 5 ){
			cout<< "You Skipped this Question."<<endl;		
		}
		else{
			cout<< "You Selected : "<<options[i][userOptions[i]-1]<<endl;		
		}
		cout<< "Correct Option : "<<correctOptions[i]<<endl<<endl;

		cout<<"Press any key to continue..."<<endl;
		getch();
		cout<<endl<<"------------------"<<endl;
	}
	
	
	cout<<endl<<endl;
	cout<<"                                   ======= ======= ======= ======= "<<endl;
	cout<<"                                   =======      Result     ======= "<<endl;
	cout<<"                                   ======= ======= ======= ======= "<<endl;

	int correct = 0;
	int incorrect = 0;
	int skipped = 0;
	for( int i=0; i<10; i++ ){
		if( userOptions[i] != 0 ){
			if( correctOptions[i] == options[i][userOptions[i]-1] ){
				correct++;
			}
			else{
				incorrect++;
			}
		}
		else{
			skipped++;
		}
	}
	cout<< "Total Questions : 10" <<endl;	
	cout<< "Correct : "<< correct <<endl;
	cout<< "In-Correct : "<< incorrect <<endl;
	cout<< "Skipped : "<< skipped <<endl;
	
	getch();
	
	
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	

	if(correct<=5){
		system("cls");
		cout<<"                                   ======= ======= ======= ======= "<<endl;
	    cout<<"                                   ====This Is Your 2nd Attempt=== "<<endl;
	    cout<<"                                   ======= ======= ======= ======= "<<endl;
			string questions2[10] = {
	"Stanford computer monitors work by using a large vacuum tube.which is called a___________",
	"In a CRT monitor, the electron gun can focus on___________as small as a single phosphor dot",
	"In a CRT monitor. the holes in the___________align the electron beams so they precisely strike the phosphor dots_",
	"The most common type of flat-panel monitor is the___________monitor",
	"One disadvantage Of__________monitors is that they don’t refresh very quickly",
	"In active matrix displays that use__________technology, each pixel has multiple transistors",
	"The portion of a monitor that actually displays images is called the__________",
	"VGA and SVGA are standards for monitor__________",
	"In most computers. a device called the__________sends information to monitor for display on the screen",
	"A__________lets you display data on a big screen. directly from the computers disk"
						};
	string options2[10][4] = {
	{"Transistor","Cathode Ray Tube (CRT)","Circuits","Non Of These"},
	{"Pixel","Graphics","Resolution","Screen"},
	{"Tube","Shadow Mask","Plates","Electron Gun"},
	{"CRT Monitor","LED","Liquid Crystal Display (LCD)","Non Of These"},
	{"LED","Active Matrix LCD","Passive Matrix LCD","Non Of These"},
	{"Field Effect Transistors (FET)","Thin-Film Transistor (TFT)","Bipolar Junction Transistors (BJT)","insulated-gate bipolar transistors (IGBTs)"},
	{"Screen","Monitor","Viewing Area","Electronic Plates"},
	{"Resolution","Pixels","Graphics","Non Of These"},
	{"SSD Card","Graphic card","Video Card","HSD Card"},
	{"Monitor","Data Projector","LCD","LED"},
					    };
	string correctoptions2[10] = {
		"Cathode Ray Tube (CRT)","Pixel","Shadow Mask","Liquid Crystal Display (LCD)",
		"Passive Matrix LCD","Thin-Film Transistor (TFT)","Viewing Area",
		"Resolution","Video Card","Data Projector"
								};
	int useroptions2[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	
	
	for( int i=0; i<10; i++ ){
		cout<<"Question # "<<(i+1)<<endl;
		cout<< questions2[i]<<endl;
		cout<< "1."<<options2[i][0]<<endl;
		cout<< "2."<<options2[i][1]<<endl;
		cout<< "3."<<options2[i][2]<<endl;
		cout<< "4."<<options2[i][3]<<endl<<endl;
		
		cout<<"Select Option (1-4) or 0 to skip and press enter: ";
		cin >> useroptions2[i];
		cout<<endl<<"-----------------------------"<<endl<<endl;
	}
	getch();
	
	
	cout<<"                                   ======= ======= ======= ======= "<<endl;
	cout<<"                                   ======= Correct Options ======= "<<endl;
	cout<<"                                   ======= ======= ======= ======= "<<endl;

	for( int i=0; i<10; i++ ){
		cout<<"Question # "<<(i+1)<<endl;
		cout<< questions2[i]<<endl;
		cout<< "1."<<options2[i][0]<<endl;
		cout<< "2."<<options2[i][1]<<endl;
		cout<< "3."<<options2[i][2]<<endl;
		cout<< "4."<<options2[i][3]<<endl;
		
		if( useroptions2[i] == 0 || useroptions2[i] >= 5 ){
			cout<< "You Skipped this Question."<<endl;		
		}
		else{
			cout<< "You Selected : "<<options2[i][useroptions2[i]-1]<<endl;		
		}
		cout<< "Correct Option : "<<correctoptions2[i]<<endl<<endl;

		cout<<"Press any key to continue..."<<endl;
		getch();
		cout<<endl<<"------------------"<<endl;
	}
	
	
	cout<<endl<<endl;
	cout<<"                                   ======= ======= ======= ======= "<<endl;
	cout<<"                                   =======      Result     ======= "<<endl;
	cout<<"                                   ======= ======= ======= ======= "<<endl;

	int correct2 = 0;
	int incorrect2 = 0;
	int skipped2 = 0;
	for( int i=0; i<10; i++ ){
		if( useroptions2[i] != 0 ){
			if( correctoptions2[i] == options2[i][useroptions2[i]-1] ){
				correct2++;
			}
			else{
				incorrect2++;
			}
		}
		else{
			skipped2++;
		}
	}
	cout<< "Total Questions : 10"<<endl;	
	cout<< "Correct : "<< correct2 <<endl;
	cout<< "In-Correct : "<< incorrect2 <<endl;
	cout<< "Skipped : "<< skipped2 <<endl;
	
	getch();
	
	
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////
   //////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	
	if(correct2<=5){
		system("cls");
		cout<<"                                   ======= ======= ======= ======= "<<endl;
	    cout<<"                                   ====This Is Your 3rd Attempt=== "<<endl;
	    cout<<"                                   ======= ======= ======= ======= "<<endl;
			string questions3[10] = {
	"A___________printer creates an image by using pins or hammers to press an inked ribbon against the paper",
	"A dot matrix printer creates an image by using a mechanism called___________",
	"The speed of dot matrix printer is measured in___________",
	"A laser printer is an example of a___________printer",
	"An___________printer creates an image by spraying ink through tiny nozzles",
	"A laser printer uses tiny particles of ink, called___________, to create an image",
	"A device that combines printing, scanning, faxing and copying capabilities is called a___________",
	"An ink jet printer’s image quality is measured in___________",
	"A laser printer’s speed is measured in___________",
	"A___________printer creates vivid colors because the inks do not bleed into each other or soak the specially coated paper."
						};
	string options3[10][4] = {
	{"Laser","Dot Matrix","InkJet","Thermal_Wax"},
	{"Print Head","Nozzel","Hammer","Ruller"},
	{"Pages Per Minute (ppm)","Characters PerSecond (cps)","Dots Per Inch (dpi)","Words Per Minute (wpm)"},
	{"InkJet","Impact","Non-Impact","Non Of These"},
	{"Dot Matrix","Laser","Ink Jet","Thermal_Wax"},
	{"Dots","Toner","Particals","Non Of These"},
	{"Laser Printer","Dot Matrix","Photo Printer","InkJet"},
	{"Dots Per Inch (dpi)","Pages Per Minute (ppm)","Characters PerSecond (cps)","Words Per Minute (wpm)"},
	{"Dots Per Inch (dpi)","Characters PerSecond (cps)","Pages Per Minute (ppm)","Words Per Minute (wpm)"},
	{"Dot Matrix","Thermal-Wax","Laser","Ink Jet"},
					    };
	string correctoptions3[10] = {
		"Dot Matrix","Print Head","Characters PerSecond (cps)","Non-Impact",
		"Ink Jet","Toner","Photo Printer",
		"Dots Per Inch (dpi)","Pages Per Minute (ppm)","Thermal-Wax"
								};
	int useroptions3[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	int totalQs3 = 10;	
	int op3;
	
	
	for( int i=0; i<10; i++ ){
		cout<<"Question # "<<(i+1)<<endl;
		cout<< questions3[i]<<endl;
		cout<< "1."<<options3[i][0]<<endl;
		cout<< "2."<<options3[i][1]<<endl;
		cout<< "3."<<options3[i][2]<<endl;
		cout<< "4."<<options3[i][3]<<endl<<endl;
		
		cout<<"Select Option (1-4) or 0 to skip and press enter: ";
		cin >> useroptions3[i];
		cout<<endl<<"-----------------------------"<<endl<<endl;
	}
	
	getch();
	
	cout<<"                                   ======= ======= ======= ======= "<<endl;
	cout<<"                                   ======= Correct options3 ======= "<<endl;
	cout<<"                                   ======= ======= ======= ======= "<<endl;

	for( int i=0; i<10; i++ ){
		cout<<"Question # "<<(i+1)<<endl;
		cout<< questions3[i]<<endl;
		cout<< "1."<<options3[i][0]<<endl;
		cout<< "2."<<options3[i][1]<<endl;
		cout<< "3."<<options3[i][2]<<endl;
		cout<< "4."<<options3[i][3]<<endl;
		
		if( useroptions3[i] == 0 || useroptions2[i] >= 5 ){
			cout<< "You Skipped this Question."<<endl;		
		}
		else{
			cout<< "You Selected : "<<options3[i][useroptions3[i]-1]<<endl;		
		}
		cout<< "Correct Option : "<<correctoptions3[i]<<endl<<endl;

		cout<<"Press any key to continue..."<<endl;
		getch();
		cout<<endl<<"------------------"<<endl;
	}
	
	
	cout<<endl<<endl;
	cout<<"                                   ======= ======= ======= ======= "<<endl;
	cout<<"                                   =======      Result     ======= "<<endl;
	cout<<"                                   ======= ======= ======= ======= "<<endl;

	int correct3 = 0;
	int incorrect3 = 0;
	int skipped3 = 0;
	for( int i=0; i<10; i++ ){
		if( useroptions3[i] != 0 ){
			if( correctoptions3[i] == options3[i][useroptions3[i]-1] ){
				correct3++;
			}
			else{
				incorrect3++;
			}
		}
		else{
			skipped3++;
		}
	}
	cout<< "Total Questions : 10"<<endl;	
	cout<< "Correct : "<< correct3 <<endl;
	cout<< "In-Correct : "<< incorrect3 <<endl;
	cout<< "Skipped : "<< skipped3 <<endl;
	cout<<endl<<endl;
	cout<<"Your IQ level is very low";
	getch();
	
	
	}
	
	
	}
	system("cls");
    cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"                                   ===========  ======================  ============= "<<endl;
	cout<<"                                   =======     A project by SS Group.     ======= "<<endl;
	cout<<"                                   ===========  ======================  ============= "<<endl;
	
	return 0;
}  
