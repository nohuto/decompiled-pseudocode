/*
 * XREFs of sub_1800F9D28 @ 0x1800F9D28
 * Callers:
 *     RtlTraceDatabaseDestroy @ 0x1800F9A60 (RtlTraceDatabaseDestroy.c)
 * Callees:
 *     ZwFreeVirtualMemory @ 0x1800A56C0 (ZwFreeVirtualMemory.c)
 */

bool sub_1800F9D28()
{
  return (int)ZwFreeVirtualMemory() >= 0;
}
