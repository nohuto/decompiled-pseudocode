/*
 * XREFs of sub_1800F1BC0 @ 0x1800F1BC0
 * Callers:
 *     sub_1800090E0 @ 0x1800090E0 (sub_1800090E0.c)
 * Callees:
 *     memset @ 0x1800A16C0 (memset.c)
 */

__int64 __fastcall sub_1800F1BC0(__int64 a1, unsigned __int64 a2, unsigned __int8 a3)
{
  if ( a2 > 2 )
    memset((void *)(a1 + 2), a3, a2 - 2);
  return 0LL;
}
