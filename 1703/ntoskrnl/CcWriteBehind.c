/*
 * XREFs of CcWriteBehind @ 0x1400AF884
 * Callers:
 *     CcWaitForUninitializeCacheMap @ 0x140028FB8 (CcWaitForUninitializeCacheMap.c)
 *     CcWorkerThread @ 0x1400AB860 (CcWorkerThread.c)
 * Callees:
 *     CcWriteBehindInternal @ 0x1400AACD0 (CcWriteBehindInternal.c)
 *     CcAllocateWorkQueueEntry @ 0x1400AFA58 (CcAllocateWorkQueueEntry.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     ExQueueWorkItem @ 0x1400FED80 (ExQueueWorkItem.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401894B0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

void __fastcall CcWriteBehind(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  struct _WORK_QUEUE_ITEM *v4; // rsi
  int v6; // eax
  PSLIST_ENTRY v7; // rdi
  struct _KPRCB *CurrentPrcb; // rdx
  _GENERAL_LOOKASIDE *P; // rcx
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rax
  _QWORD v11[7]; // [rsp+30h] [rbp-59h] BYREF
  char v12; // [rsp+68h] [rbp-21h]
  char v13; // [rsp+A8h] [rbp+1Fh]
  PSLIST_ENTRY ListEntry; // [rsp+F0h] [rbp+67h] BYREF

  v2 = *(_QWORD *)(a1 + 528);
  v4 = 0LL;
  v6 = CcAllocateWorkQueueEntry(a1, &ListEntry);
  v7 = ListEntry;
  if ( v6 < 0 )
    goto LABEL_3;
  *((_BYTE *)&ListEntry[7].Next + 8) = 2;
  *((_QWORD *)&v7->Next + 1) = 0LL;
  v7->Next = 0LL;
  v7[1].Next = (_SLIST_ENTRY *)a1;
  *((_QWORD *)&v7[1].Next + 1) = a2;
  v7[8].Next = (_SLIST_ENTRY *)v2;
  if ( (unsigned int)CcMaxNumberOfWriteBehindThreads >= *(_DWORD *)(v2 + 272)
    || CcLowPriWorkerThread
    || *(_DWORD *)(a1 + 516)
    || (*(_DWORD *)(a1 + 152) & 0x10000) != 0
    || (PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x40uLL, 0x71576343u),
        (v4 = PoolWithTag) == 0LL) )
  {
LABEL_3:
    if ( !v7 )
    {
      v13 = 2;
      v7 = (PSLIST_ENTRY)v11;
      v11[1] = 0LL;
      v11[0] = 0LL;
      v11[2] = a1;
      v11[3] = a2;
      v12 = 0;
    }
    *((_BYTE *)&v7[3].Next + 8) = 0;
    CcWriteBehindInternal((__int64)v7);
    if ( v7 == (PSLIST_ENTRY)v11 )
      v7 = 0LL;
    ListEntry = v7;
  }
  else
  {
    LODWORD(PoolWithTag[1].List.Flink) = 1;
    PoolWithTag[1].Parameter = (void *)v2;
    *((_BYTE *)&v7[3].Next + 8) = 1;
    LOWORD(v7[2].Next) = 1;
    BYTE2(v7[2].Next) = 6;
    HIDWORD(v7[2].Next) = 0;
    v7[3].Next = (PSLIST_ENTRY)((char *)v7 + 40);
    *((_QWORD *)&v7[2].Next + 1) = (char *)v7 + 40;
    PoolWithTag->WorkerRoutine = (void (__fastcall *)(void *))CcWriteBehindInternal;
    PoolWithTag->Parameter = v7;
    PoolWithTag->List.Flink = 0LL;
    ExQueueWorkItem(PoolWithTag, CustomPriorityWorkQueue|SuperCriticalWorkQueue);
    KeWaitForSingleObject(&v7[2], Executive, 0, 0, 0LL);
  }
  if ( v7 )
  {
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
  if ( v4 )
    ExFreePoolWithTag(v4, 0x71576343u);
}
