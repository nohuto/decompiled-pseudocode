/*
 * XREFs of ?IsOfType@CCompositionDistantLight@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180184030
 * Callers:
 *     <none>
 * Callees:
 *     ?IsOfType@CPropertyChangeResource@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18002AED0 (-IsOfType@CPropertyChangeResource@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 */

char __fastcall CCompositionDistantLight::IsOfType(__int64 a1, int a2)
{
  bool v2; // al
  char v3; // cl

  if ( (unsigned int)(a2 - 31) <= 1 )
    return 1;
  v2 = CPropertyChangeResource::IsOfType(a1, a2);
  v3 = 0;
  if ( v2 )
    return 1;
  return v3;
}
