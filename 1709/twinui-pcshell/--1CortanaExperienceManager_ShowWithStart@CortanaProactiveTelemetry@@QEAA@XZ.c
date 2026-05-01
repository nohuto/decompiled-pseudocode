/*
 * XREFs of ??1CortanaExperienceManager_ShowWithStart@CortanaProactiveTelemetry@@QEAA@XZ @ 0x1800D3108
 * Callers:
 *     _CortanaDesktopExperienceView::ShowWithStart_::_1_::dtor$0 @ 0x1801EBE3A (_CortanaDesktopExperienceView--ShowWithStart_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800A61EC (-Destroy@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03U_TlgReflectorTag_Param0IsProviderTy.c)
 */

void __fastcall CortanaProactiveTelemetry::CortanaExperienceManager_ShowWithStart::~CortanaExperienceManager_ShowWithStart(
        CortanaProactiveTelemetry::CortanaExperienceManager_ShowWithStart *this)
{
  *(_QWORD *)this = &CortanaProactiveTelemetry::CortanaExperienceManager_ShowWithStart::`vftable';
  wil::ActivityBase<CortanaProactiveLogging,1,0,4,_TlgReflectorTag_Param0IsProviderType>::Destroy((__int64)this);
  wil::ActivityBase<CortanaProactiveLogging,1,0,4,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CortanaProactiveLogging,1,0,4,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
