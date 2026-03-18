/*
 * XREFs of ?PageInPixelsRectToDeviceRect@COcclusionContext@@AEBA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1801708D4
 * Callers:
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180060FC0 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?IsOccluded@COcclusionContext@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NH@Z @ 0x1800A8DCC (-IsOccluded@COcclusionContext@@QEBA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@R.c)
 * Callees:
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x180064E70 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800A4FF0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

bool __fastcall COcclusionContext::PageInPixelsRectToDeviceRect(
        __int64 a1,
        struct D2D_RECT_F *a2,
        struct D2D_RECT_F *a3)
{
  struct D2D_RECT_F v5; // [rsp+20h] [rbp-28h] BYREF

  if ( *(_BYTE *)(a1 + 816) )
  {
    CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)(a1 + 820), (__int64)a2, &v5.left);
    *a3 = v5;
  }
  else
  {
    *a3 = *a2;
  }
  return !IsEmpty(a3);
}
