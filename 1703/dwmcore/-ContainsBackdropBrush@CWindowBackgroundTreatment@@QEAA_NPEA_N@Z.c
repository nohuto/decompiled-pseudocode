/*
 * XREFs of ?ContainsBackdropBrush@CWindowBackgroundTreatment@@QEAA_NPEA_N@Z @ 0x1800104DC
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180096CB0 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A2960 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?GenerateImageSourceForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@Z @ 0x180178460 (-GenerateImageSourceForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?GetBrushGraph@CSpriteVisualContent@@QEAAPEAVCBrushRenderingGraph@@XZ @ 0x1800105F0 (-GetBrushGraph@CSpriteVisualContent@@QEAAPEAVCBrushRenderingGraph@@XZ.c)
 */

_BOOL8 __fastcall CWindowBackgroundTreatment::ContainsBackdropBrush(CSpriteVisualContent **this, bool *a2)
{
  struct CBrushRenderingGraph *BrushGraph; // r8
  _BOOL8 result; // rax

  BrushGraph = CSpriteVisualContent::GetBrushGraph(this[7]);
  result = 0LL;
  *a2 = 0;
  if ( BrushGraph )
  {
    *a2 = *((_BYTE *)BrushGraph + 353);
    return *((_BYTE *)BrushGraph + 352) != 0;
  }
  return result;
}
