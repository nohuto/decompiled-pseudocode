/*
 * XREFs of ?_CleanUpFromSimulatedMonitor@MONITOR_MGR@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00E9980
 * Callers:
 *     ?CompleteTopologyTransitionCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00A9200 (-CompleteTopologyTransitionCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0115778 (-_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 * Callees:
 *     ?_EnableDisableMonitor@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00E9EEC (-_EnableDisableMonitor@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 */

void __fastcall MONITOR_MGR::_CleanUpFromSimulatedMonitor(
        MONITOR_MGR *this,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2,
        __int64 a3,
        __int64 a4)
{
  int v4; // ebp
  struct _FAST_MUTEX *v5; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 *v12; // rdi
  struct _ERESOURCE *v13; // r15
  bool v14; // zf
  int v15; // ecx
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rax

  v4 = 0;
  v5 = (struct _FAST_MUTEX *)((char *)this + 168);
  if ( this == (MONITOR_MGR *)-168LL )
  {
    v17 = WdLogNewEntry5_WdAssertion(-168LL, a2, a3, a4);
    WdLogEvent5_WdAssertion(v17);
  }
  KeAcquireGuardedMutex(v5);
  v12 = (__int64 *)*((_QWORD *)this + 16);
  if ( v12 != (__int64 *)((char *)this + 128) )
  {
    while ( v12 )
    {
      KeEnterCriticalRegion();
      v13 = (struct _ERESOURCE *)(v12 + 30);
      ExAcquireResourceSharedLite((PERESOURCE)(v12 + 30), 1u);
      v14 = *((_DWORD *)v12 + 95) == 5;
      v15 = v4 + 1;
      v12 = (__int64 *)*v12;
      if ( !v14 )
        v15 = v4;
      v4 = v15;
      if ( v12 == (__int64 *)((char *)this + 128) )
        v12 = 0LL;
      ExReleaseResourceLite(v13);
      KeLeaveCriticalRegion();
    }
  }
  if ( !v5 )
  {
    v18 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
    WdLogEvent5_WdAssertion(v18);
  }
  KeReleaseGuardedMutex(v5);
  if ( !v4 )
  {
    LOBYTE(v16) = 1;
    MONITOR_MGR::_EnableDisableMonitor(this, 0xFFFFFFFFLL, v16, 8LL, 0LL, a2);
  }
}
