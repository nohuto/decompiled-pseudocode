/*
 * XREFs of ?DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x1C00AB1D4
 * Callers:
 *     DpiGdoDispatchInternalIoctl @ 0x1C009FB10 (DpiGdoDispatchInternalIoctl.c)
 *     DxgkGetAllMonitorDevicesFromSessionView @ 0x1C009FEC4 (DxgkGetAllMonitorDevicesFromSessionView.c)
 *     DxgkIsVirtualizationDisabledForTarget @ 0x1C00AB090 (DxgkIsVirtualizationDisabledForTarget.c)
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C00C5A7C (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION.c)
 *     ?CompleteTopologyTransitionCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00D6910 (-CompleteTopologyTransitionCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     DpiPdoDispatchInternalIoctl @ 0x1C0109360 (DpiPdoDispatchInternalIoctl.c)
 *     ??ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z @ 0x1C018F320 (--ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z.c)
 *     ??ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1C018FFB8 (--ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z.c)
 *     ?HMDDisplayOnOff@@YAJPEAVDXGADAPTER@@IW4_HMD_POWER_REQUEST@@@Z @ 0x1C01C5780 (-HMDDisplayOnOff@@YAJPEAVDXGADAPTER@@IW4_HMD_POWER_REQUEST@@@Z.c)
 *     ?UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C01E2C88 (-UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z.c)
 *     ?_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C022ABC0 (-_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@.c)
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0235FAC (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEA.c)
 * Callees:
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0003570 (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0014350 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??1?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@XZ @ 0x1C001AF80 (--1-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@XZ.c)
 *     ??1?$auto_rc@$$CBVDMMVIDEOPRESENTTARGETSET@@@@QEAA@XZ @ 0x1C001AF9C (--1-$auto_rc@$$CBVDMMVIDEOPRESENTTARGETSET@@@@QEAA@XZ.c)
 */

__int64 __fastcall DmmGetVideoOutputTechnology(
        DXGADAPTER *a1,
        unsigned int a2,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *a3,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *a4)
{
  unsigned int v4; // ebx
  __int64 v5; // r15
  __int64 v9; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rbp
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // [rsp+50h] [rbp+8h] BYREF
  __int64 v19; // [rsp+60h] [rbp+18h] BYREF

  v4 = 0;
  v5 = a2;
  if ( a3 )
    *a3 = D3DKMDT_VOT_UNINITIALIZED;
  if ( a4 )
    *a4 = D3DKMDT_VOT_UNINITIALIZED;
  if ( !a1 )
  {
    v9 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v9 + 24) = 0LL;
LABEL_7:
    WdLogEvent5_WdError(v9);
    return 3223191554LL;
  }
  DXGADAPTER::IsCoreResourceSharedOwner(a1);
  v12 = *((_QWORD *)a1 + 307);
  if ( !v12 )
  {
    v9 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v9 + 24) = a1;
    goto LABEL_7;
  }
  v13 = *(_QWORD *)(v12 + 88);
  if ( v13 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v19, *(_QWORD *)(v12 + 88));
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v13 + 80) + 72LL));
    v18 = *(_QWORD *)(v13 + 80);
    v15 = IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(v18, v5);
    if ( v15 )
    {
      if ( a3 )
        *a3 = *(enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)(v15 + 80);
      if ( a4 )
        *a4 = *(enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)(v15 + 84);
    }
    else
    {
      v17 = WdLogNewEntry5_WdError(v16);
      *(_QWORD *)(v17 + 24) = v5;
      WdLogEvent5_WdError(v17);
      v4 = -1071774971;
    }
    auto_rc<DMMVIDEOPRESENTTARGETSET const>::~auto_rc<DMMVIDEOPRESENTTARGETSET const>(&v18);
    EXCLUSIVEACCESS<VIDPN_MGR>::~EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v19);
    return v4;
  }
  else
  {
    v14 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v14 + 24) = a1;
    WdLogEvent5_WdError(v14);
    return 3223192373LL;
  }
}
