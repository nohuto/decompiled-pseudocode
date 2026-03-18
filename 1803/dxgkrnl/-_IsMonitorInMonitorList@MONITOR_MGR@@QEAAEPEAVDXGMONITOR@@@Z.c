/*
 * XREFs of ?_IsMonitorInMonitorList@MONITOR_MGR@@QEAAEPEAVDXGMONITOR@@@Z @ 0x1C022C5B8
 * Callers:
 *     ?_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C022AF74 (-_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@.c)
 *     ?_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C022B030 (-_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
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
  if ( !a2 || (v7 = *v6, *v6 == (struct DXGMONITOR *)v6) )
  {
LABEL_10:
    v8 = 0;
  }
  else
  {
    while ( v7 != (struct DXGMONITOR *)((char *)a2 + 16) )
    {
      if ( v6 == (struct DXGMONITOR **)v7 )
        goto LABEL_10;
      v7 = *(struct DXGMONITOR **)v7;
    }
    v8 = 1;
  }
  if ( !v2 )
  {
    v9 = WdLogNewEntry5_WdAssertion(v6);
    WdLogEvent5_WdAssertion(v9);
  }
  KeReleaseGuardedMutex(v2);
  return v8;
}
