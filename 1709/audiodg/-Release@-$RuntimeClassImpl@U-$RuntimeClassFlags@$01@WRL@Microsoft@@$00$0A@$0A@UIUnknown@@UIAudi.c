/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@UIAudioStreamingResourceRegistration@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x140002450
 * Callers:
 *     ?CreateStreamingResourceManager@@YAJPEAPEAUIAudioStreamingResourceRegistration@@@Z @ 0x140002278 (-CreateStreamingResourceManager@@YAJPEAPEAUIAudioStreamingResourceRegistration@@@Z.c)
 *     ??$MakeAndInitialize@VGraphStreamingResourceManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVGraphStreamingResourceManager@@@Z @ 0x14000230C (--$MakeAndInitialize@VGraphStreamingResourceManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVGra.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@UIAudioStreamingResourceRegistration@@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x14001E800 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUn_ea_14001E800.c)
 * Callees:
 *     ??_EGraphStreamingResourceManager@@UEAAPEAXI@Z @ 0x140002820 (--_EGraphStreamingResourceManager@@UEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown,IAudioStreamingResourceRegistration>::Release(
        volatile signed __int32 *a1)
{
  unsigned __int32 v1; // ebx
  void *(__fastcall *v3)(GraphStreamingResourceManager *__hidden, unsigned int); // rax

  v1 = _InterlockedDecrement(a1 + 5);
  if ( !v1 )
  {
    if ( a1 )
    {
      v3 = *(void *(__fastcall **)(GraphStreamingResourceManager *__hidden, unsigned int))(*(_QWORD *)a1 + 24LL);
      if ( v3 == GraphStreamingResourceManager::`vector deleting destructor' )
        GraphStreamingResourceManager::`vector deleting destructor'((GraphStreamingResourceManager *)a1, 1u);
      else
        v3((GraphStreamingResourceManager *)a1, 1u);
    }
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (**)(void))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL))();
  }
  return v1;
}
