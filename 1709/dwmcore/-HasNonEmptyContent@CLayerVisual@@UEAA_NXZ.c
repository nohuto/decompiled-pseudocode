/*
 * XREFs of ?HasNonEmptyContent@CLayerVisual@@UEAA_NXZ @ 0x180083470
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180057590 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CLayerVisual::HasNonEmptyContent(CLayerVisual *this)
{
  return *((float *)this + 37) > *((float *)this + 35) && *((float *)this + 38) > *((float *)this + 36);
}
