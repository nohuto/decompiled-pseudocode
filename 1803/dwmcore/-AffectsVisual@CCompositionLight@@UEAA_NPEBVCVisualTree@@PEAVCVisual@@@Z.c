/*
 * XREFs of ?AffectsVisual@CCompositionLight@@UEAA_NPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x18002A750
 * Callers:
 *     ?RetrieveCurrentLightBufferForContextNoRef@CLightStack@@QEAAJPEAVCDrawingContext@@PEBVCMILMatrix@@PEAPEAVCHwLightCollectionBuffer@@@Z @ 0x180015DAC (-RetrieveCurrentLightBufferForContextNoRef@CLightStack@@QEAAJPEAVCDrawingContext@@PEBVCMILMatrix.c)
 * Callees:
 *     <none>
 */

bool __fastcall CCompositionLight::AffectsVisual(
        CCompositionLight *this,
        const struct CVisualTree *a2,
        struct CVisual *a3)
{
  return *((_BYTE *)this + 154);
}
