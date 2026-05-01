/*
 * XREFs of ??1EM_ShowInHolographic@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x180162424
 * Callers:
 *     ?ShowInHolographic@CToastCenterExperienceManager@@AEAAJXZ @ 0x180166908 (-ShowInHolographic@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     _CToastCenterExperienceManager::ShowInHolographic_::_1_::dtor$0 @ 0x180166A9B (_CToastCenterExperienceManager--ShowInHolographic_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VNotificationCenterLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180162A88 (-Destroy@-$ActivityBase@VNotificationCenterLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param.c)
 */

void __fastcall NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ShowInHolographic::~EM_ShowInHolographic(
        NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ShowInHolographic *this)
{
  *(_QWORD *)this = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ShowInHolographic::`vftable';
  wil::ActivityBase<NotificationCenterLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<NotificationCenterLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<NotificationCenterLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
