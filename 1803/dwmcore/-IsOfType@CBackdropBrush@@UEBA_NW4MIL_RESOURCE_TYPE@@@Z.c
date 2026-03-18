/*
 * XREFs of ?IsOfType@CBackdropBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800C5B60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CBackdropBrush::IsOfType(__int64 a1, unsigned int a2)
{
  __int64 v2; // rcx
  bool result; // al

  result = 0;
  if ( a2 <= 0x28 )
  {
    v2 = 0x10000004100LL;
    if ( _bittest64(&v2, (int)a2) )
      return 1;
  }
  return result;
}
