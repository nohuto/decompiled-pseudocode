/*
 * XREFs of ??1DXGPROCESSMUTEX@@QEAA@XZ @ 0x1C00143B8
 * Callers:
 *     ?DisableMPOPlanes@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C00791B8 (-DisableMPOPlanes@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z @ 0x1C007ABD4 (-Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z.c)
 *     ?PrepareIndependentFlipToken@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00CBE30 (-PrepareIndependentFlipToken@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_.c)
 *     DxgkGetPresentHistory @ 0x1C00EB0A0 (DxgkGetPresentHistory.c)
 *     DxgkCreateOverlay @ 0x1C01B13C0 (DxgkCreateOverlay.c)
 *     DxgkDestroyOverlay @ 0x1C01B1A00 (DxgkDestroyOverlay.c)
 *     DxgkFlipOverlay @ 0x1C01B1EF0 (DxgkFlipOverlay.c)
 *     DxgkGetOverlayState @ 0x1C01B22D0 (DxgkGetOverlayState.c)
 *     DxgkUpdateOverlay @ 0x1C01B2750 (DxgkUpdateOverlay.c)
 *     DxgkDestroyProtectedSession @ 0x1C01BCA70 (DxgkDestroyProtectedSession.c)
 *     DxgkQueryProtectedSessionStatus @ 0x1C01BD370 (DxgkQueryProtectedSessionStatus.c)
 *     ?AcquireSync@DXGKEYEDMUTEX@@SAJI_KHPEAT_LARGE_INTEGER@@PEA_KPEAXI2@Z @ 0x1C01BEB6C (-AcquireSync@DXGKEYEDMUTEX@@SAJI_KHPEAT_LARGE_INTEGER@@PEA_KPEAXI2@Z.c)
 *     ?ReleaseSync@DXGKEYEDMUTEX@@QEAAJI_K0PEAXI@Z @ 0x1C01BFDB4 (-ReleaseSync@DXGKEYEDMUTEX@@QEAAJI_K0PEAXI@Z.c)
 *     ?OpenLocal@DXGSWAPCHAIN@@QEAAJIPEAVDXGDEVICE@@PEAXHH@Z @ 0x1C01D6074 (-OpenLocal@DXGSWAPCHAIN@@QEAAJIPEAVDXGDEVICE@@PEAXHH@Z.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 */

void __fastcall DXGPROCESSMUTEX::~DXGPROCESSMUTEX(DXGPROCESSMUTEX *this)
{
  if ( *((_BYTE *)this + 8) )
    DXGAUTOMUTEX::Release(this);
}
