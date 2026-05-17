/*
 * XREFs of sub_180102C1C @ 0x180102C1C
 * Callers:
 *     sub_180100B70 @ 0x180100B70 (sub_180100B70.c)
 * Callees:
 *     ZwQueryVirtualMemory @ 0x1800A5760 (ZwQueryVirtualMemory.c)
 *     ZwProtectVirtualMemory @ 0x1800A5D00 (ZwProtectVirtualMemory.c)
 */

__int64 sub_180102C1C()
{
  __int64 result; // rax

  result = ZwQueryVirtualMemory();
  if ( (int)result >= 0 )
    return ZwProtectVirtualMemory();
  return result;
}
