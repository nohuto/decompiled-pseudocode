/*
 * XREFs of DxgkQueryDmmInterface @ 0x1C00A7230
 * Callers:
 *     DxgkUpdateGdiInfo @ 0x1C00A70D0 (DxgkUpdateGdiInfo.c)
 *     ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1PEAUDXGK_STEREO_PARAMS@@@Z @ 0x1C00A74A4 (-GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1PEAUDXGK_STEREO_PA.c)
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00BF7F0 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 *     ?ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00ED624 (-ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@.c)
 *     ??ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1C018CBB0 (--ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z.c)
 *     ?DxgkUpdateGdiInfo@Win81@@YAJPEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C01BF9FC (-DxgkUpdateGdiInfo@Win81@@YAJPEAXIIHPEAU_DPI_INFORMATION@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?QueryDxgDmmInterface@VIDPN_MGR@@QEAAXPEAPEBU_DXGDMM_INTERFACE@@@Z @ 0x1C00E4AE4 (-QueryDxgDmmInterface@VIDPN_MGR@@QEAAXPEAPEBU_DXGDMM_INTERFACE@@@Z.c)
 */

__int64 __fastcall DxgkQueryDmmInterface(DXGADAPTER *this, __int64 a2, const struct _DXGDMM_INTERFACE **a3, __int64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  VIDPN_MGR *v11; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax

  if ( !a3 )
  {
    v13 = WdLogNewEntry5_WdAssertion(this, a2, 0LL, a4);
    WdLogEvent5_WdAssertion(v13);
  }
  *a3 = 0LL;
  if ( !this )
  {
    v14 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v14 + 24) = 0LL;
LABEL_11:
    WdLogEvent5_WdError(v14);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    v15 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
    WdLogEvent5_WdAssertion(v15);
  }
  v10 = *((_QWORD *)this + 285);
  if ( !v10 )
  {
    v14 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v14 + 24) = this;
    goto LABEL_11;
  }
  v11 = *(VIDPN_MGR **)(v10 + 88);
  if ( v11 )
  {
    VIDPN_MGR::QueryDxgDmmInterface(v11, a3);
    return 0LL;
  }
  else
  {
    v16 = WdLogNewEntry5_WdError(0LL, v6);
    *(_QWORD *)(v16 + 24) = this;
    WdLogEvent5_WdError(v16);
    return 3223192385LL;
  }
}
