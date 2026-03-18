/*
 * XREFs of ?IsOfType@CCompositionSpotLight@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180174210
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CCompositionSpotLight::IsOfType(__int64 a1, int a2)
{
  unsigned int v2; // edx
  int v3; // eax
  _BOOL8 result; // rax

  v2 = a2 - 116;
  result = 0;
  if ( v2 <= 0xF )
  {
    v3 = 34819;
    if ( _bittest(&v3, v2) )
      return 1;
  }
  return result;
}
