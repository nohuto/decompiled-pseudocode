/*
 * XREFs of ?IsReadyToDraw@CNineGridBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x180070580
 * Callers:
 *     ?DrawAsDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x180022710 (-DrawAsDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilR.c)
 *     ?IsEmptyDrawing@CSpriteVisualContent@@UEBA_NXZ @ 0x180022D50 (-IsEmptyDrawing@CSpriteVisualContent@@UEBA_NXZ.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180057590 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005DE70 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?IsReadyToDraw@CColorBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x180070B70 (-IsReadyToDraw@CColorBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?IsOfType@CColorBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180070CF0 (-IsOfType@CColorBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?IsIdentity@CComponentTransform2D@@QEBA_NXZ @ 0x180159E08 (-IsIdentity@CComponentTransform2D@@QEBA_NXZ.c)
 */

bool __fastcall CNineGridBrush::IsReadyToDraw(CNineGridBrush *this, struct CDrawingContext *a2, bool *a3)
{
  CColorBrush *v4; // rcx
  bool (__fastcall *v5)(CColorBrush *__hidden, struct CDrawingContext *, bool *); // rax
  char v6; // al
  __int64 v7; // rcx
  __int64 (__fastcall *v8)(__int64, __int64); // rax
  bool result; // al
  CComponentTransform2D *v11; // rcx

  *a3 = 0;
  v4 = (CColorBrush *)*((_QWORD *)this + 10);
  result = 0;
  if ( v4 )
  {
    v5 = *(bool (__fastcall **)(CColorBrush *__hidden, struct CDrawingContext *, bool *))(*(_QWORD *)v4 + 240LL);
    v6 = v5 == CColorBrush::IsReadyToDraw
       ? CColorBrush::IsReadyToDraw(v4, a2, a3)
       : ((__int64 (__fastcall *)(CColorBrush *, struct CDrawingContext *))v5)(v4, a2);
    if ( v6 )
    {
      v7 = *((_QWORD *)this + 10);
      v8 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 48LL);
      if ( !(v8 == CColorBrush::IsOfType ? CColorBrush::IsOfType(v7, 124LL) : (unsigned __int8)v8(v7, 124LL)) )
        return 1;
      v11 = *(CComponentTransform2D **)(*((_QWORD *)this + 10) + 112LL);
      if ( !v11 || CComponentTransform2D::IsIdentity(v11) )
        return 1;
    }
  }
  return result;
}
