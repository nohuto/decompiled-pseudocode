/*
 * XREFs of ?_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C022ABC0
 * Callers:
 *     ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C022B9B8 (-_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEA.c)
 * Callees:
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C0002EA0 (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0016070 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ??_GDXGMONITOR@@AEAAPEAXI@Z @ 0x1C0046DA4 (--_GDXGMONITOR@@AEAAPEAXI@Z.c)
 *     ?DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x1C00AB1D4 (-DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z.c)
 *     ?_EnableDisableMonitor@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00BAB80 (-_EnableDisableMonitor@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 *     ??0DXGMONITOR@@AEAA@PEAVMONITOR_MGR@@@Z @ 0x1C02350DC (--0DXGMONITOR@@AEAA@PEAVMONITOR_MGR@@@Z.c)
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0235FAC (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEA.c)
 */

__int64 __fastcall MONITOR_MGR::_CreateSimulatedMonitor(
        __int64 a1,
        unsigned int a2,
        int a3,
        __int64 a4,
        DXGMONITOR **a5,
        __int64 a6)
{
  DXGMONITOR **v6; // r14
  __int64 v8; // rsi
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // r15
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v18; // ebx
  __int64 v19; // rax
  PVOID v20; // rax
  __int64 v21; // rcx
  DXGMONITOR *v22; // rbx
  __int64 v23; // rax
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // rdi
  __int64 v28; // rax
  int v29; // [rsp+20h] [rbp-48h]
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v30; // [rsp+78h] [rbp+10h] BYREF

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
    v30 = D3DKMDT_VOT_UNINITIALIZED;
    if ( (int)DmmGetVideoOutputTechnology(*(DXGADAPTER **)(v15 + 16), v8, &v30, 0LL) < 0 )
    {
      v17 = WdLogNewEntry5_WdAssertion(v16);
      WdLogEvent5_WdAssertion(v17);
    }
    v18 = v30;
    if ( v30 == D3DKMDT_VOT_UNINITIALIZED )
    {
      v19 = WdLogNewEntry5_WdAssertion(v16);
      WdLogEvent5_WdAssertion(v19);
    }
    if ( (v18 < D3DKMDT_VOT_HD15 || v18 > D3DKMDT_VOT_COMPONENT_VIDEO && v18 != D3DKMDT_VOT_SDTVDONGLE)
      && *(_BYTE *)(a1 + 3)
      && (!IsInternalVideoOutput(v18)
       || (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(*(_QWORD *)(a1 + 8) + 16LL)) >= 1200) )
    {
      MONITOR_MGR::_EnableDisableMonitor((unsigned __int8 *)a1, 0xFFFFFFFF, 0, 8u, 1LL, v14);
    }
  }
  v20 = operator new[](0x3E8uLL, 0x4D677844u, (POOL_TYPE)512);
  if ( v20 )
    v22 = DXGMONITOR::DXGMONITOR(v20, (struct MONITOR_MGR *)a1);
  else
    v22 = 0LL;
  if ( v22 )
  {
    LOBYTE(v29) = 0;
    v25 = DXGMONITOR::_InitializeMonitor(v22, (unsigned int)v8, 0LL, 0LL, v29, a3, a4, v14);
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
