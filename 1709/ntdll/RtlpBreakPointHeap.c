/*
 * XREFs of RtlpBreakPointHeap @ 0x180104C08
 * Callers:
 *     RtlpGrowBlockInPlace @ 0x180008C44 (RtlpGrowBlockInPlace.c)
 *     RtlpCreateSplitBlock @ 0x1800090BC (RtlpCreateSplitBlock.c)
 *     RtlpCoalesceFreeBlocks @ 0x180038A9C (RtlpCoalesceFreeBlocks.c)
 *     RtlpDeCommitFreeBlock @ 0x180038F8C (RtlpDeCommitFreeBlock.c)
 *     RtlpFreeHeap @ 0x18003AD60 (RtlpFreeHeap.c)
 *     RtlpReAllocateHeap @ 0x18003CA00 (RtlpReAllocateHeap.c)
 *     RtlpAllocateHeap @ 0x1800437B0 (RtlpAllocateHeap.c)
 *     RtlpCheckHeapSignature @ 0x18004A1AC (RtlpCheckHeapSignature.c)
 *     RtlpValidateHeapEntry @ 0x18004C0E4 (RtlpValidateHeapEntry.c)
 *     RtlpCheckBusyBlockTail @ 0x1800F2B78 (RtlpCheckBusyBlockTail.c)
 *     RtlDebugAllocateHeap @ 0x180103090 (RtlDebugAllocateHeap.c)
 *     RtlDebugCreateHeap @ 0x180103588 (RtlDebugCreateHeap.c)
 *     RtlDebugFreeHeap @ 0x180103A6C (RtlDebugFreeHeap.c)
 *     RtlDebugReAllocateHeap @ 0x180104040 (RtlDebugReAllocateHeap.c)
 *     RtlpValidateHeap @ 0x180104C28 (RtlpValidateHeap.c)
 * Callees:
 *     <none>
 */

struct _PEB *RtlpBreakPointHeap()
{
  struct _PEB *result; // rax

  result = NtCurrentPeb();
  if ( result->BeingDebugged )
  {
    __debugbreak();
    RtlpHeapInvalidBreakPoint = 0;
  }
  return result;
}
