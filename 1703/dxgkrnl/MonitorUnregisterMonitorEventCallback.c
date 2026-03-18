/*
 * XREFs of MonitorUnregisterMonitorEventCallback @ 0x1C01E4510
 * Callers:
 *     ??1VIDPN_MGR@@UEAA@XZ @ 0x1C0043EEC (--1VIDPN_MGR@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MonitorUnregisterMonitorEventCallback(
        __int64 a1,
        struct HDXGMONITOREVENT__ *a2,
        __int64 a3,
        __int64 a4)
{
  struct _FAST_MUTEX *v5; // rcx
  __int64 v6; // rax

  if ( !a1 || !a2 )
    return 3221225485LL;
  v5 = *(struct _FAST_MUTEX **)(a1 + 96);
  if ( !v5 )
  {
    v6 = WdLogNewEntry5_WdError(0LL, a2);
    *(_QWORD *)(v6 + 24) = *(_QWORD *)(a1 + 16);
    WdLogEvent5_WdError(v6);
    return 3221225485LL;
  }
  return MONITOR_MGR::_RemoveMonitorEventHandler(v5, a2, a3, a4);
}
