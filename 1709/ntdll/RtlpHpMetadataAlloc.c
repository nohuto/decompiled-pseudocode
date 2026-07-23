/*
 * XREFs of RtlpHpMetadataAlloc @ 0x18006F214
 * Callers:
 *     RtlpHpLargeAlloc @ 0x18006EC20 (RtlpHpLargeAlloc.c)
 *     RtlpHpTagContextAllocateTag @ 0x18006EE4C (RtlpHpTagContextAllocateTag.c)
 *     RtlpHpTagRunOnceInit @ 0x18006F140 (RtlpHpTagRunOnceInit.c)
 *     RtlpHpPerHeapStackTraceInitialize @ 0x1800FFD30 (RtlpHpPerHeapStackTraceInitialize.c)
 *     RtlpHpStackDbAllocRoutine @ 0x1800FFDB0 (RtlpHpStackDbAllocRoutine.c)
 *     RtlpHpStackTraceAddStack @ 0x1800FFF48 (RtlpHpStackTraceAddStack.c)
 *     RtlpHpStackTraceAllocAdd @ 0x18010003C (RtlpHpStackTraceAllocAdd.c)
 *     RtlpHpStackTraceEtwCallback @ 0x180100620 (RtlpHpStackTraceEtwCallback.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x1800367D0 (RtlRunOnceExecuteOnce.c)
 *     RtlpHpSegAlloc @ 0x18003827C (RtlpHpSegAlloc.c)
 *     RtlpHpAllocateHeap @ 0x18006F284 (RtlpHpAllocateHeap.c)
 */

void *__fastcall RtlpHpMetadataAlloc(size_t a1, int a2)
{
  NTSTATUS v4; // eax
  __int64 v5; // r8

  v4 = RtlRunOnceExecuteOnce(&RtlpHpMetadataHeapInitVar, (PRTL_RUN_ONCE_INIT_FN)RtlpHpMetadataHeapInit, 0LL, 0LL);
  v5 = 0LL;
  if ( v4 >= 0 )
  {
    if ( a2 )
      return RtlpHpSegAlloc((__int64)RtlpHpMetadataHeap + 112, a1, a1, 0x1000000u);
    else
      return (void *)RtlpHpAllocateHeap(RtlpHpMetadataHeap);
  }
  return (void *)v5;
}
