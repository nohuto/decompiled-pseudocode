/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@UIAudioStreamingResourceRegistration@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x140002FD0
 * Callers:
 *     ?CreateStreamingResourceManager@@YAJPEAPEAUIAudioStreamingResourceRegistration@@@Z @ 0x140002DA0 (-CreateStreamingResourceManager@@YAJPEAPEAUIAudioStreamingResourceRegistration@@@Z.c)
 *     ??$MakeAndInitialize@VGraphStreamingResourceManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVGraphStreamingResourceManager@@@Z @ 0x140002E34 (--$MakeAndInitialize@VGraphStreamingResourceManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVGra.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@UIAudioStreamingResourceRegistration@@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x14001D9D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUn_ea_14001D9D0.c)
 * Callees:
 *     ??_EGraphStreamingResourceManager@@UEAAPEAXI@Z @ 0x140003DB0 (--_EGraphStreamingResourceManager@@UEAAPEAXI@Z.c)
 *     ?SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z @ 0x14001D4E8 (-SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown,IAudioStreamingResourceRegistration>::Release(
        __int64 a1)
{
  unsigned int v1; // ebx
  GraphStreamingResourceManager *v2; // r10
  void *(__fastcall *v3)(GraphStreamingResourceManager *__hidden, unsigned int); // rax
  __int64 v4; // rdx

  v1 = ATL::SafeDecrementReferenceMultiThread((int *)(a1 + 20));
  if ( !v1 )
  {
    if ( v2 )
    {
      v3 = *(void *(__fastcall **)(GraphStreamingResourceManager *__hidden, unsigned int))(*(_QWORD *)v2 + 24LL);
      v4 = v1 + 1;
      if ( v3 == GraphStreamingResourceManager::`vector deleting destructor' )
        GraphStreamingResourceManager::`vector deleting destructor'(v2, v4);
      else
        v3(v2, v4);
    }
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v1;
}
