/*
 * XREFs of MonitorCleanupGlobal @ 0x1C0036F24
 * Callers:
 *     DxgkUnload @ 0x1C01A5BE0 (DxgkUnload.c)
 *     DriverEntry @ 0x1C0205078 (DriverEntry.c)
 * Callees:
 *     ?MonitorCleanupAdditionalTiming@@YAXXZ @ 0x1C0200B70 (-MonitorCleanupAdditionalTiming@@YAXXZ.c)
 */

__int64 __fastcall MonitorCleanupGlobal(__int64 a1, __int64 a2)
{
  KIRQL v2; // al
  struct _LIST_ENTRY *Flink; // rbx
  __int64 v4; // rcx
  __int64 v5; // rax

  WdLogNewEntry5_WdTrace(a1, a2);
  IoUnregisterPlugPlayNotification(MONITOR_MGR::_pInterfaceNotificationHandle);
  v2 = KeAcquireSpinLockRaiseToDpc(&MONITOR_MGR::_MonitorPendingEventTraceLock);
  Flink = MONITOR_MGR::_MonitorPendingEventTraceHead.Flink;
  KeReleaseSpinLock(&MONITOR_MGR::_MonitorPendingEventTraceLock, v2);
  if ( Flink != &MONITOR_MGR::_MonitorPendingEventTraceHead )
  {
    v5 = WdLogNewEntry5_WdError(v4);
    WdLogEvent5_WdError(v5);
  }
  MonitorCleanupAdditionalTiming();
  return 0LL;
}
