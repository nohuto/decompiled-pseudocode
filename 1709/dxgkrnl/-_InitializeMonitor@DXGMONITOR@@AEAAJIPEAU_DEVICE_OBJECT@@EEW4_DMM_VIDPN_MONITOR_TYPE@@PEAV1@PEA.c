/*
 * XREFs of ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C010C1DC
 * Callers:
 *     ?_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C010DAA4 (-_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@PEAU_DXGK_DI.c)
 *     ?_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01FCC38 (-_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0002730 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x1C00B3F80 (-DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z.c)
 *     ?_RetrieveMonitorDescriptorsFromDriver@DXGMONITOR@@AEAAJXZ @ 0x1C01093F8 (-_RetrieveMonitorDescriptorsFromDriver@DXGMONITOR@@AEAAJXZ.c)
 *     ?_CheckPortraitFirstMonitor@DXGMONITOR@@AEAAJXZ @ 0x1C01095B0 (-_CheckPortraitFirstMonitor@DXGMONITOR@@AEAAJXZ.c)
 *     ?_QueryDriverRecommendMonitorModes@DXGMONITOR@@AEAAJXZ @ 0x1C0109620 (-_QueryDriverRecommendMonitorModes@DXGMONITOR@@AEAAJXZ.c)
 *     ?_ReadHMDPresenceFromDescriptor@DXGMONITOR@@AEAAJPEAI@Z @ 0x1C01096B0 (-_ReadHMDPresenceFromDescriptor@DXGMONITOR@@AEAAJPEAI@Z.c)
 *     ?_UpdateLinkInfo@DXGMONITOR@@AEAAJE@Z @ 0x1C01096FC (-_UpdateLinkInfo@DXGMONITOR@@AEAAJE@Z.c)
 *     ?_PrepareMonitorCCDName@DXGMONITOR@@AEAAJXZ @ 0x1C01097F0 (-_PrepareMonitorCCDName@DXGMONITOR@@AEAAJXZ.c)
 *     ?_ReadWCGEnforcedFromMonitorStore@DXGMONITOR@@AEAAJXZ @ 0x1C0109DF4 (-_ReadWCGEnforcedFromMonitorStore@DXGMONITOR@@AEAAJXZ.c)
 *     ?_ReadSDRWhiteLevelFromMonitorStore@DXGMONITOR@@AEAAJXZ @ 0x1C0109E4C (-_ReadSDRWhiteLevelFromMonitorStore@DXGMONITOR@@AEAAJXZ.c)
 *     ?_ReadAdvancedColorEnabledFromMonitorStore@DXGMONITOR@@AEAAJXZ @ 0x1C0109EA8 (-_ReadAdvancedColorEnabledFromMonitorStore@DXGMONITOR@@AEAAJXZ.c)
 *     ?_ReadHMDPresenceFromMonitorStore@DXGMONITOR@@AEAAJPEAI0@Z @ 0x1C0109F00 (-_ReadHMDPresenceFromMonitorStore@DXGMONITOR@@AEAAJPEAI0@Z.c)
 *     ?_ReadScaleFactorFromMonitorStore@DXGMONITOR@@AEAAJPEAI@Z @ 0x1C010A11C (-_ReadScaleFactorFromMonitorStore@DXGMONITOR@@AEAAJPEAI@Z.c)
 *     ?_RetrieveMonitorConfigurationFromMonitorStore@DXGMONITOR@@AEAAJXZ @ 0x1C010A3A4 (-_RetrieveMonitorConfigurationFromMonitorStore@DXGMONITOR@@AEAAJXZ.c)
 *     ?_PrepareDefaultMonitorConfiguration@DXGMONITOR@@AEAAXXZ @ 0x1C010A5A8 (-_PrepareDefaultMonitorConfiguration@DXGMONITOR@@AEAAXXZ.c)
 *     ?_ReadVirtualModeSupportFromRegistry@DXGMONITOR@@AEAAJXZ @ 0x1C010AF9C (-_ReadVirtualModeSupportFromRegistry@DXGMONITOR@@AEAAJXZ.c)
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C010BEA0 (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z @ 0x1C0202364 (-_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z.c)
 *     ?_CreateDefaultMonitorProfileForWDDMv1_0@DXGMONITOR@@AEAAJXZ @ 0x1C0202624 (-_CreateDefaultMonitorProfileForWDDMv1_0@DXGMONITOR@@AEAAJXZ.c)
 *     ?_RetrieveMonitorDescriptorsFromCache@DXGMONITOR@@AEAAJXZ @ 0x1C0202CE0 (-_RetrieveMonitorDescriptorsFromCache@DXGMONITOR@@AEAAJXZ.c)
 */

__int64 __fastcall DXGMONITOR::_InitializeMonitor(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4,
        char a5,
        unsigned int a6,
        struct DXGMONITOR *a7,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a8)
{
  unsigned int v10; // ebp
  __int64 v12; // rax
  __int64 v13; // rcx
  unsigned int v14; // r14d
  struct DXGMONITOR *v15; // r15
  BOOL v16; // eax
  __int64 v17; // rax
  __int64 v18; // rcx
  int VideoOutputTechnology; // ebp
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v20; // ebx
  int updated; // eax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rcx
  unsigned int v25; // r11d
  __int64 v26; // r8
  __int64 v28; // rax
  __int64 v29; // rax
  bool v30; // cf
  __int64 v31; // rax
  __int64 v32; // rax
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v33; // [rsp+68h] [rbp+20h] BYREF

  v10 = a2;
  v12 = WdLogNewEntry5_WdTrace(a1, a2);
  v14 = a6;
  *(_QWORD *)(v12 + 24) = a1;
  if ( !v14 )
  {
    v28 = WdLogNewEntry5_WdAssertion(v13);
    WdLogEvent5_WdAssertion(v28);
  }
  v15 = a7;
  if ( v14 == 1 )
    v16 = a3 && !a7;
  else
    v16 = a3 == 0;
  if ( !v16 )
  {
    v29 = WdLogNewEntry5_WdAssertion(v13);
    WdLogEvent5_WdAssertion(v29);
  }
  *(_DWORD *)(a1 + 28) = v10;
  *(_QWORD *)(a1 + 40) = a3;
  *(_DWORD *)(a1 + 416) = v14;
  *(_DWORD *)(a1 + 420) = v14;
  if ( a4 )
  {
    v30 = a5 != 0;
    a5 = -a5;
    *(_DWORD *)(a1 + 24) = *(_DWORD *)(a1 + 24) & 0xFFFFFFFB | (v30 ? 0 : 4) | 2;
  }
  v17 = *(_QWORD *)(a1 + 16);
  v33 = D3DKMDT_VOT_UNINITIALIZED;
  VideoOutputTechnology = DmmGetVideoOutputTechnology(*(DXGADAPTER **)(*(_QWORD *)(v17 + 8) + 16LL), v10, &v33, 0LL);
  if ( VideoOutputTechnology < 0 )
  {
    v31 = WdLogNewEntry5_WdAssertion(v18);
    WdLogEvent5_WdAssertion(v31);
  }
  v20 = v33;
  if ( v33 == D3DKMDT_VOT_UNINITIALIZED )
  {
    v32 = WdLogNewEntry5_WdAssertion(v18);
    WdLogEvent5_WdAssertion(v32);
  }
  *(_DWORD *)(a1 + 32) = v20;
  if ( v14 == 1 )
  {
    VideoOutputTechnology = DXGMONITOR::_RetrieveMonitorDescriptorsFromDriver((DXGMONITOR *)a1);
    if ( VideoOutputTechnology < 0 )
      return (unsigned int)VideoOutputTechnology;
    updated = DXGMONITOR::_UpdateEDIDBaseBlock((DXGMONITOR *)a1, a8, 0);
  }
  else
  {
    if ( v15 )
    {
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite((PERESOURCE)((char *)v15 + 280), 1u);
      VideoOutputTechnology = DXGMONITOR::_CopyMonitorInformation((DXGMONITOR *)a1, v15);
      ExReleaseResourceLite((PERESOURCE)((char *)v15 + 280));
      KeLeaveCriticalRegion();
      goto LABEL_19;
    }
    if ( v14 == 5 )
    {
      DXGMONITOR::_RetrieveMonitorDescriptorsFromCache((DXGMONITOR *)a1);
      DXGMONITOR::_CheckPortraitFirstMonitor((DXGMONITOR *)a1);
    }
    if ( (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL) + 16LL)) >= 1105 )
      DXGMONITOR::_QueryDriverRecommendMonitorModes((D3DDDI_VIDEO_PRESENT_TARGET_ID *)a1);
    if ( *(_DWORD *)(a1 + 192) )
      goto LABEL_19;
    updated = DXGMONITOR::_CreateDefaultMonitorProfileForWDDMv1_0((DXGMONITOR *)a1);
  }
  VideoOutputTechnology = updated;
LABEL_19:
  if ( VideoOutputTechnology >= 0 )
  {
    VideoOutputTechnology = DXGMONITOR::_PrepareMonitorCCDName((struct _UNICODE_STRING *)a1, v22, v23);
    if ( VideoOutputTechnology >= 0 )
    {
      DXGMONITOR::_PrepareDefaultMonitorConfiguration((DXGMONITOR *)a1);
      if ( v14 == 1 )
      {
        DXGMONITOR::_ReadVirtualModeSupportFromRegistry((DXGMONITOR *)a1);
        DXGMONITOR::_ReadScaleFactorFromMonitorStore((DXGMONITOR *)a1, (unsigned int *)(a1 + 560));
        DXGMONITOR::_RetrieveMonitorConfigurationFromMonitorStore((DXGMONITOR *)a1);
        if ( !*((_BYTE *)DXGGLOBAL::GetGlobal(v24) + 1569) )
        {
          v33 = D3DKMDT_VOT_HD15;
          a6 = 0;
          if ( !*(_BYTE *)(a1 + 564) )
          {
            if ( (int)DXGMONITOR::_ReadHMDPresenceFromDescriptor((DXGMONITOR *)a1, (unsigned int *)&v33) < 0 )
            {
              DXGMONITOR::_ReadHMDPresenceFromMonitorStore((DXGMONITOR *)a1, (unsigned int *)&v33, &a6);
              v25 = a6;
            }
            *(_BYTE *)(a1 + 564) = v33 != D3DKMDT_VOT_HD15;
            *(_BYTE *)(a1 + 565) = v25 != 0;
          }
        }
        DXGMONITOR::_ReadAdvancedColorEnabledFromMonitorStore((DXGMONITOR *)a1);
        DXGMONITOR::_ReadWCGEnforcedFromMonitorStore((DXGMONITOR *)a1);
        DXGMONITOR::_ReadSDRWhiteLevelFromMonitorStore((DXGMONITOR *)a1);
        DXGMONITOR::_UpdateLinkInfo((D3DDDI_VIDEO_PRESENT_TARGET_ID *)a1, *(_BYTE *)(a1 + 564), v26);
      }
      *(_DWORD *)(a1 + 24) |= 1u;
    }
  }
  return (unsigned int)VideoOutputTechnology;
}
