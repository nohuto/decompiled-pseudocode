/*
 * XREFs of CcFreeWorkQueueEntry @ 0x14004373C
 * Callers:
 *     CcWriteBehind @ 0x140042EF0 (CcWriteBehind.c)
 *     CcWorkerThread @ 0x140043080 (CcWorkerThread.c)
 *     CcWaitForUninitializeCacheMap @ 0x1400BF4BC (CcWaitForUninitializeCacheMap.c)
 *     CcCompleteAsyncReadWorker @ 0x1400C11B0 (CcCompleteAsyncReadWorker.c)
 *     CcUninitializeCacheMap @ 0x1400DCA00 (CcUninitializeCacheMap.c)
 *     CcMapAndCopyInToCache @ 0x140112290 (CcMapAndCopyInToCache.c)
 *     CcPostWorkQueueAsyncRead @ 0x1401394C4 (CcPostWorkQueueAsyncRead.c)
 *     CcAsyncReadWorker @ 0x140178110 (CcAsyncReadWorker.c)
 * Callees:
 *     CcDereferencePartition @ 0x1400E07B8 (CcDereferencePartition.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401B2C10 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
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
