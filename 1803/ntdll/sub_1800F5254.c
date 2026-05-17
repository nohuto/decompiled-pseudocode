/*
 * XREFs of sub_1800F5254 @ 0x1800F5254
 * Callers:
 *     sub_180069670 @ 0x180069670 (sub_180069670.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800F5254(int a1, int a2)
{
  if ( (unsigned int)(a1 - 4352) > 0x12 || (unsigned int)(a2 - 4449) > 0x14 )
    return 0LL;
  else
    return (unsigned int)(28 * (a2 - 4449 + 21 * (a1 - 4352)) + 44032);
}
