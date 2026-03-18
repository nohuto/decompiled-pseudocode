/*
 * XREFs of ?IsBlackLight@CCompositionDistantLight@@UEBA_NXZ @ 0x18015AD70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CCompositionDistantLight::IsBlackLight(struct _D3DCOLORVALUE *this)
{
  return CCompositionLight::IsBlackColor((CCompositionLight *)this, this + 10, this[12].g);
}
