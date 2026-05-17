/*
 * XREFs of sub_1800F7CF8 @ 0x1800F7CF8
 * Callers:
 *     RtlTraceDatabaseDestroy @ 0x1800F7A40 (RtlTraceDatabaseDestroy.c)
 * Callees:
 *     ZwFreeVirtualMemory @ 0x18009AE80 (ZwFreeVirtualMemory.c)
 */

bool sub_1800F7CF8()
{
  return (int)ZwFreeVirtualMemory() >= 0;
}
