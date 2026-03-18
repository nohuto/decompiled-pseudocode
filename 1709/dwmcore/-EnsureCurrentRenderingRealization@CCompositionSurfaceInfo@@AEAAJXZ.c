/*
 * XREFs of ?EnsureCurrentRenderingRealization@CCompositionSurfaceInfo@@AEAAJXZ @ 0x18004BB0C
 * Callers:
 *     ?IsReadyToDraw@CSurfaceBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x180025110 (-IsReadyToDraw@CSurfaceBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z @ 0x180028408 (-EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z.c)
 *     ?GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ @ 0x18004AE00 (-GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ.c)
 *     ?EnsureIndependentFlipState@COverlayContext@@AEAAJPEAVOverlayPlaneInfo@1@_N1@Z @ 0x1801428A8 (-EnsureIndependentFlipState@COverlayContext@@AEAAJPEAVOverlayPlaneInfo@1@_N1@Z.c)
 *     ?IsEligibleForOverlays@COverlayContext@@AEAA_NAEBVOverlayPlaneInfo@1@@Z @ 0x1801434D8 (-IsEligibleForOverlays@COverlayContext@@AEAA_NAEBVOverlayPlaneInfo@1@@Z.c)
 * Callees:
 *     ?ProcessSurfaceUpdateInternal@CCompositionSurfaceInfo@@AEAAJAEBUCSM_SURFACE_UPDATE@@@Z @ 0x18004BC64 (-ProcessSurfaceUpdateInternal@CCompositionSurfaceInfo@@AEAAJAEBUCSM_SURFACE_UPDATE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 */

__int64 __fastcall CCompositionSurfaceInfo::EnsureCurrentRenderingRealization(CCompositionSurfaceInfo *this)
{
  unsigned int v2; // ebx
  int CompositionSurfaceRenderingRealization; // eax
  int updated; // eax
  _DWORD v6[8]; // [rsp+30h] [rbp-E8h] BYREF
  HGDIOBJ ho; // [rsp+50h] [rbp-C8h]

  v2 = 0;
  memset_0(v6, 0, 0xC8uLL);
  CompositionSurfaceRenderingRealization = NtQueryCompositionSurfaceRenderingRealization(*((_QWORD *)this + 4), v6);
  if ( CompositionSurfaceRenderingRealization < 0 )
  {
    v2 = CompositionSurfaceRenderingRealization | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, CompositionSurfaceRenderingRealization | 0x10000000, 0x1CEu);
  }
  else if ( v6[0] == 200 && v6[1] == *((_DWORD *)this + 10) && v6[2] == *((_DWORD *)this + 11) )
  {
    updated = CCompositionSurfaceInfo::ProcessSurfaceUpdateInternal(this, (const struct CSM_SURFACE_UPDATE *)v6);
    v2 = updated;
    if ( updated < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x1D6u);
  }
  if ( (unsigned __int64)ho >= 2 )
    DeleteObject(ho);
  return v2;
}
