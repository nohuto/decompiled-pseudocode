/*
 * XREFs of ?IsOfType@CCompositionLight@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180172F40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CCompositionLight::IsOfType(__int64 a1, int a2)
{
  char v2; // cl

  v2 = 1;
  if ( (unsigned int)(a2 - 116) > 1 )
    return a2 == 127;
  return v2;
}
