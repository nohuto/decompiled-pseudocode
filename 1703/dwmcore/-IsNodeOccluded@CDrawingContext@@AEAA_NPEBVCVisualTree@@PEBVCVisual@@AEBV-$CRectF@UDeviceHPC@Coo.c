/*
 * XREFs of ?IsNodeOccluded@CDrawingContext@@AEAA_NPEBVCVisualTree@@PEBVCVisual@@AEBV?$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z @ 0x18012D074
 * Callers:
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x18006D550 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?UpdateCVIRenderTargets@COcclusionContext@@AEAAXPEAVCDrawingContext@@PEBVCVisualTree@@@Z @ 0x18009F054 (-UpdateCVIRenderTargets@COcclusionContext@@AEAAXPEAVCDrawingContext@@PEBVCVisualTree@@@Z.c)
 * Callees:
 *     ?GetOcclusionInfo@CVisual@@QEBAPEAVCOcclusionInfo@@PEBVCVisualTree@@@Z @ 0x18001382C (-GetOcclusionInfo@CVisual@@QEBAPEAVCOcclusionInfo@@PEBVCVisualTree@@@Z.c)
 *     ?IsOccluded@COcclusionContext@@QEAA_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NH@Z @ 0x18001D074 (-IsOccluded@COcclusionContext@@QEAA_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@R.c)
 */

bool __fastcall CDrawingContext::IsNodeOccluded(__int64 a1, const struct CVisualTree *a2, CVisual *a3, __int64 a4)
{
  char v4; // bl
  struct COcclusionInfo *OcclusionInfo; // rax
  __int64 v8; // r8

  v4 = 0;
  if ( *(_BYTE *)(a1 + 6771) )
  {
    if ( *(_QWORD *)(a1 + 6680) )
    {
      OcclusionInfo = CVisual::GetOcclusionInfo(a3, a2);
      if ( OcclusionInfo )
      {
        LOBYTE(v8) = 1;
        return COcclusionContext::IsOccluded(*(_QWORD *)(a1 + 6680), a4, v8, *((_DWORD *)OcclusionInfo + 3)) != 0;
      }
    }
  }
  return v4;
}
