/*
 * XREFs of ?GetMoveRenderPassInfoRef@CVisual@@QEBAPEAVCMoveRenderPassInfo@@PEBVCDrawingContext@@@Z @ 0x18008ADBC
 * Callers:
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAU_MARGINS@@H_N77PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180050730 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 *     ?ExcludeFromVisibleRegion@CVisual@@QEAAJAEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@PEAVCDrawingContext@@@Z @ 0x18008ADF0 (-ExcludeFromVisibleRegion@CVisual@@QEAAJAEAV-$CRectF@UDeviceHPC@CoordinateSpace@@@@PEAVCDrawingC.c)
 *     ?RecordWindowMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEAUHWND__@@PEA_N@Z @ 0x1800A62D0 (-RecordWindowMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEAUHWND__@@PEA_N@Z.c)
 *     ?AddToVisibleRegion@CVisual@@QEAAJAEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@PEAVCDrawingContext@@@Z @ 0x18012B628 (-AddToVisibleRegion@CVisual@@QEAAJAEAV-$CRectF@UDeviceHPC@CoordinateSpace@@@@PEAVCDrawingContext.c)
 *     ?PreviousFrameVisibleRegion@CVisual@@QEBAPEAUHRGN__@@PEAVCDrawingContext@@@Z @ 0x18014D138 (-PreviousFrameVisibleRegion@CVisual@@QEBAPEAUHRGN__@@PEAVCDrawingContext@@@Z.c)
 *     ?RecordVisualMove@CDrawingContext@@QEAAJPEAVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUHWND__@@@Z @ 0x18014DAB4 (-RecordVisualMove@CDrawingContext@@QEAAJPEAVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 *     ?SetLastLocalToWorldTransform@CVisual@@QEAAJPEBVCMILMatrix@@0PEA_NPEAV2@PEAVCDrawingContext@@@Z @ 0x180161168 (-SetLastLocalToWorldTransform@CVisual@@QEAAJPEBVCMILMatrix@@0PEA_NPEAV2@PEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?GetRenderPassInfoList@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x1800CF70C (-GetRenderPassInfoList@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 */

struct _LIST_ENTRY **__fastcall CVisual::GetMoveRenderPassInfoRef(CVisual *this, const struct CDrawingContext *a2)
{
  struct _LIST_ENTRY *RenderPassInfoList; // rax
  struct _LIST_ENTRY *v3; // r10
  struct _LIST_ENTRY *i; // rcx

  RenderPassInfoList = CVisual::GetRenderPassInfoList(this);
  if ( RenderPassInfoList )
  {
    for ( i = RenderPassInfoList->Flink; i != RenderPassInfoList; i = i->Flink )
    {
      if ( v3 == i[-1].Blink )
        return &i[-6].Blink;
    }
  }
  return 0LL;
}
