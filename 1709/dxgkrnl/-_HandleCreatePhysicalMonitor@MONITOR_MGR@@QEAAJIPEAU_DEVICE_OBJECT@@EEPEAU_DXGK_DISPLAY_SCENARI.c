/*
 * XREFs of ?_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C010DD0C
 * Callers:
 *     MonitorCreatePhysicalMonitor @ 0x1C0104ED8 (MonitorCreatePhysicalMonitor.c)
 * Callees:
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ?_ChangeLIDStatus@DXGMONITOR@@QEAAXE@Z @ 0x1C0036DE4 (-_ChangeLIDStatus@DXGMONITOR@@QEAAXE@Z.c)
 *     ?_EnterMonitorPendingState@MONITOR_MGR@@QEAAXXZ @ 0x1C0036E30 (-_EnterMonitorPendingState@MONITOR_MGR@@QEAAXXZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00B08DC (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_GetEmergencySimulatedMonitor@MONITOR_MGR@@QEAAJPEAPEAVDXGMONITOR@@@Z @ 0x1C010D3A8 (-_GetEmergencySimulatedMonitor@MONITOR_MGR@@QEAAJPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C010D634 (-_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_D.c)
 *     ?_RemoveMonitorFromList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C010D958 (-_RemoveMonitorFromList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 *     ?_InsertMonitorToList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C010DA04 (-_InsertMonitorToList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 *     ?_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C010DAA4 (-_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@PEAU_DXGK_DI.c)
 *     ?_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C010DBFC (-_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 *     ?_UnregisterPnPTargetDeviceNotification@DXGMONITOR@@AEAAJXZ @ 0x1C0202114 (-_UnregisterPnPTargetDeviceNotification@DXGMONITOR@@AEAAJXZ.c)
 */

__int64 __fastcall MONITOR_MGR::_HandleCreatePhysicalMonitor(
        MONITOR_MGR *this,
        unsigned int a2,
        struct _DEVICE_OBJECT *a3,
        char a4,
        char a5,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a6)
{
  int EmergencySimulatedMonitor; // eax
  __int64 v10; // rcx
  struct DXGMONITOR ***v11; // rsi
  DXGMONITOR *v12; // rdi
  int MonitorInstance; // eax
  __int64 v14; // rcx
  DXGMONITOR *v15; // rbx
  int v16; // r14d
  struct _DEVICE_OBJECT *v17; // r14
  __int64 v18; // rcx
  __int64 v19; // r8
  int v20; // r14d
  DXGMONITOR *v21; // r14
  __int64 v22; // rcx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  struct DXGMONITOR ***v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  int v36; // ecx
  __int64 v37; // rax
  DXGMONITOR *v38; // [rsp+80h] [rbp+40h] BYREF
  struct _DEVICE_OBJECT *v39; // [rsp+90h] [rbp+50h]

  v39 = a3;
  if ( a2 == -1 )
  {
    v24 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v24);
  }
  if ( *((_BYTE *)this + 5) && (Microsoft_Windows_DxgKrnlEnableBits & 4) != 0 )
    McTemplateK0q((__int64)this, &Dxgk_PerfTrack_DMM_Hotplug_Monitor_Set_VideoMode_Start, (__int64)a3, a2);
  MONITOR_MGR::_IssueMonitorEvent((struct _FAST_MUTEX *)this, a2, 0, 0LL, 1, (__int64)a6);
  v38 = 0LL;
  EmergencySimulatedMonitor = MONITOR_MGR::_GetEmergencySimulatedMonitor((struct _FAST_MUTEX *)this, &v38);
  if ( EmergencySimulatedMonitor >= 0 )
  {
    v11 = (struct DXGMONITOR ***)v38;
    if ( !v38 )
    {
      v25 = WdLogNewEntry5_WdAssertion(v10);
      WdLogEvent5_WdAssertion(v25);
    }
    MONITOR_MGR::_RemoveMonitorFromList((struct _FAST_MUTEX *)this, v11);
  }
  else
  {
    if ( EmergencySimulatedMonitor != -1073741275 )
    {
      v26 = WdLogNewEntry5_WdAssertion(v10);
      WdLogEvent5_WdAssertion(v26);
    }
    v11 = (struct DXGMONITOR ***)v38;
    if ( v38 )
    {
      v27 = WdLogNewEntry5_WdAssertion(v10);
      WdLogEvent5_WdAssertion(v27);
    }
  }
  v38 = 0LL;
  v12 = 0LL;
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance((struct _FAST_MUTEX *)this, a2, 0, (ULONG **)&v38);
  v15 = v38;
  v16 = MonitorInstance;
  if ( MonitorInstance >= 0 )
  {
    if ( !v38 )
    {
      v28 = WdLogNewEntry5_WdAssertion(v14);
      WdLogEvent5_WdAssertion(v28);
    }
    if ( v11 )
    {
      v29 = WdLogNewEntry5_WdAssertion(v14);
      WdLogEvent5_WdAssertion(v29);
    }
    if ( *((_DWORD *)v15 + 104) == 1 )
    {
      v17 = v39;
      if ( a4 && *((struct _DEVICE_OBJECT **)v15 + 5) == v39 )
      {
        DXGMONITOR::_ChangeLIDStatus(v15, 1);
        return 0LL;
      }
      v12 = v15;
      v31 = (struct DXGMONITOR ***)v15;
      v15 = 0LL;
      MONITOR_MGR::_RemoveMonitorFromList((struct _FAST_MUTEX *)this, v31);
      goto LABEL_44;
    }
    v12 = (DXGMONITOR *)*((_QWORD *)v15 + 53);
    *((_QWORD *)v15 + 53) = 0LL;
  }
  else
  {
    if ( v38 )
    {
      v32 = WdLogNewEntry5_WdAssertion(v14);
      WdLogEvent5_WdAssertion(v32);
    }
    if ( v16 == -1073741275 )
    {
      v17 = v39;
      goto LABEL_14;
    }
    v33 = WdLogNewEntry5_WdAssertion(v14);
    WdLogEvent5_WdAssertion(v33);
  }
  v17 = v39;
LABEL_44:
  if ( v12 )
  {
    if ( ((*((_DWORD *)v12 + 6) & 2) != 0) != a4 )
    {
      v34 = WdLogNewEntry5_WdAssertion(v14);
      WdLogEvent5_WdAssertion(v34);
    }
    DXGMONITOR::_UnregisterPnPTargetDeviceNotification(v12);
    *((_QWORD *)v12 + 5) = 0LL;
  }
LABEL_14:
  v38 = 0LL;
  v20 = MONITOR_MGR::_CreatePhysicalMonitor(this, a2, v17, a4, a5, &v38, a6);
  if ( v20 >= 0 )
  {
    v21 = v38;
    if ( !v38 )
    {
      v35 = WdLogNewEntry5_WdAssertion(v18);
      WdLogEvent5_WdAssertion(v35);
    }
    if ( v15 )
    {
      *((_DWORD *)v15 + 6) ^= (*((_DWORD *)v21 + 6) ^ *((_DWORD *)v15 + 6)) & 2;
      v36 = *((_DWORD *)v15 + 6) ^ (*((_DWORD *)v21 + 6) ^ *((_DWORD *)v15 + 6)) & 4;
      *((_DWORD *)v15 + 6) = v36;
      v22 = (*((_DWORD *)v21 + 6) ^ v36) & 0x20;
      *((_DWORD *)v21 + 6) ^= v22;
      *((_QWORD *)v15 + 53) = v21;
    }
    else
    {
      MONITOR_MGR::_InsertMonitorToList((struct _FAST_MUTEX *)this, v21);
    }
    if ( !MONITOR_MGR::_DelayNotifyClient )
    {
      if ( v12 )
        v11 = (struct DXGMONITOR ***)v12;
      return MONITOR_MGR::_HandleCreateMonitorStep2((struct _FAST_MUTEX *)this, a2, (struct DXGMONITOR *)v11, v21, a6);
    }
    if ( *((_QWORD *)v21 + 58) )
    {
      v30 = WdLogNewEntry5_WdAssertion(v22);
      WdLogEvent5_WdAssertion(v30);
    }
    *((_BYTE *)v21 + 456) = 1;
    if ( v12 )
      v11 = (struct DXGMONITOR ***)v12;
    *((_QWORD *)v21 + 58) = v11;
    MONITOR_MGR::_EnterMonitorPendingState(this);
    return 0LL;
  }
  if ( v38 )
  {
    v37 = WdLogNewEntry5_WdAssertion(v18);
    WdLogEvent5_WdAssertion(v37);
  }
  if ( v12 )
    MONITOR_MGR::_HandleCreateMonitorStep2((struct _FAST_MUTEX *)this, a2, v12, 0LL, a6);
  if ( v11 )
    MONITOR_MGR::_InsertMonitorToList((struct _FAST_MUTEX *)this, (struct DXGMONITOR *)v11);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 4) != 0 )
    McTemplateK0q(v18, &Dxgk_PerfTrack_DMM_Hotplug_Monitor_Set_VideoMode_Cancel, v19, a2);
  return (unsigned int)v20;
}
