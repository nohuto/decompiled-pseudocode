/*
 * XREFs of ?UpdateActiveVidPnPresentPath@DMMVIDPNPRESENTPATH@@QEBAJXZ @ 0x1C00DFA90
 * Callers:
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAU_D3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00887D8 (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 *     DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource @ 0x1C00A2884 (DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource.c)
 *     DmmUpdateGammaRampOnAllClientVidPnPathsFromSource @ 0x1C00A2B34 (DmmUpdateGammaRampOnAllClientVidPnPathsFromSource.c)
 *     DmmUpdateContentOnAllClientVidPnPathsFromSource @ 0x1C01D6C10 (DmmUpdateContentOnAllClientVidPnPathsFromSource.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000AD00 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?Serialize@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C00DF3C8 (-Serialize@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z.c)
 *     ?GetContentRotationHw@DMMVIDPNPRESENTPATH@@QEBA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@XZ @ 0x1C00DF4B0 (-GetContentRotationHw@DMMVIDPNPRESENTPATH@@QEBA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@XZ.c)
 *     ?DdiUpdateActiveVidPnPresentPath@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_UPDATEACTIVEVIDPNPRESENTPATH@@@Z @ 0x1C00E5BC8 (-DdiUpdateActiveVidPnPresentPath@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_UPDATEACTIVEVIDPNPRESENTPATH.c)
 */

__int64 __fastcall DMMVIDPNPRESENTPATH::UpdateActiveVidPnPresentPath(
        DMMVIDPNPRESENTPATH *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rbx
  __int64 v6; // rbx
  DXGADAPTER **v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r9
  __int64 v15; // rcx
  _DXGKARG_UPDATEACTIVEVIDPNPRESENTPATH *v16; // rdx
  _D3DKMDT_VIDPN_PRESENT_PATH *v17; // rax
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  D3DKMDT_COLOR_COEFF_DYNAMIC_RANGES VidPnTargetColorCoeffDynamicRanges; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  D3DKMDT_COLOR_COEFF_DYNAMIC_RANGES v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int64 v30; // rax
  int updated; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rbx
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  _D3DKMDT_VIDPN_PRESENT_PATH v40; // [rsp+20h] [rbp-2F8h] BYREF
  _DXGKARG_UPDATEACTIVEVIDPNPRESENTPATH v41; // [rsp+190h] [rbp-188h] BYREF

  v5 = *(_QWORD *)(*((_QWORD *)this + 12) + 96LL);
  if ( !*(_QWORD *)(v5 + 40) )
  {
    v36 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v36);
  }
  v6 = *(_QWORD *)(*(_QWORD *)(v5 + 40) + 88LL);
  if ( !*(_QWORD *)(v6 + 8) )
  {
    v37 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v37);
  }
  v7 = *(DXGADAPTER ***)(v6 + 8);
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(v7[2]) )
  {
    v38 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
    WdLogEvent5_WdAssertion(v38);
  }
  if ( !ADAPTER_DISPLAY::IsVidPnSourceActive(
          (ADAPTER_DISPLAY *)v7,
          *(unsigned int *)(*((_QWORD *)this + 11) + 24LL),
          v10,
          v11) )
    return 0LL;
  memset(&v41, 0, sizeof(v41));
  DMMVIDPNPRESENTPATH::Serialize(this, &v40, v12, v13);
  v15 = 2LL;
  v16 = &v41;
  v17 = &v40;
  do
  {
    v18 = *(_OWORD *)&v17->ContentTransformation.ScalingSupport;
    *(_OWORD *)&v16->VidPnPresentPathInfo.VidPnSourceId = *(_OWORD *)&v17->VidPnSourceId;
    v19 = *(_OWORD *)&v17->VisibleFromActiveTLOffset.cy;
    *(_OWORD *)&v16->VidPnPresentPathInfo.ContentTransformation.ScalingSupport = v18;
    VidPnTargetColorCoeffDynamicRanges = v17->VidPnTargetColorCoeffDynamicRanges;
    *(_OWORD *)&v16->VidPnPresentPathInfo.VisibleFromActiveTLOffset.cy = v19;
    v21 = *(_OWORD *)&v17->Content;
    v16->VidPnPresentPathInfo.VidPnTargetColorCoeffDynamicRanges = VidPnTargetColorCoeffDynamicRanges;
    v22 = *(_OWORD *)&v17->CopyProtection.OEMCopyProtection[4];
    *(_OWORD *)&v16->VidPnPresentPathInfo.Content = v21;
    v23 = *(_OWORD *)&v17->CopyProtection.OEMCopyProtection[20];
    *(_OWORD *)&v16->VidPnPresentPathInfo.CopyProtection.OEMCopyProtection[4] = v22;
    v24 = *(_OWORD *)&v17->CopyProtection.OEMCopyProtection[36];
    v17 = (_D3DKMDT_VIDPN_PRESENT_PATH *)((char *)v17 + 128);
    *(_OWORD *)&v16->VidPnPresentPathInfo.CopyProtection.OEMCopyProtection[20] = v23;
    v16 = (_DXGKARG_UPDATEACTIVEVIDPNPRESENTPATH *)((char *)v16 + 128);
    *(_OWORD *)&v16[-1].VidPnPresentPathInfo.GammaRamp.DataSize = v24;
    --v15;
  }
  while ( v15 );
  v25 = *(_OWORD *)&v17->ContentTransformation.ScalingSupport;
  *(_OWORD *)&v16->VidPnPresentPathInfo.VidPnSourceId = *(_OWORD *)&v17->VidPnSourceId;
  v26 = *(_OWORD *)&v17->VisibleFromActiveTLOffset.cy;
  *(_OWORD *)&v16->VidPnPresentPathInfo.ContentTransformation.ScalingSupport = v25;
  v27 = v17->VidPnTargetColorCoeffDynamicRanges;
  *(_OWORD *)&v16->VidPnPresentPathInfo.VisibleFromActiveTLOffset.cy = v26;
  v28 = *(_OWORD *)&v17->Content;
  v16->VidPnPresentPathInfo.VidPnTargetColorCoeffDynamicRanges = v27;
  v29 = *(_OWORD *)&v17->CopyProtection.OEMCopyProtection[4];
  v30 = *(_QWORD *)&v17->CopyProtection.OEMCopyProtection[20];
  *(_OWORD *)&v16->VidPnPresentPathInfo.Content = v28;
  *(_OWORD *)&v16->VidPnPresentPathInfo.CopyProtection.OEMCopyProtection[4] = v29;
  *(_QWORD *)&v16->VidPnPresentPathInfo.CopyProtection.OEMCopyProtection[20] = v30;
  v41.VidPnPresentPathInfo.ContentTransformation.Rotation = DMMVIDPNPRESENTPATH::GetContentRotationHw(
                                                              this,
                                                              (__int64)v16,
                                                              128LL,
                                                              v14);
  updated = ADAPTER_DISPLAY::DdiUpdateActiveVidPnPresentPath((ADAPTER_DISPLAY *)v7, &v41);
  v34 = updated;
  if ( updated >= 0 )
    return 0LL;
  v39 = WdLogNewEntry5_WdError(v33, v32);
  *(_QWORD *)(v39 + 24) = this;
  *(_QWORD *)(v39 + 32) = v34;
  WdLogEvent5_WdError(v39);
  return (unsigned int)v34;
}
