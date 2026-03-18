/*
 * XREFs of ?IsReadyToDraw@CNineGridBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x1800BFA40
 * Callers:
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180086EC0 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?IsEmptyDrawing@CSpriteVisualContent@@UEBA_NXZ @ 0x18008CA40 (-IsEmptyDrawing@CSpriteVisualContent@@UEBA_NXZ.c)
 *     ?DrawAsDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18008CCE0 (-DrawAsDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilR.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180096CB0 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009BD50 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?IsReadyToDraw@CColorBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x18008B900 (-IsReadyToDraw@CColorBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?IsOfType@CColorBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18008BF10 (-IsOfType@CColorBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?IsIdentity@CComponentTransform2D@@QEBA_NXZ @ 0x180170850 (-IsIdentity@CComponentTransform2D@@QEBA_NXZ.c)
 */

bool __fastcall CNineGridBrush::IsReadyToDraw(CNineGridBrush *this, struct CDrawingContext *a2, bool *a3)
{
  CColorBrush *v4; // rcx
  char (__fastcall *v5)(CColorBrush *, struct CDrawingContext *, bool *); // rax
  char v6; // al
  __int64 v7; // rcx
  bool (__fastcall *v8)(__int64, int); // rax
  bool result; // al
  CComponentTransform2D *v11; // rcx

  *a3 = 0;
  v4 = (CColorBrush *)*((_QWORD *)this + 10);
  result = 0;
  if ( v4 )
  {
    v5 = *(char (__fastcall **)(CColorBrush *, struct CDrawingContext *, bool *))(*(_QWORD *)v4 + 224LL);
    v6 = v5 == CColorBrush::IsReadyToDraw
       ? CColorBrush::IsReadyToDraw(v4, a2, a3)
       : ((__int64 (__fastcall *)(CColorBrush *, struct CDrawingContext *))v5)(v4, a2);
    if ( v6 )
    {
      v7 = *((_QWORD *)this + 10);
      v8 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v7 + 48LL);
      if ( !(v8 == CColorBrush::IsOfType ? CColorBrush::IsOfType(v7, 84) : v8(v7, 84)) )
        return 1;
      v11 = *(CComponentTransform2D **)(*((_QWORD *)this + 10) + 112LL);
      if ( !v11 || CComponentTransform2D::IsIdentity(v11) )
        return 1;
    }
  }
  return result;
}
