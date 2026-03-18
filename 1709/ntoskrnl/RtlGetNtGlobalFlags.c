/*
 * XREFs of RtlGetNtGlobalFlags @ 0x140722F40
 * Callers:
 *     RtlpAllocateHeap @ 0x14010DCD4 (RtlpAllocateHeap.c)
 * Callees:
 *     <none>
 */

ULONG RtlGetNtGlobalFlags(void)
{
  return NtGlobalFlag;
}
