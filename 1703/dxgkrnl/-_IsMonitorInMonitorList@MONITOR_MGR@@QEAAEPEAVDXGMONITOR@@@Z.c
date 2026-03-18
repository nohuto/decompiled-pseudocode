/*
 * XREFs of ?_IsMonitorInMonitorList@MONITOR_MGR@@QEAAEPEAVDXGMONITOR@@@Z @ 0x1C01E2E90
 * Callers:
 *     ?_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01E282C (-_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@.c)
 *     ?_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C01E28E8 (-_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall MONITOR_MGR::_IsMonitorInMonitorList(MONITOR_MGR *this, struct DXGMONITOR *a2, __int64 a3, __int64 a4)
{
  struct _FAST_MUTEX *v4; // rbx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  struct DXGMONITOR **v11; // rcx
  struct DXGMONITOR *v12; // rax
  char v13; // di
  __int64 v14; // rax

  v4 = (struct _FAST_MUTEX *)((char *)this + 168);
  if ( this == (MONITOR_MGR *)-168LL )
  {
    v7 = WdLogNewEntry5_WdAssertion(-168LL, a2, a3, a4);
    WdLogEvent5_WdAssertion(v7);
  }
  KeAcquireGuardedMutex(v4);
  v11 = (struct DXGMONITOR **)((char *)this + 128);
  if ( a2 && (v12 = *v11, *v11 != (struct DXGMONITOR *)v11) )
  {
    while ( v12 != a2 )
    {
      if ( v11 == (struct DXGMONITOR **)v12 )
        goto LABEL_5;
      v12 = *(struct DXGMONITOR **)v12;
    }
    v13 = 1;
  }
  else
  {
LABEL_5:
    v13 = 0;
  }
  if ( !v4 )
  {
    v14 = WdLogNewEntry5_WdAssertion(v11, v8, v9, v10);
    WdLogEvent5_WdAssertion(v14);
  }
  KeReleaseGuardedMutex(v4);
  return v13;
}
