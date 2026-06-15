/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISpatialAudioPositionCalc@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180028C10
 * Callers:
 *     ??_ESpatialAudioDevicePropertyReader@@UEAAPEAXI@Z @ 0x180027FA0 (--_ESpatialAudioDevicePropertyReader@@UEAAPEAXI@Z.c)
 *     ??$MakeAndInitialize@VSpatialAudioPositionCalc@@UISpatialAudioPositionCalc@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUISpatialAudioPositionCalc@@@Z @ 0x1800290D4 (--$MakeAndInitialize@VSpatialAudioPositionCalc@@UISpatialAudioPositionCalc@@$$V@Details@WRL@Micr.c)
 *     Create_SpatialAudioPositionCalc @ 0x18002916C (Create_SpatialAudioPositionCalc.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISpatialAudioPositionCalc@@VFtmBase@23@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x1800374F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISp_ea_1800374F0.c)
 * Callees:
 *     ??_ESpatialAudioPositionCalc@@UEAAPEAXI@Z @ 0x180025350 (--_ESpatialAudioPositionCalc@@UEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISpatialAudioPositionCalc,Microsoft::WRL::FtmBase>::Release(
        volatile signed __int32 *a1)
{
  unsigned __int32 v1; // ebx
  SpatialAudioPositionCalc *(__fastcall *v3)(SpatialAudioPositionCalc *, char); // rax

  v1 = _InterlockedDecrement(a1 + 13);
  if ( !v1 )
  {
    if ( a1 )
    {
      v3 = *(SpatialAudioPositionCalc *(__fastcall **)(SpatialAudioPositionCalc *, char))(*(_QWORD *)a1 + 32LL);
      if ( v3 == SpatialAudioPositionCalc::`vector deleting destructor' )
        SpatialAudioPositionCalc::`vector deleting destructor'((SpatialAudioPositionCalc *)a1, 1);
      else
        v3((SpatialAudioPositionCalc *)a1, 1);
    }
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (**)(void))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL))();
  }
  return v1;
}
