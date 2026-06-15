/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioEndpoint@@UIAudioEndpointRT@@UIAudioOutputEndpointRT@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x140033860
 * Callers:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioEndpoint@@UIAudioEndpointRT@@UIAudioOutputEndpointRT@@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x14001D820 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioEndpoint@@.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioEndpoint@@UIAudioEndpointRT@@UIAudioOutputEndpointRT@@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x14001D830 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAu_ea_14001D830.c)
 * Callees:
 *     ?SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z @ 0x14001D4E8 (-SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioEndpoint,IAudioEndpointRT,IAudioOutputEndpointRT>::Release(
        __int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // r10

  v1 = ATL::SafeDecrementReferenceMultiThread((int *)(a1 + 28));
  if ( !v1 )
  {
    if ( v2 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 64LL))(v2, v1 + 1);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v1;
}
