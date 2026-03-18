/*
 * XREFs of ?IsOfType@CCompositionAmbientLight@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180173290
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CCompositionAmbientLight::IsOfType(__int64 a1, int a2)
{
  char v2; // cl

  v2 = 1;
  if ( (unsigned int)(a2 - 116) > 1 )
    return (unsigned int)(a2 - 127) <= 1;
  return v2;
}
