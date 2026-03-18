/*
 * XREFs of CcAsyncReadWorker @ 0x1401481D0
 * Callers:
 *     CcAsyncReadWorkerThread @ 0x1401E2DE0 (CcAsyncReadWorkerThread.c)
 * Callees:
 *     MmWaitMultipleForCacheManagerPrefetch @ 0x140020534 (MmWaitMultipleForCacheManagerPrefetch.c)
 *     CcPostWorkQueueAsyncRead @ 0x140020B14 (CcPostWorkQueueAsyncRead.c)
 *     CcShouldSpinAsyncReadWorkerThread @ 0x140020CFC (CcShouldSpinAsyncReadWorkerThread.c)
 *     CcCompleteAsyncRead @ 0x1400215D4 (CcCompleteAsyncRead.c)
 *     CcFindNextWorkQueueEntry @ 0x14002321C (CcFindNextWorkQueueEntry.c)
 *     CcFreeWorkQueueEntry @ 0x1400232C4 (CcFreeWorkQueueEntry.c)
 *     ExQueueWorkItemToPartition @ 0x140023404 (ExQueueWorkItemToPartition.c)
 *     CcDereferencePartition @ 0x1400670D4 (CcDereferencePartition.c)
 *     KeWaitForMultipleObjects @ 0x14006B570 (KeWaitForMultipleObjects.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     CcAsyncReadPrefetch @ 0x1400BBA90 (CcAsyncReadPrefetch.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall CcAsyncReadWorker(_DWORD *StartContext)
{
  unsigned int v1; // eax
  __int64 v2; // rdi
  __int64 v3; // rbx
  __int64 *v5; // r15
  int v6; // r12d
  __int64 v7; // rax
  __int64 v8; // r14
  void *v9; // rdx
  unsigned int v10; // ebx
  __int64 v11; // r14
  PSLIST_ENTRY v12; // rsi
  _SLIST_ENTRY *Next; // rcx
  __int64 v14; // r14
  _QWORD *v15; // rdx
  _QWORD *NextWorkQueueEntry; // rbx
  _QWORD *v17; // rcx
  _QWORD *v18; // rcx
  NTSTATUS v19; // eax
  __int64 v20; // rax
  unsigned int v21; // [rsp+40h] [rbp-C0h]
  void *v22; // [rsp+48h] [rbp-B8h]
  unsigned int v23; // [rsp+50h] [rbp-B0h]
  __int64 v24; // [rsp+58h] [rbp-A8h]
  ULONG_PTR BugCheckParameter2; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v26; // [rsp+68h] [rbp-98h]
  __int64 v27; // [rsp+70h] [rbp-90h]
  PVOID Object[3]; // [rsp+78h] [rbp-88h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v31[64]; // [rsp+F0h] [rbp-10h] BYREF
  PSLIST_ENTRY ListEntry[64]; // [rsp+2F0h] [rbp+1F0h] BYREF

  if ( !StartContext )
    return;
  v1 = StartContext[10];
  v2 = 0LL;
  v3 = (unsigned int)StartContext[9];
  v5 = (__int64 *)*((_QWORD *)StartContext + 7);
  BugCheckParameter2 = 0LL;
  v21 = v1;
  v23 = v3;
  v6 = 3;
  memset(v31, 0, sizeof(v31));
  memset(ListEntry, 0, sizeof(ListEntry));
  v7 = v5[102];
  v27 = 3 * v3;
  v8 = (unsigned int)v3;
  v26 = v3;
  v9 = (void *)(v7 + 24 * v3);
  v22 = v9;
  v24 = v5[103] + 404 * v3;
  Object[0] = v9;
  Object[1] = v5 + 114;
  if ( (unsigned int)CcMaxAsyncReadItemsPerThread >= 0x40 )
    CcMaxAsyncReadItemsPerThread = 63;
  while ( 1 )
  {
    if ( (unsigned int)v2 >= CcMaxAsyncReadItemsPerThread || *(_QWORD *)(v5[100] + 16 * v8) == v5[100] + 16 * v8 )
    {
      if ( (_DWORD)v2 )
      {
        v10 = MmWaitMultipleForCacheManagerPrefetch((__int64)v31, v2, v9);
        v6 = v10 < (unsigned int)v2;
      }
      else
      {
        v19 = KeWaitForMultipleObjects(2u, Object, WaitAny, WrFreePage, 0, 0, 0LL, &WaitBlockArray);
        v10 = v19;
        if ( v19 )
        {
          if ( v19 == 1 )
            v6 = 2;
        }
        else
        {
          v6 = 0;
        }
      }
      v9 = v22;
    }
    else
    {
      v10 = v2 + 1;
      v6 = 0;
    }
    if ( !v6 )
      break;
    if ( v6 != 1 )
      goto LABEL_47;
    if ( v10 < (unsigned int)v2 )
    {
      _mm_lfence();
      v11 = v10;
      v12 = ListEntry[v11];
      if ( v12 )
      {
        Next = v12[3].Next;
        if ( Next )
        {
          ExFreePoolWithTag(Next, 0x73416343u);
          *((_BYTE *)&v12[7].Next + 8) = 6;
          v12[3].Next = 0LL;
          v31[v10] = 0LL;
          ListEntry[v10] = 0LL;
          if ( *((_DWORD *)&v12[1].Next[32].Next + 2) == 1 && *((_DWORD *)&v12[2].Next + 2) <= 0x20000u )
          {
            CcCompleteAsyncRead((__int64)v12);
            CcFreeWorkQueueEntry(v12);
          }
          else
          {
            CcPostWorkQueueAsyncRead(v12, 0LL);
          }
          v2 = (unsigned int)(v2 - 1);
          while ( v10 < (unsigned int)v2 )
          {
            v31[v11++] = v31[++v10];
            v31[v11 + 63] = ListEntry[v10];
          }
          v9 = v22;
          v31[v10] = 0LL;
          ListEntry[v10] = 0LL;
          _InterlockedDecrement((volatile signed __int32 *)(v24 + 4LL * v21));
          if ( !v22 )
          {
            v9 = (void *)(v5[102] + 8 * v27);
            v22 = v9;
          }
        }
      }
    }
LABEL_21:
    v8 = v26;
    if ( v21 && !(_DWORD)v2 )
      return;
  }
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(v5 + 104), 0LL);
  v14 = 16 * v8;
  while ( 1 )
  {
    v15 = (_QWORD *)(v14 + v5[100]);
    if ( (_QWORD *)*v15 == v15 )
      break;
    if ( (unsigned int)v2 >= CcMaxAsyncReadItemsPerThread )
    {
      ExReleasePushLockEx((ULONG_PTR)(v5 + 104), 0LL);
      CcShouldSpinAsyncReadWorkerThread((__int64)v5, &BugCheckParameter2, v23);
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(v5 + 104), 0LL);
      break;
    }
    NextWorkQueueEntry = CcFindNextWorkQueueEntry((__int64)v5, v15);
    ExReleasePushLockEx((ULONG_PTR)(v5 + 104), 0LL);
    if ( !CcAsyncReadPrefetch((__int64)NextWorkQueueEntry) )
      goto LABEL_41;
    v17 = (_QWORD *)NextWorkQueueEntry[6];
    if ( !*v17 )
    {
      ExFreePoolWithTag(v17, 0x73416343u);
      v20 = NextWorkQueueEntry[2];
      NextWorkQueueEntry[6] = 0LL;
      *((_BYTE *)NextWorkQueueEntry + 120) = 6;
      if ( *(_DWORD *)(v20 + 520) != 1 || *((_DWORD *)NextWorkQueueEntry + 10) > 0x20000u )
      {
        CcPostWorkQueueAsyncRead((PSLIST_ENTRY)NextWorkQueueEntry, 0LL);
        goto LABEL_30;
      }
LABEL_41:
      CcCompleteAsyncRead((__int64)NextWorkQueueEntry);
      CcFreeWorkQueueEntry((PSLIST_ENTRY)NextWorkQueueEntry);
      goto LABEL_30;
    }
    v31[v2] = *v17;
    ListEntry[v2] = (PSLIST_ENTRY)NextWorkQueueEntry;
    v2 = (unsigned int)(v2 + 1);
    _InterlockedIncrement((volatile signed __int32 *)(v24 + 4LL * v21));
    if ( (unsigned int)v2 >= CcMaxAsyncReadItemsPerThread )
      v22 = 0LL;
LABEL_30:
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(v5 + 104), 0LL);
  }
  ExReleasePushLockEx((ULONG_PTR)(v5 + 104), 0LL);
  v18 = (_QWORD *)BugCheckParameter2;
  if ( !BugCheckParameter2 )
    goto LABEL_32;
  *(_DWORD *)(v24 + 4LL * *(unsigned int *)(BugCheckParameter2 + 40)) = 0;
  *v18 = 0LL;
  ExQueueWorkItemToPartition((ULONG_PTR)v18, 0, 0xFFFFFFFF, v5[1]);
  BugCheckParameter2 = 0LL;
LABEL_47:
  if ( v6 != 2 )
  {
LABEL_32:
    v9 = v22;
    goto LABEL_21;
  }
  if ( !v21 )
  {
    ExFreePoolWithTag(StartContext, 0x71576343u);
    CcDereferencePartition((__int64)v5);
  }
}
