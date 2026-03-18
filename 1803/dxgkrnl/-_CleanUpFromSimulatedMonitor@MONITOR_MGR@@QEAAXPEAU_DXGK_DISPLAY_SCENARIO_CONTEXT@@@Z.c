/*
 * XREFs of ?_CleanUpFromSimulatedMonitor@MONITOR_MGR@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00BA828
 * Callers:
 *     ?CompleteTopologyTransitionCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00D6910 (-CompleteTopologyTransitionCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C022B444 (-_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 * Callees:
 *     ?_EnableDisableMonitor@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00BAB80 (-_EnableDisableMonitor@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 */

void __fastcall MONITOR_MGR::_CleanUpFromSimulatedMonitor(MONITOR_MGR *this, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2)
{
  struct _FAST_MUTEX *v2; // rbx
  int v5; // esi
  __int64 v6; // rcx
  MONITOR_MGR *v7; // rax
  char *v8; // rdi
  struct _ERESOURCE *v9; // r15
  int v10; // ecx
  MONITOR_MGR *v11; // rax
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // rax

  v2 = (struct _FAST_MUTEX *)((char *)this + 168);
  v5 = 0;
  if ( this == (MONITOR_MGR *)-168LL )
  {
    v13 = WdLogNewEntry5_WdAssertion(-168LL);
    WdLogEvent5_WdAssertion(v13);
  }
  KeAcquireGuardedMutex(v2);
  v7 = (MONITOR_MGR *)*((_QWORD *)this + 16);
  if ( v7 != (MONITOR_MGR *)((char *)this + 128) )
  {
    v8 = (char *)v7 - 16;
    if ( !v7 )
      v8 = 0LL;
    while ( v8 )
    {
      v9 = (struct _ERESOURCE *)(v8 + 296);
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite((PERESOURCE)(v8 + 296), 1u);
      v10 = v5 + 1;
      v11 = (MONITOR_MGR *)*((_QWORD *)v8 + 2);
      if ( *((_DWORD *)v8 + 109) != 5 )
        v10 = v5;
      v5 = v10;
      if ( v11 == (MONITOR_MGR *)((char *)this + 128) )
      {
        v8 = 0LL;
      }
      else
      {
        v8 = (char *)v11 - 16;
        if ( !v11 )
          v8 = 0LL;
      }
      ExReleaseResourceLite(v9);
      KeLeaveCriticalRegion();
    }
  }
  if ( !v2 )
  {
    v14 = WdLogNewEntry5_WdAssertion(v6);
    WdLogEvent5_WdAssertion(v14);
  }
  KeReleaseGuardedMutex(v2);
  if ( !v5 )
  {
    LOBYTE(v12) = 1;
    MONITOR_MGR::_EnableDisableMonitor(this, 0xFFFFFFFFLL, v12, 8LL, 0LL, a2);
  }
}
