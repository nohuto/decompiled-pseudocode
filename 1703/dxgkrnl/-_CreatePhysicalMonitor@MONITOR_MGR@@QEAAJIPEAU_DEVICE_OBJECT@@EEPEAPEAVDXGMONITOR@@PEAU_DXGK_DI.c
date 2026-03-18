/*
 * XREFs of ?_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0115624
 * Callers:
 *     ?_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0115888 (-_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_DISPLAY_SCENARI.c)
 * Callees:
 *     ??_GDXGMONITOR@@AEAAPEAXI@Z @ 0x1C0045BFC (--_GDXGMONITOR@@AEAAPEAXI@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00E989C (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ??0DXGMONITOR@@AEAA@PEAVMONITOR_MGR@@@Z @ 0x1C0108FA8 (--0DXGMONITOR@@AEAA@PEAVMONITOR_MGR@@@Z.c)
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01092BC (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEA.c)
 *     ?_RemoveMonitorFromList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C01154D8 (-_RemoveMonitorFromList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 *     ?_InsertMonitorToList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C0115584 (-_InsertMonitorToList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MONITOR_MGR::_CreatePhysicalMonitor(
        MONITOR_MGR *this,
        __int64 a2,
        struct _DEVICE_OBJECT *a3,
        __int64 a4,
        char a5,
        struct DXGMONITOR **a6,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a7)
{
  struct DXGMONITOR **v7; // r15
  char v8; // r13
  __int64 v9; // r14
  char *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  struct DXGMONITOR *v17; // rbx
  int MonitorInstance; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  struct DXGMONITOR **v23; // rdi
  int v24; // esi
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rsi
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax

  v7 = a6;
  v8 = a4;
  v9 = (unsigned int)a2;
  if ( !a6 )
  {
    v31 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v31);
  }
  if ( !a3 )
  {
    v32 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v32);
  }
  if ( (_DWORD)v9 == -1 )
  {
    v33 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v33);
  }
  *v7 = 0LL;
  v12 = (char *)operator new(0x260uLL, 0x4D677844u, (POOL_TYPE)512);
  if ( v12 )
    v17 = DXGMONITOR::DXGMONITOR(v12, this, v15, v16);
  else
    v17 = 0LL;
  if ( v17 )
  {
    a6 = 0LL;
    MonitorInstance = MONITOR_MGR::_GetMonitorInstance((struct _FAST_MUTEX *)this, (unsigned int)v9, 0LL, (ULONG **)&a6);
    v23 = a6;
    v24 = MonitorInstance;
    if ( MonitorInstance >= 0 )
    {
      if ( !a6 )
      {
        v35 = WdLogNewEntry5_WdAssertion(v20, v19, v21, v22);
        WdLogEvent5_WdAssertion(v35);
      }
      if ( *((_DWORD *)v23 + 94) == 1 )
      {
        v36 = WdLogNewEntry5_WdAssertion(v20, v19, v21, v22);
        WdLogEvent5_WdAssertion(v36);
      }
      if ( v23[48] )
      {
        v37 = WdLogNewEntry5_WdAssertion(v20, v19, v21, v22);
        WdLogEvent5_WdAssertion(v37);
      }
      v23[48] = v17;
    }
    else
    {
      if ( a6 )
      {
        v38 = WdLogNewEntry5_WdAssertion(v20, v19, v21, v22);
        WdLogEvent5_WdAssertion(v38);
      }
      if ( v24 != -1073741275 )
      {
        v39 = WdLogNewEntry5_WdAssertion(v20, v19, v21, v22);
        WdLogEvent5_WdAssertion(v39);
      }
      MONITOR_MGR::_InsertMonitorToList((struct _FAST_MUTEX *)this, v17, v21, v22);
    }
    LOBYTE(v22) = v8;
    v27 = (int)DXGMONITOR::_InitializeMonitor((__int64)v17, (unsigned int)v9, (__int64)a3, v22, a5, 1u, 0LL, a7);
    if ( v23 )
      v23[48] = 0LL;
    else
      MONITOR_MGR::_RemoveMonitorFromList((struct _FAST_MUTEX *)this, v17, v28, v29);
    if ( (int)v27 < 0 )
    {
      v40 = WdLogNewEntry5_WdError(v26, v25);
      *(_QWORD *)(v40 + 24) = v9;
      *(_QWORD *)(v40 + 32) = v27;
      WdLogEvent5_WdError(v40);
      DXGMONITOR::`scalar deleting destructor'(v17);
      return (unsigned int)v27;
    }
    else
    {
      *v7 = v17;
      return 0LL;
    }
  }
  else
  {
    v34 = WdLogNewEntry5_WdError(v14, v13);
    WdLogEvent5_WdError(v34);
    return 3221225495LL;
  }
}
