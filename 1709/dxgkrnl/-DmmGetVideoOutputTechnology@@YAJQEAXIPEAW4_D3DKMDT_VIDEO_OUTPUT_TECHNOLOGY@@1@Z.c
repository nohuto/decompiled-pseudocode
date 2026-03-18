/*
 * XREFs of ?DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x1C00B3F80
 * Callers:
 *     DxgkIsVirtualizationDisabledForTarget @ 0x1C00B3A10 (DxgkIsVirtualizationDisabledForTarget.c)
 *     DpiGdoDispatchInternalIoctl @ 0x1C00B80B0 (DpiGdoDispatchInternalIoctl.c)
 *     DxgkGetAllMonitorDevicesFromSessionView @ 0x1C00B85E8 (DxgkGetAllMonitorDevicesFromSessionView.c)
 *     DpiPdoDispatchInternalIoctl @ 0x1C00B9E40 (DpiPdoDispatchInternalIoctl.c)
 *     ??ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAIPEAUDXGK_STEREO_PARAMS@@01@Z @ 0x1C00D5738 (--ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAIPEAUDXGK_STEREO_PARAMS@@01@Z.c)
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C00E2B88 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION.c)
 *     ?CompleteTopologyTransitionCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00E5E50 (-CompleteTopologyTransitionCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C010C1DC (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEA.c)
 *     ??ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1C01A1324 (--ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z.c)
 *     ?GetEdidForTarget@EDIDCACHE@@QEAAJPEAVDXGADAPTER@@IEQEAEPEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C01AE778 (-GetEdidForTarget@EDIDCACHE@@QEAAJPEAVDXGADAPTER@@IEQEAEPEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGI.c)
 *     ?UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C01D877C (-UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z.c)
 *     ?_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01FCC38 (-_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0007DEC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C00082F4 (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DmmGetVideoOutputTechnology(
        DXGADAPTER *a1,
        unsigned int a2,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *a3,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *a4)
{
  __int64 v4; // r14
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rbp
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rcx
  unsigned int v14; // edi
  void (__fastcall ***v15)(_QWORD, __int64); // rcx
  int v16; // ebx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // [rsp+40h] [rbp+8h] BYREF
  __int64 v24; // [rsp+50h] [rbp+18h]

  v4 = a2;
  if ( a3 )
    *a3 = D3DKMDT_VOT_UNINITIALIZED;
  if ( a4 )
    *a4 = D3DKMDT_VOT_UNINITIALIZED;
  if ( !a1 )
  {
    v18 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v18 + 24) = 0LL;
LABEL_23:
    WdLogEvent5_WdError(v18);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v19 = WdLogNewEntry5_WdAssertion(v8);
    WdLogEvent5_WdAssertion(v19);
  }
  v9 = *((_QWORD *)a1 + 288);
  if ( !v9 )
  {
    v18 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v18 + 24) = a1;
    goto LABEL_23;
  }
  v10 = *(_QWORD *)(v9 + 88);
  if ( v10 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v23, *(_QWORD *)(v9 + 88));
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v10 + 80) + 72LL));
    v11 = *(_QWORD *)(v10 + 80);
    v24 = v11;
    v12 = IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(v11, v4);
    if ( v12 )
    {
      if ( a3 )
        *a3 = *(enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)(v12 + 80);
      if ( a4 )
        *a4 = *(enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)(v12 + 84);
      v14 = 0;
    }
    else
    {
      v21 = WdLogNewEntry5_WdError(v13);
      *(_QWORD *)(v21 + 24) = v4;
      WdLogEvent5_WdError(v21);
      v14 = -1071774971;
    }
    if ( v11 )
    {
      v15 = (void (__fastcall ***)(_QWORD, __int64))(v11 + 64);
      v16 = _InterlockedDecrement((volatile signed __int32 *)(v11 + 72));
      if ( v16 )
      {
        if ( v16 < 0 )
        {
          v22 = WdLogNewEntry5_WdError(v15);
          *(_QWORD *)(v22 + 24) = v16;
          WdLogEvent5_WdError(v22);
        }
      }
      else if ( v15 )
      {
        (**v15)(v15, 1LL);
      }
    }
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v23 + 40));
    return v14;
  }
  else
  {
    v20 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v20 + 24) = a1;
    WdLogEvent5_WdError(v20);
    return 3223192373LL;
  }
}
