/*
 * XREFs of sub_180003844 @ 0x180003844
 * Callers:
 *     sub_180068ED0 @ 0x180068ED0 (sub_180068ED0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180003844(unsigned __int16 a1, unsigned __int16 *a2, unsigned __int16 **a3)
{
  unsigned __int16 *i; // r9
  __int64 result; // rax

  for ( i = *a3; --i >= a2; i[1] = result )
    result = *i;
  *a2 = a1;
  ++*a3;
  return result;
}
