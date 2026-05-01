/*
 * XREFs of ??$Start@W4DismissMethod@NotificationCenterUITelemetry@@W4InputType@2@@DismissActionCenter@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SA?AV012@$$QEAW4DismissMethod@2@$$QEAW4InputType@2@@Z @ 0x1800966FC
 * Callers:
 *     ?StartSwipe@CActionCenterExperienceManager@@UEAAJIUtagPOINT@@@Z @ 0x180091C00 (-StartSwipe@CActionCenterExperienceManager@@UEAAJIUtagPOINT@@@Z.c)
 *     ?OnDismiss@CActionCenterExperienceManager@@UEAAJXZ @ 0x1800939A0 (-OnDismiss@CActionCenterExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ?StartActivity@DismissActionCenter@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXW4DismissMethod@3@W4InputType@3@@Z @ 0x18008E320 (-StartActivity@DismissActionCenter@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QE.c)
 *     memset @ 0x180194E50 (memset.c)
 */

__int64 __fastcall NotificationCenterUITelemetry::NotificationCenterTelemetry::DismissActionCenter::Start<enum NotificationCenterUITelemetry::DismissMethod,enum NotificationCenterUITelemetry::InputType>(
        __int64 a1,
        int *a2,
        int *a3)
{
  __int64 v3; // rbx
  _QWORD *v7; // rcx

  *(_QWORD *)(a1 + 16) = a1;
  v3 = a1 + 56;
  *(_QWORD *)(a1 + 40) = a1 + 96;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_DWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 48) = a1 + 56;
  *(_DWORD *)(a1 + 56) = 0;
  v7 = (_QWORD *)(a1 + 136);
  *(_BYTE *)(v3 + 4) = 0;
  *(_BYTE *)(v3 + 64) = 0;
  *(_DWORD *)(v3 + 40) = 0;
  *(_QWORD *)(v3 + 48) = "DismissActionCenter";
  *(_QWORD *)(v3 + 56) = 0LL;
  *(_QWORD *)(v3 + 72) = 1LL;
  v7[18] = 0LL;
  v7[19] = 0LL;
  memset(v7, 0, 0x90uLL);
  *(_QWORD *)(v3 + 240) = 0LL;
  *(_QWORD *)(a1 + 304) = 0LL;
  *(_QWORD *)a1 = &NotificationCenterUITelemetry::NotificationCenterTelemetry::DismissActionCenter::`vftable';
  NotificationCenterUITelemetry::NotificationCenterTelemetry::DismissActionCenter::StartActivity(a1, *a2, *a3);
  return a1;
}
