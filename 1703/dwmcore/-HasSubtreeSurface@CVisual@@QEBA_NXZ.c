/*
 * XREFs of ?HasSubtreeSurface@CVisual@@QEBA_NXZ @ 0x1800132C4
 * Callers:
 *     ?IsReadyToDraw@CEffectBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x180010B50 (-IsReadyToDraw@CEffectBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800186FC (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCa.c)
 * Callees:
 *     ?GetTreeEffectInternal@CVisual@@QEBAPEAVCTreeEffect@@XZ @ 0x1800136BC (-GetTreeEffectInternal@CVisual@@QEBAPEAVCTreeEffect@@XZ.c)
 */

bool __fastcall CVisual::HasSubtreeSurface(CVisual *this)
{
  __int64 v1; // r10
  struct CTreeEffect *TreeEffectInternal; // rax

  LOBYTE(v1) = 0;
  if ( (*(_DWORD *)(*((_QWORD *)this + 26) + 4LL) & 0x10000) != 0 )
  {
    TreeEffectInternal = CVisual::GetTreeEffectInternal(this);
    if ( *((_QWORD *)TreeEffectInternal + 1) != v1 )
      LOBYTE(v1) = 1;
  }
  return v1;
}
