/*
 * XREFs of ?ReportStopActivity@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x18007C9F0
 * Callers:
 *     ?Stop@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18007CAF0 (-Stop@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?Destroy@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18007CCDC (-Destroy@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ReportStopActivity(
        NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_EventQueuedActivity *a1)
{
  void (*v1)(void); // rax

  v1 = *(void (**)(void))(*(_QWORD *)a1 + 8LL);
  if ( (char *)v1 == (char *)NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_EventQueuedActivity::StopActivity )
  {
    NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_EventQueuedActivity::StopActivity(a1);
  }
  else if ( (char *)v1 == (char *)NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_PositionViewActivity::StopActivity )
  {
    NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_PositionViewActivity::StopActivity(a1);
  }
  else if ( (char *)v1 == (char *)NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_RaiseApplicationEventActivity::StopActivity )
  {
    NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_RaiseApplicationEventActivity::StopActivity(a1);
  }
  else if ( (char *)v1 == (char *)NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ViewUncloakingActivity::StopActivity )
  {
    NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ViewUncloakingActivity::StopActivity(a1);
  }
  else if ( (char *)v1 == (char *)NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ViewShownActivity::StopActivity )
  {
    NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ViewShownActivity::StopActivity(a1);
  }
  else
  {
    v1();
  }
}
