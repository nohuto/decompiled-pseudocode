/*
 * XREFs of ?IsOverlayAssigned@CDrawingContext@@QEAA_NPEBVCVisual@@PEAVISwapChainContent@@PEA_N@Z @ 0x18000CE14
 * Callers:
 *     ?DrawWorker@CCompositionSurfaceBitmap@@AEAAJ_NPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18000AE6C (-DrawWorker@CCompositionSurfaceBitmap@@AEAAJ_NPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TM.c)
 *     ?DrawAsDrawList@CSurfaceBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x180038C00 (-DrawAsDrawList@CSurfaceBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MU.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAU_MARGINS@@H_N77PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180050730 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 * Callees:
 *     ?IsOverlayCompatible@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x18000AC20 (-IsOverlayCompatible@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?IsDirectRenderingToDisplayRenderTarget@CDrawingContext@@QEBA_NXZ @ 0x18012CF88 (-IsDirectRenderingToDisplayRenderTarget@CDrawingContext@@QEBA_NXZ.c)
 *     ?IsOverlayAssigned@COverlayContext@@QEAA_NPEBVCVisual@@PEAVISwapChainContent@@PEA_N@Z @ 0x180131DDC (-IsOverlayAssigned@COverlayContext@@QEAA_NPEBVCVisual@@PEAVISwapChainContent@@PEA_N@Z.c)
 *     ?IsInLayer@CDrawingContext@@QEAA_NXZ @ 0x18014D0E8 (-IsInLayer@CDrawingContext@@QEAA_NXZ.c)
 */

char __fastcall CDrawingContext::IsOverlayAssigned(
        COverlayContext **this,
        const struct CVisual *a2,
        struct ISwapChainContent *a3,
        bool *a4)
{
  char v4; // bl
  char (__fastcall *v9)(CCompositionSurfaceBitmap *); // rax
  char IsOverlayCompatible; // al
  CDrawingContext *v12; // rcx

  v4 = 0;
  if ( this[842] )
  {
    v9 = *(char (__fastcall **)(CCompositionSurfaceBitmap *))(*(_QWORD *)a3 + 96LL);
    if ( v9 == CCompositionSurfaceBitmap::IsOverlayCompatible )
      IsOverlayCompatible = CCompositionSurfaceBitmap::IsOverlayCompatible(a3);
    else
      IsOverlayCompatible = v9(a3);
    if ( IsOverlayCompatible
      && !CDrawingContext::IsInLayer((CDrawingContext *)this)
      && CDrawingContext::IsDirectRenderingToDisplayRenderTarget(v12) )
    {
      return COverlayContext::IsOverlayAssigned(this[842], a2, a3, a4);
    }
  }
  return v4;
}
