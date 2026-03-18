/*
 * XREFs of ?_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0115888
 * Callers:
 *     MonitorCreatePhysicalMonitor @ 0x1C011953C (MonitorCreatePhysicalMonitor.c)
 * Callees:
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ?_ChangeLIDStatus@DXGMONITOR@@QEAAXE@Z @ 0x1C0045C4C (-_ChangeLIDStatus@DXGMONITOR@@QEAAXE@Z.c)
 *     ?_EnterMonitorPendingState@MONITOR_MGR@@QEAAXXZ @ 0x1C0045C98 (-_EnterMonitorPendingState@MONITOR_MGR@@QEAAXXZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00E989C (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_GetEmergencySimulatedMonitor@MONITOR_MGR@@QEAAJPEAPEAVDXGMONITOR@@@Z @ 0x1C0114F7C (-_GetEmergencySimulatedMonitor@MONITOR_MGR@@QEAAJPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0115208 (-_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_D.c)
 *     ?_RemoveMonitorFromList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C01154D8 (-_RemoveMonitorFromList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 *     ?_InsertMonitorToList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C0115584 (-_InsertMonitorToList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 *     ?_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0115624 (-_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@PEAU_DXGK_DI.c)
 *     ?_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0115778 (-_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 *     ?_UnregisterPnPTargetDeviceNotification@DXGMONITOR@@AEAAJXZ @ 0x1C01E77F8 (-_UnregisterPnPTargetDeviceNotification@DXGMONITOR@@AEAAJXZ.c)
 */

__int64 __fastcall MONITOR_MGR::_HandleCreatePhysicalMonitor(
        MONITOR_MGR *this,
        __int64 a2,
        struct _DEVICE_OBJECT *a3,
        __int64 a4,
        char a5,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a6)
{
  char v6; // r13
  unsigned int v7; // r12d
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  int EmergencySimulatedMonitor; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  struct DXGMONITOR *v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  DXGMONITOR *v21; // rdi
  int MonitorInstance; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  DXGMONITOR *v27; // rbx
  int v28; // r14d
  __int64 v29; // rax
  __int64 v30; // rax
  struct _DEVICE_OBJECT *v31; // r14
  struct DXGMONITOR *v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  int v41; // r14d
  DXGMONITOR *v42; // r14
  __int64 v43; // rax
  int v44; // ecx
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rax
  DXGMONITOR *v48; // [rsp+80h] [rbp+40h] BYREF
  struct _DEVICE_OBJECT *v49; // [rsp+90h] [rbp+50h]

  v49 = a3;
  v6 = a4;
  v7 = a2;
  if ( (_DWORD)a2 == -1 )
  {
    v9 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v9);
  }
  if ( *((_BYTE *)this + 5) && (Microsoft_Windows_DxgKrnlEnableBits & 4) != 0 )
    Template_q((__int64)this, &Dxgk_PerfTrack_DMM_Hotplug_Monitor_Set_VideoMode_Start, (__int64)a3, v7);
  MONITOR_MGR::_IssueMonitorEvent((struct _FAST_MUTEX *)this, v7, 0LL, 0LL, 1, (__int64)a6);
  v48 = 0LL;
  EmergencySimulatedMonitor = MONITOR_MGR::_GetEmergencySimulatedMonitor((struct _FAST_MUTEX *)this, &v48, v10, v11);
  if ( EmergencySimulatedMonitor < 0 )
  {
    if ( EmergencySimulatedMonitor != -1073741275 )
    {
      v19 = WdLogNewEntry5_WdAssertion(v14, v13, v15, v16);
      WdLogEvent5_WdAssertion(v19);
    }
    v17 = v48;
    if ( v48 )
    {
      v20 = WdLogNewEntry5_WdAssertion(v14, v13, v15, v16);
      WdLogEvent5_WdAssertion(v20);
    }
  }
  else
  {
    v17 = v48;
    if ( !v48 )
    {
      v18 = WdLogNewEntry5_WdAssertion(v14, v13, v15, v16);
      WdLogEvent5_WdAssertion(v18);
    }
    MONITOR_MGR::_RemoveMonitorFromList((struct _FAST_MUTEX *)this, v17, v15, v16);
  }
  v48 = 0LL;
  v21 = 0LL;
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance((struct _FAST_MUTEX *)this, v7, 0LL, (ULONG **)&v48);
  v27 = v48;
  v28 = MonitorInstance;
  if ( MonitorInstance < 0 )
  {
    if ( v48 )
    {
      v34 = WdLogNewEntry5_WdAssertion(v24, v23, v25, v26);
      WdLogEvent5_WdAssertion(v34);
    }
    if ( v28 == -1073741275 )
    {
      v31 = v49;
      goto LABEL_36;
    }
    v35 = WdLogNewEntry5_WdAssertion(v24, v23, v25, v26);
    WdLogEvent5_WdAssertion(v35);
  }
  else
  {
    if ( !v48 )
    {
      v29 = WdLogNewEntry5_WdAssertion(v24, v23, v25, v26);
      WdLogEvent5_WdAssertion(v29);
    }
    if ( v17 )
    {
      v30 = WdLogNewEntry5_WdAssertion(v24, v23, v25, v26);
      WdLogEvent5_WdAssertion(v30);
    }
    if ( *((_DWORD *)v27 + 94) == 1 )
    {
      v31 = v49;
      if ( v6 && *((struct _DEVICE_OBJECT **)v27 + 5) == v49 )
      {
        LOBYTE(v23) = 1;
        DXGMONITOR::_ChangeLIDStatus(v27, v23, v25, v26);
        return 0LL;
      }
      v21 = v27;
      v33 = v27;
      v27 = 0LL;
      MONITOR_MGR::_RemoveMonitorFromList((struct _FAST_MUTEX *)this, v33, v25, v26);
      goto LABEL_31;
    }
    v21 = (DXGMONITOR *)*((_QWORD *)v27 + 48);
    *((_QWORD *)v27 + 48) = 0LL;
  }
  v31 = v49;
LABEL_31:
  if ( v21 )
  {
    if ( ((*((_DWORD *)v21 + 6) & 2) != 0) != v6 )
    {
      v36 = WdLogNewEntry5_WdAssertion(v24, v23, v25, v26);
      WdLogEvent5_WdAssertion(v36);
    }
    DXGMONITOR::_UnregisterPnPTargetDeviceNotification(v21);
    *((_QWORD *)v21 + 5) = 0LL;
  }
LABEL_36:
  LOBYTE(v26) = v6;
  v48 = 0LL;
  v41 = MONITOR_MGR::_CreatePhysicalMonitor(this, v7, v31, v26, a5, &v48, a6);
  if ( v41 >= 0 )
  {
    v42 = v48;
    if ( !v48 )
    {
      v43 = WdLogNewEntry5_WdAssertion(v38, v37, v39, v40);
      WdLogEvent5_WdAssertion(v43);
    }
    if ( v27 )
    {
      *((_DWORD *)v27 + 6) ^= (*((_DWORD *)v42 + 6) ^ *((_DWORD *)v27 + 6)) & 2;
      v44 = *((_DWORD *)v27 + 6) ^ (*((_DWORD *)v42 + 6) ^ *((_DWORD *)v27 + 6)) & 4;
      *((_DWORD *)v27 + 6) = v44;
      v45 = (*((_DWORD *)v42 + 6) ^ v44) & 0x20;
      *((_DWORD *)v42 + 6) ^= v45;
      *((_QWORD *)v27 + 48) = v42;
    }
    else
    {
      MONITOR_MGR::_InsertMonitorToList((struct _FAST_MUTEX *)this, v42, v39, v40);
    }
    if ( !MONITOR_MGR::_DelayNotifyClient )
    {
      if ( v21 )
        v17 = v21;
      return MONITOR_MGR::_HandleCreateMonitorStep2((struct _FAST_MUTEX *)this, v7, v17, v42, a6);
    }
    if ( *((_QWORD *)v42 + 53) )
    {
      v46 = WdLogNewEntry5_WdAssertion(v45, v37, v39, v40);
      WdLogEvent5_WdAssertion(v46);
    }
    *((_BYTE *)v42 + 416) = 1;
    if ( v21 )
      v17 = v21;
    *((_QWORD *)v42 + 53) = v17;
    MONITOR_MGR::_EnterMonitorPendingState(this);
    return 0LL;
  }
  if ( v48 )
  {
    v47 = WdLogNewEntry5_WdAssertion(v38, v37, v39, v40);
    WdLogEvent5_WdAssertion(v47);
  }
  if ( v21 )
    MONITOR_MGR::_HandleCreateMonitorStep2((struct _FAST_MUTEX *)this, v7, v21, 0LL, a6);
  if ( v17 )
    MONITOR_MGR::_InsertMonitorToList((struct _FAST_MUTEX *)this, v17, v39, v40);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 4) != 0 )
    Template_q(v38, &Dxgk_PerfTrack_DMM_Hotplug_Monitor_Set_VideoMode_Cancel, v39, v7);
  return (unsigned int)v41;
}
