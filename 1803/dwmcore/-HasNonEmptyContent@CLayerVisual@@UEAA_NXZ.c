/*
 * XREFs of ?HasNonEmptyContent@CLayerVisual@@UEAA_NXZ @ 0x180009DD0
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009F520 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A9B10 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CLayerVisual::HasNonEmptyContent(CLayerVisual *this)
{
  return *((float *)this + 37) > *((float *)this + 35) && *((float *)this + 38) > *((float *)this + 36);
}
