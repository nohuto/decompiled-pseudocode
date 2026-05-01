/*
 * XREFs of ??1CortanaExperienceManager_OnEventQueued@CortanaProactiveTelemetry@@QEAA@XZ @ 0x1800F69A4
 * Callers:
 *     _CortanaDesktopExperienceView::OnViewEventQueued_::_1_::dtor$0 @ 0x1800B4F90 (_CortanaDesktopExperienceView--OnViewEventQueued_--_1_--dtor$0.c)
 *     _CortanaSharedExperienceManager::_OnViewEvent_::_1_::dtor$0 @ 0x1800B5050 (_CortanaSharedExperienceManager--_OnViewEvent_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCortanaProactiveLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800F6ACC (-Destroy@-$ActivityBase@VCortanaProactiveLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderT.c)
 */

void __fastcall CortanaProactiveTelemetry::CortanaExperienceManager_OnEventQueued::~CortanaExperienceManager_OnEventQueued(
        CortanaProactiveTelemetry::CortanaExperienceManager_OnEventQueued *this)
{
  *(_QWORD *)this = &CortanaProactiveTelemetry::CortanaExperienceManager_OnEventQueued::`vftable';
  wil::ActivityBase<CortanaProactiveLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<CortanaProactiveLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CortanaProactiveLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(this);
}
