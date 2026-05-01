/*
 * XREFs of ??1ShowPeopleBarFlyout@CommonPeopleTelemetry@@QEAA@XZ @ 0x1800A0D28
 * Callers:
 *     _CPeopleBarFlyoutExperienceManager::_scalar_deleting_destructor__::_1_::dtor$3 @ 0x18019C31B (_CPeopleBarFlyoutExperienceManager--_scalar_deleting_destructor__--_1_--dtor$3.c)
 *     _CPeopleBarFlyoutExperienceManager::ShowFlyout_::_1_::dtor$0 @ 0x18019C375 (_CPeopleBarFlyoutExperienceManager--ShowFlyout_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800A3298 (-Destroy@-$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Pa.c)
 */

void __fastcall CommonPeopleTelemetry::ShowPeopleBarFlyout::~ShowPeopleBarFlyout(
        CommonPeopleTelemetry::ShowPeopleBarFlyout *this)
{
  *(_QWORD *)this = &CommonPeopleTelemetry::ShowPeopleBarFlyout::`vftable';
  wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(this);
}
