/*
 * XREFs of ?OnViewDestroyed@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180157FD0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18007CA54 (--0-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?Stop@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18007CAF0 (-Stop@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ??1EM_ViewDestroyedActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x1801536E0 (--1EM_ViewDestroyedActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ.c)
 *     ?StartActivity@EM_ViewDestroyedActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x180155564 (-StartActivity@EM_ViewDestroyedActivity@NotificationCenterTelemetry@NotificationCenterUITelemetr.c)
 *     ?OnVisibilityChanged@CControlCenterExperienceManager@@AEAAXXZ @ 0x1801583DC (-OnVisibilityChanged@CControlCenterExperienceManager@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CControlCenterExperienceManager::OnViewDestroyed(
        CControlCenterExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  _QWORD v4[40]; // [rsp+30h] [rbp-158h] BYREF

  wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v4,
    (__int64)"EM_ViewDestroyedActivity");
  v4[0] = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ViewDestroyedActivity::`vftable';
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ViewDestroyedActivity::StartActivity((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ViewDestroyedActivity *)v4);
  CControlCenterExperienceManager::OnVisibilityChanged((CControlCenterExperienceManager *)((char *)this - 88));
  wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v4, 0);
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ViewDestroyedActivity::~EM_ViewDestroyedActivity((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ViewDestroyedActivity *)v4);
  return 0LL;
}
