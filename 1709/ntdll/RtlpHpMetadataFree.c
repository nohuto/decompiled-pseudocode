/*
 * XREFs of RtlpHpMetadataFree @ 0x18006F570
 * Callers:
 *     RtlpHpLargeAlloc @ 0x18006EC20 (RtlpHpLargeAlloc.c)
 *     RtlpHpTagContextAllocateTag @ 0x18006EE4C (RtlpHpTagContextAllocateTag.c)
 *     RtlpHpTagRunOnceInit @ 0x18006F140 (RtlpHpTagRunOnceInit.c)
 *     RtlpHpLargeFree @ 0x18006F490 (RtlpHpLargeFree.c)
 *     RtlpHpPerHeapStackTraceCleanup @ 0x1800FFBD8 (RtlpHpPerHeapStackTraceCleanup.c)
 *     RtlpHpStackDbFreeRoutine @ 0x1800FFDC0 (RtlpHpStackDbFreeRoutine.c)
 *     RtlpHpStackTraceAddStack @ 0x1800FFF48 (RtlpHpStackTraceAddStack.c)
 *     RtlpHpStackTraceAllocAdd @ 0x18010003C (RtlpHpStackTraceAllocAdd.c)
 *     RtlpHpStackTraceAllocRemove @ 0x1801003D0 (RtlpHpStackTraceAllocRemove.c)
 *     RtlpHpStackTraceEtwCallback @ 0x180100620 (RtlpHpStackTraceEtwCallback.c)
 *     RtlpHpLargeAllocationDestroy @ 0x180107570 (RtlpHpLargeAllocationDestroy.c)
 * Callees:
 *     RtlpHpFreeHeap @ 0x18003FEE0 (RtlpHpFreeHeap.c)
 */

__int64 __fastcall RtlpHpMetadataFree(unsigned __int64 a1)
{
  return RtlpHpFreeHeap(RtlpHpMetadataHeap, a1, 0x1000000, 0LL, 0LL);
}
