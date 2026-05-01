/*
 * XREFs of ??1DismissActionCenter@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x18009091C
 * Callers:
 *     _CActionCenterExperienceManager::StartSwipe_::_1_::dtor$0 @ 0x1801EAA8E (_CActionCenterExperienceManager--StartSwipe_--_1_--dtor$0.c)
 *     _CActionCenterExperienceManager::OnDismiss_::_1_::dtor$0 @ 0x1801EAB53 (_CActionCenterExperienceManager--OnDismiss_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18009B87C (-Destroy@-$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param.c)
 */

void __fastcall NotificationCenterUITelemetry::NotificationCenterTelemetry::DismissActionCenter::~DismissActionCenter(
        NotificationCenterUITelemetry::NotificationCenterTelemetry::DismissActionCenter *this)
{
  *(_QWORD *)this = &NotificationCenterUITelemetry::NotificationCenterTelemetry::DismissActionCenter::`vftable';
  wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<NotificationCenterLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(this);
}
