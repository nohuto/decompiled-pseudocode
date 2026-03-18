/*
 * XREFs of ?SetDeviceRenderingAndSamplingBounds@CHwBrushContext@@QEAAXAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@@Z @ 0x1801E705C
 * Callers:
 *     ?RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEBUPixelFormatInfo@@VDisplayId@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAPEAV1@@Z @ 0x1801E6D84 (-RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEB.c)
 *     ?FillPathWithBrush@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCContextState@@PEBVCShape@@PEBVCMILMatrix@@PEBV?$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@PEAVCMILBrush@@MAEBV6@W4Enum@MilCompositingMode@@@Z @ 0x1801ED380 (-FillPathWithBrush@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCCont.c)
 * Callees:
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ?SetDeviceSamplingBounds@CHwBrushContext@@QEAAXAEBV?$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z @ 0x1801E70C4 (-SetDeviceSamplingBounds@CHwBrushContext@@QEAAXAEBV-$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z.c)
 */

__int64 __fastcall CHwBrushContext::SetDeviceRenderingAndSamplingBounds(__int64 a1, __int64 a2)
{
  float v2; // xmm1_4
  __m128i v3; // xmm0
  __m128i v4; // xmm1
  float v6[4]; // [rsp+20h] [rbp-28h] BYREF

  v2 = (float)*(int *)(a2 + 4);
  v6[0] = (float)*(int *)a2;
  v3 = _mm_cvtsi32_si128(*(_DWORD *)(a2 + 8));
  v6[1] = v2;
  v4 = _mm_cvtsi32_si128(*(_DWORD *)(a2 + 12));
  LODWORD(v6[2]) = _mm_cvtepi32_ps(v3).m128_u32[0];
  LODWORD(v6[3]) = _mm_cvtepi32_ps(v4).m128_u32[0];
  return CHwBrushContext::SetDeviceSamplingBounds(a1, v6);
}
