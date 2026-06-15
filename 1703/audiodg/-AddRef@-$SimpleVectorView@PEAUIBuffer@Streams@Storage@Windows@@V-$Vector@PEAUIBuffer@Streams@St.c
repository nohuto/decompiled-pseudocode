/*
 * XREFs of ?AddRef@?$SimpleVectorView@PEAUIBuffer@Streams@Storage@Windows@@V?$Vector@PEAUIBuffer@Streams@Storage@Windows@@U?$DefaultEqualityPredicate@PEAUIBuffer@Streams@Storage@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUIBuffer@Streams@Storage@Windows@@@6784@U?$DefaultVectorOptions@PEAUIBuffer@Streams@Storage@Windows@@@6784@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUIBuffer@Streams@Storage@Windows@@@6784@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@UEAAKXZ @ 0x14002F5E0
 * Callers:
 *     ?AddRef@?$RuntimeClass@U?$InterfaceList@U?$IVectorView@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundation@Windows@@U?$InterfaceList@U?$IIterable@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundation@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x14001F750 (-AddRef@-$RuntimeClass@U-$InterfaceList@U-$IVectorView@PEAVAudioDeviceModule@Devices@Media@Windo.c)
 *     ?AddRef@?$RuntimeClass@U?$InterfaceList@U?$IVectorView@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundation@Windows@@U?$InterfaceList@U?$IIterable@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundation@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x14001F780 (-AddRef@-$RuntimeClass@U-$InterfaceList@U-$IVectorView@PEAVAudioDeviceModule@Device_ea_14001F780.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorView<Windows::Storage::Streams::IBuffer *,Windows::Foundation::Collections::Internal::Vector<Windows::Storage::Streams::IBuffer *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Storage::Streams::IBuffer *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Storage::Streams::IBuffer *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Storage::Streams::IBuffer *>>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Storage::Streams::IBuffer *>,XWinRT::IntVersionTag,0>::AddRef(
        __int64 a1)
{
  signed __int64 v1; // rax
  unsigned int v2; // edx
  signed __int64 v3; // rtt

  v1 = *(_QWORD *)(a1 + 32);
  while ( v1 >= 0 )
  {
    v2 = v1 + 1;
    v3 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 32), v1 + 1, v1);
    if ( v3 == v1 )
      return v2;
  }
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(2 * v1 + 16));
}
