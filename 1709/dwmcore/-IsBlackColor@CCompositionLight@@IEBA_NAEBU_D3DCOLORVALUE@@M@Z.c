/*
 * XREFs of ?IsBlackColor@CCompositionLight@@IEBA_NAEBU_D3DCOLORVALUE@@M@Z @ 0x1800B15D8
 * Callers:
 *     ?IsBlackLight@CCompositionAmbientLight@@UEBA_NXZ @ 0x1800B11E0 (-IsBlackLight@CCompositionAmbientLight@@UEBA_NXZ.c)
 *     ?IsBlackLight@CCompositionDistantLight@@UEBA_NXZ @ 0x18015AD70 (-IsBlackLight@CCompositionDistantLight@@UEBA_NXZ.c)
 *     ?IsBlackLight@CCompositionPointLight@@UEBA_NXZ @ 0x18015C180 (-IsBlackLight@CCompositionPointLight@@UEBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CCompositionLight::IsBlackColor(CCompositionLight *this, const struct _D3DCOLORVALUE *a2, float a3)
{
  bool result; // al
  float v5; // xmm2_4
  float v6; // xmm1_4

  result = 0;
  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(a3 * a2->r)) & _xmm) < 0.0000011920929 )
  {
    v5 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(a3 * a2->g)) & _xmm);
    if ( v5 < 0.0000011920929 )
    {
      v6 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(a3 * a2->b)) & _xmm);
      if ( v6 < 0.0000011920929 )
        return 1;
    }
  }
  return result;
}
