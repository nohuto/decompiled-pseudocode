/*
 * XREFs of ?_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01E2478
 * Callers:
 *     ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01E2990 (-_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEA.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C00061DC (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     IsInternalVideoOutput @ 0x1C000CD50 (IsInternalVideoOutput.c)
 *     ??_GDXGMONITOR@@AEAAPEAXI@Z @ 0x1C0045BFC (--_GDXGMONITOR@@AEAAPEAXI@Z.c)
 *     DmmGetVideoOutputTechnology @ 0x1C00AB07C (DmmGetVideoOutputTechnology.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?_EnableDisableMonitor@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00E9EEC (-_EnableDisableMonitor@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 *     ??0DXGMONITOR@@AEAA@PEAVMONITOR_MGR@@@Z @ 0x1C0108FA8 (--0DXGMONITOR@@AEAA@PEAVMONITOR_MGR@@@Z.c)
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01092BC (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEA.c)
 */

__int64 __fastcall MONITOR_MGR::_CreateSimulatedMonitor(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        struct DXGMONITOR *a4,
        DXGMONITOR **a5,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a6)
{
  DXGMONITOR **v6; // r14
  __int64 v8; // rsi
  unsigned int v9; // ebp
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v14; // r15
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  int v21; // ebx
  __int64 v22; // rax
  char *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  DXGMONITOR *v28; // rbx
  __int64 v29; // rax
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdi
  __int64 v35; // rax
  int v36; // [rsp+78h] [rbp+10h] BYREF

  v6 = a5;
  v8 = (unsigned int)a2;
  v9 = a3;
  if ( !a5 )
  {
    v11 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v11);
  }
  if ( (_DWORD)v8 == -1 )
  {
    v12 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v12);
  }
  if ( v9 == 1 )
  {
    v13 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v13);
  }
  *v6 = 0LL;
  v14 = a6;
  if ( v9 == 5 )
  {
    v15 = *(_QWORD *)(a1 + 8);
    v36 = -2;
    if ( (int)DmmGetVideoOutputTechnology(*(DXGADAPTER **)(v15 + 16), (unsigned int)v8, &v36, 0LL) < 0 )
    {
      v20 = WdLogNewEntry5_WdAssertion(v17, v16, v18, v19);
      WdLogEvent5_WdAssertion(v20);
    }
    v21 = v36;
    if ( v36 == -2 )
    {
      v22 = WdLogNewEntry5_WdAssertion(v17, v16, v18, v19);
      WdLogEvent5_WdAssertion(v22);
    }
    if ( (v21 < 0 || v21 > 3 && v21 != 14)
      && *(_BYTE *)(a1 + 3)
      && (!IsInternalVideoOutput(v21)
       || (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(*(_QWORD *)(a1 + 8) + 16LL)) >= 1200) )
    {
      MONITOR_MGR::_EnableDisableMonitor((char *)a1, 0xFFFFFFFF, 0, 8u, 1LL, (__int64)v14);
    }
  }
  v23 = (char *)operator new(0x260uLL, 0x4D677844u, (POOL_TYPE)512);
  if ( v23 )
    v28 = DXGMONITOR::DXGMONITOR(v23, (struct MONITOR_MGR *)a1, v26, v27);
  else
    v28 = 0LL;
  if ( v28 )
  {
    v31 = DXGMONITOR::_InitializeMonitor((__int64)v28, (unsigned int)v8, 0LL, 0LL, 0, v9, a4, v14);
    v34 = v31;
    if ( v31 >= 0 )
    {
      *v6 = v28;
    }
    else
    {
      v35 = WdLogNewEntry5_WdError(v33, v32);
      *(_QWORD *)(v35 + 24) = v8;
      *(_QWORD *)(v35 + 32) = v34;
      WdLogEvent5_WdError(v35);
      DXGMONITOR::`scalar deleting destructor'(v28);
    }
    return (unsigned int)v34;
  }
  else
  {
    v29 = WdLogNewEntry5_WdError(v25, v24);
    WdLogEvent5_WdError(v29);
    return 3221225495LL;
  }
}
