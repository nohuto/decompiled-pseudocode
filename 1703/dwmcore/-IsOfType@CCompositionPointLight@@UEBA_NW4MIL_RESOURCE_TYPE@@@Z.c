/*
 * XREFs of ?IsOfType@CCompositionPointLight@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801738F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CCompositionPointLight::IsOfType(__int64 a1, int a2)
{
  unsigned int v2; // edx
  int v3; // eax
  _BOOL8 result; // rax

  v2 = a2 - 116;
  result = 0;
  if ( v2 <= 0xE )
  {
    v3 = 18435;
    if ( _bittest(&v3, v2) )
      return 1;
  }
  return result;
}
