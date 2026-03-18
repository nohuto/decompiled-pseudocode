/*
 * XREFs of ?IsOfType@CMatrixTransform3DMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C008F9B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall DirectComposition::CMatrixTransform3DMarshaler::IsOfType(__int64 a1, unsigned int a2)
{
  int v2; // eax
  _BOOL8 result; // rax

  result = 0;
  if ( a2 <= 0x1B )
  {
    v2 = 142606400;
    if ( _bittest(&v2, a2) )
      return 1;
  }
  return result;
}
