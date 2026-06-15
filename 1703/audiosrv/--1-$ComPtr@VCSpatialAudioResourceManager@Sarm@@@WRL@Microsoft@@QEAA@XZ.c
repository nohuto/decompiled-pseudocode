/*
 * XREFs of ??1?$ComPtr@VCSpatialAudioResourceManager@Sarm@@@WRL@Microsoft@@QEAA@XZ @ 0x18007D3DC
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_Sarm::CSpatialAudioResourceManager_ISpatialAudioResourceManager_IAudioPolicyManager_____ptr64_&___ptr64__::_1_::dtor$0 @ 0x18005BADD (_Microsoft--WRL--Details--MakeAndInitialize_Sarm--CSpatialAudioResourceManager_ISpatialAudioReso.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UISpatialAudioResourceManager@@U?$InterfaceList@UIAudioAppVolumePolicyChange@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800342A0 (-Release@-$RuntimeClass@U-$InterfaceList@UISpatialAudioResourceManager@@U-$InterfaceList@UIAudio.c)
 */

volatile signed __int32 *__fastcall Microsoft::WRL::ComPtr<Sarm::CSpatialAudioResourceManager>::~ComPtr<Sarm::CSpatialAudioResourceManager>(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (volatile signed __int32 *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ISpatialAudioResourceManager,Microsoft::WRL::Details::InterfaceList<IAudioAppVolumePolicyChange,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(result);
  }
  return result;
}
