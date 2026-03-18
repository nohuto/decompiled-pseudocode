/*
 * XREFs of CcDereferencePartition @ 0x1400E07B8
 * Callers:
 *     CcForEachPartition @ 0x140004490 (CcForEachPartition.c)
 *     CcWorkerThread @ 0x140043080 (CcWorkerThread.c)
 *     CcFreeWorkQueueEntry @ 0x14004373C (CcFreeWorkQueueEntry.c)
 *     CcZeroData @ 0x140098570 (CcZeroData.c)
 *     CcCompleteAsyncReadWorker @ 0x1400C11B0 (CcCompleteAsyncReadWorker.c)
 *     CcDeleteSharedCacheMap @ 0x1400DAF00 (CcDeleteSharedCacheMap.c)
 *     CcUninitializeCacheMap @ 0x1400DCA00 (CcUninitializeCacheMap.c)
 *     CcUnmapInactiveViews @ 0x14015C064 (CcUnmapInactiveViews.c)
 *     CcInitializeAsyncRead @ 0x140170F84 (CcInitializeAsyncRead.c)
 *     CcQueueLazyWriteScanThread @ 0x140177AA0 (CcQueueLazyWriteScanThread.c)
 *     CcAsyncReadWorker @ 0x140178110 (CcAsyncReadWorker.c)
 *     CcDeferWrite @ 0x14021FEA0 (CcDeferWrite.c)
 *     CcPostDeferredWrites @ 0x140220050 (CcPostDeferredWrites.c)
 *     CcDeletePartition @ 0x140220D68 (CcDeletePartition.c)
 *     CcAsyncReadWorkerThread @ 0x140221410 (CcAsyncReadWorkerThread.c)
 * Callees:
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 */

char __fastcall CcDereferencePartition(__int64 a1)
{
  signed __int64 v1; // rax
  char v2; // bl
  bool v3; // cc
  signed __int64 v4; // rax

  v1 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 904), 0xFFFFFFFFFFFFFFFFuLL);
  v2 = 0;
  v3 = v1 <= 1;
  v4 = v1 - 1;
  if ( v3 )
  {
    if ( v4 )
      __fastfail(0xEu);
    v2 = 1;
    KeSetEvent((PRKEVENT)(a1 + 936), 0, 0);
  }
  return v2;
}
