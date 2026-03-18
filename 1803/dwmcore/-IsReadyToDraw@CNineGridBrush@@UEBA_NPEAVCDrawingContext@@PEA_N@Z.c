/*
 * XREFs of ?IsReadyToDraw@CNineGridBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x180029AC0
 * Callers:
 *     ?DrawAsDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18009C9E0 (-DrawAsDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilR.c)
 *     ?IsEmptyDrawing@CSpriteVisualContent@@UEBA_NXZ @ 0x18009CC60 (-IsEmptyDrawing@CSpriteVisualContent@@UEBA_NXZ.c)
 *     ?HasNonEmptyContent@CSpriteVisual@@UEAA_NXZ @ 0x18009D980 (-HasNonEmptyContent@CSpriteVisual@@UEAA_NXZ.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009F520 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A9B10 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?IsReadyToDraw@CSurfaceBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x1800999C0 (-IsReadyToDraw@CSurfaceBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?IsReadyToDraw@CColorBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x18009ACF0 (-IsReadyToDraw@CColorBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CNineGridBrush::IsReadyToDraw(CNineGridBrush *this, struct CDrawingContext *a2, bool *a3)
{
  CColorBrush *v3; // rcx
  bool (__fastcall *v4)(CSurfaceBrush *__hidden, struct CDrawingContext *, bool *); // rax
  char IsReadyToDraw; // al
  bool result; // al

  *a3 = 0;
  v3 = (CColorBrush *)*((_QWORD *)this + 9);
  result = 0;
  if ( v3 )
  {
    v4 = *(bool (__fastcall **)(CSurfaceBrush *__hidden, struct CDrawingContext *, bool *))(*(_QWORD *)v3 + 272LL);
    if ( v4 == CColorBrush::IsReadyToDraw )
      IsReadyToDraw = CColorBrush::IsReadyToDraw(v3, a2, a3);
    else
      IsReadyToDraw = v4 == CSurfaceBrush::IsReadyToDraw
                    ? CSurfaceBrush::IsReadyToDraw(v3, a2, a3)
                    : ((__int64 (__fastcall *)(CColorBrush *, struct CDrawingContext *))v4)(v3, a2);
    if ( IsReadyToDraw )
      return 1;
  }
  return result;
}
