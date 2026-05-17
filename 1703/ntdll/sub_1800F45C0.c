/*
 * XREFs of sub_1800F45C0 @ 0x1800F45C0
 * Callers:
 *     sub_180060D78 @ 0x180060D78 (sub_180060D78.c)
 * Callees:
 *     memset @ 0x1800ABDC0 (memset.c)
 */

__int64 __fastcall sub_1800F45C0(__int64 a1, unsigned __int64 a2, unsigned __int8 a3)
{
  if ( a2 > 2 )
    memset((void *)(a1 + 2), a3, a2 - 2);
  return 0LL;
}
