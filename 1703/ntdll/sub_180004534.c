/*
 * XREFs of sub_180004534 @ 0x180004534
 * Callers:
 *     sub_18006AAE8 @ 0x18006AAE8 (sub_18006AAE8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180004534(unsigned __int16 a1, unsigned __int16 *a2, unsigned __int16 **a3)
{
  unsigned __int16 *i; // r9
  __int64 result; // rax

  for ( i = *a3; --i >= a2; i[1] = result )
    result = *i;
  *a2 = a1;
  ++*a3;
  return result;
}
