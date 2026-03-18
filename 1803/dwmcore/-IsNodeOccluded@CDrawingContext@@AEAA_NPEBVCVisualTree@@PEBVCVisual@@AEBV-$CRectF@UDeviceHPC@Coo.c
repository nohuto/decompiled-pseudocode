/*
 * XREFs of ?IsNodeOccluded@CDrawingContext@@AEAA_NPEBVCVisualTree@@PEBVCVisual@@AEBV?$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z @ 0x18013D258
 * Callers:
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180060FC0 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?UpdateCVIRenderTargets@COcclusionContext@@AEAAXPEAVCDrawingContext@@PEBVCVisualTree@@@Z @ 0x1800A8E44 (-UpdateCVIRenderTargets@COcclusionContext@@AEAAXPEAVCDrawingContext@@PEBVCVisualTree@@@Z.c)
 *     ?RenderProjectedShadowsPostChildrenForCurrentNode@CDrawingContext@@AEAAJXZ @ 0x180162F04 (-RenderProjectedShadowsPostChildrenForCurrentNode@CDrawingContext@@AEAAJXZ.c)
 * Callees:
 *     ?IsOccluded@COcclusionContext@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NH@Z @ 0x1800A8DCC (-IsOccluded@COcclusionContext@@QEBA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@R.c)
 *     ?GetOcclusionInfo@CVisual@@QEBAPEAVCOcclusionInfo@@PEBVCVisualTree@@@Z @ 0x18013C568 (-GetOcclusionInfo@CVisual@@QEBAPEAVCOcclusionInfo@@PEBVCVisualTree@@@Z.c)
 */

bool __fastcall CDrawingContext::IsNodeOccluded(
        __int64 a1,
        const struct CVisualTree *a2,
        CVisual *a3,
        const struct D2D_RECT_F *a4)
{
  char v4; // bl
  struct COcclusionInfo *OcclusionInfo; // rax
  __int64 v8; // r8

  v4 = 0;
  if ( *(_BYTE *)(a1 + 6827) )
  {
    OcclusionInfo = CVisual::GetOcclusionInfo(a3, a2);
    if ( OcclusionInfo )
    {
      LOBYTE(v8) = 1;
      return COcclusionContext::IsOccluded(*(_QWORD *)(a1 + 6744), a4, v8, *((_DWORD *)OcclusionInfo + 3)) != 0;
    }
  }
  return v4;
}
