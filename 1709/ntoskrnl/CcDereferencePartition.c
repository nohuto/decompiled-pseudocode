/*
 * XREFs of CcDereferencePartition @ 0x1400670D4
 * Callers:
 *     CcDeleteSharedCacheMap @ 0x14001FD84 (CcDeleteSharedCacheMap.c)
 *     CcWorkerThread @ 0x140022CB0 (CcWorkerThread.c)
 *     CcFreeWorkQueueEntry @ 0x1400232C4 (CcFreeWorkQueueEntry.c)
 *     CcUninitializeCacheMap @ 0x140066BF0 (CcUninitializeCacheMap.c)
 *     CcForEachPartition @ 0x14011BF90 (CcForEachPartition.c)
 *     CcZeroData @ 0x14011E9B0 (CcZeroData.c)
 *     CcCompleteAsyncReadWorker @ 0x140129080 (CcCompleteAsyncReadWorker.c)
 *     CcInitializeAsyncRead @ 0x140147B98 (CcInitializeAsyncRead.c)
 *     CcAsyncReadWorker @ 0x1401481D0 (CcAsyncReadWorker.c)
 *     CcQueueLazyWriteScanThread @ 0x140148AC0 (CcQueueLazyWriteScanThread.c)
 *     CcDeferWrite @ 0x1401E08A0 (CcDeferWrite.c)
 *     CcPostDeferredWrites @ 0x1401E0A50 (CcPostDeferredWrites.c)
 *     CcUnmapInactiveViews @ 0x1401E1A30 (CcUnmapInactiveViews.c)
 *     CcDeletePartition @ 0x1401E2158 (CcDeletePartition.c)
 *     CcAsyncReadWorkerThread @ 0x1401E2DE0 (CcAsyncReadWorkerThread.c)
 * Callees:
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
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
