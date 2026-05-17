/*
 * XREFs of RtlStdDeleteStackDatabase @ 0x1800FA100
 * Callers:
 *     RtlpInitializeStackTraceDatabase @ 0x1800FA4C8 (RtlpInitializeStackTraceDatabase.c)
 * Callees:
 *     ZwFreeVirtualMemory @ 0x1800A0480 (ZwFreeVirtualMemory.c)
 */

__int64 RtlStdDeleteStackDatabase()
{
  return ZwFreeVirtualMemory();
}
