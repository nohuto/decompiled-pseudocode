/*
 * XREFs of ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0235FAC
 * Callers:
 *     ?_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C022A9B0 (-_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@PEAU_DXGK_DI.c)
 *     ?_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C022ABC0 (-_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0016070 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x1C00AB1D4 (-DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z.c)
 *     ?_OpenMonitorDataStore@DXGMONITOR@@AEAAJEPEAPEAX@Z @ 0x1C0232408 (-_OpenMonitorDataStore@DXGMONITOR@@AEAAJEPEAPEAX@Z.c)
 *     ?_PrepareDefaultMonitorConfiguration@DXGMONITOR@@AEAAXXZ @ 0x1C02325B4 (-_PrepareDefaultMonitorConfiguration@DXGMONITOR@@AEAAXXZ.c)
 *     ?_ReadAdvancedColorEnabledFromMonitorStore@DXGMONITOR@@AEAAJXZ @ 0x1C0232ABC (-_ReadAdvancedColorEnabledFromMonitorStore@DXGMONITOR@@AEAAJXZ.c)
 *     ?_ReadSDRWhiteLevelFromMonitorStore@DXGMONITOR@@AEAAJXZ @ 0x1C0232E24 (-_ReadSDRWhiteLevelFromMonitorStore@DXGMONITOR@@AEAAJXZ.c)
 *     ?_ReadScaleFactorFromMonitorStore@DXGMONITOR@@AEAAJPEAI@Z @ 0x1C0233078 (-_ReadScaleFactorFromMonitorStore@DXGMONITOR@@AEAAJPEAI@Z.c)
 *     ?_ReadUsageOverridesFromRegistry@DXGMONITOR@@AEAAJPEAXPEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C0233228 (-_ReadUsageOverridesFromRegistry@DXGMONITOR@@AEAAJPEAXPEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z.c)
 *     ?_ReadVirtualModeSupportFromRegistry@DXGMONITOR@@AEAAJXZ @ 0x1C0233360 (-_ReadVirtualModeSupportFromRegistry@DXGMONITOR@@AEAAJXZ.c)
 *     ?_ReadWCGEnforcedFromMonitorStore@DXGMONITOR@@AEAAJXZ @ 0x1C023346C (-_ReadWCGEnforcedFromMonitorStore@DXGMONITOR@@AEAAJXZ.c)
 *     ?_RetrieveMonitorConfigurationFromMonitorStore@DXGMONITOR@@AEAAJXZ @ 0x1C0233610 (-_RetrieveMonitorConfigurationFromMonitorStore@DXGMONITOR@@AEAAJXZ.c)
 *     ?_GetIntendedUsageFromDescriptor@DXGMONITOR@@AEAAJPEAW4_DXGK_DISPLAY_USAGE@@@Z @ 0x1C0235A50 (-_GetIntendedUsageFromDescriptor@DXGMONITOR@@AEAAJPEAW4_DXGK_DISPLAY_USAGE@@@Z.c)
 *     ?_PrepareMonitorCCDName@DXGMONITOR@@AEAAJXZ @ 0x1C0237848 (-_PrepareMonitorCCDName@DXGMONITOR@@AEAAJXZ.c)
 *     ?_UpdateLinkInfo@DXGMONITOR@@AEAAJ_N@Z @ 0x1C023851C (-_UpdateLinkInfo@DXGMONITOR@@AEAAJ_N@Z.c)
 *     ?_CheckPortraitFirstMonitor@DXGMONITOR@@AEAAJXZ @ 0x1C0238F18 (-_CheckPortraitFirstMonitor@DXGMONITOR@@AEAAJXZ.c)
 *     ?_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z @ 0x1C02392D0 (-_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z.c)
 *     ?_CreateDefaultMonitorProfileForWDDMv1_0@DXGMONITOR@@AEAAJXZ @ 0x1C023959C (-_CreateDefaultMonitorProfileForWDDMv1_0@DXGMONITOR@@AEAAJXZ.c)
 *     ?_QueryDriverRecommendMonitorModes@DXGMONITOR@@AEAAJXZ @ 0x1C023B1DC (-_QueryDriverRecommendMonitorModes@DXGMONITOR@@AEAAJXZ.c)
 *     ?_RetrieveMonitorDescriptorsFromCache@DXGMONITOR@@AEAAJXZ @ 0x1C023B86C (-_RetrieveMonitorDescriptorsFromCache@DXGMONITOR@@AEAAJXZ.c)
 *     ?_RetrieveMonitorDescriptorsFromDriver@DXGMONITOR@@AEAAJXZ @ 0x1C023BA38 (-_RetrieveMonitorDescriptorsFromDriver@DXGMONITOR@@AEAAJXZ.c)
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C023BFA0 (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 */

__int64 __fastcall DXGMONITOR::_InitializeMonitor(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        int a6,
        struct DXGMONITOR *a7,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a8)
{
  char v8; // r12
  unsigned int v10; // esi
  __int64 v12; // rax
  __int64 v13; // rcx
  int v14; // r14d
  __int64 v15; // rax
  struct DXGMONITOR *v16; // r15
  BOOL v17; // eax
  __int64 v18; // rax
  bool v19; // cf
  __int64 v20; // rax
  __int64 v21; // rcx
  int VideoOutputTechnology; // esi
  __int64 v23; // rax
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v24; // ebx
  __int64 v25; // rax
  int updated; // eax
  __int64 v27; // rcx
  bool v28; // zf
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v29; // ebx
  DXGMONITOR *v30; // rcx
  HANDLE Handle; // [rsp+50h] [rbp+30h] BYREF
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v33; // [rsp+68h] [rbp+48h] BYREF

  v8 = a4;
  v10 = a2;
  v12 = WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  v14 = a6;
  *(_QWORD *)(v12 + 24) = a1;
  if ( !v14 )
  {
    v15 = WdLogNewEntry5_WdAssertion(v13);
    WdLogEvent5_WdAssertion(v15);
  }
  v16 = a7;
  if ( v14 == 1 )
    v17 = a3 && !a7;
  else
    v17 = a3 == 0;
  if ( !v17 )
  {
    v18 = WdLogNewEntry5_WdAssertion(v13);
    WdLogEvent5_WdAssertion(v18);
  }
  *(_DWORD *)(a1 + 44) = v10;
  *(_QWORD *)(a1 + 56) = a3;
  *(_DWORD *)(a1 + 432) = v14;
  *(_DWORD *)(a1 + 436) = v14;
  if ( v8 )
  {
    v19 = a5 != 0;
    a5 = -a5;
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 40) & 0xFFFFFFFB | (v19 ? 0 : 4) | 2;
  }
  v20 = *(_QWORD *)(a1 + 32);
  v33 = D3DKMDT_VOT_UNINITIALIZED;
  VideoOutputTechnology = DmmGetVideoOutputTechnology(*(DXGADAPTER **)(*(_QWORD *)(v20 + 8) + 16LL), v10, &v33, 0LL);
  if ( VideoOutputTechnology < 0 )
  {
    v23 = WdLogNewEntry5_WdAssertion(v21);
    WdLogEvent5_WdAssertion(v23);
  }
  v24 = v33;
  if ( v33 == D3DKMDT_VOT_UNINITIALIZED )
  {
    v25 = WdLogNewEntry5_WdAssertion(v21);
    WdLogEvent5_WdAssertion(v25);
  }
  *(_DWORD *)(a1 + 48) = v24;
  if ( v14 == 1 )
  {
    VideoOutputTechnology = DXGMONITOR::_RetrieveMonitorDescriptorsFromDriver((DXGMONITOR *)a1);
    if ( VideoOutputTechnology < 0 )
      return (unsigned int)VideoOutputTechnology;
    updated = DXGMONITOR::_UpdateEDIDBaseBlock((DXGMONITOR *)a1, a8, 0);
  }
  else
  {
    if ( v16 )
    {
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite((PERESOURCE)((char *)v16 + 296), 1u);
      VideoOutputTechnology = DXGMONITOR::_CopyMonitorInformation((DXGMONITOR *)a1, v16);
      ExReleaseResourceLite((PERESOURCE)((char *)v16 + 296));
      KeLeaveCriticalRegion();
      goto LABEL_29;
    }
    if ( v14 == 5 )
    {
      DXGMONITOR::_RetrieveMonitorDescriptorsFromCache((DXGMONITOR *)a1);
      DXGMONITOR::_CheckPortraitFirstMonitor((DXGMONITOR *)a1);
    }
    if ( (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) + 16LL)) >= 1105 )
      DXGMONITOR::_QueryDriverRecommendMonitorModes((DXGMONITOR *)a1);
    if ( *(_DWORD *)(a1 + 208) )
      goto LABEL_29;
    updated = DXGMONITOR::_CreateDefaultMonitorProfileForWDDMv1_0((DXGMONITOR *)a1);
  }
  VideoOutputTechnology = updated;
LABEL_29:
  if ( VideoOutputTechnology >= 0 )
  {
    VideoOutputTechnology = DXGMONITOR::_PrepareMonitorCCDName((DXGMONITOR *)a1);
    if ( VideoOutputTechnology >= 0 )
    {
      DXGMONITOR::_PrepareDefaultMonitorConfiguration((DXGMONITOR *)a1);
      if ( v14 == 1 )
      {
        DXGMONITOR::_ReadVirtualModeSupportFromRegistry((UNICODE_STRING *)a1);
        DXGMONITOR::_ReadScaleFactorFromMonitorStore((UNICODE_STRING *)a1, (unsigned int *)(a1 + 576));
        DXGMONITOR::_RetrieveMonitorConfigurationFromMonitorStore((UNICODE_STRING *)a1);
        if ( !*((_BYTE *)DXGGLOBAL::GetGlobal(v27) + 1697) )
        {
          v28 = *(_DWORD *)(a1 + 580) == 0;
          LOBYTE(v33) = 1;
          if ( !v28 )
          {
            v29 = D3DKMDT_VOT_HD15;
            if ( (int)DXGMONITOR::_GetIntendedUsageFromDescriptor((DXGMONITOR *)a1, (enum _DXGK_DISPLAY_USAGE *)&v33) >= 0 )
            {
              LOBYTE(v29) = (unsigned __int8)(v33 - 2) <= 1u;
            }
            else
            {
              Handle = 0LL;
              v33 = D3DKMDT_VOT_HD15;
              if ( (int)DXGMONITOR::_OpenMonitorDataStore((UNICODE_STRING *)a1, 1, &Handle) >= 0 )
              {
                DXGMONITOR::_ReadUsageOverridesFromRegistry(v30, Handle, (enum _D3DKMT_DISPLAY_TARGET_USAGE *)&v33);
                ZwClose(Handle);
                v29 = v33;
              }
            }
            *(_DWORD *)(a1 + 580) = v29;
          }
        }
        DXGMONITOR::_ReadAdvancedColorEnabledFromMonitorStore((DXGMONITOR *)a1);
        DXGMONITOR::_ReadWCGEnforcedFromMonitorStore((DXGMONITOR *)a1);
        DXGMONITOR::_ReadSDRWhiteLevelFromMonitorStore((DXGMONITOR *)a1);
        VideoOutputTechnology = DXGMONITOR::_UpdateLinkInfo((DXGMONITOR *)a1, *(_DWORD *)(a1 + 580) != 0);
      }
      if ( VideoOutputTechnology >= 0 )
        *(_DWORD *)(a1 + 40) |= 1u;
    }
  }
  return (unsigned int)VideoOutputTechnology;
}
