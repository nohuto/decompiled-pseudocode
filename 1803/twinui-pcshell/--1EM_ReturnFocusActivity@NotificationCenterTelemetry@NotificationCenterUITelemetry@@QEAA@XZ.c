/*
 * XREFs of ??1EM_ReturnFocusActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x1801536B8
 * Callers:
 *     ?ReturnFocus@CActionCenterExperienceManager@@AEAAJXZ @ 0x18009E4F4 (-ReturnFocus@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     _CActionCenterExperienceManager::ReturnFocus_::_1_::dtor$0 @ 0x18009E5E1 (_CActionCenterExperienceManager--ReturnFocus_--_1_--dtor$0.c)
 *     ?ReturnFocus@CToastCenterExperienceManager@@AEAAJXZ @ 0x180165FA8 (-ReturnFocus@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     _CToastCenterExperienceManager::ReturnFocus_::_1_::dtor$0 @ 0x18016616F (_CToastCenterExperienceManager--ReturnFocus_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18007CCDC (-Destroy@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 */

void __fastcall NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ReturnFocusActivity::~EM_ReturnFocusActivity(
        NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ReturnFocusActivity *this)
{
  *(_QWORD *)this = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ReturnFocusActivity::`vftable';
  wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
