/*
 * XREFs of ??0ShowPeopleBarFlyout@CommonPeopleTelemetry@@QEAA@XZ @ 0x18016AB64
 * Callers:
 *     ??0CPeopleBarFlyoutExperienceManager@@QEAA@XZ @ 0x18016A98C (--0CPeopleBarFlyoutExperienceManager@@QEAA@XZ.c)
 *     ?ShowFlyout@CPeopleBarFlyoutExperienceManager@@UEAAJUPoint@Foundation@Windows@@@Z @ 0x18016D060 (-ShowFlyout@CPeopleBarFlyoutExperienceManager@@UEAAJUPoint@Foundation@Windows@@@Z.c)
 * Callees:
 *     ??0?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18016A8E8 (--0-$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflecto_ea_18016A8E8.c)
 */

CommonPeopleTelemetry::ShowPeopleBarFlyout *__fastcall CommonPeopleTelemetry::ShowPeopleBarFlyout::ShowPeopleBarFlyout(
        CommonPeopleTelemetry::ShowPeopleBarFlyout *this)
{
  wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(
    this,
    (__int64)"ShowPeopleBarFlyout");
  *(_QWORD *)this = &CommonPeopleTelemetry::ShowPeopleBarFlyout::`vftable';
  return this;
}
