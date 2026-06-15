/*
 * XREFs of _lambda_a9ede7db147a0808aca1dff73a0535ec_::operator() @ 0x14004B3D8
 * Callers:
 *     XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_Windows::Media::Devices::AudioDeviceModule_____ptr64_Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Media::Devices::AudioDeviceModule_____ptr64__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Media::Devices::AudioDeviceModule_____ptr64__Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::Media::Devices::AudioDeviceModule_____ptr64____XWinRT::IntVersionTag_::Do__lambda_a59ce847e09e9a3f758bc36443109e82___lambda_a9ede7db147a0808aca1dff73a0535ec___ @ 0x140049B30 (XWinRT--detail--InvalidationChecker_Windows--Foundation--Collections--Internal--Vec_ea_140049B30.c)
 *     ?GetMany@?$SimpleVectorIterator@PEAVAudioDeviceModule@Devices@Media@Windows@@V?$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@U?$DefaultVectorOptions@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUIAudioDeviceModule@Devices@Media@5@PEAI@Z @ 0x14004D180 (-GetMany@-$SimpleVectorIterator@PEAVAudioDeviceModule@Devices@Media@Windows@@V-$Vector@PEAVAudio.c)
 * Callees:
 *     ??$Destroy@UIBuffer@Streams@Storage@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAPEAUIBuffer@Streams@Storage@Windows@@@Z @ 0x140049900 (--$Destroy@UIBuffer@Streams@Storage@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAPEAUIBuffer@.c)
 */

_DWORD **__fastcall lambda_a9ede7db147a0808aca1dff73a0535ec_::operator()(__int64 a1)
{
  __int64 i; // rsi
  _DWORD **result; // rax

  for ( i = 0LL; (unsigned int)i < ***(_DWORD ***)a1; i = (unsigned int)(i + 1) )
  {
    XWinRT::InterfaceLifetimeTraits::Destroy<Windows::Storage::Streams::IBuffer>((__int64 *)(**(_QWORD **)(a1 + 8)
                                                                                           + 8 * i));
    *(_QWORD *)(**(_QWORD **)(a1 + 8) + 8 * i) = 0LL;
  }
  result = *(_DWORD ***)a1;
  ***(_DWORD ***)a1 = 0;
  return result;
}
