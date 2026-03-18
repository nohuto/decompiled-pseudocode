/*
 * XREFs of ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0108DA4
 * Callers:
 *     ?_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01089B4 (-_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01092BC (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEA.c)
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0109488 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARI.c)
 *     ?RebuildMonitorModeListCacheHelper@@YAJPEAVDXGADAPTER@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01E22A4 (-RebuildMonitorModeListCacheHelper@@YAJPEAVDXGADAPTER@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z @ 0x1C001029C (-EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?_UpdateHDRParamsIfRequired@DXGMONITOR@@AEAAXXZ @ 0x1C010612C (-_UpdateHDRParamsIfRequired@DXGMONITOR@@AEAAXXZ.c)
 *     ?_SendAdjustedHDRParamsToDriver@DXGMONITOR@@AEAAJXZ @ 0x1C0106548 (-_SendAdjustedHDRParamsToDriver@DXGMONITOR@@AEAAJXZ.c)
 *     ?_RetrieveHDRParamDriverOverrides@DXGMONITOR@@AEAAJXZ @ 0x1C0106620 (-_RetrieveHDRParamDriverOverrides@DXGMONITOR@@AEAAJXZ.c)
 *     ?_ParseEDIDForHDRParams@DXGMONITOR@@AEAAJXZ @ 0x1C01066DC (-_ParseEDIDForHDRParams@DXGMONITOR@@AEAAJXZ.c)
 *     ?_ParseEDIDBaseBlock@DXGMONITOR@@AEAAJXZ @ 0x1C01068A8 (-_ParseEDIDBaseBlock@DXGMONITOR@@AEAAJXZ.c)
 *     ?_RetrieveIntegratedPanelNativeOverride@DXGMONITOR@@QEAAJXZ @ 0x1C0106C90 (-_RetrieveIntegratedPanelNativeOverride@DXGMONITOR@@QEAAJXZ.c)
 *     ?_CleanupMonitorSourceModeAndFreqRanges@DXGMONITOR@@AEAAJXZ @ 0x1C0106D24 (-_CleanupMonitorSourceModeAndFreqRanges@DXGMONITOR@@AEAAJXZ.c)
 *     ?_CheckPortraitFirstMonitor@DXGMONITOR@@AEAAJXZ @ 0x1C0106F44 (-_CheckPortraitFirstMonitor@DXGMONITOR@@AEAAJXZ.c)
 *     ?_QueryDriverRecommendMonitorModes@DXGMONITOR@@AEAAJXZ @ 0x1C0106FB4 (-_QueryDriverRecommendMonitorModes@DXGMONITOR@@AEAAJXZ.c)
 *     ?_UpdateMonitorEDIDRegistryForGDI@DXGMONITOR@@AEAAJXZ @ 0x1C0107A98 (-_UpdateMonitorEDIDRegistryForGDI@DXGMONITOR@@AEAAJXZ.c)
 *     ?ConvertMonitorCapablitiesOrigin@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@PEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C0109DE8 (-ConvertMonitorCapablitiesOrigin@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@PEAW4_D3DKMDT_MONIT.c)
 *     ?_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0115208 (-_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_D.c)
 *     ?AddEdid@EDIDCACHE@@QEAAXPEAVDXGADAPTER@@IPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C012189C (-AddEdid@EDIDCACHE@@QEAAXPEAVDXGADAPTER@@IPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z.c)
 *     MonitorLogBadEDID @ 0x1C01E4118 (MonitorLogBadEDID.c)
 *     ?_CreateDefaultMonitorProfileForWDDMv1_0@DXGMONITOR@@AEAAJXZ @ 0x1C01E7CD8 (-_CreateDefaultMonitorProfileForWDDMv1_0@DXGMONITOR@@AEAAJXZ.c)
 */

__int64 __fastcall DXGMONITOR::_UpdateEDIDBaseBlock(
        DXGMONITOR *this,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 *v4; // rsi
  char v5; // r14
  DXGMONITOR *v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rsi
  unsigned int v10; // edi
  __int64 v11; // rcx
  struct DXGADAPTER *v12; // rbp
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  EDIDCACHE *v16; // rcx
  int IsEDIDBaseBlock; // eax
  bool v18; // bp
  char v19; // bp
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rdi
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v43; // rax
  DXGMONITOR *v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  enum _D3DKMDT_MONITOR_CAPABILITIES_ORIGIN v48; // [rsp+70h] [rbp+18h] BYREF

  v4 = (__int64 *)*((_QWORD *)this + 15);
  v5 = a3;
  v7 = this;
  LODWORD(v8) = 0;
  if ( v4 && *((_DWORD *)this + 28) )
  {
    v9 = *v4;
    ConvertMonitorCapablitiesOrigin(*(unsigned int *)(v9 + 8), &v48);
    v10 = *((_DWORD *)v7 + 7);
    v11 = *(_QWORD *)(*((_QWORD *)v7 + 2) + 8LL);
    v12 = *(struct DXGADAPTER **)(v11 + 16);
    v16 = (EDIDCACHE *)*((_QWORD *)DXGGLOBAL::GetGlobal(v11, v13, v14, v15) + 85);
    if ( v16 )
      EDIDCACHE::AddEdid(v16, v12, v10, (const unsigned __int8 *)(v9 + 24), v48);
    IsEDIDBaseBlock = EDIDV1_IsEDIDBaseBlock((unsigned __int8 *)(v9 + 24));
    v8 = IsEDIDBaseBlock;
    if ( IsEDIDBaseBlock < 0 )
    {
      v43 = WdLogNewEntry5_WdWarning(this, a2, a3, a4);
      *(_QWORD *)(v43 + 24) = v9 + 24;
      *(_QWORD *)(v43 + 32) = v8;
      WdLogEvent5_WdWarning(v43);
      MonitorLogBadEDID(v9 + 24, (unsigned int)v8);
      LODWORD(v8) = 0;
      v9 = 0LL;
LABEL_8:
      v18 = v9 != *((_QWORD *)v7 + 16);
      goto LABEL_9;
    }
  }
  else
  {
    v9 = 0LL;
  }
  if ( !v9 )
    goto LABEL_8;
  this = (DXGMONITOR *)*((_QWORD *)v7 + 16);
  if ( !this )
    goto LABEL_8;
  a3 = *(_QWORD *)(v9 + 16);
  v18 = 0;
  if ( a3 != *((_QWORD *)this + 2)
    || a3
    && (v44 = (DXGMONITOR *)RtlCompareMemory(this, (const void *)v9, a3 + 31),
        this = (DXGMONITOR *)(*(_QWORD *)(v9 + 16) + 31LL),
        v44 != this) )
  {
    v18 = 1;
  }
LABEL_9:
  v19 = v5 | v18;
  if ( v19 )
  {
    v20 = WdLogNewEntry5_WdDmmEvent(this, a2, a3, a4);
    *(_QWORD *)(v20 + 24) = v7;
    WdLogEvent5_WdDmmEvent(v20);
    v24 = DXGMONITOR::_CleanupMonitorSourceModeAndFreqRanges(v7, v21, v22, v23);
    v8 = v24;
    if ( v24 < 0 )
    {
      v45 = WdLogNewEntry5_WdError(v26, v25);
      *(_QWORD *)(v45 + 24) = v8;
      WdLogEvent5_WdError(v45);
      return (unsigned int)v8;
    }
    if ( v9 )
    {
      *((_QWORD *)v7 + 16) = v9;
      if ( (int)DXGMONITOR::_ParseEDIDBaseBlock((DXGMONITOR ***)v7, v25, v27, v28) < 0 )
        *((_QWORD *)v7 + 16) = 0LL;
      if ( (int)DXGMONITOR::_RetrieveHDRParamDriverOverrides(v7, v29, v30, v31) < 0 )
      {
        v35 = DXGMONITOR::_ParseEDIDForHDRParams(v7, v32, v33, v34);
        v38 = v35;
        if ( v35 < 0 )
        {
          v46 = WdLogNewEntry5_WdError(v37, v36);
          *(_QWORD *)(v46 + 24) = v38;
          WdLogEvent5_WdError(v46);
        }
      }
      DXGMONITOR::_UpdateHDRParamsIfRequired(v7);
      DXGMONITOR::_SendAdjustedHDRParamsToDriver(v7, v39, v40, v41);
      LODWORD(v8) = 0;
    }
    else
    {
      *((_QWORD *)v7 + 16) = 0LL;
    }
    if ( (*((_DWORD *)v7 + 6) & 0x10) != 0 )
      DXGMONITOR::_UpdateMonitorEDIDRegistryForGDI((struct _DEVICE_OBJECT **)v7, v25, v27, v28);
    DXGMONITOR::_CheckPortraitFirstMonitor(v7);
  }
  if ( (!*((_DWORD *)v7 + 50) && !*((_DWORD *)v7 + 38) || v19)
    && (int)DXGMONITOR::_RetrieveIntegratedPanelNativeOverride((DXGMONITOR ***)v7, (__int64)a2, a3, a4) < 0 )
  {
    DXGMONITOR::_QueryDriverRecommendMonitorModes((D3DDDI_VIDEO_PRESENT_TARGET_ID *)v7, (__int64)a2, a3, a4);
  }
  if ( !*((_DWORD *)v7 + 50) && !*((_DWORD *)v7 + 38) )
    DXGMONITOR::_CreateDefaultMonitorProfileForWDDMv1_0(v7);
  if ( v19 )
  {
    if ( !*((_QWORD *)v7 + 2) )
    {
      v47 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
      WdLogEvent5_WdAssertion(v47);
    }
    MONITOR_MGR::_IssueMonitorEvent(*((_QWORD *)v7 + 2), *((unsigned int *)v7 + 7), 3LL, 0LL, *((_DWORD *)v7 + 94), a2);
  }
  return (unsigned int)v8;
}
