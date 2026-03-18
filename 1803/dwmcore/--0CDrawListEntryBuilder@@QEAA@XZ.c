/*
 * XREFs of ??0CDrawListEntryBuilder@@QEAA@XZ @ 0x1800AD808
 * Callers:
 *     ?GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180007680 (-GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDraw.c)
 *     ??0CDrawingContext@@AEAA@PEAVCComposition@@@Z @ 0x18006E7D0 (--0CDrawingContext@@AEAA@PEAVCComposition@@@Z.c)
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2_F@@PEAVCDrawListCache@@@Z @ 0x180071D00 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2.c)
 *     ?UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAUEffectStage@@PEAVCDrawListCache@@@Z @ 0x18008DD3C (-UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawLi.c)
 *     ?GenerateDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18009CE90 (-GenerateDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListC.c)
 *     ?GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800B35A0 (-GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCac.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJPEAPEAVCSurfaceDrawListBrush@@PEBVCDrawListBrush@@PEAVCRenderingEffectFactory@@@Z @ 0x18017BC04 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJPEAPEAVCSurfaceDrawListBrush@@PE.c)
 *     ?GenerateDrawList@CCompositionSkyBoxBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180185FF0 (-GenerateDrawList@CCompositionSkyBoxBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawLi.c)
 *     ?GenerateDrawList@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180190480 (-GenerateDrawList@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801C1450 (-GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?Render@CShapeDrawingContext@@QEAAJXZ @ 0x1802109EC (-Render@CShapeDrawingContext@@QEAAJXZ.c)
 * Callees:
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 */

CDrawListEntryBuilder *__fastcall CDrawListEntryBuilder::CDrawListEntryBuilder(CDrawListEntryBuilder *this)
{
  __int64 v2; // rax
  CDrawListEntryBuilder *result; // rax

  memset_0(this, 0, 0x20uLL);
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = (char *)this + 72;
  *((_QWORD *)this + 6) = (char *)this + 72;
  *((_DWORD *)this + 14) = 4;
  *(_QWORD *)((char *)this + 60) = 4LL;
  *((_DWORD *)this + 26) = 0;
  *((_QWORD *)this + 14) = (char *)this + 144;
  *((_QWORD *)this + 15) = (char *)this + 144;
  *((_DWORD *)this + 32) = 2;
  *(_QWORD *)((char *)this + 132) = 2LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *((_BYTE *)this + 348) |= 4u;
  *((_QWORD *)this + 37) = 0LL;
  *((_DWORD *)this + 70) = 0;
  *((_DWORD *)this + 34) = 0;
  v2 = *((_QWORD *)this + 36);
  *((_QWORD *)this + 40) = 0LL;
  *((_DWORD *)this + 82) = 0;
  if ( v2 )
  {
    *(_QWORD *)(v2 + 64) = 0LL;
    *(_DWORD *)(v2 + 32) = 0;
    *(_DWORD *)(v2 + 56) = 0;
    *(_QWORD *)(v2 + 88) = 0LL;
    *(_QWORD *)(v2 + 96) = 0LL;
    *(_DWORD *)(v2 + 104) = 0;
    *(_DWORD *)(v2 + 128) = 0;
  }
  *((_BYTE *)this + 348) = *((_BYTE *)this + 348) & 4 | 1;
  *((_QWORD *)this + 44) = 0LL;
  *((_QWORD *)this + 45) = (char *)this + 392;
  *((_QWORD *)this + 46) = (char *)this + 392;
  *((_DWORD *)this + 94) = 960;
  *(_QWORD *)((char *)this + 380) = 960LL;
  *((_QWORD *)this + 169) = (char *)this + 1384;
  *((_QWORD *)this + 170) = (char *)this + 1384;
  *((_DWORD *)this + 342) = 960;
  *(_QWORD *)((char *)this + 1372) = 960LL;
  *((_DWORD *)this + 586) = 0;
  *((_QWORD *)this + 294) = (char *)this + 2384;
  *((_QWORD *)this + 295) = (char *)this + 2384;
  *((_DWORD *)this + 592) = 30;
  *(_QWORD *)((char *)this + 2372) = 30LL;
  result = this;
  *((_QWORD *)this + 306) = 0LL;
  *((_QWORD *)this + 307) = 0LL;
  *((_WORD *)this + 1232) = 0;
  return result;
}
