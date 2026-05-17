/*
 * XREFs of sub_18006B04C @ 0x18006B04C
 * Callers:
 *     sub_180069760 @ 0x180069760 (sub_180069760.c)
 *     sub_18006AAE8 @ 0x18006AAE8 (sub_18006AAE8.c)
 * Callees:
 *     <none>
 */

_WORD *__fastcall sub_18006B04C(_WORD *a1, unsigned __int64 a2, char a3)
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
