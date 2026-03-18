/*
 * XREFs of ?_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0115778
 * Callers:
 *     ?_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01089B4 (-_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0115888 (-_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_DISPLAY_SCENARI.c)
 *     ?_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01E282C (-_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@.c)
 * Callees:
 *     ?_LeaveMonitorPendingState@MONITOR_MGR@@QEAAXXZ @ 0x1C0045D2C (-_LeaveMonitorPendingState@MONITOR_MGR@@QEAAXXZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00E989C (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_CleanUpFromSimulatedMonitor@MONITOR_MGR@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00E9980 (-_CleanUpFromSimulatedMonitor@MONITOR_MGR@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_CreateTtmDevice@DXGMONITOR@@QEAAJXZ @ 0x1C01091F8 (-_CreateTtmDevice@DXGMONITOR@@QEAAJXZ.c)
 *     ?_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0115208 (-_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_D.c)
 *     ?_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01E282C (-_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@.c)
 *     ?_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C01E28E8 (-_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MONITOR_MGR::_HandleCreateMonitorStep2(
        struct _FAST_MUTEX *this,
        __int64 a2,
        struct DXGMONITOR *a3,
        struct DXGMONITOR *a4,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a5)
{
  int v5; // ebp
  struct DXGMONITOR *v7; // rbx
  int v8; // r15d
  struct DXGMONITOR *v10; // r14
  bool v11; // r12
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v12; // r15
  const GUID *v13; // r9
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v18; // rax
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // rax
  struct DXGMONITOR *v22; // [rsp+70h] [rbp+18h] BYREF

  v5 = 0;
  v7 = a3;
  v8 = a2;
  if ( (_DWORD)a2 == -1 )
  {
    v18 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v18);
  }
  v10 = 0LL;
  v11 = 0;
  if ( v7 )
  {
    if ( *((_DWORD *)v7 + 7) == v8 )
    {
      v11 = *((_DWORD *)v7 + 94) == 5;
    }
    else
    {
      if ( *((_DWORD *)v7 + 94) != 5 )
      {
        v19 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
        WdLogEvent5_WdAssertion(v19);
      }
      v10 = v7;
      v7 = 0LL;
    }
  }
  v12 = a5;
  if ( a4 )
  {
    *((_QWORD *)a4 + 53) = 0LL;
    v13 = (const GUID *)(v7 ? 3LL : *((_BYTE *)a4 + 524) != 0 ? 4LL : 1LL);
    MONITOR_MGR::_IssueMonitorEvent(
      this,
      *((unsigned int *)a4 + 7),
      (*((_BYTE *)a4 + 24) & 0x40) != 0 ? 0 : 7,
      v13,
      *((_DWORD *)a4 + 94),
      (__int64)v12);
    if ( *((_BYTE *)a4 + 416) )
    {
      *((_BYTE *)a4 + 416) = 0;
      MONITOR_MGR::_LeaveMonitorPendingState((MONITOR_MGR *)this);
    }
  }
  if ( v7 )
  {
    if ( *((_DWORD *)v7 + 94) == 1 )
      v20 = MONITOR_MGR::_DestroyPhysicalMonitor((MONITOR_MGR *)this, v7, v12);
    else
      v20 = MONITOR_MGR::_DestroySimulatedMonitor((MONITOR_MGR *)this, v7);
    v5 = v20;
  }
  if ( v10 )
  {
    MONITOR_MGR::_IssueMonitorEvent(
      this,
      *((unsigned int *)v10 + 7),
      0LL,
      (const GUID *)2,
      *((_DWORD *)v10 + 94),
      (__int64)v12);
    v5 = MONITOR_MGR::_DestroySimulatedMonitor((MONITOR_MGR *)this, v10);
  }
  if ( v5 < 0 )
  {
    v21 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v21 + 32) = v5;
    *(_QWORD *)(v21 + 24) = v7;
    WdLogEvent5_WdError(v21);
  }
  if ( a4 )
  {
    if ( (int)MONITOR_MGR::_GetMonitorInstance(this, *((unsigned int *)a4 + 7), 0LL, (ULONG **)&v22) >= 0
      && MONITOR_MGR::_UsingCCDNameForTTM
      && v22 == a4 )
    {
      DXGMONITOR::_CreateTtmDevice(a4, v14, v15, v16);
    }
    if ( v11 && (*((_DWORD *)a4 + 6) & 2) != 0 )
      MONITOR_MGR::_CleanUpFromSimulatedMonitor((MONITOR_MGR *)this, v12, v15, v16);
  }
  return 0LL;
}
