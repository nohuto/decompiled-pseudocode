/*
 * XREFs of ?_RemoveMonitorFromList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C010D958
 * Callers:
 *     ?_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C010DAA4 (-_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@PEAU_DXGK_DI.c)
 *     ?_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C010DD0C (-_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_DISPLAY_SCENARI.c)
 *     ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01FD150 (-_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEA.c)
 *     ?_HandleRemovePhysicalMonitor@MONITOR_MGR@@QEAAJIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01FD4A4 (-_HandleRemovePhysicalMonitor@MONITOR_MGR@@QEAAJIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01FD634 (-_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MONITOR_MGR::_RemoveMonitorFromList(struct _FAST_MUTEX *this, struct DXGMONITOR ***a2)
{
  struct DXGMONITOR **p_Contention; // rcx
  struct DXGMONITOR *v5; // rax
  struct DXGMONITOR **v6; // rax
  struct DXGMONITOR **v7; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax

  if ( !a2 )
  {
    v9 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v9);
  }
  if ( this == (struct _FAST_MUTEX *)-168LL )
  {
    v10 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v10);
  }
  KeAcquireGuardedMutex(this + 3);
  p_Contention = (struct DXGMONITOR **)&this[2].Contention;
  if ( !a2 || (v5 = *p_Contention, *p_Contention == (struct DXGMONITOR *)p_Contention) )
  {
LABEL_16:
    v11 = WdLogNewEntry5_WdAssertion(p_Contention);
    WdLogEvent5_WdAssertion(v11);
  }
  else
  {
    while ( v5 != (struct DXGMONITOR *)a2 )
    {
      if ( p_Contention == (struct DXGMONITOR **)v5 )
        goto LABEL_16;
      v5 = *(struct DXGMONITOR **)v5;
    }
  }
  v6 = *a2;
  if ( (*a2)[1] != (struct DXGMONITOR *)a2 || (v7 = a2[1], *v7 != (struct DXGMONITOR *)a2) )
    __fastfail(3u);
  *v7 = (struct DXGMONITOR *)v6;
  v6[1] = (struct DXGMONITOR *)v7;
  --LODWORD(this[2].Owner);
  if ( this == (struct _FAST_MUTEX *)-168LL )
  {
    v12 = WdLogNewEntry5_WdAssertion(v7);
    WdLogEvent5_WdAssertion(v12);
  }
  KeReleaseGuardedMutex(this + 3);
  return 0LL;
}
