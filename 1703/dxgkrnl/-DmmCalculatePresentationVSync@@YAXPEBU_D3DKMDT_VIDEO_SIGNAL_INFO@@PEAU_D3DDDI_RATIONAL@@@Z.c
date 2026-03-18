/*
 * XREFs of ?DmmCalculatePresentationVSync@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAU_D3DDDI_RATIONAL@@@Z @ 0x1C00AB1FC
 * Callers:
 *     DmmGetCurrentIntegerVSyncFromClientVidPnSource @ 0x1C00A8F6C (DmmGetCurrentIntegerVSyncFromClientVidPnSource.c)
 *     ?ConvertPathModalityToDisplayConfig@@YAJPEAU_D3DKMT_GETPATHSMODALITY@@HHHHHPEAU_QDC_CONTEXT@@@Z @ 0x1C00AA7F4 (-ConvertPathModalityToDisplayConfig@@YAJPEAU_D3DKMT_GETPATHSMODALITY@@HHHHHPEAU_QDC_CONTEXT@@@Z.c)
 *     ?CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z @ 0x1C00E3FA4 (-CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z.c)
 *     ?PopulateGdiDisplayModeFromPath@VIDPN_MGR@@SAJPEBVDMMVIDPNPRESENTPATH@@PEAU_CDD_DEVMODE@@@Z @ 0x1C00F17B8 (-PopulateGdiDisplayModeFromPath@VIDPN_MGR@@SAJPEBVDMMVIDPNPRESENTPATH@@PEAU_CDD_DEVMODE@@@Z.c)
 *     BmlCompareTargetModesWithConstraint @ 0x1C00F313C (BmlCompareTargetModesWithConstraint.c)
 *     ?PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@I_KPEAU_D3DKMT_DISPLAYMODE@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@EEPEAPEAU2@@Z @ 0x1C018E094 (-PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM.c)
 *     DmmGetClientVidPnTargetModeInfo @ 0x1C01D4F9C (DmmGetClientVidPnTargetModeInfo.c)
 * Callees:
 *     <none>
 */

void __fastcall DmmCalculatePresentationVSync(const struct _D3DKMDT_VIDEO_SIGNAL_INFO *a1, struct _D3DDDI_RATIONAL *a2)
{
  struct _D3DKMDT_VIDEO_SIGNAL_INFO::$9963842E1DCCBF6730749724D5C7309E::$4FDCBBA05DCC0CCF44951C2FDAA549A2 AdditionalSignalInfo; // r8d

  *a2 = a1->VSyncFreq;
  AdditionalSignalInfo = a1->AdditionalSignalInfo;
  if ( (*(_WORD *)&AdditionalSignalInfo & 0x1F8) != 0 )
    a2->Denominator *= (*(unsigned int *)&AdditionalSignalInfo >> 3) & 0x3F;
}
