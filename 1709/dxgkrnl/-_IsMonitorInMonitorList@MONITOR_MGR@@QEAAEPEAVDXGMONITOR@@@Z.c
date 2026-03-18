/*
 * XREFs of ?_IsMonitorInMonitorList@MONITOR_MGR@@QEAAEPEAVDXGMONITOR@@@Z @ 0x1C01FD7E0
 * Callers:
 *     ?_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01FCFEC (-_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@.c)
 *     ?_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C01FD0A8 (-_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall MONITOR_MGR::_IsMonitorInMonitorList(MONITOR_MGR *this, struct DXGMONITOR *a2)
{
  struct _FAST_MUTEX *v2; // rbx
  __int64 v5; // rax
  struct DXGMONITOR **v6; // rcx
  struct DXGMONITOR *v7; // rax
  char v8; // di
  __int64 v9; // rax

  v2 = (struct _FAST_MUTEX *)((char *)this + 168);
  if ( this == (MONITOR_MGR *)-168LL )
  {
    v5 = WdLogNewEntry5_WdAssertion(-168LL);
    WdLogEvent5_WdAssertion(v5);
  }
  KeAcquireGuardedMutex(v2);
  v6 = (struct DXGMONITOR **)((char *)this + 128);
  if ( a2 && (v7 = *v6, *v6 != (struct DXGMONITOR *)v6) )
  {
    while ( v7 != a2 )
    {
      if ( v6 == (struct DXGMONITOR **)v7 )
        goto LABEL_5;
      v7 = *(struct DXGMONITOR **)v7;
    }
    v8 = 1;
  }
  else
  {
LABEL_5:
    v8 = 0;
  }
  if ( !v2 )
  {
    v9 = WdLogNewEntry5_WdAssertion(v6);
    WdLogEvent5_WdAssertion(v9);
  }
  KeReleaseGuardedMutex(v2);
  return v8;
}
