/*
 * XREFs of ??$Start@I@EM_NewNotificationActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SA?AV012@$$QEAI@Z @ 0x180096940
 * Callers:
 *     ?OnNewNotification@CActionCenterExperienceManager@@AEAAJXZ @ 0x180092398 (-OnNewNotification@CActionCenterExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?StartActivity@EM_NewNotificationActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXI@Z @ 0x18008EA3C (-StartActivity@EM_NewNotificationActivity@NotificationCenterTelemetry@NotificationCenterUITeleme.c)
 *     memset @ 0x180194E50 (memset.c)
 */

NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_NewNotificationActivity *__fastcall NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_NewNotificationActivity::Start<unsigned int>(
        NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_NewNotificationActivity *this,
        int *a2)
{
  char *v2; // rbx
  _QWORD *v5; // rcx

  *((_QWORD *)this + 2) = this;
  v2 = (char *)this + 56;
  *((_QWORD *)this + 5) = (char *)this + 96;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 6) = (char *)this + 56;
  *((_DWORD *)this + 14) = 0;
  v5 = (_QWORD *)((char *)this + 136);
  v2[4] = 0;
  v2[64] = 0;
  *((_DWORD *)v2 + 10) = 0;
  *((_QWORD *)v2 + 6) = "EM_NewNotificationActivity";
  *((_QWORD *)v2 + 7) = 0LL;
  *((_QWORD *)v2 + 9) = 1LL;
  v5[18] = 0LL;
  v5[19] = 0LL;
  memset(v5, 0, 0x90uLL);
  *((_QWORD *)v2 + 30) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *(_QWORD *)this = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_NewNotificationActivity::`vftable';
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_NewNotificationActivity::StartActivity(this, *a2);
  return this;
}
