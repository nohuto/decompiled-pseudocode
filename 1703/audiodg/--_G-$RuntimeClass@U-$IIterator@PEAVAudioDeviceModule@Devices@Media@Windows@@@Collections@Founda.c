/*
 * XREFs of ??_G?$RuntimeClass@U?$IIterator@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundation@Windows@@VNil@Details@WRL@Microsoft@@V5678@V5678@V5678@V5678@V5678@V5678@V5678@V5678@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x140049D70
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x14001CB20 (--3@YAXPEAX@Z.c)
 *     ??1?$RuntimeClass@U?$InterfaceList@U?$IIterator@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundation@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAA@XZ @ 0x14004982C (--1-$RuntimeClass@U-$InterfaceList@U-$IIterator@PEAVAudioDeviceModule@Devices@Media@Windows@@@Co.c)
 */

void *__fastcall Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IIterator<Windows::Media::Devices::AudioDeviceModule *>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`scalar deleting destructor'(
        void *Block,
        char a2)
{
  Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Foundation::Collections::IIterator<Windows::Media::Devices::AudioDeviceModule *>,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::~RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Foundation::Collections::IIterator<Windows::Media::Devices::AudioDeviceModule *>,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>((__int64)Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
