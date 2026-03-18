/*
 * XREFs of ?_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C022B444
 * Callers:
 *     ?_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C022AF74 (-_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@.c)
 *     ?_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C022B610 (-_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_DISPLAY_SCENARI.c)
 *     ?_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0236E24 (-_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?_LeaveMonitorPendingState@MONITOR_MGR@@QEAAXXZ @ 0x1C004701C (-_LeaveMonitorPendingState@MONITOR_MGR@@QEAAXXZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00BA738 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_CleanUpFromSimulatedMonitor@MONITOR_MGR@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00BA828 (-_CleanUpFromSimulatedMonitor@MONITOR_MGR@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C022AF74 (-_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@.c)
 *     ?_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C022B030 (-_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 *     ?_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C022C658 (-_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_D.c)
 *     ?_CreateTtmDevice@DXGMONITOR@@QEAAJXZ @ 0x1C0235898 (-_CreateTtmDevice@DXGMONITOR@@QEAAJXZ.c)
 */

__int64 __fastcall MONITOR_MGR::_HandleCreateMonitorStep2(
        MONITOR_MGR *this,
        int a2,
        struct DXGMONITOR *a3,
        struct DXGMONITOR *a4,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a5)
{
  int v5; // ebp
  __int64 v10; // rax
  struct DXGMONITOR *v11; // r14
  bool v12; // r12
  int v13; // eax
  __int64 v14; // rax
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v15; // r15
  unsigned int v16; // ecx
  int v17; // eax
  __int64 v18; // rax
  struct DXGMONITOR *v20; // [rsp+70h] [rbp+18h] BYREF

  v5 = 0;
  if ( a2 == -1 )
  {
    v10 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v10);
  }
  v11 = 0LL;
  v12 = 0;
  if ( a3 )
  {
    v13 = *((_DWORD *)a3 + 108);
    if ( *((_DWORD *)a3 + 11) == a2 )
    {
      v12 = v13 == 5;
    }
    else
    {
      if ( v13 != 5 )
      {
        v14 = WdLogNewEntry5_WdAssertion(this);
        WdLogEvent5_WdAssertion(v14);
      }
      v11 = a3;
      a3 = 0LL;
    }
  }
  v15 = a5;
  if ( a4 )
  {
    *((_QWORD *)a4 + 60) = 0LL;
    v16 = a3 ? 3 : *((_DWORD *)a4 + 145) != 0 ? 4 : 1;
    MONITOR_MGR::_IssueMonitorEvent(
      this,
      *((unsigned int *)a4 + 11),
      (*((_DWORD *)a4 + 10) & 0x40) == 0 ? 7 : 0,
      v16,
      *((_DWORD *)a4 + 108),
      v15);
    if ( *((_BYTE *)a4 + 476) )
    {
      *((_BYTE *)a4 + 476) = 0;
      MONITOR_MGR::_LeaveMonitorPendingState(this);
    }
  }
  if ( a3 )
  {
    if ( *((_DWORD *)a3 + 108) == 1 )
      v17 = MONITOR_MGR::_DestroyPhysicalMonitor(this, a3, v15);
    else
      v17 = MONITOR_MGR::_DestroySimulatedMonitor(this, a3);
    v5 = v17;
  }
  if ( v11 )
  {
    MONITOR_MGR::_IssueMonitorEvent(this, *((unsigned int *)v11 + 11), 0LL, 2LL, *((_DWORD *)v11 + 108), v15);
    v5 = MONITOR_MGR::_DestroySimulatedMonitor(this, v11);
  }
  if ( v5 < 0 )
  {
    v18 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v18 + 32) = v5;
    *(_QWORD *)(v18 + 24) = a3;
    WdLogEvent5_WdError(v18);
  }
  if ( a4 )
  {
    if ( (int)MONITOR_MGR::_GetMonitorInstance((struct _FAST_MUTEX *)this, *((_DWORD *)a4 + 11), 0, &v20) >= 0
      && v20 == a4
      && MONITOR_MGR::_UsingCCDNameForTTM )
    {
      DXGMONITOR::_CreateTtmDevice(a4);
    }
    if ( v12 && (*((_DWORD *)a4 + 10) & 2) != 0 )
      MONITOR_MGR::_CleanUpFromSimulatedMonitor(this, v15);
  }
  return 0LL;
}
