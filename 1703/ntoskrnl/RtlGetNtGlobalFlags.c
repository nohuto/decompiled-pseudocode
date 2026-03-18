/*
 * XREFs of RtlGetNtGlobalFlags @ 0x1406EB030
 * Callers:
 *     RtlpAllocateHeap @ 0x14000F830 (RtlpAllocateHeap.c)
 * Callees:
 *     <none>
 */

ULONG RtlGetNtGlobalFlags(void)
{
  return NtGlobalFlag;
}
