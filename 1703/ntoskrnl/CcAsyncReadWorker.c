/*
 * XREFs of CcAsyncReadWorker @ 0x1401340C0
 * Callers:
 *     CcAsyncReadWorkerThread @ 0x140131E00 (CcAsyncReadWorkerThread.c)
 * Callees:
 *     CcPostWorkQueueAsyncRead @ 0x140023674 (CcPostWorkQueueAsyncRead.c)
 *     CcShouldSpinAsyncReadWorkerThread @ 0x140023854 (CcShouldSpinAsyncReadWorkerThread.c)
 *     CcCompleteAsyncRead @ 0x14002887C (CcCompleteAsyncRead.c)
 *     MmWaitMultipleForCacheManagerPrefetch @ 0x14002A7E4 (MmWaitMultipleForCacheManagerPrefetch.c)
 *     CcFindNextWorkQueueEntry @ 0x1400AE398 (CcFindNextWorkQueueEntry.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     ExQueueWorkItem @ 0x1400FED80 (ExQueueWorkItem.c)
 *     CcAsyncReadPrefetch @ 0x1401174FC (CcAsyncReadPrefetch.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401894B0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

void __fastcall CcAsyncReadWorker(_DWORD *StartContext)
{
  unsigned int v1; // eax
  __int64 v2; // rdi
  __int64 v3; // rbx
  _QWORD *v4; // r15
  void *v5; // r13
  __int64 v6; // r12
  unsigned int v7; // esi
  int v8; // ecx
  __int64 v9; // r14
  PSLIST_ENTRY v10; // rdi
  _SLIST_ENTRY *v11; // rcx
  struct _KPRCB *v12; // rdx
  _GENERAL_LOOKASIDE *L; // rcx
  __int64 v14; // r14
  _QWORD *v15; // rdx
  _SLIST_ENTRY *NextWorkQueueEntry; // rdi
  _SLIST_ENTRY *Next; // rcx
  PWORK_QUEUE_ITEM v18; // rcx
  _SLIST_ENTRY *v19; // rax
  struct _KPRCB *CurrentPrcb; // rdx
  _GENERAL_LOOKASIDE *P; // rcx
  unsigned int v22; // [rsp+30h] [rbp-D0h]
  __int64 v23; // [rsp+38h] [rbp-C8h]
  unsigned int v24; // [rsp+40h] [rbp-C0h]
  PWORK_QUEUE_ITEM WorkItem; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v26; // [rsp+50h] [rbp-B0h]
  _QWORD v28[64]; // [rsp+60h] [rbp-A0h] BYREF
  PSLIST_ENTRY ListEntry[64]; // [rsp+260h] [rbp+160h] BYREF

  if ( StartContext )
  {
    v1 = StartContext[10];
    v2 = (unsigned int)StartContext[9];
    v3 = 0LL;
    v4 = (_QWORD *)*((_QWORD *)StartContext + 7);
    WorkItem = 0LL;
    v22 = v1;
    v24 = v2;
    memset(v28, 0, sizeof(v28));
    memset(ListEntry, 0, sizeof(ListEntry));
    v23 = v2;
    v5 = (void *)(v4[110] + 24 * v2);
    v6 = v4[111] + 404 * v2;
    v26 = 3 * v2;
    if ( (unsigned int)CcMaxAsyncReadItemsPerThread >= 0x40 )
      CcMaxAsyncReadItemsPerThread = 63;
    do
    {
      if ( (unsigned int)v3 >= CcMaxAsyncReadItemsPerThread || *(_QWORD *)(v4[108] + 16 * v2) == v4[108] + 16 * v2 )
      {
        if ( !(_DWORD)v3 )
        {
          v7 = KeWaitForSingleObject(v5, Executive, 0, 0, 0LL);
          goto LABEL_22;
        }
        v7 = MmWaitMultipleForCacheManagerPrefetch((__int64)v28, v3, v5);
      }
      else
      {
        v7 = v3 + 1;
      }
      if ( (_DWORD)v3 && v7 < (unsigned int)v3 )
      {
        v8 = 1;
        goto LABEL_11;
      }
LABEL_22:
      v8 = 0;
LABEL_11:
      if ( !v8 )
      {
        ExAcquirePushLockExclusiveEx((ULONG_PTR)(v4 + 112), 0LL);
        v14 = 16 * v2;
        while ( 1 )
        {
          v15 = (_QWORD *)(v14 + v4[108]);
          if ( (_QWORD *)*v15 == v15 )
          {
LABEL_32:
            ExReleasePushLockEx((ULONG_PTR)(v4 + 112), 0LL);
            v18 = WorkItem;
            if ( WorkItem )
            {
              *(_DWORD *)(v6 + 4LL * LODWORD(WorkItem[1].List.Blink)) = 0;
              v18->List.Flink = 0LL;
              ExQueueWorkItem(v18, CriticalWorkQueue);
              WorkItem = 0LL;
            }
LABEL_34:
            v2 = v23;
            goto LABEL_39;
          }
          if ( (unsigned int)v3 >= CcMaxAsyncReadItemsPerThread )
          {
            ExReleasePushLockEx((ULONG_PTR)(v4 + 112), 0LL);
            CcShouldSpinAsyncReadWorkerThread(v4, (__int64 **)&WorkItem, v24);
            ExAcquirePushLockExclusiveEx((ULONG_PTR)(v4 + 112), 0LL);
            goto LABEL_32;
          }
          NextWorkQueueEntry = (_SLIST_ENTRY *)CcFindNextWorkQueueEntry((__int64)v4, v15);
          ExReleasePushLockEx((ULONG_PTR)(v4 + 112), 0LL);
          if ( !CcAsyncReadPrefetch((__int64)NextWorkQueueEntry) )
            goto LABEL_48;
          Next = NextWorkQueueEntry[3].Next;
          if ( !Next->Next )
            break;
          v28[v3] = Next->Next;
          ListEntry[v3] = NextWorkQueueEntry;
          v3 = (unsigned int)(v3 + 1);
          _InterlockedIncrement((volatile signed __int32 *)(v6 + 4LL * v22));
          if ( (unsigned int)v3 >= CcMaxAsyncReadItemsPerThread )
            v5 = 0LL;
LABEL_30:
          ExAcquirePushLockExclusiveEx((ULONG_PTR)(v4 + 112), 0LL);
        }
        ExFreePoolWithTag(Next, 0x73416343u);
        v19 = NextWorkQueueEntry[1].Next;
        NextWorkQueueEntry[3].Next = 0LL;
        *((_BYTE *)&NextWorkQueueEntry[7].Next + 8) = 6;
        if ( *((_DWORD *)&v19[32].Next + 2) != 1 || *((_DWORD *)&NextWorkQueueEntry[2].Next + 2) > 0x20000u )
        {
          CcPostWorkQueueAsyncRead(NextWorkQueueEntry, 0LL);
          goto LABEL_30;
        }
LABEL_48:
        CcCompleteAsyncRead((__int64)NextWorkQueueEntry);
        CurrentPrcb = KeGetCurrentPrcb();
        P = CurrentPrcb->PPLookasideList[6].P;
        ++P->TotalFrees;
        if ( LOWORD(P->ListHead.Alignment) < P->Depth
          || (++P->FreeMisses,
              P = CurrentPrcb->PPLookasideList[6].L,
              ++P->TotalFrees,
              LOWORD(P->ListHead.Alignment) < P->Depth) )
        {
          RtlpInterlockedPushEntrySList(&P->ListHead, NextWorkQueueEntry);
        }
        else
        {
          ++P->FreeMisses;
          ((void (__fastcall *)(_SLIST_ENTRY *))P->FreeEx)(NextWorkQueueEntry);
        }
        goto LABEL_30;
      }
      if ( v7 < (unsigned int)v3 )
      {
        _mm_lfence();
        v9 = v7;
        v10 = ListEntry[v9];
        if ( !v10 )
          goto LABEL_34;
        v11 = v10[3].Next;
        if ( !v11 )
          goto LABEL_34;
        ExFreePoolWithTag(v11, 0x73416343u);
        *((_BYTE *)&v10[7].Next + 8) = 6;
        v10[3].Next = 0LL;
        v28[v7] = 0LL;
        ListEntry[v7] = 0LL;
        if ( *((_DWORD *)&v10[1].Next[32].Next + 2) == 1 && *((_DWORD *)&v10[2].Next + 2) <= 0x20000u )
        {
          CcCompleteAsyncRead((__int64)v10);
          v12 = KeGetCurrentPrcb();
          L = v12->PPLookasideList[6].P;
          ++L->TotalFrees;
          if ( LOWORD(L->ListHead.Alignment) >= L->Depth
            && (++L->FreeMisses,
                L = v12->PPLookasideList[6].L,
                ++L->TotalFrees,
                LOWORD(L->ListHead.Alignment) >= L->Depth) )
          {
            ++L->FreeMisses;
            ((void (__fastcall *)(PSLIST_ENTRY))L->FreeEx)(v10);
          }
          else
          {
            RtlpInterlockedPushEntrySList(&L->ListHead, v10);
          }
        }
        else
        {
          CcPostWorkQueueAsyncRead(v10, 0LL);
        }
        v3 = (unsigned int)(v3 - 1);
        while ( v7 < (unsigned int)v3 )
        {
          v28[v9++] = v28[++v7];
          v28[v9 + 63] = ListEntry[v7];
        }
        v2 = v23;
        v28[v7] = 0LL;
        ListEntry[v7] = 0LL;
        _InterlockedDecrement((volatile signed __int32 *)(v6 + 4LL * v22));
        if ( !v5 )
          v5 = (void *)(v4[110] + 8 * v26);
      }
LABEL_39:
      ;
    }
    while ( !v22 || (_DWORD)v3 );
  }
}
