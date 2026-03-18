/*
 * XREFs of ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C023BFA0
 * Callers:
 *     ?RebuildMonitorModeListCacheHelper@@YAJPEAVDXGADAPTER@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C022A3A8 (-RebuildMonitorModeListCacheHelper@@YAJPEAVDXGADAPTER@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0235FAC (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEA.c)
 *     ?_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0236E24 (-_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0236F48 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARI.c)
 * Callees:
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C0002EA0 (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z @ 0x1C0047588 (-EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z.c)
 *     ?AddEdid@EDIDCACHE@@QEAAXPEAVDXGADAPTER@@IEPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C01A872C (-AddEdid@EDIDCACHE@@QEAAXPEAVDXGADAPTER@@IEPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z.c)
 *     ?_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C022C658 (-_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_D.c)
 *     MonitorLogBadEDID @ 0x1C022E99C (MonitorLogBadEDID.c)
 *     ?_UpdateMonitorEDIDRegistryForGDI@DXGMONITOR@@AEAAJXZ @ 0x1C02341E8 (-_UpdateMonitorEDIDRegistryForGDI@DXGMONITOR@@AEAAJXZ.c)
 *     ?_GetIntendedUsageFromDescriptor@DXGMONITOR@@AEAAJPEAW4_DXGK_DISPLAY_USAGE@@@Z @ 0x1C0235A50 (-_GetIntendedUsageFromDescriptor@DXGMONITOR@@AEAAJPEAW4_DXGK_DISPLAY_USAGE@@@Z.c)
 *     ?ConvertMonitorCapablitiesOrigin@@YAJW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@PEAW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@@Z @ 0x1C02388DC (-ConvertMonitorCapablitiesOrigin@@YAJW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@PEAW4__WMI_MONITOR_.c)
 *     ?_CheckPortraitFirstMonitor@DXGMONITOR@@AEAAJXZ @ 0x1C0238F18 (-_CheckPortraitFirstMonitor@DXGMONITOR@@AEAAJXZ.c)
 *     ?_CleanupMonitorSourceModeAndFreqRanges@DXGMONITOR@@AEAAJXZ @ 0x1C02390E4 (-_CleanupMonitorSourceModeAndFreqRanges@DXGMONITOR@@AEAAJXZ.c)
 *     ?_CreateDefaultMonitorProfileForWDDMv1_0@DXGMONITOR@@AEAAJXZ @ 0x1C023959C (-_CreateDefaultMonitorProfileForWDDMv1_0@DXGMONITOR@@AEAAJXZ.c)
 *     ?_ParseEDIDBaseBlock@DXGMONITOR@@AEAAJXZ @ 0x1C023A998 (-_ParseEDIDBaseBlock@DXGMONITOR@@AEAAJXZ.c)
 *     ?_ParseEDIDForHDRParams@DXGMONITOR@@AEAAJXZ @ 0x1C023AECC (-_ParseEDIDForHDRParams@DXGMONITOR@@AEAAJXZ.c)
 *     ?_QueryDriverRecommendMonitorModes@DXGMONITOR@@AEAAJXZ @ 0x1C023B1DC (-_QueryDriverRecommendMonitorModes@DXGMONITOR@@AEAAJXZ.c)
 *     ?_RetrieveHDRParamDriverOverrides@DXGMONITOR@@AEAAJXZ @ 0x1C023B5A0 (-_RetrieveHDRParamDriverOverrides@DXGMONITOR@@AEAAJXZ.c)
 *     ?_RetrieveIntegratedPanelNativeOverride@DXGMONITOR@@QEAAJXZ @ 0x1C023B704 (-_RetrieveIntegratedPanelNativeOverride@DXGMONITOR@@QEAAJXZ.c)
 *     ?_SendAdjustedHDRParamsToDriver@DXGMONITOR@@QEAAJXZ @ 0x1C023BD94 (-_SendAdjustedHDRParamsToDriver@DXGMONITOR@@QEAAJXZ.c)
 *     ?_UpdateHDRParamsIfRequired@DXGMONITOR@@AEAAXXZ @ 0x1C023C2C4 (-_UpdateHDRParamsIfRequired@DXGMONITOR@@AEAAXXZ.c)
 */

__int64 __fastcall DXGMONITOR::_UpdateEDIDBaseBlock(
        DXGMONITOR *this,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2,
        char a3)
{
  __int64 *v3; // rsi
  DXGMONITOR *v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rsi
  unsigned int v9; // r14d
  __int64 v10; // rcx
  struct DXGADAPTER *v11; // r15
  EDIDCACHE *v12; // rcx
  int IsEDIDBaseBlock; // eax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rax
  bool v17; // bp
  char v18; // bp
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // r8
  DXGMONITOR *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // r8
  int v29; // eax
  __int64 v30; // rcx
  __int64 v31; // rdi
  __int64 v32; // rax
  __int64 v33; // rcx
  int IntendedUsageFromDescriptor; // eax
  __int64 v35; // rcx
  __int64 v36; // rdi
  __int64 v37; // rax
  struct _FAST_MUTEX *v38; // rcx
  __int64 v39; // rax
  enum _D3DKMDT_MONITOR_CAPABILITIES_ORIGIN v41; // [rsp+70h] [rbp+18h] BYREF

  v3 = (__int64 *)*((_QWORD *)this + 17);
  v6 = this;
  LODWORD(v7) = 0;
  if ( v3 && *((_DWORD *)this + 32) )
  {
    v8 = *v3;
    ConvertMonitorCapablitiesOrigin(*(unsigned int *)(v8 + 8), (enum __WMI_MONITOR_CAPABILITY_ORIGIN_TYPE *)&v41);
    if ( *((_DWORD *)v6 + 108) == 1 && IsInternalVideoOutput(*((enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)v6 + 12)) )
      LOBYTE(v7) = 1;
    v9 = *((_DWORD *)v6 + 11);
    v10 = *(_QWORD *)(*((_QWORD *)v6 + 4) + 8LL);
    v11 = *(struct DXGADAPTER **)(v10 + 16);
    v12 = (EDIDCACHE *)*((_QWORD *)DXGGLOBAL::GetGlobal(v10) + 95);
    if ( v12 )
      EDIDCACHE::AddEdid(v12, v11, v9, v7, (unsigned __int8 *)(v8 + 24), v41);
    IsEDIDBaseBlock = EDIDV1_IsEDIDBaseBlock((unsigned __int8 *)(v8 + 24));
    v7 = IsEDIDBaseBlock;
    if ( IsEDIDBaseBlock < 0 )
    {
      v16 = WdLogNewEntry5_WdWarning(this, v14, v15);
      *(_QWORD *)(v16 + 24) = v8 + 24;
      *(_QWORD *)(v16 + 32) = v7;
      WdLogEvent5_WdWarning(v16);
      MonitorLogBadEDID(v8 + 24, v7);
      LODWORD(v7) = 0;
      v8 = 0LL;
LABEL_10:
      v17 = v8 != *((_QWORD *)v6 + 18);
      goto LABEL_11;
    }
  }
  else
  {
    v8 = 0LL;
  }
  if ( !v8 )
    goto LABEL_10;
  this = (DXGMONITOR *)*((_QWORD *)v6 + 18);
  if ( !this )
    goto LABEL_10;
  v25 = *(_QWORD *)(v8 + 16);
  v17 = 0;
  if ( v25 != *((_QWORD *)this + 2)
    || v25
    && (v26 = (DXGMONITOR *)RtlCompareMemory(this, (const void *)v8, v25 + 31),
        this = (DXGMONITOR *)(*(_QWORD *)(v8 + 16) + 31LL),
        v26 != this) )
  {
    v17 = 1;
  }
LABEL_11:
  v18 = a3 | v17;
  if ( v18 )
  {
    v19 = WdLogNewEntry5_WdDmmEvent(this);
    *(_QWORD *)(v19 + 24) = v6;
    WdLogEvent5_WdDmmEvent(v19);
    v22 = DXGMONITOR::_CleanupMonitorSourceModeAndFreqRanges(v6, v20, v21);
    v7 = v22;
    if ( v22 < 0 )
    {
      v24 = WdLogNewEntry5_WdError(v23);
      *(_QWORD *)(v24 + 24) = v7;
      WdLogEvent5_WdError(v24);
      return (unsigned int)v7;
    }
    if ( v8 )
    {
      *((_QWORD *)v6 + 18) = v8;
      if ( (int)DXGMONITOR::_ParseEDIDBaseBlock((DXGMONITOR ***)v6) < 0 )
        *((_QWORD *)v6 + 18) = 0LL;
      if ( (int)DXGMONITOR::_RetrieveHDRParamDriverOverrides(v6) < 0 )
      {
        v29 = DXGMONITOR::_ParseEDIDForHDRParams(v6, v27, v28);
        v31 = v29;
        if ( v29 < 0 )
        {
          v32 = WdLogNewEntry5_WdError(v30);
          *(_QWORD *)(v32 + 24) = v31;
          WdLogEvent5_WdError(v32);
        }
      }
      DXGMONITOR::_UpdateHDRParamsIfRequired(v6);
      DXGMONITOR::_SendAdjustedHDRParamsToDriver(v6);
      if ( !*((_BYTE *)DXGGLOBAL::GetGlobal(v33) + 1697) && !*((_DWORD *)v6 + 145) )
      {
        LOBYTE(v41) = 1;
        IntendedUsageFromDescriptor = DXGMONITOR::_GetIntendedUsageFromDescriptor(v6, (enum _DXGK_DISPLAY_USAGE *)&v41);
        v36 = IntendedUsageFromDescriptor;
        if ( IntendedUsageFromDescriptor >= 0 )
        {
          *((_DWORD *)v6 + 145) = (unsigned __int8)(v41 - 2) <= 1u;
        }
        else
        {
          v37 = WdLogNewEntry5_WdError(v35);
          *(_QWORD *)(v37 + 24) = v36;
          WdLogEvent5_WdError(v37);
        }
      }
      LODWORD(v7) = 0;
    }
    else
    {
      *((_QWORD *)v6 + 18) = 0LL;
    }
    if ( (*((_DWORD *)v6 + 10) & 0x10) != 0 )
      DXGMONITOR::_UpdateMonitorEDIDRegistryForGDI((struct _DEVICE_OBJECT **)v6);
    DXGMONITOR::_CheckPortraitFirstMonitor((enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)v6);
  }
  if ( (!*((_DWORD *)v6 + 64) && !*((_DWORD *)v6 + 52) || v18)
    && (int)DXGMONITOR::_RetrieveIntegratedPanelNativeOverride(v6) < 0 )
  {
    DXGMONITOR::_QueryDriverRecommendMonitorModes((D3DDDI_VIDEO_PRESENT_TARGET_ID *)v6);
  }
  if ( !*((_DWORD *)v6 + 64) && !*((_DWORD *)v6 + 52) )
    DXGMONITOR::_CreateDefaultMonitorProfileForWDDMv1_0(v6);
  if ( v18 )
  {
    v38 = (struct _FAST_MUTEX *)*((_QWORD *)v6 + 4);
    if ( !v38 )
    {
      v39 = WdLogNewEntry5_WdAssertion(0LL);
      WdLogEvent5_WdAssertion(v39);
      v38 = (struct _FAST_MUTEX *)*((_QWORD *)v6 + 4);
    }
    MONITOR_MGR::_IssueMonitorEvent(v38, *((_DWORD *)v6 + 11), 3, 0LL, *((_DWORD *)v6 + 108), (__int64)a2);
  }
  return (unsigned int)v7;
}
