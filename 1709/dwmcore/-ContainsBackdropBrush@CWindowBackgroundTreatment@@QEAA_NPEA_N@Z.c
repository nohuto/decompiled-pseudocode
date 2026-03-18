/*
 * XREFs of ?ContainsBackdropBrush@CWindowBackgroundTreatment@@QEAA_NPEA_N@Z @ 0x1800B1D9C
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180037630 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180057590 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?GenerateImageSourceForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@Z @ 0x1800B1DD4 (-GenerateImageSourceForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?GetBrushGraph@CSpriteVisualContent@@QEAAPEAVCBrushRenderingGraph@@XZ @ 0x1800226AC (-GetBrushGraph@CSpriteVisualContent@@QEAAPEAVCBrushRenderingGraph@@XZ.c)
 */

bool __fastcall CWindowBackgroundTreatment::ContainsBackdropBrush(CSpriteVisualContent **this, bool *a2)
{
  struct CBrushRenderingGraph *BrushGraph; // r8
  bool result; // al

  BrushGraph = CSpriteVisualContent::GetBrushGraph(this[7], (_BOOL8)a2);
  result = 0;
  *a2 = 0;
  if ( BrushGraph )
  {
    *a2 = *((_BYTE *)BrushGraph + 353);
    return *((_BYTE *)BrushGraph + 352) != 0;
  }
  return result;
}
