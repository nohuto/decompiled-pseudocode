/*
 * XREFs of ?_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01FCC38
 * Callers:
 *     ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01FD150 (-_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEA.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0002730 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     IsInternalVideoOutput @ 0x1C00083E4 (IsInternalVideoOutput.c)
 *     ??_GDXGMONITOR@@AEAAPEAXI@Z @ 0x1C0036D94 (--_GDXGMONITOR@@AEAAPEAXI@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?_EnableDisableMonitor@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B0F08 (-_EnableDisableMonitor@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 *     ?DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x1C00B3F80 (-DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z.c)
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C010C1DC (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEA.c)
 *     ??0DXGMONITOR@@AEAA@PEAVMONITOR_MGR@@@Z @ 0x1C010C3CC (--0DXGMONITOR@@AEAA@PEAVMONITOR_MGR@@@Z.c)
 */

__int64 __fastcall MONITOR_MGR::_CreateSimulatedMonitor(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        struct DXGMONITOR *a4,
        DXGMONITOR **a5,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a6)
{
  DXGMONITOR **v6; // r14
  __int64 v8; // rsi
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v14; // r15
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v18; // ebx
  __int64 v19; // rax
  char *v20; // rax
  __int64 v21; // rcx
  DXGMONITOR *v22; // rbx
  __int64 v23; // rax
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // rdi
  __int64 v28; // rax
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v29; // [rsp+78h] [rbp+10h] BYREF

  v6 = a5;
  v8 = a2;
  if ( !a5 )
  {
    v11 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v11);
  }
  if ( (_DWORD)v8 == -1 )
  {
    v12 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v12);
  }
  if ( a3 == 1 )
  {
    v13 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v13);
  }
  *v6 = 0LL;
  v14 = a6;
  if ( a3 == 5 )
  {
    v15 = *(_QWORD *)(a1 + 8);
    v29 = D3DKMDT_VOT_UNINITIALIZED;
    if ( (int)DmmGetVideoOutputTechnology(*(DXGADAPTER **)(v15 + 16), v8, &v29, 0LL) < 0 )
    {
      v17 = WdLogNewEntry5_WdAssertion(v16);
      WdLogEvent5_WdAssertion(v17);
    }
    v18 = v29;
    if ( v29 == D3DKMDT_VOT_UNINITIALIZED )
    {
      v19 = WdLogNewEntry5_WdAssertion(v16);
      WdLogEvent5_WdAssertion(v19);
    }
    if ( (v18 < D3DKMDT_VOT_HD15 || v18 > D3DKMDT_VOT_COMPONENT_VIDEO && v18 != D3DKMDT_VOT_SDTVDONGLE)
      && *(_BYTE *)(a1 + 3)
      && (!IsInternalVideoOutput(v18)
       || (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(*(_QWORD *)(a1 + 8) + 16LL)) >= 1200) )
    {
      MONITOR_MGR::_EnableDisableMonitor((unsigned __int8 *)a1, 0xFFFFFFFF, 0, 8u, 1LL, (__int64)v14);
    }
  }
  v20 = (char *)operator new(0x3A0uLL, 0x4D677844u, (POOL_TYPE)512);
  if ( v20 )
    v22 = DXGMONITOR::DXGMONITOR(v20, (struct MONITOR_MGR *)a1);
  else
    v22 = 0LL;
  if ( v22 )
  {
    v25 = DXGMONITOR::_InitializeMonitor((__int64)v22, (unsigned int)v8, 0LL, 0, 0, a3, a4, v14);
    v27 = v25;
    if ( v25 >= 0 )
    {
      *v6 = v22;
    }
    else
    {
      v28 = WdLogNewEntry5_WdError(v26);
      *(_QWORD *)(v28 + 24) = v8;
      *(_QWORD *)(v28 + 32) = v27;
      WdLogEvent5_WdError(v28);
      DXGMONITOR::`scalar deleting destructor'(v22);
    }
    return (unsigned int)v27;
  }
  else
  {
    v23 = WdLogNewEntry5_WdError(v21);
    WdLogEvent5_WdError(v23);
    return 3221225495LL;
  }
}
