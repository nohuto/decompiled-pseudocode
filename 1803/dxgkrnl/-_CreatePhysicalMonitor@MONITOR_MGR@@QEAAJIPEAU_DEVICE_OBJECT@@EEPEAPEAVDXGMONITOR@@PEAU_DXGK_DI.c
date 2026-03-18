/*
 * XREFs of ?_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C022A9B0
 * Callers:
 *     ?_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C022B610 (-_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_DISPLAY_SCENARI.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_GDXGMONITOR@@AEAAPEAXI@Z @ 0x1C0046DA4 (--_GDXGMONITOR@@AEAAPEAXI@Z.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00BA738 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_InsertMonitorToList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C022C498 (-_InsertMonitorToList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 *     ?_RemoveMonitorFromList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C022D100 (-_RemoveMonitorFromList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 *     ??0DXGMONITOR@@AEAA@PEAVMONITOR_MGR@@@Z @ 0x1C02350DC (--0DXGMONITOR@@AEAA@PEAVMONITOR_MGR@@@Z.c)
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0235FAC (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEA.c)
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
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  PVOID v15; // rax
  __int64 v16; // rcx
  struct DXGMONITOR *v17; // rbx
  __int64 v18; // rax
  int MonitorInstance; // eax
  __int64 v21; // rcx
  __int64 v22; // r9
  struct DXGMONITOR **v23; // rdi
  int v24; // esi
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rsi
  __int64 v32; // rax

  v7 = a6;
  v9 = a2;
  if ( !a6 )
  {
    v12 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v12);
  }
  if ( !a3 )
  {
    v13 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v13);
  }
  if ( (_DWORD)v9 == -1 )
  {
    v14 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v14);
  }
  *v7 = 0LL;
  v15 = operator new[](0x3E8uLL, 0x4D677844u, (POOL_TYPE)512);
  if ( v15 )
    v17 = DXGMONITOR::DXGMONITOR(v15, this);
  else
    v17 = 0LL;
  if ( v17 )
  {
    a6 = 0LL;
    MonitorInstance = MONITOR_MGR::_GetMonitorInstance((struct _FAST_MUTEX *)this, v9, 0, (struct DXGMONITOR **)&a6);
    v23 = a6;
    v24 = MonitorInstance;
    if ( MonitorInstance < 0 )
    {
      if ( a6 )
      {
        v28 = WdLogNewEntry5_WdAssertion(v21);
        WdLogEvent5_WdAssertion(v28);
      }
      if ( v24 != -1073741275 )
      {
        v29 = WdLogNewEntry5_WdAssertion(v21);
        WdLogEvent5_WdAssertion(v29);
      }
      MONITOR_MGR::_InsertMonitorToList(this, v17);
    }
    else
    {
      if ( !a6 )
      {
        v25 = WdLogNewEntry5_WdAssertion(v21);
        WdLogEvent5_WdAssertion(v25);
      }
      if ( *((_DWORD *)v23 + 108) == 1 )
      {
        v26 = WdLogNewEntry5_WdAssertion(v21);
        WdLogEvent5_WdAssertion(v26);
      }
      if ( v23[55] )
      {
        v27 = WdLogNewEntry5_WdAssertion(v21);
        WdLogEvent5_WdAssertion(v27);
      }
      v23[55] = v17;
    }
    LOBYTE(v22) = a4;
    v31 = (int)DXGMONITOR::_InitializeMonitor(v17, (unsigned int)v9, a3, v22, a5, 1, 0LL, a7);
    if ( v23 )
      v23[55] = 0LL;
    else
      MONITOR_MGR::_RemoveMonitorFromList(this, v17);
    if ( (int)v31 >= 0 )
    {
      *v7 = v17;
      return 0LL;
    }
    else
    {
      v32 = WdLogNewEntry5_WdError(v30);
      *(_QWORD *)(v32 + 24) = v9;
      *(_QWORD *)(v32 + 32) = v31;
      WdLogEvent5_WdError(v32);
      DXGMONITOR::`scalar deleting destructor'(v17);
      return (unsigned int)v31;
    }
  }
  else
  {
    v18 = WdLogNewEntry5_WdError(v16);
    WdLogEvent5_WdError(v18);
    return 3221225495LL;
  }
}
