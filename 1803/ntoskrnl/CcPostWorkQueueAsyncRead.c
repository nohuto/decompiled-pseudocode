/*
 * XREFs of CcPostWorkQueueAsyncRead @ 0x1401394C4
 * Callers:
 *     CcAsyncCopyRead @ 0x1401392C0 (CcAsyncCopyRead.c)
 *     CcAsyncReadWorker @ 0x140178110 (CcAsyncReadWorker.c)
 * Callees:
 *     CcFreeWorkQueueEntry @ 0x14004373C (CcFreeWorkQueueEntry.c)
 *     ExQueueWorkItemToPartition @ 0x14008F67C (ExQueueWorkItemToPartition.c)
 *     CcCompleteAsyncRead @ 0x1400C1278 (CcCompleteAsyncRead.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     CcShouldSpinAsyncReadWorkerThread @ 0x1401396C8 (CcShouldSpinAsyncReadWorkerThread.c)
 *     CcPerfLogWorkItemEnqueue @ 0x14017D810 (CcPerfLogWorkItemEnqueue.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

char __fastcall CcPostWorkQueueAsyncRead(PSLIST_ENTRY ListEntry, __int64 a2)
{
  char v2; // r12
  _SLIST_ENTRY *Next; // rdi
  __int64 Next_high; // r15
  char v7; // bp
  __int64 v8; // r8
  __int64 v9; // r9
  _QWORD *v10; // rax
  __int64 v11; // rax
  _QWORD *v12; // r10
  ULONG_PTR v13; // rbp
  _DWORD *PoolWithTag; // rax
  ULONG_PTR v15; // rsi
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  _QWORD *v21; // rax
  ULONG_PTR BugCheckParameter2; // [rsp+50h] [rbp+8h] BYREF

  BugCheckParameter2 = 0LL;
  v2 = 0;
  Next = ListEntry[8].Next;
  Next_high = HIDWORD(ListEntry[7].Next);
  if ( (xmmword_14044C2D0 & 0x20000) != 0 )
    CcPerfLogWorkItemEnqueue(a2, ListEntry, 0LL, 0LL);
  if ( *((_BYTE *)&ListEntry[7].Next + 8) == 5 )
  {
    v7 = 0;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&Next[52], 0LL);
    v10 = *(_QWORD **)(a2 + 8);
    if ( *v10 != a2 )
      __fastfail(3u);
    ListEntry->Next = (_SLIST_ENTRY *)a2;
    *((_QWORD *)&ListEntry->Next + 1) = v10;
    *v10 = ListEntry;
    *(_QWORD *)(a2 + 8) = ListEntry;
    if ( *(_QWORD *)(*((_QWORD *)&Next[50].Next + 1) + 16 * Next_high) == *((_QWORD *)&Next[50].Next + 1)
                                                                        + 16 * Next_high
      || *((_DWORD *)&Next[49].Next->Next + Next_high) <= 1u )
    {
      KeSetEvent((PRKEVENT)Next[51].Next + Next_high, 0, 0);
    }
    else
    {
      v7 = 1;
    }
    LOBYTE(v11) = ExReleasePushLockEx((ULONG_PTR)&Next[52], 0LL, v8, v9);
    if ( !v7 )
    {
      LOBYTE(v11) = CcShouldSpinAsyncReadWorkerThread(Next, &BugCheckParameter2, (unsigned int)Next_high);
      v12 = (_QWORD *)BugCheckParameter2;
      if ( (_BYTE)v11 )
      {
        if ( !BugCheckParameter2 )
          return v11;
        v11 = *((_QWORD *)&Next[51].Next + 1);
        *(_DWORD *)(v11 + 4 * (101 * Next_high + *(unsigned int *)(BugCheckParameter2 + 40))) = 0;
      }
LABEL_9:
      if ( v12 )
      {
        *v12 = 0LL;
        LOBYTE(v11) = ExQueueWorkItemToPartition((ULONG_PTR)v12, 0, 0xFFFFFFFF, *((_QWORD *)&Next->Next + 1));
      }
    }
  }
  else
  {
    if ( *(_QWORD *)(16 * Next_high + *((_QWORD *)&Next[50].Next + 1)) == 16 * Next_high
                                                                        + *((_QWORD *)&Next[50].Next + 1)
      && (LOBYTE(v11) = CcMaxNumberCompleteAsyncReadExWorkItems,
          *(_DWORD *)(*((_QWORD *)&Next[49].Next + 1) + 4 * Next_high) < (unsigned int)CcMaxNumberCompleteAsyncReadExWorkItems) )
    {
      v13 = (ULONG_PTR)&Next[52];
    }
    else
    {
      v13 = (ULONG_PTR)&Next[52];
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&Next[52], 0LL);
      v20 = 16 * Next_high + *((_QWORD *)&Next[50].Next + 1);
      if ( *(_QWORD *)v20 != v20
        || *(_DWORD *)(*((_QWORD *)&Next[49].Next + 1) + 4 * Next_high) >= (unsigned int)CcMaxNumberCompleteAsyncReadExWorkItems )
      {
        v21 = *(_QWORD **)(v20 + 8);
        if ( *v21 != v20 )
          __fastfail(3u);
        ListEntry->Next = (_SLIST_ENTRY *)v20;
        v2 = 1;
        *((_QWORD *)&ListEntry->Next + 1) = v21;
        *v21 = ListEntry;
        *(_QWORD *)(v20 + 8) = ListEntry;
      }
      LOBYTE(v11) = ExReleasePushLockEx((ULONG_PTR)&Next[52], 0LL, v18, v19);
    }
    if ( !v2 )
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x40uLL, 0x71576343u);
      v15 = (ULONG_PTR)PoolWithTag;
      if ( !PoolWithTag )
      {
        **((_DWORD **)&ListEntry[4].Next + 1) = -1073741670;
        CcCompleteAsyncRead((__int64)ListEntry);
        LOBYTE(v11) = CcFreeWorkQueueEntry(ListEntry);
        return v11;
      }
      PoolWithTag[8] = 4;
      *((_QWORD *)PoolWithTag + 7) = Next;
      *((_QWORD *)PoolWithTag + 6) = ListEntry;
      PoolWithTag[9] = Next_high;
      *(_QWORD *)PoolWithTag = 0LL;
      *((_QWORD *)PoolWithTag + 2) = CcCompleteAsyncReadWorker;
      *((_QWORD *)PoolWithTag + 3) = PoolWithTag;
      ExAcquirePushLockExclusiveEx(v13, 0LL);
      *(_DWORD *)(v15 + 40) = (*(_DWORD *)(*((_QWORD *)&Next[49].Next + 1) + 4 * Next_high))++;
      if ( _InterlockedIncrement64((volatile signed __int64 *)&Next[56].Next + 1) <= 1 )
        __fastfail(0xEu);
      ExReleasePushLockEx(v13, 0LL, v16, v17);
      *(_QWORD *)v15 = 0LL;
      LOBYTE(v11) = ExQueueWorkItemToPartition(v15, 46, 0xFFFFFFFF, *((_QWORD *)&Next->Next + 1));
      v12 = (_QWORD *)BugCheckParameter2;
      goto LABEL_9;
    }
  }
  return v11;
}
