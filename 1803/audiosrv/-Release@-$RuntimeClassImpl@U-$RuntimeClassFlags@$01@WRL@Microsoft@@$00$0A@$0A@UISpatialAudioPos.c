/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISpatialAudioPositionCalc@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18004D1A0
 * Callers:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x18004BFB0 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Create_SpatialAudioPositionCalc @ 0x18004C138 (Create_SpatialAudioPositionCalc.c)
 *     ??$MakeAndInitialize@VSpatialAudioPositionCalc@@UISpatialAudioPositionCalc@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUISpatialAudioPositionCalc@@@Z @ 0x18004C200 (--$MakeAndInitialize@VSpatialAudioPositionCalc@@UISpatialAudioPositionCalc@@$$V@Details@WRL@Micr.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISpatialAudioPositionCalc@@VFtmBase@23@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x180066260 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISp_ea_180066260.c)
 * Callees:
 *     ??_ESpatialAudioPositionCalc@@UEAAPEAXI@Z @ 0x18005CE60 (--_ESpatialAudioPositionCalc@@UEAAPEAXI@Z.c)
 *     ?SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z @ 0x180063378 (-SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISpatialAudioPositionCalc,Microsoft::WRL::FtmBase>::Release(
        __int64 a1)
{
  unsigned int v1; // ebx
  SpatialAudioPositionCalc *v2; // r10
  void *(__fastcall *v3)(SpatialAudioPositionCalc *__hidden, unsigned int); // rax
  __int64 v4; // rdx

  v1 = ATL::SafeDecrementReferenceMultiThread((int *)(a1 + 44));
  if ( !v1 )
  {
    if ( v2 )
    {
      v3 = *(void *(__fastcall **)(SpatialAudioPositionCalc *__hidden, unsigned int))(*(_QWORD *)v2 + 32LL);
      v4 = v1 + 1;
      if ( v3 == SpatialAudioPositionCalc::`vector deleting destructor' )
        SpatialAudioPositionCalc::`vector deleting destructor'(v2, v4);
      else
        v3(v2, v4);
    }
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v1;
}
