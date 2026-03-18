/*
 * XREFs of ?IsBlackLight@CCompositionAmbientLight@@UEBA_NXZ @ 0x1800B11E0
 * Callers:
 *     ?RetrieveCurrentLightBufferForContextNoRef@CLightStack@@QEAAJPEAVCDrawingContext@@PEBVCMILMatrix@@PEAPEAVCHwLightCollectionBuffer@@@Z @ 0x18009E9C8 (-RetrieveCurrentLightBufferForContextNoRef@CLightStack@@QEAAJPEAVCDrawingContext@@PEBVCMILMatrix.c)
 * Callees:
 *     <none>
 */

bool __fastcall CCompositionAmbientLight::IsBlackLight(struct _D3DCOLORVALUE *this)
{
  return CCompositionLight::IsBlackColor((CCompositionLight *)this, this + 10, this[11].r);
}
