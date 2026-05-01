/*
 * XREFs of ?OnNewNotification@CToastCenterExperienceManager@@AEAAJXZ @ 0x180164704
 * Callers:
 *     ?OnTargetedMessage@CToastCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x180164B38 (-OnTargetedMessage@CToastCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 * Callees:
 *     ??0?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18007CA54 (--0-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?Stop@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18007CAF0 (-Stop@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ??1EM_NewNotificationActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x1801623AC (--1EM_NewNotificationActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ.c)
 *     ?Launch@CToastCenterExperienceManager@@AEAAJXZ @ 0x180163330 (-Launch@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?RequestingLaunch@EM_NewNotificationActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x180165EB8 (-RequestingLaunch@EM_NewNotificationActivity@NotificationCenterTelemetry@NotificationCenterUITel.c)
 *     ?StartActivity@EM_NewNotificationActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x1801671C4 (-StartActivity@EM_NewNotificationActivity@NotificationCenterTelemetry@NotificationCenterUITeleme.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CToastCenterExperienceManager::OnNewNotification(PTP_TIMER *pv)
{
  int v2; // eax
  unsigned int v3; // ebx
  _QWORD v5[40]; // [rsp+30h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+0h]

  wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v5,
    (__int64)"EM_NewNotificationActivity");
  v5[0] = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_NewNotificationActivity::`vftable';
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_NewNotificationActivity::StartActivity((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_NewNotificationActivity *)v5);
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_NewNotificationActivity::RequestingLaunch((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_NewNotificationActivity *)v5);
  v2 = CToastCenterExperienceManager::Launch(pv);
  v3 = v2;
  if ( v2 >= 0 )
  {
    wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v5, 0);
    v3 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x229,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v2);
  }
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_NewNotificationActivity::~EM_NewNotificationActivity((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_NewNotificationActivity *)v5);
  return v3;
}
