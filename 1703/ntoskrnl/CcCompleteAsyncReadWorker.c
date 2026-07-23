/*
 * XREFs of CcCompleteAsyncReadWorker @ 0x140028770
 * Callers:
 *     <none>
 * Callees:
 *     CcCompleteAsyncRead @ 0x14002887C (CcCompleteAsyncRead.c)
 *     CcFindNextWorkQueueEntry @ 0x1400AE398 (CcFindNextWorkQueueEntry.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401894B0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

void __fastcall CcCompleteAsyncReadWorker(_QWORD *P)
{
  char v1; // bp
  __int64 v3; // rsi
  _SLIST_ENTRY *NextWorkQueueEntry; // rdi
  __int64 v5; // r14
  struct _KPRCB *CurrentPrcb; // rdx
  _GENERAL_LOOKASIDE *L; // rcx

  v1 = 0;
  if ( *((_DWORD *)P + 8) == 4 )
  {
    v3 = P[7];
    NextWorkQueueEntry = (_SLIST_ENTRY *)P[6];
    v5 = *((unsigned int *)P + 9);
    do
    {
      CcCompleteAsyncRead(NextWorkQueueEntry);
      CurrentPrcb = KeGetCurrentPrcb();
      L = CurrentPrcb->PPLookasideList[6].P;
      ++L->TotalFrees;
      if ( LOWORD(L->ListHead.Alignment) >= L->Depth
        && (++L->FreeMisses,
            L = CurrentPrcb->PPLookasideList[6].L,
            ++L->TotalFrees,
            LOWORD(L->ListHead.Alignment) >= L->Depth) )
      {
        ++L->FreeMisses;
        ((void (__fastcall *)(_SLIST_ENTRY *))L->FreeEx)(NextWorkQueueEntry);
      }
      else
      {
        RtlpInterlockedPushEntrySList(&L->ListHead, NextWorkQueueEntry);
      }
      NextWorkQueueEntry = 0LL;
      ExAcquirePushLockExclusiveEx(v3 + 896, 0LL);
      if ( *(_QWORD *)(16 * v5 + *(_QWORD *)(v3 + 872)) == 16 * v5 + *(_QWORD *)(v3 + 872) )
      {
        v1 = 1;
        --*(_DWORD *)(*(_QWORD *)(v3 + 856) + 4 * v5);
      }
      else
      {
        NextWorkQueueEntry = (_SLIST_ENTRY *)CcFindNextWorkQueueEntry(v3);
      }
      ExReleasePushLockEx(v3 + 896, 0LL);
    }
    while ( !v1 );
    ExFreePoolWithTag(P, 0x71576343u);
  }
}
