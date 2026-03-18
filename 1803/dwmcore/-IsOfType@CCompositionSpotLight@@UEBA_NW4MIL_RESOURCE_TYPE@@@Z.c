/*
 * XREFs of ?IsOfType@CCompositionSpotLight@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18002A7D0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsOfType@CPropertyChangeResource@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18002AED0 (-IsOfType@CPropertyChangeResource@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 */

char __fastcall CCompositionSpotLight::IsOfType(__int64 a1, int a2)
{
  char v2; // cl
  char v4; // al

  if ( ((a2 - 32) & 0xFFFFFFFB) == 0 )
    return 1;
  v4 = CPropertyChangeResource::IsOfType();
  v2 = 0;
  if ( v4 )
    return 1;
  return v2;
}
