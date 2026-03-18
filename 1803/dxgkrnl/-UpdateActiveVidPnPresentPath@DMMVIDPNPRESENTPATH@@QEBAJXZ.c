/*
 * XREFs of ?UpdateActiveVidPnPresentPath@DMMVIDPNPRESENTPATH@@QEBAJXZ @ 0x1C00BF45C
 * Callers:
 *     ?SetDriverGammaRamp@DMMVIDPNPRESENTPATH@@QEBAJXZ @ 0x1C00BF2FC (-SetDriverGammaRamp@DMMVIDPNPRESENTPATH@@QEBAJXZ.c)
 *     ?DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE@@I@Z @ 0x1C00DB168 (-DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_C.c)
 *     ?DmmUpdateContentOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@@@Z @ 0x1C0215534 (-DmmUpdateContentOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@.c)
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C021CE80 (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?Serialize@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C00BEEAC (-Serialize@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z.c)
 *     ?GetContentRotationHw@DMMVIDPNPRESENTPATH@@QEBA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@XZ @ 0x1C00BEFC4 (-GetContentRotationHw@DMMVIDPNPRESENTPATH@@QEBA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@XZ.c)
 *     ?DdiUpdateActiveVidPnPresentPath@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_UPDATEACTIVEVIDPNPRESENTPATH@@@Z @ 0x1C00E1180 (-DdiUpdateActiveVidPnPresentPath@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_UPDATEACTIVEVIDPNPRESENTPATH.c)
 */

__int64 __fastcall DMMVIDPNPRESENTPATH::UpdateActiveVidPnPresentPath(DMMVIDPNPRESENTPATH *this)
{
  __int64 v2; // rdi
  __int64 v3; // rax
  __int64 v4; // rsi
  DXGADAPTER **v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rcx
  _DXGKARG_UPDATEACTIVEVIDPNPRESENTPATH *v8; // rdx
  _D3DKMDT_VIDPN_PRESENT_PATH *v9; // rax
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  D3DKMDT_COLOR_COEFF_DYNAMIC_RANGES VidPnTargetColorCoeffDynamicRanges; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  D3DKMDT_COLOR_COEFF_DYNAMIC_RANGES v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int64 v22; // rax
  int updated; // eax
  __int64 v24; // rcx
  __int64 v25; // rdi
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  _D3DKMDT_VIDPN_PRESENT_PATH v31; // [rsp+20h] [rbp-2F8h] BYREF
  _DXGKARG_UPDATEACTIVEVIDPNPRESENTPATH v32; // [rsp+190h] [rbp-188h] BYREF

  v2 = *(_QWORD *)(*((_QWORD *)this + 12) + 96LL);
  v3 = *(_QWORD *)(v2 + 40);
  if ( !v3 )
  {
    v27 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v27);
    v3 = *(_QWORD *)(v2 + 40);
  }
  v4 = *(_QWORD *)(v3 + 88);
  v5 = *(DXGADAPTER ***)(v4 + 8);
  if ( !v5 )
  {
    v28 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v28);
    v5 = *(DXGADAPTER ***)(v4 + 8);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(v5[2]) )
  {
    v29 = WdLogNewEntry5_WdAssertion(v6);
    WdLogEvent5_WdAssertion(v29);
  }
  if ( !*(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 12) + 96LL) + 409LL) )
    return 0LL;
  memset(&v32, 0, sizeof(v32));
  DMMVIDPNPRESENTPATH::Serialize(this, &v31);
  v7 = 2LL;
  v8 = &v32;
  v9 = &v31;
  do
  {
    v10 = *(_OWORD *)&v9->ContentTransformation.ScalingSupport;
    *(_OWORD *)&v8->VidPnPresentPathInfo.VidPnSourceId = *(_OWORD *)&v9->VidPnSourceId;
    v11 = *(_OWORD *)&v9->VisibleFromActiveTLOffset.cy;
    *(_OWORD *)&v8->VidPnPresentPathInfo.ContentTransformation.ScalingSupport = v10;
    VidPnTargetColorCoeffDynamicRanges = v9->VidPnTargetColorCoeffDynamicRanges;
    *(_OWORD *)&v8->VidPnPresentPathInfo.VisibleFromActiveTLOffset.cy = v11;
    v13 = *(_OWORD *)&v9->Content;
    v8->VidPnPresentPathInfo.VidPnTargetColorCoeffDynamicRanges = VidPnTargetColorCoeffDynamicRanges;
    v14 = *(_OWORD *)&v9->CopyProtection.OEMCopyProtection[4];
    *(_OWORD *)&v8->VidPnPresentPathInfo.Content = v13;
    v15 = *(_OWORD *)&v9->CopyProtection.OEMCopyProtection[20];
    *(_OWORD *)&v8->VidPnPresentPathInfo.CopyProtection.OEMCopyProtection[4] = v14;
    v16 = *(_OWORD *)&v9->CopyProtection.OEMCopyProtection[36];
    v9 = (_D3DKMDT_VIDPN_PRESENT_PATH *)((char *)v9 + 128);
    *(_OWORD *)&v8->VidPnPresentPathInfo.CopyProtection.OEMCopyProtection[20] = v15;
    v8 = (_DXGKARG_UPDATEACTIVEVIDPNPRESENTPATH *)((char *)v8 + 128);
    *(_OWORD *)&v8[-1].VidPnPresentPathInfo.GammaRamp.DataSize = v16;
    --v7;
  }
  while ( v7 );
  v17 = *(_OWORD *)&v9->ContentTransformation.ScalingSupport;
  *(_OWORD *)&v8->VidPnPresentPathInfo.VidPnSourceId = *(_OWORD *)&v9->VidPnSourceId;
  v18 = *(_OWORD *)&v9->VisibleFromActiveTLOffset.cy;
  *(_OWORD *)&v8->VidPnPresentPathInfo.ContentTransformation.ScalingSupport = v17;
  v19 = v9->VidPnTargetColorCoeffDynamicRanges;
  *(_OWORD *)&v8->VidPnPresentPathInfo.VisibleFromActiveTLOffset.cy = v18;
  v20 = *(_OWORD *)&v9->Content;
  v8->VidPnPresentPathInfo.VidPnTargetColorCoeffDynamicRanges = v19;
  v21 = *(_OWORD *)&v9->CopyProtection.OEMCopyProtection[4];
  v22 = *(_QWORD *)&v9->CopyProtection.OEMCopyProtection[20];
  *(_OWORD *)&v8->VidPnPresentPathInfo.Content = v20;
  *(_OWORD *)&v8->VidPnPresentPathInfo.CopyProtection.OEMCopyProtection[4] = v21;
  *(_QWORD *)&v8->VidPnPresentPathInfo.CopyProtection.OEMCopyProtection[20] = v22;
  v32.VidPnPresentPathInfo.ContentTransformation.Rotation = DMMVIDPNPRESENTPATH::GetContentRotationHw(this);
  updated = ADAPTER_DISPLAY::DdiUpdateActiveVidPnPresentPath((ADAPTER_DISPLAY *)v5, &v32);
  v25 = updated;
  if ( updated >= 0 )
    return 0LL;
  v30 = WdLogNewEntry5_WdError(v24);
  *(_QWORD *)(v30 + 24) = this;
  *(_QWORD *)(v30 + 32) = v25;
  WdLogEvent5_WdError(v30);
  return (unsigned int)v25;
}
