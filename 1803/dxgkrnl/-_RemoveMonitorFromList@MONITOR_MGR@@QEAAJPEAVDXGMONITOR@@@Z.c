/*
 * XREFs of ?_RemoveMonitorFromList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C022D100
 * Callers:
 *     ?_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C022A9B0 (-_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@PEAU_DXGK_DI.c)
 *     ?_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C022B610 (-_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_DISPLAY_SCENARI.c)
 *     ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C022B9B8 (-_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEA.c)
 *     ?_HandleRemovePhysicalMonitor@MONITOR_MGR@@QEAAJIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C022C098 (-_HandleRemovePhysicalMonitor@MONITOR_MGR@@QEAAJIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C022C234 (-_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MONITOR_MGR::_RemoveMonitorFromList(struct _FAST_MUTEX *this, struct DXGMONITOR *a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  struct DXGMONITOR **p_Contention; // rcx
  struct DXGMONITOR *v7; // rax
  __int64 v8; // rax
  struct DXGMONITOR **v9; // rdx
  struct DXGMONITOR **v10; // rcx
  __int64 v11; // rax

  if ( !a2 )
  {
    v4 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v4);
  }
  if ( this == (struct _FAST_MUTEX *)-168LL )
  {
    v5 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v5);
  }
  KeAcquireGuardedMutex(this + 3);
  p_Contention = (struct DXGMONITOR **)&this[2].Contention;
  if ( !a2 || (v7 = *p_Contention, *p_Contention == (struct DXGMONITOR *)p_Contention) )
  {
LABEL_12:
    v8 = WdLogNewEntry5_WdAssertion(p_Contention);
    WdLogEvent5_WdAssertion(v8);
  }
  else
  {
    while ( v7 != (struct DXGMONITOR *)((char *)a2 + 16) )
    {
      if ( p_Contention == (struct DXGMONITOR **)v7 )
        goto LABEL_12;
      v7 = *(struct DXGMONITOR **)v7;
    }
  }
  v9 = (struct DXGMONITOR **)*((_QWORD *)a2 + 2);
  if ( v9[1] != (struct DXGMONITOR *)((char *)a2 + 16)
    || (v10 = (struct DXGMONITOR **)*((_QWORD *)a2 + 3), *v10 != (struct DXGMONITOR *)((char *)a2 + 16)) )
  {
    __fastfail(3u);
  }
  *v10 = (struct DXGMONITOR *)v9;
  v9[1] = (struct DXGMONITOR *)v10;
  --LODWORD(this[2].Owner);
  if ( this == (struct _FAST_MUTEX *)-168LL )
  {
    v11 = WdLogNewEntry5_WdAssertion(v10);
    WdLogEvent5_WdAssertion(v11);
  }
  KeReleaseGuardedMutex(this + 3);
  return 0LL;
}
