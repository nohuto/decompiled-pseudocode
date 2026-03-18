/*
 * XREFs of ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01092BC
 * Callers:
 *     ?_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0115624 (-_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@PEAU_DXGK_DI.c)
 *     ?_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01E2478 (-_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C00061DC (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     DmmGetVideoOutputTechnology @ 0x1C00AB07C (DmmGetVideoOutputTechnology.c)
 *     ?_RetrieveMonitorDescriptorsFromDriver@DXGMONITOR@@AEAAJXZ @ 0x1C0106DA4 (-_RetrieveMonitorDescriptorsFromDriver@DXGMONITOR@@AEAAJXZ.c)
 *     ?_CheckPortraitFirstMonitor@DXGMONITOR@@AEAAJXZ @ 0x1C0106F44 (-_CheckPortraitFirstMonitor@DXGMONITOR@@AEAAJXZ.c)
 *     ?_QueryDriverRecommendMonitorModes@DXGMONITOR@@AEAAJXZ @ 0x1C0106FB4 (-_QueryDriverRecommendMonitorModes@DXGMONITOR@@AEAAJXZ.c)
 *     ?_ReadHMDPresenceFromDescriptor@DXGMONITOR@@AEAAJPEAI@Z @ 0x1C0107108 (-_ReadHMDPresenceFromDescriptor@DXGMONITOR@@AEAAJPEAI@Z.c)
 *     ?_UpdateLinkInfo@DXGMONITOR@@AEAAJE@Z @ 0x1C0107138 (-_UpdateLinkInfo@DXGMONITOR@@AEAAJE@Z.c)
 *     ?_PrepareMonitorCCDName@DXGMONITOR@@AEAAJXZ @ 0x1C010722C (-_PrepareMonitorCCDName@DXGMONITOR@@AEAAJXZ.c)
 *     ?_ReadAdvancedColorEnabledFromMonitorStore@DXGMONITOR@@AEAAJXZ @ 0x1C01077C4 (-_ReadAdvancedColorEnabledFromMonitorStore@DXGMONITOR@@AEAAJXZ.c)
 *     ?_ReadHMDPresenceFromMonitorStore@DXGMONITOR@@AEAAJPEAI0@Z @ 0x1C010781C (-_ReadHMDPresenceFromMonitorStore@DXGMONITOR@@AEAAJPEAI0@Z.c)
 *     ?_ReadScaleFactorFromMonitorStore@DXGMONITOR@@AEAAJPEAI@Z @ 0x1C0107A38 (-_ReadScaleFactorFromMonitorStore@DXGMONITOR@@AEAAJPEAI@Z.c)
 *     ?_RetrieveMonitorConfigurationFromMonitorStore@DXGMONITOR@@AEAAJXZ @ 0x1C0107CC0 (-_RetrieveMonitorConfigurationFromMonitorStore@DXGMONITOR@@AEAAJXZ.c)
 *     ?_PrepareDefaultMonitorConfiguration@DXGMONITOR@@AEAAXXZ @ 0x1C0107E34 (-_PrepareDefaultMonitorConfiguration@DXGMONITOR@@AEAAXXZ.c)
 *     ?_ReadVirtualModeSupportFromRegistry@DXGMONITOR@@AEAAJXZ @ 0x1C01082BC (-_ReadVirtualModeSupportFromRegistry@DXGMONITOR@@AEAAJXZ.c)
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0108DA4 (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z @ 0x1C01E7A18 (-_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z.c)
 *     ?_CreateDefaultMonitorProfileForWDDMv1_0@DXGMONITOR@@AEAAJXZ @ 0x1C01E7CD8 (-_CreateDefaultMonitorProfileForWDDMv1_0@DXGMONITOR@@AEAAJXZ.c)
 *     ?_RetrieveMonitorDescriptorsFromCache@DXGMONITOR@@AEAAJXZ @ 0x1C01E84F8 (-_RetrieveMonitorDescriptorsFromCache@DXGMONITOR@@AEAAJXZ.c)
 */

__int64 __fastcall DXGMONITOR::_InitializeMonitor(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        unsigned int a6,
        struct DXGMONITOR *a7,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a8)
{
  char v8; // r12
  unsigned int v10; // ebp
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned int v17; // r14d
  struct DXGMONITOR *v18; // r15
  BOOL v19; // eax
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  int VideoOutputTechnology; // ebp
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned int v26; // ebx
  __int64 v27; // r9
  int updated; // eax
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  unsigned int v32; // r9d
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v37; // rax
  __int64 v38; // rax
  bool v39; // cf
  __int64 v40; // rax
  __int64 v41; // rax
  unsigned int v42; // [rsp+68h] [rbp+20h] BYREF

  v8 = a4;
  v10 = a2;
  v12 = WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  v17 = a6;
  *(_QWORD *)(v12 + 24) = a1;
  if ( !v17 )
  {
    v37 = WdLogNewEntry5_WdAssertion(v14, v13, v15, v16);
    WdLogEvent5_WdAssertion(v37);
  }
  v18 = a7;
  if ( v17 == 1 )
    v19 = a3 && !a7;
  else
    v19 = a3 == 0;
  if ( !v19 )
  {
    v38 = WdLogNewEntry5_WdAssertion(v14, v13, v15, v16);
    WdLogEvent5_WdAssertion(v38);
  }
  *(_DWORD *)(a1 + 28) = v10;
  *(_QWORD *)(a1 + 40) = a3;
  *(_DWORD *)(a1 + 376) = v17;
  *(_DWORD *)(a1 + 380) = v17;
  if ( v8 )
  {
    v39 = a5 != 0;
    a5 = -a5;
    *(_DWORD *)(a1 + 24) = *(_DWORD *)(a1 + 24) & 0xFFFFFFFB | (v39 ? 0 : 4) | 2;
  }
  v20 = *(_QWORD *)(a1 + 16);
  v42 = -2;
  VideoOutputTechnology = DmmGetVideoOutputTechnology(*(DXGADAPTER **)(*(_QWORD *)(v20 + 8) + 16LL), v10, &v42, 0LL);
  if ( VideoOutputTechnology < 0 )
  {
    v40 = WdLogNewEntry5_WdAssertion(v22, v21, v24, v25);
    WdLogEvent5_WdAssertion(v40);
  }
  v26 = v42;
  if ( v42 == -2 )
  {
    v41 = WdLogNewEntry5_WdAssertion(v22, v21, v24, v25);
    WdLogEvent5_WdAssertion(v41);
  }
  *(_DWORD *)(a1 + 32) = v26;
  if ( v17 == 1 )
  {
    VideoOutputTechnology = DXGMONITOR::_RetrieveMonitorDescriptorsFromDriver((DXGMONITOR *)a1, v21, v24, v25);
    if ( VideoOutputTechnology < 0 )
      return (unsigned int)VideoOutputTechnology;
    updated = DXGMONITOR::_UpdateEDIDBaseBlock((DXGMONITOR *)a1, a8, 0LL, v27);
  }
  else
  {
    if ( v18 )
    {
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite((PERESOURCE)((char *)v18 + 240), 1u);
      VideoOutputTechnology = DXGMONITOR::_CopyMonitorInformation((DXGMONITOR *)a1, v18);
      ExReleaseResourceLite((PERESOURCE)((char *)v18 + 240));
      KeLeaveCriticalRegion();
      goto LABEL_19;
    }
    if ( v17 == 5 )
    {
      DXGMONITOR::_RetrieveMonitorDescriptorsFromCache((DXGMONITOR *)a1);
      DXGMONITOR::_CheckPortraitFirstMonitor((DXGMONITOR *)a1);
    }
    if ( (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL) + 16LL)) >= 1105 )
      DXGMONITOR::_QueryDriverRecommendMonitorModes((D3DDDI_VIDEO_PRESENT_TARGET_ID *)a1, v29, v30, v31);
    if ( *(_DWORD *)(a1 + 152) )
      goto LABEL_19;
    updated = DXGMONITOR::_CreateDefaultMonitorProfileForWDDMv1_0((DXGMONITOR *)a1);
  }
  VideoOutputTechnology = updated;
LABEL_19:
  if ( VideoOutputTechnology >= 0 )
  {
    VideoOutputTechnology = DXGMONITOR::_PrepareMonitorCCDName((DXGMONITOR *)a1, v29, v30, v31);
    if ( VideoOutputTechnology >= 0 )
    {
      DXGMONITOR::_PrepareDefaultMonitorConfiguration((DXGMONITOR *)a1);
      if ( v17 == 1 )
      {
        DXGMONITOR::_ReadVirtualModeSupportFromRegistry((DXGMONITOR *)a1);
        DXGMONITOR::_ReadScaleFactorFromMonitorStore((DXGMONITOR *)a1, (unsigned int *)(a1 + 520));
        DXGMONITOR::_RetrieveMonitorConfigurationFromMonitorStore((DXGMONITOR *)a1);
        v42 = 0;
        a6 = 0;
        if ( (int)DXGMONITOR::_ReadHMDPresenceFromDescriptor((DXGMONITOR *)a1, &v42) < 0 )
        {
          DXGMONITOR::_ReadHMDPresenceFromMonitorStore((DXGMONITOR *)a1, &v42, &a6);
          v32 = a6;
        }
        *(_BYTE *)(a1 + 524) = v42 != 0;
        *(_BYTE *)(a1 + 525) = v32 != 0;
        DXGMONITOR::_ReadAdvancedColorEnabledFromMonitorStore((DXGMONITOR *)a1);
        LOBYTE(v33) = v42 == 1;
        DXGMONITOR::_UpdateLinkInfo((D3DDDI_VIDEO_PRESENT_TARGET_ID *)a1, v33, v34, v35);
      }
      *(_DWORD *)(a1 + 24) |= 1u;
    }
  }
  return (unsigned int)VideoOutputTechnology;
}
