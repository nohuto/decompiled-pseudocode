/*
 * XREFs of sub_1800D7D5C @ 0x1800D7D5C
 * Callers:
 *     sub_1800D7658 @ 0x1800D7658 (sub_1800D7658.c)
 *     sub_1800D7A54 @ 0x1800D7A54 (sub_1800D7A54.c)
 * Callees:
 *     ZwFreeVirtualMemory @ 0x18009AE80 (ZwFreeVirtualMemory.c)
 */

__int64 __fastcall sub_1800D7D5C(__int64 a1)
{
  if ( a1 )
    return ZwFreeVirtualMemory();
  else
    return 3221225485LL;
}
