/*
 * XREFs of ?PageInPixelsRectToDeviceRect@COcclusionContext@@AEAA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1801480E4
 * Callers:
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180018A80 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?IsOccluded@COcclusionContext@@QEAA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NH@Z @ 0x18005CCEC (-IsOccluded@COcclusionContext@@QEAA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@R.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180036770 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180059FB0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 */

bool __fastcall COcclusionContext::PageInPixelsRectToDeviceRect(__int64 a1, _OWORD *a2, float *a3)
{
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF

  if ( *(_BYTE *)(a1 + 816) )
  {
    CMILMatrix::Transform2DBoundsHelper<0>(a1 + 820, (__int64)a2, (float *)&v5);
    *(_OWORD *)a3 = v5;
  }
  else
  {
    *(_OWORD *)a3 = *a2;
  }
  return !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(a3);
}
