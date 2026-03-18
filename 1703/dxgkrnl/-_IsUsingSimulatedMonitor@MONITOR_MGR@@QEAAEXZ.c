/*
 * XREFs of ?_IsUsingSimulatedMonitor@MONITOR_MGR@@QEAAEXZ @ 0x1C00EA080
 * Callers:
 *     MonitorIsUsingSimulatedMonitor @ 0x1C00A7368 (MonitorIsUsingSimulatedMonitor.c)
 * Callees:
 *     <none>
 */

char __fastcall MONITOR_MGR::_IsUsingSimulatedMonitor(MONITOR_MGR *this, __int64 a2, __int64 a3, __int64 a4)
{
  struct _FAST_MUTEX *v4; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  char *v9; // rcx
  char *v10; // rax
  char v11; // di
  __int64 v13; // rax
  __int64 v14; // rax

  v4 = (struct _FAST_MUTEX *)((char *)this + 168);
  if ( this == (MONITOR_MGR *)-168LL )
  {
    v13 = WdLogNewEntry5_WdAssertion(-168LL, a2, a3, a4);
    WdLogEvent5_WdAssertion(v13);
  }
  KeAcquireGuardedMutex(v4);
  v9 = (char *)this + 128;
  v10 = (char *)*((_QWORD *)this + 16);
  if ( v10 == (char *)this + 128 || !v10 )
  {
LABEL_8:
    v11 = 0;
  }
  else
  {
    v11 = 1;
    while ( *((_DWORD *)v10 + 94) == 1 )
    {
      v10 = *(char **)v10;
      if ( v10 == v9 || !v10 )
        goto LABEL_8;
    }
  }
  if ( !v4 )
  {
    v14 = WdLogNewEntry5_WdAssertion(v9, v6, v7, v8);
    WdLogEvent5_WdAssertion(v14);
  }
  KeReleaseGuardedMutex(v4);
  return v11;
}
