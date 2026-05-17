/*
 * XREFs of sub_1800F8098 @ 0x1800F8098
 * Callers:
 *     sub_180002B34 @ 0x180002B34 (sub_180002B34.c)
 * Callees:
 *     sub_1800F8150 @ 0x1800F8150 (sub_1800F8150.c)
 */

__int64 __fastcall sub_1800F8098(__int64 a1, int *a2, unsigned int a3, int a4)
{
  if ( !*a2 )
    *a2 = sub_1800F8150(a1, a3);
  return sub_1800F7F4C(a1, *a2, a4);
}
