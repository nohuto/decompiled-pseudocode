/*
 * XREFs of ?_IsUsingSimulatedMonitor@MONITOR_MGR@@QEAAEXZ @ 0x1C00B108C
 * Callers:
 *     ?IsEmergencyMonitorConnected@@YAJPEAXIPEAE@Z @ 0x1C00E4D80 (-IsEmergencyMonitorConnected@@YAJPEAXIPEAE@Z.c)
 *     MonitorIsUsingSimulatedMonitor @ 0x1C00E4E8C (MonitorIsUsingSimulatedMonitor.c)
 * Callees:
 *     <none>
 */

char __fastcall MONITOR_MGR::_IsUsingSimulatedMonitor(MONITOR_MGR *this)
{
  struct _FAST_MUTEX *v1; // rbx
  char *v3; // rcx
  char *v4; // rax
  char v5; // di
  __int64 v7; // rax
  __int64 v8; // rax

  v1 = (struct _FAST_MUTEX *)((char *)this + 168);
  if ( this == (MONITOR_MGR *)-168LL )
  {
    v7 = WdLogNewEntry5_WdAssertion(-168LL);
    WdLogEvent5_WdAssertion(v7);
  }
  KeAcquireGuardedMutex(v1);
  v3 = (char *)this + 128;
  v4 = (char *)*((_QWORD *)this + 16);
  if ( v4 == (char *)this + 128 || !v4 )
  {
LABEL_8:
    v5 = 0;
  }
  else
  {
    v5 = 1;
    while ( *((_DWORD *)v4 + 104) == 1 )
    {
      v4 = *(char **)v4;
      if ( v4 == v3 || !v4 )
        goto LABEL_8;
    }
  }
  if ( !v1 )
  {
    v8 = WdLogNewEntry5_WdAssertion(v3);
    WdLogEvent5_WdAssertion(v8);
  }
  KeReleaseGuardedMutex(v1);
  return v5;
}
