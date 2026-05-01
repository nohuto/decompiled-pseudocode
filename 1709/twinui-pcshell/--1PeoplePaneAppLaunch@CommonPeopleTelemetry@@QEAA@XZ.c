/*
 * XREFs of ??1PeoplePaneAppLaunch@CommonPeopleTelemetry@@QEAA@XZ @ 0x18010FE3C
 * Callers:
 *     _PeoplePaneViewManager::LaunchPeoplePane_::_1_::dtor$0 @ 0x1801EDA52 (_PeoplePaneViewManager--LaunchPeoplePane_--_1_--dtor$0.c)
 *     _PeoplePaneViewManager::LaunchPeoplePane_::_1_::dtor$4 @ 0x1801EDA82 (_PeoplePaneViewManager--LaunchPeoplePane_--_1_--dtor$4.c)
 *     _PeoplePaneViewManager::LaunchPeoplePane_::_1_::dtor$11 @ 0x1801EDB28 (_PeoplePaneViewManager--LaunchPeoplePane_--_1_--dtor$11.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800AF8B0 (-Destroy@-$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Pa.c)
 */

void __fastcall CommonPeopleTelemetry::PeoplePaneAppLaunch::~PeoplePaneAppLaunch(
        CommonPeopleTelemetry::PeoplePaneAppLaunch *this)
{
  *(_QWORD *)this = &CommonPeopleTelemetry::PeoplePaneAppLaunch::`vftable';
  wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
