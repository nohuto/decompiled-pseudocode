/*
 * XREFs of DxgkQueryDmmInterface @ 0x1C00C79F4
 * Callers:
 *     ?ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B5E6C (-ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@.c)
 *     DxgkUpdateGdiInfo @ 0x1C00C7850 (DxgkUpdateGdiInfo.c)
 *     ??ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1C018FFB8 (--ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z.c)
 *     ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z @ 0x1C01916F8 (-GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z.c)
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01930B4 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 *     ?DxgkUpdateGdiInfo@Win81@@YAJPEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C01E25F0 (-DxgkUpdateGdiInfo@Win81@@YAJPEAXIIHPEAU_DPI_INFORMATION@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?QueryDxgDmmInterface@VIDPN_MGR@@QEAAXPEAPEBU_DXGDMM_INTERFACE@@@Z @ 0x1C00BA058 (-QueryDxgDmmInterface@VIDPN_MGR@@QEAAXPEAPEBU_DXGDMM_INTERFACE@@@Z.c)
 */

__int64 __fastcall DxgkQueryDmmInterface(DXGADAPTER *this, __int64 a2, const struct _DXGDMM_INTERFACE **a3)
{
  __int64 v5; // rcx
  __int64 v6; // rax
  VIDPN_MGR *v7; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax

  if ( !a3 )
  {
    v9 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v9);
  }
  *a3 = 0LL;
  if ( !this )
  {
    v10 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v10 + 24) = 0LL;
LABEL_11:
    WdLogEvent5_WdError(v10);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v5);
    WdLogEvent5_WdAssertion(v11);
  }
  v6 = *((_QWORD *)this + 307);
  if ( !v6 )
  {
    v10 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v10 + 24) = this;
    goto LABEL_11;
  }
  v7 = *(VIDPN_MGR **)(v6 + 88);
  if ( v7 )
  {
    VIDPN_MGR::QueryDxgDmmInterface(v7, a3);
    return 0LL;
  }
  else
  {
    v12 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v12 + 24) = this;
    WdLogEvent5_WdError(v12);
    return 3223192385LL;
  }
}
