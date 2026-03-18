/*
 * XREFs of ?IsOfType@CDropShadow@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18018A680
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CDropShadow::IsOfType(__int64 a1, unsigned int a2)
{
  __int64 v2; // rcx
  bool result; // al

  result = 0;
  if ( a2 <= 0x31 )
  {
    v2 = 0x2010400004000LL;
    if ( _bittest64(&v2, (int)a2) )
      return 1;
  }
  return result;
}
