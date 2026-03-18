/*
 * XREFs of CcFreeWorkQueueEntry @ 0x1400232C4
 * Callers:
 *     CcMapAndCopyInToCache @ 0x14001C320 (CcMapAndCopyInToCache.c)
 *     CcPostWorkQueueAsyncRead @ 0x140020B14 (CcPostWorkQueueAsyncRead.c)
 *     CcWriteBehind @ 0x140022B24 (CcWriteBehind.c)
 *     CcWorkerThread @ 0x140022CB0 (CcWorkerThread.c)
 *     CcUninitializeCacheMap @ 0x140066BF0 (CcUninitializeCacheMap.c)
 *     CcWaitForUninitializeCacheMap @ 0x140121200 (CcWaitForUninitializeCacheMap.c)
 *     CcCompleteAsyncReadWorker @ 0x140129080 (CcCompleteAsyncReadWorker.c)
 *     CcAsyncReadWorker @ 0x1401481D0 (CcAsyncReadWorker.c)
 * Callees:
 *     CcDereferencePartition @ 0x1400670D4 (CcDereferencePartition.c)
 *     RtlpInterlockedPushEntrySList @ 0x140188FB0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CcFreeWorkQueueEntry(PSLIST_ENTRY ListEntry)
{
  struct _KPRCB *CurrentPrcb; // r8
  _SLIST_ENTRY *Next; // rbx
  _GENERAL_LOOKASIDE *P; // rcx

  CurrentPrcb = KeGetCurrentPrcb();
  Next = ListEntry[8].Next;
  P = CurrentPrcb->PPLookasideList[6].P;
  ++P->TotalFrees;
  if ( LOWORD(P->ListHead.Alignment) < P->Depth
    || (++P->FreeMisses, P = CurrentPrcb->PPLookasideList[6].L,
                         ++P->TotalFrees,
                         LOWORD(P->ListHead.Alignment) < P->Depth) )
  {
    RtlpInterlockedPushEntrySList(&P->ListHead, ListEntry);
  }
  else
  {
    ++P->FreeMisses;
    ((void (__fastcall *)(PSLIST_ENTRY))P->FreeEx)(ListEntry);
  }
  return CcDereferencePartition(Next);
}
