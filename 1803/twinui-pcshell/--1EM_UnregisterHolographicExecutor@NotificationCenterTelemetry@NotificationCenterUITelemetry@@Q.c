/*
 * XREFs of ??1EM_UnregisterHolographicExecutor@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x18016244C
 * Callers:
 *     ?UnregisterHolographicExecutor@CToastCenterExperienceManager@@UEAAJXZ @ 0x180169E90 (-UnregisterHolographicExecutor@CToastCenterExperienceManager@@UEAAJXZ.c)
 *     _CToastCenterExperienceManager::UnregisterHolographicExecutor_::_1_::dtor$0 @ 0x180169F8B (_CToastCenterExperienceManager--UnregisterHolographicExecutor_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VNotificationCenterLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180162A88 (-Destroy@-$ActivityBase@VNotificationCenterLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param.c)
 */

void __fastcall NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_UnregisterHolographicExecutor::~EM_UnregisterHolographicExecutor(
        NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_UnregisterHolographicExecutor *this)
{
  *(_QWORD *)this = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_UnregisterHolographicExecutor::`vftable';
  wil::ActivityBase<NotificationCenterLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<NotificationCenterLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<NotificationCenterLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
