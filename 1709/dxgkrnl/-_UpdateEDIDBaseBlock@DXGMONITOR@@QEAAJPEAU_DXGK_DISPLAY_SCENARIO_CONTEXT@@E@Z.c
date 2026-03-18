/*
 * XREFs of ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C010BEA0
 * Callers:
 *     ?RebuildMonitorModeListCacheHelper@@YAJPEAVDXGADAPTER@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C010485C (-RebuildMonitorModeListCacheHelper@@YAJPEAVDXGADAPTER@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C010B884 (-_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C010C1DC (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEA.c)
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C010C694 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARI.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z @ 0x1C0012220 (-EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z.c)
 *     ?ConvertMonitorCapablitiesOrigin@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@PEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C0108624 (-ConvertMonitorCapablitiesOrigin@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@PEAW4_D3DKMDT_MONIT.c)
 *     ?_UpdateHDRParamsIfRequired@DXGMONITOR@@AEAAXXZ @ 0x1C01086C8 (-_UpdateHDRParamsIfRequired@DXGMONITOR@@AEAAXXZ.c)
 *     ?_RetrieveHDRParamDriverOverrides@DXGMONITOR@@AEAAJXZ @ 0x1C0108AEC (-_RetrieveHDRParamDriverOverrides@DXGMONITOR@@AEAAJXZ.c)
 *     ?_ParseEDIDForHDRParams@DXGMONITOR@@AEAAJXZ @ 0x1C0108BA8 (-_ParseEDIDForHDRParams@DXGMONITOR@@AEAAJXZ.c)
 *     ?_ParseEDIDForMsftVSDB@DXGMONITOR@@AEAAJXZ @ 0x1C0108DA0 (-_ParseEDIDForMsftVSDB@DXGMONITOR@@AEAAJXZ.c)
 *     ?_ParseEDIDBaseBlock@DXGMONITOR@@AEAAJXZ @ 0x1C0108E44 (-_ParseEDIDBaseBlock@DXGMONITOR@@AEAAJXZ.c)
 *     ?_RetrieveIntegratedPanelNativeOverride@DXGMONITOR@@QEAAJXZ @ 0x1C010923C (-_RetrieveIntegratedPanelNativeOverride@DXGMONITOR@@QEAAJXZ.c)
 *     ?_CleanupMonitorSourceModeAndFreqRanges@DXGMONITOR@@AEAAJXZ @ 0x1C01092D0 (-_CleanupMonitorSourceModeAndFreqRanges@DXGMONITOR@@AEAAJXZ.c)
 *     ?_CheckPortraitFirstMonitor@DXGMONITOR@@AEAAJXZ @ 0x1C01095B0 (-_CheckPortraitFirstMonitor@DXGMONITOR@@AEAAJXZ.c)
 *     ?_QueryDriverRecommendMonitorModes@DXGMONITOR@@AEAAJXZ @ 0x1C0109620 (-_QueryDriverRecommendMonitorModes@DXGMONITOR@@AEAAJXZ.c)
 *     ?_UpdateMonitorEDIDRegistryForGDI@DXGMONITOR@@AEAAJXZ @ 0x1C010A17C (-_UpdateMonitorEDIDRegistryForGDI@DXGMONITOR@@AEAAJXZ.c)
 *     ?_SendAdjustedHDRParamsToDriver@DXGMONITOR@@QEAAJXZ @ 0x1C010BB74 (-_SendAdjustedHDRParamsToDriver@DXGMONITOR@@QEAAJXZ.c)
 *     ?_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C010D634 (-_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_D.c)
 *     ?AddEdid@EDIDCACHE@@QEAAXPEAVDXGADAPTER@@IPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C012113C (-AddEdid@EDIDCACHE@@QEAAXPEAVDXGADAPTER@@IPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z.c)
 *     MonitorLogBadEDID @ 0x1C0123F58 (MonitorLogBadEDID.c)
 *     ?_CreateDefaultMonitorProfileForWDDMv1_0@DXGMONITOR@@AEAAJXZ @ 0x1C0202624 (-_CreateDefaultMonitorProfileForWDDMv1_0@DXGMONITOR@@AEAAJXZ.c)
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
  unsigned int v9; // edi
  __int64 v10; // rcx
  struct DXGADAPTER *v11; // rbp
  EDIDCACHE *v12; // rcx
  int IsEDIDBaseBlock; // eax
  __int64 v14; // rdx
  __int64 v15; // r8
  bool v16; // bp
  char v17; // bp
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // r8
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // rdi
  int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // rdi
  __int64 v32; // r8
  DXGMONITOR *v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  enum _D3DKMDT_MONITOR_CAPABILITIES_ORIGIN v39; // [rsp+70h] [rbp+18h] BYREF

  v3 = (__int64 *)*((_QWORD *)this + 15);
  v6 = this;
  LODWORD(v7) = 0;
  if ( v3 && *((_DWORD *)this + 28) )
  {
    v8 = *v3;
    ConvertMonitorCapablitiesOrigin(*(unsigned int *)(v8 + 8), &v39);
    v9 = *((_DWORD *)v6 + 7);
    v10 = *(_QWORD *)(*((_QWORD *)v6 + 2) + 8LL);
    v11 = *(struct DXGADAPTER **)(v10 + 16);
    v12 = (EDIDCACHE *)*((_QWORD *)DXGGLOBAL::GetGlobal(v10) + 85);
    if ( v12 )
      EDIDCACHE::AddEdid(v12, v11, v9, (const unsigned __int8 *)(v8 + 24), v39);
    IsEDIDBaseBlock = EDIDV1_IsEDIDBaseBlock((unsigned __int8 *)(v8 + 24));
    v7 = IsEDIDBaseBlock;
    if ( IsEDIDBaseBlock < 0 )
    {
      v34 = WdLogNewEntry5_WdWarning(this, v14, v15);
      *(_QWORD *)(v34 + 24) = v8 + 24;
      *(_QWORD *)(v34 + 32) = v7;
      WdLogEvent5_WdWarning(v34);
      MonitorLogBadEDID(v8 + 24, (unsigned int)v7);
      LODWORD(v7) = 0;
      v8 = 0LL;
LABEL_8:
      v16 = v8 != *((_QWORD *)v6 + 16);
      goto LABEL_9;
    }
  }
  else
  {
    v8 = 0LL;
  }
  if ( !v8 )
    goto LABEL_8;
  this = (DXGMONITOR *)*((_QWORD *)v6 + 16);
  if ( !this )
    goto LABEL_8;
  v32 = *(_QWORD *)(v8 + 16);
  v16 = 0;
  if ( v32 != *((_QWORD *)this + 2)
    || v32
    && (v33 = (DXGMONITOR *)RtlCompareMemory(this, (const void *)v8, v32 + 31),
        this = (DXGMONITOR *)(*(_QWORD *)(v8 + 16) + 31LL),
        v33 != this) )
  {
    v16 = 1;
  }
LABEL_9:
  v17 = a3 | v16;
  if ( v17 )
  {
    v18 = WdLogNewEntry5_WdDmmEvent(this);
    *(_QWORD *)(v18 + 24) = v6;
    WdLogEvent5_WdDmmEvent(v18);
    v21 = DXGMONITOR::_CleanupMonitorSourceModeAndFreqRanges(v6, v19, v20);
    v7 = v21;
    if ( v21 < 0 )
    {
      v35 = WdLogNewEntry5_WdError(v22);
      *(_QWORD *)(v35 + 24) = v7;
      WdLogEvent5_WdError(v35);
      return (unsigned int)v7;
    }
    if ( v8 )
    {
      *((_QWORD *)v6 + 16) = v8;
      if ( (int)DXGMONITOR::_ParseEDIDBaseBlock((DXGMONITOR ***)v6) < 0 )
        *((_QWORD *)v6 + 16) = 0LL;
      if ( (int)DXGMONITOR::_RetrieveHDRParamDriverOverrides(v6) < 0 )
      {
        v25 = DXGMONITOR::_ParseEDIDForHDRParams(v6, v23, v24);
        v27 = v25;
        if ( v25 < 0 )
        {
          v36 = WdLogNewEntry5_WdError(v26);
          *(_QWORD *)(v36 + 24) = v27;
          WdLogEvent5_WdError(v36);
        }
      }
      DXGMONITOR::_UpdateHDRParamsIfRequired(v6);
      DXGMONITOR::_SendAdjustedHDRParamsToDriver(v6);
      v28 = DXGMONITOR::_ParseEDIDForMsftVSDB(v6);
      v30 = v28;
      if ( v28 < 0 )
      {
        v37 = WdLogNewEntry5_WdError(v29);
        *(_QWORD *)(v37 + 24) = v30;
        WdLogEvent5_WdError(v37);
      }
      LODWORD(v7) = 0;
    }
    else
    {
      *((_QWORD *)v6 + 16) = 0LL;
    }
    if ( (*((_DWORD *)v6 + 6) & 0x10) != 0 )
      DXGMONITOR::_UpdateMonitorEDIDRegistryForGDI((struct _DEVICE_OBJECT **)v6);
    DXGMONITOR::_CheckPortraitFirstMonitor(v6);
  }
  if ( (!*((_DWORD *)v6 + 60) && !*((_DWORD *)v6 + 48) || v17)
    && (int)DXGMONITOR::_RetrieveIntegratedPanelNativeOverride((DXGMONITOR ***)v6) < 0 )
  {
    DXGMONITOR::_QueryDriverRecommendMonitorModes((D3DDDI_VIDEO_PRESENT_TARGET_ID *)v6);
  }
  if ( !*((_DWORD *)v6 + 60) && !*((_DWORD *)v6 + 48) )
    DXGMONITOR::_CreateDefaultMonitorProfileForWDDMv1_0(v6);
  if ( v17 )
  {
    if ( !*((_QWORD *)v6 + 2) )
    {
      v38 = WdLogNewEntry5_WdAssertion(this);
      WdLogEvent5_WdAssertion(v38);
    }
    MONITOR_MGR::_IssueMonitorEvent(*((_QWORD *)v6 + 2), *((unsigned int *)v6 + 7), 3LL, 0LL, *((_DWORD *)v6 + 104), a2);
  }
  return (unsigned int)v7;
}
