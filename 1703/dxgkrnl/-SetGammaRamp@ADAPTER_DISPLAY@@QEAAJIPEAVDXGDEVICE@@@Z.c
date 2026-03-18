/*
 * XREFs of ?SetGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAVDXGDEVICE@@@Z @ 0x1C00E6CD4
 * Callers:
 *     ?DxgkCddSetGammaRamp@@YAJQEAXIPEBU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@@Z @ 0x1C00A3210 (-DxgkCddSetGammaRamp@@YAJQEAXIPEBU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@@Z.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAU_D3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00E2528 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAU_D3DKMT_VIDPN_SOURCE.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z @ 0x1C00E78D4 (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z.c)
 *     ?UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z @ 0x1C00E7A8C (-UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z.c)
 *     ?AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@PEBIIU_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@@Z @ 0x1C00E801C (-AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE.c)
 *     ?ReleaseSharedVidPnSourceOwner@ADAPTER_DISPLAY@@AEAAEPEAVDXGDEVICE@@I@Z @ 0x1C0101884 (-ReleaseSharedVidPnSourceOwner@ADAPTER_DISPLAY@@AEAAEPEAVDXGDEVICE@@I@Z.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z @ 0x1C0101970 (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z.c)
 *     ?ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C0104CEC (-ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     DxgkAdjustFullscreenGamma @ 0x1C017B820 (DxgkAdjustFullscreenGamma.c)
 *     DxgkSetGammaRamp @ 0x1C018BE70 (DxgkSetGammaRamp.c)
 *     ?UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01D9940 (-UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000622C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C00062F0 (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     DmmUpdateGammaRampOnAllClientVidPnPathsFromSource @ 0x1C00A2B34 (DmmUpdateGammaRampOnAllClientVidPnPathsFromSource.c)
 *     ?SuspendScheduler@ADAPTER_RENDER@@QEAAJEE@Z @ 0x1C00CD184 (-SuspendScheduler@ADAPTER_RENDER@@QEAAJEE@Z.c)
 *     ?ResumeScheduler@ADAPTER_RENDER@@QEAAXEE@Z @ 0x1C00CD204 (-ResumeScheduler@ADAPTER_RENDER@@QEAAXEE@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?AdjustFullscreenGammaRampDXGI1@ADAPTER_DISPLAY@@QEAAXPEAU_D3DDDI_GAMMA_RAMP_DXGI_1@@0PEAUDXGK_GAMMA_ADJUSTMENT@@@Z @ 0x1C016FE08 (-AdjustFullscreenGammaRampDXGI1@ADAPTER_DISPLAY@@QEAAXPEAU_D3DDDI_GAMMA_RAMP_DXGI_1@@0PEAUDXGK_G.c)
 *     ?AdjustFullscreenGammaRampRGB256x3x16@ADAPTER_DISPLAY@@QEAAXPEAU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@0PEAUDXGK_GAMMA_ADJUSTMENT@@@Z @ 0x1C016FEA4 (-AdjustFullscreenGammaRampRGB256x3x16@ADAPTER_DISPLAY@@QEAAXPEAU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::SetGammaRamp(PERESOURCE **this, unsigned int a2, struct DXGDEVICE *a3)
{
  __int64 v4; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  PERESOURCE *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r12
  char v13; // r15
  D3DDDI_GAMMARAMP_TYPE v14; // r14d
  struct DXGK_GAMMA_ADJUSTMENT *v15; // r13
  D3DDDI_GAMMA_RAMP_RGB256x3x16 *v16; // rbx
  SIZE_T v17; // rcx
  PERESOURCE *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  int updated; // esi
  __int64 v23; // rcx
  __int64 v25; // rax
  struct _D3DDDI_GAMMA_RAMP_RGB256x3x16 *v26; // rsi
  struct _D3DDDI_GAMMA_RAMP_RGB256x3x16 *v27; // rax
  ADAPTER_DISPLAY *v28; // rcx
  __int64 v29; // rax
  struct _D3DKMDT_GAMMA_RAMP v30; // [rsp+20h] [rbp-20h] BYREF

  v4 = a2;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    v25 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
    *(_QWORD *)(v25 + 24) = 5794LL;
    WdLogEvent5_WdAssertion(v25);
  }
  if ( !*((_DWORD *)this[2] + 414) )
    return 0LL;
  v10 = this[14];
  v11 = v4;
  v12 = 401 * v4;
  if ( !v10[401 * v4 + 86] )
    goto LABEL_9;
  if ( LODWORD(v10[v12 + 87]) != 1 )
    goto LABEL_8;
  if ( v10[v12 + 88] )
  {
    a3 = (struct DXGDEVICE *)v10[v12 + 88];
    goto LABEL_9;
  }
  if ( !a3 )
LABEL_8:
    a3 = (struct DXGDEVICE *)v10[401 * v4 + 86];
LABEL_9:
  v13 = 0;
  if ( !a3 )
    goto LABEL_12;
  v14 = *((_DWORD *)a3 + v4 + 370);
  v15 = (struct DXGK_GAMMA_ADJUSTMENT *)*((_QWORD *)a3 + v4 + 201);
  v16 = (D3DDDI_GAMMA_RAMP_RGB256x3x16 *)*((_QWORD *)a3 + v4 + 169);
  v17 = *((unsigned int *)a3 + v11 + 386);
  v30.Data.pRgb256x3x16 = v16;
  v30.Type = v14;
  v30.DataSize = v17;
  if ( v15 )
  {
    if ( !v17 )
    {
      v17 = 1536LL;
      v14 = D3DDDI_GAMMARAMP_RGB256x3x16;
      v30.DataSize = 1536LL;
      v30.Type = D3DDDI_GAMMARAMP_RGB256x3x16;
    }
    v26 = v16;
    v27 = (struct _D3DDDI_GAMMA_RAMP_RGB256x3x16 *)operator new(v17, 0x4B677844u, PagedPool);
    v30.Data.pRgb256x3x16 = v27;
    v16 = v27;
    if ( !v27 )
      return 3221225495LL;
    v13 = 1;
    if ( v14 == D3DDDI_GAMMARAMP_RGB256x3x16 )
    {
      ADAPTER_DISPLAY::AdjustFullscreenGammaRampRGB256x3x16(v28, v26, v27, v15);
    }
    else if ( v26 )
    {
      ADAPTER_DISPLAY::AdjustFullscreenGammaRampDXGI1(
        v28,
        (struct _D3DDDI_GAMMA_RAMP_DXGI_1 *)v26,
        (struct _D3DDDI_GAMMA_RAMP_DXGI_1 *)v27,
        v15);
    }
  }
  if ( !v16 )
  {
LABEL_12:
    v18 = this[14];
    v30.Type = D3DDDI_GAMMARAMP_RGB256x3x16;
    v30.DataSize = 1536LL;
    v16 = (D3DDDI_GAMMA_RAMP_RGB256x3x16 *)v18[v12 + 108];
    v30.Data.pRgb256x3x16 = v16;
    if ( !v16 )
    {
      v30.DataSize = 0LL;
      v30.Data.pRgb256x3x16 = 0LL;
      v30.Type = D3DDDI_GAMMARAMP_DEFAULT;
    }
  }
  if ( DXGADAPTER::IsFullWDDMAdapter((DXGADAPTER *)this[2])
    && (updated = ADAPTER_RENDER::SuspendScheduler(*(ADAPTER_RENDER **)(v19 + 2288), 0, 0LL), updated < 0) )
  {
    if ( v13 && v16 )
      ExFreePoolWithTag(v16, 0);
    v29 = WdLogNewEntry5_WdError(v21, v20);
    *(_QWORD *)(v29 + 24) = this;
    WdLogEvent5_WdError(v29);
  }
  else
  {
    updated = DmmUpdateGammaRampOnAllClientVidPnPathsFromSource((DXGADAPTER *)this[2], a2, &v30);
    if ( v13 && v16 )
      ExFreePoolWithTag(v16, 0);
    if ( DXGADAPTER::IsFullWDDMAdapter((DXGADAPTER *)this[2]) )
      ADAPTER_RENDER::ResumeScheduler(*(ADAPTER_RENDER **)(v23 + 2288), 0LL, 0);
  }
  return (unsigned int)updated;
}
