/*
 * XREFs of ?IsPrimitiveClampedToContentRect@CSurfaceDrawListBrush@@QEBA_NXZ @ 0x18008DAE8
 * Callers:
 *     ?Initialize@CNineGridDrawListBrush@@AEAAJXZ @ 0x180004F0C (-Initialize@CNineGridDrawListBrush@@AEAAJXZ.c)
 *     ?ComputeSurfaceClampData@CBrushRenderingEffect@@CAXPEBVCSurfaceDrawListBrush@@PEATSurfaceSamplerData@CRenderingTechnique@@@Z @ 0x18008B29C (-ComputeSurfaceClampData@CBrushRenderingEffect@@CAXPEBVCSurfaceDrawListBrush@@PEATSurfaceSampler.c)
 *     ?UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAUEffectStage@@PEAVCDrawListCache@@@Z @ 0x18008DD3C (-UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawLi.c)
 * Callees:
 *     ?AreEqual@@YA_NAEBUD2D_RECT_F@@0@Z @ 0x18008B008 (-AreEqual@@YA_NAEBUD2D_RECT_F@@0@Z.c)
 */

char __fastcall CSurfaceDrawListBrush::IsPrimitiveClampedToContentRect(const struct D2D_RECT_F *this)
{
  char v1; // r8
  char v2; // al

  v1 = 0;
  if ( LOBYTE(this[3].top) )
  {
    v2 = AreEqual(this + 5, this + 2);
    if ( v2 != v1 )
      return 1;
  }
  return v1;
}
