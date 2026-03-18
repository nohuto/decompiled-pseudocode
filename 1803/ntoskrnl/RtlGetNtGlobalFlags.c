/*
 * XREFs of RtlGetNtGlobalFlags @ 0x1407866E0
 * Callers:
 *     RtlpAllocateHeap @ 0x1402894E0 (RtlpAllocateHeap.c)
 * Callees:
 *     <none>
 */

ULONG RtlGetNtGlobalFlags(void)
{
  return NtGlobalFlag;
}
