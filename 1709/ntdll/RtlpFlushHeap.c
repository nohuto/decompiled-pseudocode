/*
 * XREFs of RtlpFlushHeap @ 0x180013DA4
 * Callers:
 *     RtlpFlushHeapsCallback @ 0x1800138D0 (RtlpFlushHeapsCallback.c)
 *     RtlSetHeapInformation @ 0x18007D960 (RtlSetHeapInformation.c)
 * Callees:
 *     RtlTryEnterCriticalSection @ 0x1800142C0 (RtlTryEnterCriticalSection.c)
 *     RtlpLowFragHeapFlushCaches @ 0x1800145D4 (RtlpLowFragHeapFlushCaches.c)
 *     RtlLeaveCriticalSection @ 0x1800460E0 (RtlLeaveCriticalSection.c)
 *     RtlpCollectFreeBlocks @ 0x18004A3FC (RtlpCollectFreeBlocks.c)
 */

__int64 __fastcall RtlpFlushHeap(__int64 a1)
{
  __int64 v2; // rcx

  if ( (*(_BYTE *)(a1 + 112) & 1) == 0 && RtlTryEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352)) )
  {
    if ( *(_BYTE *)(a1 + 386) == 2 )
      v2 = *(_QWORD *)(a1 + 376);
    else
      v2 = 0LL;
    if ( v2 )
      RtlpLowFragHeapFlushCaches();
    RtlpCollectFreeBlocks(a1);
    RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
  }
  return 0LL;
}
