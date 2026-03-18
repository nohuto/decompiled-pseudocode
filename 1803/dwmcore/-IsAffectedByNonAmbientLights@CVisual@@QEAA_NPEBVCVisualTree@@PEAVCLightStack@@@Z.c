/*
 * XREFs of ?IsAffectedByNonAmbientLights@CVisual@@QEAA_NPEBVCVisualTree@@PEAVCLightStack@@@Z @ 0x1801A804C
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A0E20 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?GetActiveLightCount@CLightStack@@QEBAIPEAVCVisual@@PEBVCVisualTree@@_N@Z @ 0x1801731C8 (-GetActiveLightCount@CLightStack@@QEBAIPEAVCVisual@@PEBVCVisualTree@@_N@Z.c)
 */

bool __fastcall CVisual::IsAffectedByNonAmbientLights(
        CVisual *this,
        const struct CVisualTree *a2,
        struct CLightStack *a3)
{
  return (unsigned int)CLightStack::GetActiveLightCount(a3, this, a2, 0) != 0;
}
