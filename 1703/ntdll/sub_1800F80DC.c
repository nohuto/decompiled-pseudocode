/*
 * XREFs of sub_1800F80DC @ 0x1800F80DC
 * Callers:
 *     sub_180002B34 @ 0x180002B34 (sub_180002B34.c)
 * Callees:
 *     sub_1800F7F4C @ 0x1800F7F4C (sub_1800F7F4C.c)
 *     sub_1800F8150 @ 0x1800F8150 (sub_1800F8150.c)
 *     sub_1800F834C @ 0x1800F834C (sub_1800F834C.c)
 */

__int64 __fastcall sub_1800F80DC(__int64 a1, int *a2, int *a3, unsigned int a4, int a5)
{
  int v9; // eax

  if ( !*a2 )
  {
    if ( !*a3 )
      *a3 = sub_1800F8150(a1, a4);
    v9 = sub_1800F834C(a1, a4);
    *a2 = sub_1800F7F4C(a1, *a3, v9);
  }
  return sub_1800F7F4C(a1, *a2, a5);
}
