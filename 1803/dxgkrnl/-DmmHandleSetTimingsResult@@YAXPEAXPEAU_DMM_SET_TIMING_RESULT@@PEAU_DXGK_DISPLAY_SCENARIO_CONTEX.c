/*
 * XREFs of ?DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00DEA4C
 * Callers:
 *     ?ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B5E6C (-ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@.c)
 *     ?DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C010F42C (-DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCEN.c)
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01930B4 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 *     ?PowerOnOffVidPnTarget@VIDPN_MGR@@QEAAJIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0216514 (-PowerOnOffVidPnTarget@VIDPN_MGR@@QEAAJIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     DpIndicateConnectorChange @ 0x1C0038CA0 (DpIndicateConnectorChange.c)
 *     ?DriverSupportSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C00F48FC (-DriverSupportSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0156EAC (-RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_D.c)
 */

void __fastcall DmmHandleSetTimingsResult(
        ADAPTER_DISPLAY **this,
        struct _DMM_SET_TIMING_RESULT *a2,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3)
{
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  int updated; // eax
  __int64 v10; // rcx
  __int64 v11; // rax
  struct _DEVICE_OBJECT *v12; // rdx
  struct _DEVICE_OBJECT *v13; // rcx
  int CurrentProcessSessionId; // [rsp+50h] [rbp+8h] BYREF

  if ( !DXGADAPTER::IsCoreResourceSharedOwner((DXGADAPTER *)this) )
  {
    v7 = WdLogNewEntry5_WdAssertion(v6);
    WdLogEvent5_WdAssertion(v7);
  }
  if ( *((_DWORD *)this + 44) == 1 && !*((_BYTE *)this + 2373) )
  {
    if ( (*(_BYTE *)a2 & 2) != 0 )
    {
      if ( *((_BYTE *)DXGGLOBAL::GetGlobal(v6) + 1745) )
      {
        CurrentProcessSessionId = PsGetCurrentProcessSessionId(v8);
        updated = ZwUpdateWnfStateData(
                    &WNF_DXGK_PATH_FAILED_OR_INVALIDATED,
                    0LL,
                    0LL,
                    0LL,
                    &CurrentProcessSessionId,
                    0,
                    0);
      }
      else
      {
        updated = ADAPTER_DISPLAY::RequestAsyncDisplaySwitchCallout(this[307], 0LL, a3);
      }
      if ( updated < 0 )
      {
        v11 = WdLogNewEntry5_WdError(v10);
        *(_QWORD *)(v11 + 24) = this;
        WdLogEvent5_WdError(v11);
      }
    }
    if ( (*(_BYTE *)a2 & 1) != 0 )
    {
      if ( DXGADAPTER::DriverSupportSetTimingsFromVidPn((DXGADAPTER *)this) )
      {
        DpIndicateConnectorChange(v12);
      }
      else
      {
        v13 = (struct _DEVICE_OBJECT *)*((_QWORD *)v12->DeviceExtension + 19);
        if ( v13 )
          IoInvalidateDeviceRelations(v13, BusRelations);
      }
    }
  }
}
