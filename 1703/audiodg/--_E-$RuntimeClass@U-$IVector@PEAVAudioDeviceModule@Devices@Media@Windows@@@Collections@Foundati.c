/*
 * XREFs of ??_E?$RuntimeClass@U?$IVector@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundation@Windows@@U?$IIterable@PEAVAudioDeviceModule@Devices@Media@Windows@@@234@VNil@Details@WRL@Microsoft@@V6789@V6789@V6789@V6789@V6789@V6789@V6789@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x140049DA0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x14001CB20 (--3@YAXPEAX@Z.c)
 *     ??1?$RuntimeClass@U?$InterfaceList@U?$IVector@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundation@Windows@@U?$InterfaceList@U?$IIterable@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundation@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAA@XZ @ 0x14002F708 (--1-$RuntimeClass@U-$InterfaceList@U-$IVector@PEAVAudioDeviceModule@Devices@Media@Windows@@@Coll.c)
 */

void *__fastcall Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVector<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::IIterable<Windows::Media::Devices::AudioDeviceModule *>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vector deleting destructor'(
        void *Block,
        char a2)
{
  Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Foundation::Collections::IVector<Windows::Media::Devices::AudioDeviceModule *>,Microsoft::WRL::Details::InterfaceList<Windows::Foundation::Collections::IIterable<Windows::Media::Devices::AudioDeviceModule *>,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::~RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Foundation::Collections::IVector<Windows::Media::Devices::AudioDeviceModule *>,Microsoft::WRL::Details::InterfaceList<Windows::Foundation::Collections::IIterable<Windows::Media::Devices::AudioDeviceModule *>,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>((__int64)Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
