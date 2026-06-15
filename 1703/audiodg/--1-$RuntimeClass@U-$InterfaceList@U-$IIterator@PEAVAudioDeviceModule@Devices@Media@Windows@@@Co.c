/*
 * XREFs of ??1?$RuntimeClass@U?$InterfaceList@U?$IIterator@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundation@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAA@XZ @ 0x14004982C
 * Callers:
 *     ??_G?$RuntimeClass@U?$IIterator@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundation@Windows@@VNil@Details@WRL@Microsoft@@V5678@V5678@V5678@V5678@V5678@V5678@V5678@V5678@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x140049D70 (--_G-$RuntimeClass@U-$IIterator@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Founda.c)
 *     ??_G?$SimpleVectorIterator@PEAUIBuffer@Streams@Storage@Windows@@V?$Vector@PEAUIBuffer@Streams@Storage@Windows@@U?$DefaultEqualityPredicate@PEAUIBuffer@Streams@Storage@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUIBuffer@Streams@Storage@Windows@@@6784@U?$DefaultVectorOptions@PEAUIBuffer@Streams@Storage@Windows@@@6784@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUIBuffer@Streams@Storage@Windows@@@6784@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@UEAAPEAXI@Z @ 0x140049E40 (--_G-$SimpleVectorIterator@PEAUIBuffer@Streams@Storage@Windows@@V-$Vector@PEAUIBuffer@Streams@St.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIWeakReference@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x14004E2E0 (-Release@-$RuntimeClass@U-$InterfaceList@UIWeakReference@@VNil@Details@WRL@Microsoft@@@Details@W.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Foundation::Collections::IIterator<Windows::Media::Devices::AudioDeviceModule *>,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::~RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Foundation::Collections::IIterator<Windows::Media::Devices::AudioDeviceModule *>,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>(
        __int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 24);
  if ( v1 < 0 )
    return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IWeakReference,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(2 * v1);
  return result;
}
