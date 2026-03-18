/*
 * XREFs of ?UpdateActiveVidPnPresentPath@DMMVIDPNPRESENTPATH@@QEBAJXZ @ 0x1C00A5868
 * Callers:
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C007B478 (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 *     ?SetDriverGammaRamp@DMMVIDPNPRESENTPATH@@QEBAJXZ @ 0x1C007C440 (-SetDriverGammaRamp@DMMVIDPNPRESENTPATH@@QEBAJXZ.c)
 *     ?DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE@@I@Z @ 0x1C00E223C (-DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_C.c)
 *     ?DmmUpdateContentOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@@@Z @ 0x1C01EE49C (-DmmUpdateContentOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?Serialize@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C00A5CC0 (-Serialize@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z.c)
 *     ?GetContentRotationHw@DMMVIDPNPRESENTPATH@@QEBA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@XZ @ 0x1C00A5DE0 (-GetContentRotationHw@DMMVIDPNPRESENTPATH@@QEBA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@XZ.c)
 *     ?DdiUpdateActiveVidPnPresentPath@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_UPDATEACTIVEVIDPNPRESENTPATH@@@Z @ 0x1C00AAE1C (-DdiUpdateActiveVidPnPresentPath@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_UPDATEACTIVEVIDPNPRESENTPATH.c)
 */

__int64 __fastcall DMMVIDPNPRESENTPATH::UpdateActiveVidPnPresentPath(DMMVIDPNPRESENTPATH *this)
{
  __int64 v2; // rbx
  __int64 v3; // rbx
  DXGADAPTER **v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rcx
  _DXGKARG_UPDATEACTIVEVIDPNPRESENTPATH *v7; // rdx
  _D3DKMDT_VIDPN_PRESENT_PATH *v8; // rax
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  D3DKMDT_COLOR_COEFF_DYNAMIC_RANGES VidPnTargetColorCoeffDynamicRanges; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  D3DKMDT_COLOR_COEFF_DYNAMIC_RANGES v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int64 v21; // rax
  int updated; // eax
  __int64 v23; // rcx
  __int64 v24; // rbx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  _D3DKMDT_VIDPN_PRESENT_PATH v30; // [rsp+20h] [rbp-2F8h] BYREF
  _DXGKARG_UPDATEACTIVEVIDPNPRESENTPATH v31; // [rsp+190h] [rbp-188h] BYREF

  v2 = *(_QWORD *)(*((_QWORD *)this + 12) + 96LL);
  if ( !*(_QWORD *)(v2 + 40) )
  {
    v26 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v26);
  }
  v3 = *(_QWORD *)(*(_QWORD *)(v2 + 40) + 88LL);
  if ( !*(_QWORD *)(v3 + 8) )
  {
    v27 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v27);
  }
  v4 = *(DXGADAPTER ***)(v3 + 8);
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(v4[2]) )
  {
    v28 = WdLogNewEntry5_WdAssertion(v5);
    WdLogEvent5_WdAssertion(v28);
  }
  if ( !*(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 12) + 96LL) + 410LL) )
    return 0LL;
  memset(&v31, 0, sizeof(v31));
  DMMVIDPNPRESENTPATH::Serialize(this, &v30);
  v6 = 2LL;
  v7 = &v31;
  v8 = &v30;
  do
  {
    v9 = *(_OWORD *)&v8->ContentTransformation.ScalingSupport;
    *(_OWORD *)&v7->VidPnPresentPathInfo.VidPnSourceId = *(_OWORD *)&v8->VidPnSourceId;
    v10 = *(_OWORD *)&v8->VisibleFromActiveTLOffset.cy;
    *(_OWORD *)&v7->VidPnPresentPathInfo.ContentTransformation.ScalingSupport = v9;
    VidPnTargetColorCoeffDynamicRanges = v8->VidPnTargetColorCoeffDynamicRanges;
    *(_OWORD *)&v7->VidPnPresentPathInfo.VisibleFromActiveTLOffset.cy = v10;
    v12 = *(_OWORD *)&v8->Content;
    v7->VidPnPresentPathInfo.VidPnTargetColorCoeffDynamicRanges = VidPnTargetColorCoeffDynamicRanges;
    v13 = *(_OWORD *)&v8->CopyProtection.OEMCopyProtection[4];
    *(_OWORD *)&v7->VidPnPresentPathInfo.Content = v12;
    v14 = *(_OWORD *)&v8->CopyProtection.OEMCopyProtection[20];
    *(_OWORD *)&v7->VidPnPresentPathInfo.CopyProtection.OEMCopyProtection[4] = v13;
    v15 = *(_OWORD *)&v8->CopyProtection.OEMCopyProtection[36];
    v8 = (_D3DKMDT_VIDPN_PRESENT_PATH *)((char *)v8 + 128);
    *(_OWORD *)&v7->VidPnPresentPathInfo.CopyProtection.OEMCopyProtection[20] = v14;
    v7 = (_DXGKARG_UPDATEACTIVEVIDPNPRESENTPATH *)((char *)v7 + 128);
    *(_OWORD *)&v7[-1].VidPnPresentPathInfo.GammaRamp.DataSize = v15;
    --v6;
  }
  while ( v6 );
  v16 = *(_OWORD *)&v8->ContentTransformation.ScalingSupport;
  *(_OWORD *)&v7->VidPnPresentPathInfo.VidPnSourceId = *(_OWORD *)&v8->VidPnSourceId;
  v17 = *(_OWORD *)&v8->VisibleFromActiveTLOffset.cy;
  *(_OWORD *)&v7->VidPnPresentPathInfo.ContentTransformation.ScalingSupport = v16;
  v18 = v8->VidPnTargetColorCoeffDynamicRanges;
  *(_OWORD *)&v7->VidPnPresentPathInfo.VisibleFromActiveTLOffset.cy = v17;
  v19 = *(_OWORD *)&v8->Content;
  v7->VidPnPresentPathInfo.VidPnTargetColorCoeffDynamicRanges = v18;
  v20 = *(_OWORD *)&v8->CopyProtection.OEMCopyProtection[4];
  v21 = *(_QWORD *)&v8->CopyProtection.OEMCopyProtection[20];
  *(_OWORD *)&v7->VidPnPresentPathInfo.Content = v19;
  *(_OWORD *)&v7->VidPnPresentPathInfo.CopyProtection.OEMCopyProtection[4] = v20;
  *(_QWORD *)&v7->VidPnPresentPathInfo.CopyProtection.OEMCopyProtection[20] = v21;
  v31.VidPnPresentPathInfo.ContentTransformation.Rotation = DMMVIDPNPRESENTPATH::GetContentRotationHw(this);
  updated = ADAPTER_DISPLAY::DdiUpdateActiveVidPnPresentPath((ADAPTER_DISPLAY *)v4, &v31);
  v24 = updated;
  if ( updated >= 0 )
    return 0LL;
  v29 = WdLogNewEntry5_WdError(v23);
  *(_QWORD *)(v29 + 24) = this;
  *(_QWORD *)(v29 + 32) = v24;
  WdLogEvent5_WdError(v29);
  return (unsigned int)v24;
}
