/*
 * XREFs of ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1C00F5430
 * Callers:
 *     ?_ValidateDdiVideoSignalModeInfo@DMMVIDEOSIGNALMODE@@SAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x1C000CE28 (-_ValidateDdiVideoSignalModeInfo@DMMVIDEOSIGNALMODE@@SAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z.c)
 *     ?FindClosestTargetMode@DMMVIDPNTARGETMODESET@@QEAAPEBVDMMVIDPNTARGETMODE@@IIU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@EEE@Z @ 0x1C0044E58 (-FindClosestTargetMode@DMMVIDPNTARGETMODESET@@QEAAPEBVDMMVIDPNTARGETMODE@@IIU_D3DDDI_RATIONAL@@W.c)
 *     DxgkUpdateCddDevmodeExtraData @ 0x1C00A59A0 (DxgkUpdateCddDevmodeExtraData.c)
 *     DxgkCddVerifyCddDevMode @ 0x1C00A8160 (DxgkCddVerifyCddDevMode.c)
 *     DxgkConvertDisplayConfigToDevMode @ 0x1C00A8210 (DxgkConvertDisplayConfigToDevMode.c)
 *     DmmGetCurrentIntegerVSyncFromClientVidPnSource @ 0x1C00A8F6C (DmmGetCurrentIntegerVSyncFromClientVidPnSource.c)
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00BF7F0 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 *     ?GetDisplayModeFromPath@DMMVIDPNPRESENTPATH@@QEBAJAEAU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C00DF690 (-GetDisplayModeFromPath@DMMVIDPNPRESENTPATH@@QEBAJAEAU_D3DKMT_DISPLAYMODE@@@Z.c)
 *     ?PopulateGdiDisplayModeFromPath@VIDPN_MGR@@SAJPEBVDMMVIDPNPRESENTPATH@@PEAU_CDD_DEVMODE@@@Z @ 0x1C00F17B8 (-PopulateGdiDisplayModeFromPath@VIDPN_MGR@@SAJPEBVDMMVIDPNPRESENTPATH@@PEAU_CDD_DEVMODE@@@Z.c)
 *     BmlCompareTargetModesWithConstraint @ 0x1C00F313C (BmlCompareTargetModesWithConstraint.c)
 *     ?PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@I_KPEAU_D3DKMT_DISPLAYMODE@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@EEPEAPEAU2@@Z @ 0x1C018E094 (-PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM.c)
 *     CreateFunctionalVidPnWithEnabledVidPnSource @ 0x1C018EF8C (CreateFunctionalVidPnWithEnabledVidPnSource.c)
 *     DmmGetClientVidPnTargetModeInfo @ 0x1C01D4F9C (DmmGetClientVidPnTargetModeInfo.c)
 * Callees:
 *     ?DivideAndRound@DMMVIDEOSIGNALMODE@@SA_K_K0@Z @ 0x1C000C388 (-DivideAndRound@DMMVIDEOSIGNALMODE@@SA_K_K0@Z.c)
 *     ?IsFreqWithinToleranceRange@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DDDI_RATIONAL@@0I@Z @ 0x1C000D24C (-IsFreqWithinToleranceRange@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DDDI_RATIONAL@@0I@Z.c)
 */

__int64 __fastcall DmmMapVSyncFromRationalToInteger(
        const struct _D3DDDI_RATIONAL *a1,
        __int64 a2,
        unsigned __int8 *a3,
        __int64 a4)
{
  int v5; // r14d
  UINT v7; // ebx
  __int64 v8; // rbp
  __int64 v10; // rax
  UINT v11; // eax

  v5 = a2;
  if ( !a1->Denominator )
  {
    v10 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v10);
  }
  if ( a3 )
    *a3 = 0;
  v7 = DMMVIDEOSIGNALMODE::DivideAndRound(a1->Numerator, a1->Denominator);
  v8 = 0LL;
  while ( !DMMVIDEOSIGNALMODE::IsFreqWithinToleranceRange(a1, (const struct _D3DDDI_RATIONAL *)&unk_1C004B230 + v8, 50) )
  {
    v8 = (unsigned int)(v8 + 1);
    if ( (unsigned int)v8 >= 6 )
      goto LABEL_8;
  }
  v11 = a1->Numerator / a1->Denominator;
  if ( v11 != v7 && a3 )
    *a3 = 1;
  v7 = v11;
LABEL_8:
  if ( (unsigned int)(v5 - 2) <= 1 )
    v7 >>= 1;
  return v7;
}
