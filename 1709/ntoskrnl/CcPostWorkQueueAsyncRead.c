/*
 * XREFs of CcPostWorkQueueAsyncRead @ 0x140020B14
 * Callers:
 *     CcAsyncCopyRead @ 0x140020890 (CcAsyncCopyRead.c)
 *     CcAsyncReadWorker @ 0x1401481D0 (CcAsyncReadWorker.c)
 * Callees:
 *     CcShouldSpinAsyncReadWorkerThread @ 0x140020CFC (CcShouldSpinAsyncReadWorkerThread.c)
 *     CcCompleteAsyncRead @ 0x1400215D4 (CcCompleteAsyncRead.c)
 *     CcFreeWorkQueueEntry @ 0x1400232C4 (CcFreeWorkQueueEntry.c)
 *     ExQueueWorkItemToPartition @ 0x140023404 (ExQueueWorkItemToPartition.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     CcPerfLogWorkItemEnqueue @ 0x1401E2C38 (CcPerfLogWorkItemEnqueue.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CcPostWorkQueueAsyncRead(PSLIST_ENTRY ListEntry, __int64 a2)
{
  char v2; // r15
  _SLIST_ENTRY *Next; // rdi
  __int64 Next_high; // r14
  char v7; // bp
  _QWORD *v8; // rax
  __int64 result; // rax
  _QWORD *v10; // r10
  _QWORD *PoolWithTag; // rax
  ULONG_PTR v12; // rsi
  __int64 v13; // rdx
  _QWORD *v14; // rax
  ULONG_PTR BugCheckParameter2; // [rsp+50h] [rbp+8h] BYREF

  BugCheckParameter2 = 0LL;
  v2 = 0;
  Next = ListEntry[8].Next;
  Next_high = HIDWORD(ListEntry[7].Next);
  if ( (xmmword_140401150 & 0x20000) != 0 )
    CcPerfLogWorkItemEnqueue(a2, ListEntry, 0LL, 0LL);
  if ( *((_BYTE *)&ListEntry[7].Next + 8) == 5 )
  {
    v7 = 0;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&Next[52], 0LL);
    v8 = *(_QWORD **)(a2 + 8);
    if ( *v8 != a2 )
      __fastfail(3u);
    ListEntry->Next = (_SLIST_ENTRY *)a2;
    *((_QWORD *)&ListEntry->Next + 1) = v8;
    *v8 = ListEntry;
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
    result = ExReleasePushLockEx((ULONG_PTR)&Next[52], 0LL);
    if ( !v7 )
    {
      result = CcShouldSpinAsyncReadWorkerThread(Next, &BugCheckParameter2, (unsigned int)Next_high);
      v10 = (_QWORD *)BugCheckParameter2;
      if ( (_BYTE)result )
      {
        if ( !BugCheckParameter2 )
          return result;
        result = *((_QWORD *)&Next[51].Next + 1);
        *(_DWORD *)(result + 4 * (101 * Next_high + *(unsigned int *)(BugCheckParameter2 + 40))) = 0;
      }
      goto LABEL_9;
    }
  }
  else
  {
    if ( *(_QWORD *)(16 * Next_high + *((_QWORD *)&Next[50].Next + 1)) == 16 * Next_high
                                                                        + *((_QWORD *)&Next[50].Next + 1)
      && *(_DWORD *)(*((_QWORD *)&Next[49].Next + 1) + 4 * Next_high) < (unsigned int)CcMaxNumberCompleteAsyncReadExWorkItems )
    {
      goto LABEL_13;
    }
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&Next[52], 0LL);
    v13 = 16 * Next_high + *((_QWORD *)&Next[50].Next + 1);
    if ( *(_QWORD *)v13 != v13
      || *(_DWORD *)(*((_QWORD *)&Next[49].Next + 1) + 4 * Next_high) >= (unsigned int)CcMaxNumberCompleteAsyncReadExWorkItems )
    {
      v14 = *(_QWORD **)(v13 + 8);
      if ( *v14 != v13 )
        __fastfail(3u);
      ListEntry->Next = (_SLIST_ENTRY *)v13;
      v2 = 1;
      *((_QWORD *)&ListEntry->Next + 1) = v14;
      *v14 = ListEntry;
      *(_QWORD *)(v13 + 8) = ListEntry;
    }
    result = ExReleasePushLockEx((ULONG_PTR)&Next[52], 0LL);
    if ( !v2 )
    {
LABEL_13:
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x40uLL, 0x71576343u);
      v12 = (ULONG_PTR)PoolWithTag;
      if ( !PoolWithTag )
      {
        **((_DWORD **)&ListEntry[4].Next + 1) = -1073741670;
        CcCompleteAsyncRead(ListEntry);
        return CcFreeWorkQueueEntry(ListEntry);
      }
      PoolWithTag[6] = ListEntry;
      *((_DWORD *)PoolWithTag + 8) = 4;
      PoolWithTag[7] = Next;
      *((_DWORD *)PoolWithTag + 9) = Next_high;
      *PoolWithTag = 0LL;
      PoolWithTag[2] = CcCompleteAsyncReadWorker;
      PoolWithTag[3] = PoolWithTag;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&Next[52], 0LL);
      *(_DWORD *)(v12 + 40) = (*(_DWORD *)(*((_QWORD *)&Next[49].Next + 1) + 4 * Next_high))++;
      if ( _InterlockedIncrement64((volatile signed __int64 *)&Next[56].Next + 1) <= 1 )
        __fastfail(0xEu);
      ExReleasePushLockEx((ULONG_PTR)&Next[52], 0LL);
      *(_QWORD *)v12 = 0LL;
      result = ExQueueWorkItemToPartition(v12);
      v10 = (_QWORD *)BugCheckParameter2;
LABEL_9:
      if ( v10 )
      {
        *v10 = 0LL;
        return ExQueueWorkItemToPartition((ULONG_PTR)v10);
      }
    }
  }
  return result;
}
