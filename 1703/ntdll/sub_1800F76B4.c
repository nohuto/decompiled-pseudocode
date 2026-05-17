/*
 * XREFs of sub_1800F76B4 @ 0x1800F76B4
 * Callers:
 *     sub_18006B394 @ 0x18006B394 (sub_18006B394.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800F76B4(int a1, int a2)
{
  if ( (unsigned int)(a1 - 4352) > 0x12 || (unsigned int)(a2 - 4449) > 0x14 )
    return 0LL;
  else
    return (unsigned int)(28 * (a2 - 4449 + 21 * (a1 - 4352)) + 44032);
}
