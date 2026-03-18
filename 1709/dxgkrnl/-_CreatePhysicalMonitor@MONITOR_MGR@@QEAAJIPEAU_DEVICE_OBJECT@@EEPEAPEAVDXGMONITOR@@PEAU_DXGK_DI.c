/*
 * XREFs of ?_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C010DAA4
 * Callers:
 *     ?_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C010DD0C (-_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_DISPLAY_SCENARI.c)
 * Callees:
 *     ??_GDXGMONITOR@@AEAAPEAXI@Z @ 0x1C0036D94 (--_GDXGMONITOR@@AEAAPEAXI@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00B08DC (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C010C1DC (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEA.c)
 *     ??0DXGMONITOR@@AEAA@PEAVMONITOR_MGR@@@Z @ 0x1C010C3CC (--0DXGMONITOR@@AEAA@PEAVMONITOR_MGR@@@Z.c)
 *     ?_RemoveMonitorFromList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C010D958 (-_RemoveMonitorFromList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 *     ?_InsertMonitorToList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C010DA04 (-_InsertMonitorToList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MONITOR_MGR::_CreatePhysicalMonitor(
        MONITOR_MGR *this,
        unsigned int a2,
        struct _DEVICE_OBJECT *a3,
        char a4,
        char a5,
        struct DXGMONITOR **a6,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a7)
{
  struct DXGMONITOR **v7; // r15
  __int64 v9; // r14
  char *v12; // rax
  __int64 v13; // rcx
  struct DXGMONITOR *v14; // rbx
  int MonitorInstance; // eax
  __int64 v16; // rcx
  struct DXGMONITOR **v17; // rdi
  int v18; // esi
  __int64 v19; // rcx
  __int64 v20; // rsi
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax

  v7 = a6;
  v9 = a2;
  if ( !a6 )
  {
    v22 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v22);
  }
  if ( !a3 )
  {
    v23 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v23);
  }
  if ( (_DWORD)v9 == -1 )
  {
    v24 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v24);
  }
  *v7 = 0LL;
  v12 = (char *)operator new(0x3A0uLL, 0x4D677844u, (POOL_TYPE)512);
  if ( v12 )
    v14 = DXGMONITOR::DXGMONITOR(v12, this);
  else
    v14 = 0LL;
  if ( v14 )
  {
    a6 = 0LL;
    MonitorInstance = MONITOR_MGR::_GetMonitorInstance((struct _FAST_MUTEX *)this, v9, 0, (ULONG **)&a6);
    v17 = a6;
    v18 = MonitorInstance;
    if ( MonitorInstance >= 0 )
    {
      if ( !a6 )
      {
        v26 = WdLogNewEntry5_WdAssertion(v16);
        WdLogEvent5_WdAssertion(v26);
      }
      if ( *((_DWORD *)v17 + 104) == 1 )
      {
        v27 = WdLogNewEntry5_WdAssertion(v16);
        WdLogEvent5_WdAssertion(v27);
      }
      if ( v17[53] )
      {
        v28 = WdLogNewEntry5_WdAssertion(v16);
        WdLogEvent5_WdAssertion(v28);
      }
      v17[53] = v14;
    }
    else
    {
      if ( a6 )
      {
        v29 = WdLogNewEntry5_WdAssertion(v16);
        WdLogEvent5_WdAssertion(v29);
      }
      if ( v18 != -1073741275 )
      {
        v30 = WdLogNewEntry5_WdAssertion(v16);
        WdLogEvent5_WdAssertion(v30);
      }
      MONITOR_MGR::_InsertMonitorToList((struct _FAST_MUTEX *)this, v14);
    }
    v20 = (int)DXGMONITOR::_InitializeMonitor((__int64)v14, (unsigned int)v9, (__int64)a3, a4, a5, 1u, 0LL, a7);
    if ( v17 )
      v17[53] = 0LL;
    else
      MONITOR_MGR::_RemoveMonitorFromList((struct _FAST_MUTEX *)this, (struct DXGMONITOR ***)v14);
    if ( (int)v20 < 0 )
    {
      v31 = WdLogNewEntry5_WdError(v19);
      *(_QWORD *)(v31 + 24) = v9;
      *(_QWORD *)(v31 + 32) = v20;
      WdLogEvent5_WdError(v31);
      DXGMONITOR::`scalar deleting destructor'(v14);
      return (unsigned int)v20;
    }
    else
    {
      *v7 = v14;
      return 0LL;
    }
  }
  else
  {
    v25 = WdLogNewEntry5_WdError(v13);
    WdLogEvent5_WdError(v25);
    return 3221225495LL;
  }
}
