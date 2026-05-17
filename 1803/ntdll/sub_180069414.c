/*
 * XREFs of sub_180069414 @ 0x180069414
 * Callers:
 *     sub_180067ACC @ 0x180067ACC (sub_180067ACC.c)
 *     sub_180068ED0 @ 0x180068ED0 (sub_180068ED0.c)
 * Callees:
 *     <none>
 */

_WORD *__fastcall sub_180069414(_WORD *a1, unsigned __int64 a2, char a3)
{
  _WORD *result; // rax

  if ( a3 )
  {
    for ( result = (_WORD *)(a2 - 2); result >= a1; --result )
    {
      if ( *result == 64 )
        return result;
    }
  }
  else
  {
    while ( (unsigned __int64)a1 < a2 )
    {
      if ( *a1 == 46 )
        return a1;
      ++a1;
    }
  }
  return (_WORD *)a2;
}
