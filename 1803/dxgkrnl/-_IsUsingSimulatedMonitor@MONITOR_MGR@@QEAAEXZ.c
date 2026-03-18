/*
 * XREFs of ?_IsUsingSimulatedMonitor@MONITOR_MGR@@QEAAEXZ @ 0x1C00BACA0
 * Callers:
 *     ?IsEmergencyMonitorConnected@@YAJPEAXIPEAE@Z @ 0x1C00C7A64 (-IsEmergencyMonitorConnected@@YAJPEAXIPEAE@Z.c)
 *     MonitorIsUsingSimulatedMonitor @ 0x1C00C7B70 (MonitorIsUsingSimulatedMonitor.c)
 * Callees:
 *     <none>
 */

char __fastcall MONITOR_MGR::_IsUsingSimulatedMonitor(MONITOR_MGR *this)
{
  struct _FAST_MUTEX *v1; // rbx
  MONITOR_MGR *v3; // rdx
  MONITOR_MGR *v4; // rcx
  char *v5; // rax
  char v6; // di
  __int64 v8; // rax
  __int64 v9; // rax

  v1 = (struct _FAST_MUTEX *)((char *)this + 168);
  if ( this == (MONITOR_MGR *)-168LL )
  {
    v8 = WdLogNewEntry5_WdAssertion(-168LL);
    WdLogEvent5_WdAssertion(v8);
  }
  KeAcquireGuardedMutex(v1);
  v3 = (MONITOR_MGR *)((char *)this + 128);
  v4 = (MONITOR_MGR *)*((_QWORD *)this + 16);
  if ( v4 == (MONITOR_MGR *)((char *)this + 128) )
    goto LABEL_10;
  v5 = (char *)v4 - 16;
  if ( !v4 )
    v5 = 0LL;
  if ( !v5 )
  {
LABEL_10:
    v6 = 0;
  }
  else
  {
    v6 = 1;
    while ( *((_DWORD *)v5 + 108) == 1 )
    {
      v4 = (MONITOR_MGR *)*((_QWORD *)v5 + 2);
      if ( v4 != v3 )
      {
        v5 = (char *)v4 - 16;
        if ( !v4 )
          v5 = 0LL;
        if ( v5 )
          continue;
      }
      goto LABEL_10;
    }
  }
  if ( !v1 )
  {
    v9 = WdLogNewEntry5_WdAssertion(v4);
    WdLogEvent5_WdAssertion(v9);
  }
  KeReleaseGuardedMutex(v1);
  return v6;
}
