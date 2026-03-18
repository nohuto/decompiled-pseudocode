/*
 * XREFs of CcPostWorkQueueAsyncRead @ 0x140023674
 * Callers:
 *     CcAsyncCopyRead @ 0x140023470 (CcAsyncCopyRead.c)
 *     CcAsyncReadWorker @ 0x1401340C0 (CcAsyncReadWorker.c)
 * Callees:
 *     CcShouldSpinAsyncReadWorkerThread @ 0x140023854 (CcShouldSpinAsyncReadWorkerThread.c)
 *     CcPerfLogWorkItemEnqueue @ 0x140023B2C (CcPerfLogWorkItemEnqueue.c)
 *     CcCompleteAsyncRead @ 0x14002887C (CcCompleteAsyncRead.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     ExQueueWorkItem @ 0x1400FED80 (ExQueueWorkItem.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401894B0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 */

void __fastcall CcPostWorkQueueAsyncRead(PSLIST_ENTRY ListEntry, __int64 a2)
{
  _SLIST_ENTRY *Next; // rdi
  PWORK_QUEUE_ITEM v3; // rsi
  __int64 Next_high; // r15
  char v5; // r12
  _QWORD *v8; // rax
  char ShouldSpinAsyncReadWorkerThread; // al
  _QWORD *PoolWithTag; // rax
  _QWORD *v11; // r14
  __int64 v12; // rdx
  _QWORD *v13; // rax
  struct _KPRCB *CurrentPrcb; // rdx
  _GENERAL_LOOKASIDE *P; // rcx
  PWORK_QUEUE_ITEM WorkItem; // [rsp+50h] [rbp+8h] BYREF

  Next = ListEntry[8].Next;
  v3 = 0LL;
  Next_high = HIDWORD(ListEntry[7].Next);
  v5 = 0;
  WorkItem = 0LL;
  if ( (xmmword_1403E4010 & 0x20000) != 0 )
    CcPerfLogWorkItemEnqueue(a2, ListEntry, 0LL, 0LL);
  if ( *((_BYTE *)&ListEntry[7].Next + 8) == 5 )
  {
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&Next[56], 0LL);
    v8 = *(_QWORD **)(a2 + 8);
    if ( *v8 != a2 )
      __fastfail(3u);
    *((_QWORD *)&ListEntry->Next + 1) = v8;
    ListEntry->Next = (_SLIST_ENTRY *)a2;
    *v8 = ListEntry;
    *(_QWORD *)(a2 + 8) = ListEntry;
    if ( *(_QWORD *)(*((_QWORD *)&Next[54].Next + 1) + 16 * Next_high) == *((_QWORD *)&Next[54].Next + 1)
                                                                        + 16 * Next_high
      || *((_DWORD *)&Next[53].Next->Next + Next_high) <= 1u )
    {
      KeSetEvent((PRKEVENT)Next[55].Next + Next_high, 0, 0);
    }
    else
    {
      LOBYTE(v3) = 1;
    }
    ExReleasePushLockEx((ULONG_PTR)&Next[56], 0LL);
    if ( !(_BYTE)v3 )
    {
      ShouldSpinAsyncReadWorkerThread = CcShouldSpinAsyncReadWorkerThread(Next, &WorkItem, (unsigned int)Next_high);
      v3 = WorkItem;
      if ( ShouldSpinAsyncReadWorkerThread )
      {
        if ( !WorkItem )
          return;
        *(_DWORD *)(*((_QWORD *)&Next[55].Next + 1) + 4 * (101 * Next_high + LODWORD(WorkItem[1].List.Blink))) = 0;
      }
      goto LABEL_9;
    }
  }
  else
  {
    if ( *(_QWORD *)(16 * Next_high + *((_QWORD *)&Next[54].Next + 1)) == 16 * Next_high
                                                                        + *((_QWORD *)&Next[54].Next + 1)
      && *(_DWORD *)(*((_QWORD *)&Next[53].Next + 1) + 4 * Next_high) < (unsigned int)CcMaxNumberCompleteAsyncReadExWorkItems )
    {
      goto LABEL_13;
    }
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&Next[56], 0LL);
    v12 = 16 * Next_high + *((_QWORD *)&Next[54].Next + 1);
    if ( *(_QWORD *)v12 != v12
      || *(_DWORD *)(*((_QWORD *)&Next[53].Next + 1) + 4 * Next_high) >= (unsigned int)CcMaxNumberCompleteAsyncReadExWorkItems )
    {
      v13 = *(_QWORD **)(v12 + 8);
      if ( *v13 != v12 )
        __fastfail(3u);
      ListEntry->Next = (_SLIST_ENTRY *)v12;
      v5 = 1;
      *((_QWORD *)&ListEntry->Next + 1) = v13;
      *v13 = ListEntry;
      *(_QWORD *)(v12 + 8) = ListEntry;
    }
    ExReleasePushLockEx((ULONG_PTR)&Next[56], 0LL);
    if ( !v5 )
    {
LABEL_13:
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x40uLL, 0x71576343u);
      v11 = PoolWithTag;
      if ( PoolWithTag )
      {
        PoolWithTag[6] = ListEntry;
        *((_DWORD *)PoolWithTag + 8) = 4;
        PoolWithTag[7] = Next;
        *((_DWORD *)PoolWithTag + 9) = Next_high;
        *PoolWithTag = 0LL;
        PoolWithTag[2] = CcCompleteAsyncReadWorker;
        PoolWithTag[3] = PoolWithTag;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)&Next[56], 0LL);
        *((_DWORD *)v11 + 10) = (*(_DWORD *)(*((_QWORD *)&Next[53].Next + 1) + 4 * Next_high))++;
        ExReleasePushLockEx((ULONG_PTR)&Next[56], 0LL);
        *v11 = 0LL;
        ExQueueWorkItem((PWORK_QUEUE_ITEM)v11, CustomPriorityWorkQueue|SuperCriticalWorkQueue|0x8);
LABEL_9:
        if ( v3 )
        {
          v3->List.Flink = 0LL;
          ExQueueWorkItem(v3, CriticalWorkQueue);
        }
        return;
      }
      **((_DWORD **)&ListEntry[4].Next + 1) = -1073741670;
      CcCompleteAsyncRead(ListEntry);
      CurrentPrcb = KeGetCurrentPrcb();
      P = CurrentPrcb->PPLookasideList[6].P;
      ++P->TotalFrees;
      if ( LOWORD(P->ListHead.Alignment) < P->Depth
        || (++P->FreeMisses,
            P = CurrentPrcb->PPLookasideList[6].L,
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
    }
  }
}
