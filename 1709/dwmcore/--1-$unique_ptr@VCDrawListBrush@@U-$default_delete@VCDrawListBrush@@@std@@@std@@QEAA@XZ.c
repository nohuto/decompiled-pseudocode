/*
 * XREFs of ??1?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x180048A20
 * Callers:
 *     ?GenerateDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180022A30 (-GenerateDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListC.c)
 *     ?GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180028FA0 (-GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDraw.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x180048BB4 (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall std::unique_ptr<CDrawListBrush>::~unique_ptr<CDrawListBrush>(CSurfaceDrawListBrush **a1)
{
  CSurfaceDrawListBrush *v1; // rcx
  void *(__fastcall *v2)(CSurfaceDrawListBrush *__hidden, unsigned int); // rax

  v1 = *a1;
  if ( v1 )
  {
    v2 = **(void *(__fastcall ***)(CSurfaceDrawListBrush *__hidden, unsigned int))v1;
    if ( v2 == CSurfaceDrawListBrush::`vector deleting destructor' )
    {
      CSurfaceDrawListBrush::`vector deleting destructor'(v1, 1u);
    }
    else if ( v2 == CGeometryOnlyDrawListBrush::`vector deleting destructor' )
    {
      CGeometryOnlyDrawListBrush::`vector deleting destructor'(v1, 1u);
    }
    else
    {
      v2(v1, 1u);
    }
  }
}
