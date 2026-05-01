/*
 * XREFs of ??1CortanaExperienceManager_PositionCortanaWindow@CortanaProactiveTelemetry@@QEAA@XZ @ 0x1800F69CC
 * Callers:
 *     _CortanaDesktopExperienceView::PositionCortanaWindow_::_1_::dtor$0 @ 0x1800B4E10 (_CortanaDesktopExperienceView--PositionCortanaWindow_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCortanaProactiveLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800F6ACC (-Destroy@-$ActivityBase@VCortanaProactiveLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderT.c)
 */

void __fastcall CortanaProactiveTelemetry::CortanaExperienceManager_PositionCortanaWindow::~CortanaExperienceManager_PositionCortanaWindow(
        CortanaProactiveTelemetry::CortanaExperienceManager_PositionCortanaWindow *this)
{
  *(_QWORD *)this = &CortanaProactiveTelemetry::CortanaExperienceManager_PositionCortanaWindow::`vftable';
  wil::ActivityBase<CortanaProactiveLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<CortanaProactiveLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CortanaProactiveLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(this);
}
