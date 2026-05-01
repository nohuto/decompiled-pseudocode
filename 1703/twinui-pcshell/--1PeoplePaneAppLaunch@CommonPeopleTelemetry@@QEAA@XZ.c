/*
 * XREFs of ??1PeoplePaneAppLaunch@CommonPeopleTelemetry@@QEAA@XZ @ 0x1800E77A8
 * Callers:
 *     _PeoplePaneViewManager::LaunchPeoplePane_::_1_::dtor$0 @ 0x18019DA36 (_PeoplePaneViewManager--LaunchPeoplePane_--_1_--dtor$0.c)
 *     _PeoplePaneViewManager::LaunchPeoplePane_::_1_::dtor$6 @ 0x18019DA7E (_PeoplePaneViewManager--LaunchPeoplePane_--_1_--dtor$6.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800A3298 (-Destroy@-$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Pa.c)
 */

void __fastcall CommonPeopleTelemetry::PeoplePaneAppLaunch::~PeoplePaneAppLaunch(
        CommonPeopleTelemetry::PeoplePaneAppLaunch *this)
{
  *(_QWORD *)this = &CommonPeopleTelemetry::PeoplePaneAppLaunch::`vftable';
  wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
