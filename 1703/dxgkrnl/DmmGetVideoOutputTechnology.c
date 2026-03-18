/*
 * XREFs of DmmGetVideoOutputTechnology @ 0x1C00AB07C
 * Callers:
 *     DpiPdoDispatchInternalIoctl @ 0x1C00A86E0 (DpiPdoDispatchInternalIoctl.c)
 *     ?CompleteTopologyTransitionCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00A9200 (-CompleteTopologyTransitionCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     DpiGdoDispatchInternalIoctl @ 0x1C00A9E90 (DpiGdoDispatchInternalIoctl.c)
 *     DxgkGetAllMonitorDevicesFromSessionView @ 0x1C00AA3B8 (DxgkGetAllMonitorDevicesFromSessionView.c)
 *     DxgkIsVirtualizationDisabledForTarget @ 0x1C00AAF40 (DxgkIsVirtualizationDisabledForTarget.c)
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C00AC900 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION.c)
 *     ??ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAIPEAUDXGK_STEREO_PARAMS@@01@Z @ 0x1C00F54D0 (--ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAIPEAUDXGK_STEREO_PARAMS@@01@Z.c)
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01092BC (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEA.c)
 *     ??ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1C018CBB0 (--ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z.c)
 *     ?GetEdidForTarget@EDIDCACHE@@QEAAJPEAVDXGADAPTER@@IEQEAEPEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C0198918 (-GetEdidForTarget@EDIDCACHE@@QEAAJPEAVDXGADAPTER@@IEQEAEPEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGI.c)
 *     ?UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C01BFFE0 (-UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z.c)
 *     ?_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01E2478 (-_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C00084EC (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B908 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C000CBB8 (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000CD70 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 */

__int64 __fastcall DmmGetVideoOutputTechnology(DXGADAPTER *a1, __int64 a2, _DWORD *a3, _DWORD *a4)
{
  __int64 v4; // r14
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rbp
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned int v20; // edi
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // [rsp+40h] [rbp+8h] BYREF

  v4 = (unsigned int)a2;
  if ( a3 )
    *a3 = -2;
  if ( a4 )
    *a4 = -2;
  if ( !a1 )
  {
    v22 = WdLogNewEntry5_WdError(0LL, a2);
    *(_QWORD *)(v22 + 24) = 0LL;
LABEL_21:
    WdLogEvent5_WdError(v22);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v23 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
    WdLogEvent5_WdAssertion(v23);
  }
  v12 = *((_QWORD *)a1 + 285);
  if ( !v12 )
  {
    v22 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v22 + 24) = a1;
    goto LABEL_21;
  }
  v13 = *(_QWORD *)(v12 + 88);
  if ( v13 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v26, *(_QWORD *)(v12 + 88), v10, v11);
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v13 + 80) + 72LL));
    v14 = *(_QWORD *)(v13 + 80);
    v15 = IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(v14, v4);
    if ( v15 )
    {
      if ( a3 )
        *a3 = *(_DWORD *)(v15 + 80);
      if ( a4 )
        *a4 = *(_DWORD *)(v15 + 84);
      v20 = 0;
    }
    else
    {
      v25 = WdLogNewEntry5_WdError(v17, v16);
      *(_QWORD *)(v25 + 24) = v4;
      WdLogEvent5_WdError(v25);
      v20 = -1071774971;
    }
    if ( v14 )
      ReferenceCounted::Release((ReferenceCounted *)(v14 + 64), v16);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v26 + 40), v16, v18, v19);
    return v20;
  }
  else
  {
    v24 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v24 + 24) = a1;
    WdLogEvent5_WdError(v24);
    return 3223192373LL;
  }
}
