/*
 * XREFs of sub_180105554 @ 0x180105554
 * Callers:
 *     sub_180104908 @ 0x180104908 (sub_180104908.c)
 * Callees:
 *     ZwQueryVirtualMemory @ 0x18009AF20 (ZwQueryVirtualMemory.c)
 *     ZwProtectVirtualMemory @ 0x18009B4C0 (ZwProtectVirtualMemory.c)
 */

__int64 sub_180105554()
{
  __int64 result; // rax

  result = ZwQueryVirtualMemory();
  if ( (int)result >= 0 )
    return ZwProtectVirtualMemory();
  return result;
}
