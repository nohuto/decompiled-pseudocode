/*
 * XREFs of ?_CleanUpFromSimulatedMonitor@MONITOR_MGR@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B09C0
 * Callers:
 *     ?CompleteTopologyTransitionCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00E5E50 (-CompleteTopologyTransitionCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C010DBFC (-_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 * Callees:
 *     ?_EnableDisableMonitor@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B0F08 (-_EnableDisableMonitor@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 */

void __fastcall MONITOR_MGR::_CleanUpFromSimulatedMonitor(MONITOR_MGR *this, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2)
{
  int v2; // ebp
  struct _FAST_MUTEX *v3; // rbx
  __int64 v6; // rcx
  __int64 *v7; // rdi
  struct _ERESOURCE *v8; // r15
  bool v9; // zf
  int v10; // ecx
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rax

  v2 = 0;
  v3 = (struct _FAST_MUTEX *)((char *)this + 168);
  if ( this == (MONITOR_MGR *)-168LL )
  {
    v12 = WdLogNewEntry5_WdAssertion(-168LL);
    WdLogEvent5_WdAssertion(v12);
  }
  KeAcquireGuardedMutex(v3);
  v7 = (__int64 *)*((_QWORD *)this + 16);
  if ( v7 != (__int64 *)((char *)this + 128) )
  {
    while ( v7 )
    {
      KeEnterCriticalRegion();
      v8 = (struct _ERESOURCE *)(v7 + 35);
      ExAcquireResourceSharedLite((PERESOURCE)(v7 + 35), 1u);
      v9 = *((_DWORD *)v7 + 105) == 5;
      v10 = v2 + 1;
      v7 = (__int64 *)*v7;
      if ( !v9 )
        v10 = v2;
      v2 = v10;
      if ( v7 == (__int64 *)((char *)this + 128) )
        v7 = 0LL;
      ExReleaseResourceLite(v8);
      KeLeaveCriticalRegion();
    }
  }
  if ( !v3 )
  {
    v13 = WdLogNewEntry5_WdAssertion(v6);
    WdLogEvent5_WdAssertion(v13);
  }
  KeReleaseGuardedMutex(v3);
  if ( !v2 )
  {
    LOBYTE(v11) = 1;
    MONITOR_MGR::_EnableDisableMonitor(this, 0xFFFFFFFFLL, v11, 8LL, 0LL, a2);
  }
}
