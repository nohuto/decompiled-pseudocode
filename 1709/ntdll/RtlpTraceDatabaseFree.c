/*
 * XREFs of RtlpTraceDatabaseFree @ 0x1800FB238
 * Callers:
 *     RtlTraceDatabaseDestroy @ 0x1800FAF70 (RtlTraceDatabaseDestroy.c)
 * Callees:
 *     ZwFreeVirtualMemory @ 0x1800A0480 (ZwFreeVirtualMemory.c)
 */

bool RtlpTraceDatabaseFree()
{
  return (int)ZwFreeVirtualMemory() >= 0;
}
