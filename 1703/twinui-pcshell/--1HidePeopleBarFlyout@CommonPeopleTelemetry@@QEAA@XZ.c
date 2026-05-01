/*
 * XREFs of ??1HidePeopleBarFlyout@CommonPeopleTelemetry@@QEAA@XZ @ 0x1800A14C8
 * Callers:
 *     _CPeopleBarFlyoutExperienceManager::HideFlyout_::_1_::dtor$0 @ 0x18019C381 (_CPeopleBarFlyoutExperienceManager--HideFlyout_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800A3298 (-Destroy@-$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Pa.c)
 */

void __fastcall CommonPeopleTelemetry::HidePeopleBarFlyout::~HidePeopleBarFlyout(
        CommonPeopleTelemetry::HidePeopleBarFlyout *this)
{
  *(_QWORD *)this = &CommonPeopleTelemetry::HidePeopleBarFlyout::`vftable';
  wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(this);
}
