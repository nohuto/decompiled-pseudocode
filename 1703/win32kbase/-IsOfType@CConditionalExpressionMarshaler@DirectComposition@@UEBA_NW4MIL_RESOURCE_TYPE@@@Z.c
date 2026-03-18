/*
 * XREFs of ?IsOfType@CConditionalExpressionMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C0140BF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall DirectComposition::CConditionalExpressionMarshaler::IsOfType(__int64 a1, int a2)
{
  unsigned int v2; // edx
  int v3; // eax
  _BOOL8 result; // rax

  v2 = a2 - 110;
  result = 0;
  if ( v2 <= 6 )
  {
    v3 = 73;
    if ( _bittest(&v3, v2) )
      return 1;
  }
  return result;
}
