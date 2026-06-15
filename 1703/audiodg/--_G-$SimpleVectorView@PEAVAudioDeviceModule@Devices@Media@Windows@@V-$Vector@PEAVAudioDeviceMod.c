/*
 * XREFs of ??_G?$SimpleVectorView@PEAVAudioDeviceModule@Devices@Media@Windows@@V?$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@U?$DefaultVectorOptions@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@UEAAPEAXI@Z @ 0x140049E80
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x140019728 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x14001CB20 (--3@YAXPEAX@Z.c)
 *     ??1?$RuntimeClass@U?$InterfaceList@U?$IVector@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundation@Windows@@U?$InterfaceList@U?$IIterable@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundation@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAA@XZ @ 0x14002F708 (--1-$RuntimeClass@U-$InterfaceList@U-$IVector@PEAVAudioDeviceModule@Devices@Media@Windows@@@Coll.c)
 */

__int64 *__fastcall Windows::Foundation::Collections::Internal::SimpleVectorView<Windows::Media::Devices::AudioDeviceModule *,Windows::Foundation::Collections::Internal::Vector<Windows::Media::Devices::AudioDeviceModule *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::AudioDeviceModule *>>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::AudioDeviceModule *>,XWinRT::IntVersionTag,0>::`scalar deleting destructor'(
        __int64 *Block,
        char a2)
{
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(Block + 5);
  Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Foundation::Collections::IVector<Windows::Media::Devices::AudioDeviceModule *>,Microsoft::WRL::Details::InterfaceList<Windows::Foundation::Collections::IIterable<Windows::Media::Devices::AudioDeviceModule *>,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::~RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Foundation::Collections::IVector<Windows::Media::Devices::AudioDeviceModule *>,Microsoft::WRL::Details::InterfaceList<Windows::Foundation::Collections::IIterable<Windows::Media::Devices::AudioDeviceModule *>,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>((__int64)Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
