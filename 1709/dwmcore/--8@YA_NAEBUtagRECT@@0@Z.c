/*
 * XREFs of ??8@YA_NAEBUtagRECT@@0@Z @ 0x180097070
 * Callers:
 *     ?IsSameGeometry@CRgnGeometry@@UEBA_NPEBVCGeometry@@@Z @ 0x180096B00 (-IsSameGeometry@CRgnGeometry@@UEBA_NPEBVCGeometry@@@Z.c)
 *     ?IsDirectFlipSupportedOnTarget@CBindInfo@CCompositionSurfaceInfo@@QEAA_NPEAVIRenderTarget@@@Z @ 0x18017C314 (-IsDirectFlipSupportedOnTarget@CBindInfo@CCompositionSurfaceInfo@@QEAA_NPEAVIRenderTarget@@@Z.c)
 *     ?CalcPresentMode@CHDRConversionRenderTarget@@IEAAJXZ @ 0x1801B8E58 (-CalcPresentMode@CHDRConversionRenderTarget@@IEAAJXZ.c)
 *     ?CheckMultiplaneOverlaySupport@CHDRConversionRenderTarget@@UEAAJIPEAUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@PEA_N1@Z @ 0x1801B8FF0 (-CheckMultiplaneOverlaySupport@CHDRConversionRenderTarget@@UEAAJIPEAUDXGI_CHECK_MULTIPLANEOVERLA.c)
 *     ?UpdateAttributes@CDxHandleYUVBitmapRealization@@UEAA_NAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x1801D4050 (-UpdateAttributes@CDxHandleYUVBitmapRealization@@UEAA_NAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall operator==(_DWORD *a1, _DWORD *a2)
{
  return *a1 == *a2 && a1[1] == a2[1] && a1[2] == a2[2] && a1[3] == a2[3];
}
