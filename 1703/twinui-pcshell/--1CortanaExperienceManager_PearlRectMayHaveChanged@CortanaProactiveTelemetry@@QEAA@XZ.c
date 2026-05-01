/*
 * XREFs of ??1CortanaExperienceManager_PearlRectMayHaveChanged@CortanaProactiveTelemetry@@QEAA@XZ @ 0x180099F04
 * Callers:
 *     _CortanaDesktopExperienceView::OnPearlRectChanged_::_1_::dtor$0 @ 0x18019CCA9 (_CortanaDesktopExperienceView--OnPearlRectChanged_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCortanaProactiveLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18009C6B8 (-Destroy@-$ActivityBase@VCortanaProactiveLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderT.c)
 */

void __fastcall CortanaProactiveTelemetry::CortanaExperienceManager_PearlRectMayHaveChanged::~CortanaExperienceManager_PearlRectMayHaveChanged(
        CortanaProactiveTelemetry::CortanaExperienceManager_PearlRectMayHaveChanged *this)
{
  *(_QWORD *)this = &CortanaProactiveTelemetry::CortanaExperienceManager_PearlRectMayHaveChanged::`vftable';
  wil::ActivityBase<CortanaProactiveLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<CortanaProactiveLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CortanaProactiveLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(this);
}
