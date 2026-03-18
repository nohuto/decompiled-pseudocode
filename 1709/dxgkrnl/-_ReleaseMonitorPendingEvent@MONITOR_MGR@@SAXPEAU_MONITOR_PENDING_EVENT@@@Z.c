/*
 * XREFs of ?_ReleaseMonitorPendingEvent@MONITOR_MGR@@SAXPEAU_MONITOR_PENDING_EVENT@@@Z @ 0x1C000872C
 * Callers:
 *     MonitorReleaseMonitorPendingEvent @ 0x1C00B9C8C (MonitorReleaseMonitorPendingEvent.c)
 *     ??1MONITOR_MGR@@QEAA@XZ @ 0x1C01FC994 (--1MONITOR_MGR@@QEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00A3070 (--3@YAXPEAX@Z.c)
 */

void __fastcall MONITOR_MGR::_ReleaseMonitorPendingEvent(struct _MONITOR_PENDING_EVENT *a1)
{
  __int64 v2; // rax
  __int64 v3; // rax
  KIRQL v4; // al
  __int64 v5; // r8
  struct _MONITOR_PENDING_EVENT **v6; // rdx

  if ( !a1 )
  {
    v2 = WdLogNewEntry5_WdAssertion(0LL);
    WdLogEvent5_WdAssertion(v2);
  }
  if ( *((int *)a1 + 4) <= 0 )
  {
    v3 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v3);
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1 + 4, 0xFFFFFFFF) == 1 )
  {
    v4 = KeAcquireSpinLockRaiseToDpc(&MONITOR_MGR::_MonitorPendingEventTraceLock);
    v5 = *(_QWORD *)a1;
    if ( *(struct _MONITOR_PENDING_EVENT **)(*(_QWORD *)a1 + 8LL) != a1
      || (v6 = (struct _MONITOR_PENDING_EVENT **)*((_QWORD *)a1 + 1), *v6 != a1) )
    {
      __fastfail(3u);
    }
    *v6 = (struct _MONITOR_PENDING_EVENT *)v5;
    *(_QWORD *)(v5 + 8) = v6;
    KeReleaseSpinLock(&MONITOR_MGR::_MonitorPendingEventTraceLock, v4);
    operator delete(a1);
  }
}
