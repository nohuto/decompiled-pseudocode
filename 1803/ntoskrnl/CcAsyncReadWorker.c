/*
 * XREFs of CcAsyncReadWorker @ 0x140178110
 * Callers:
 *     CcAsyncReadWorkerThread @ 0x140221410 (CcAsyncReadWorkerThread.c)
 * Callees:
 *     CcFindNextWorkQueueEntry @ 0x140043690 (CcFindNextWorkQueueEntry.c)
 *     CcFreeWorkQueueEntry @ 0x14004373C (CcFreeWorkQueueEntry.c)
 *     ExQueueWorkItemToPartition @ 0x14008F67C (ExQueueWorkItemToPartition.c)
 *     CcAsyncReadPrefetch @ 0x140098ACC (CcAsyncReadPrefetch.c)
 *     CcCompleteAsyncRead @ 0x1400C1278 (CcCompleteAsyncRead.c)
 *     MmWaitMultipleForCacheManagerPrefetch @ 0x1400C3594 (MmWaitMultipleForCacheManagerPrefetch.c)
 *     CcDereferencePartition @ 0x1400E07B8 (CcDereferencePartition.c)
 *     KeWaitForMultipleObjects @ 0x1400FF3A0 (KeWaitForMultipleObjects.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     CcPostWorkQueueAsyncRead @ 0x1401394C4 (CcPostWorkQueueAsyncRead.c)
 *     CcShouldSpinAsyncReadWorkerThread @ 0x1401396C8 (CcShouldSpinAsyncReadWorkerThread.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
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
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r14
  _QWORD *v14; // rdx
  _QWORD *NextWorkQueueEntry; // rbx
  __int64 v16; // r8
  __int64 v17; // r9
  _QWORD *v18; // rcx
  _QWORD *v19; // rcx
  __int64 v20; // r14
  PSLIST_ENTRY v21; // rsi
  _SLIST_ENTRY *Next; // rcx
  NTSTATUS v23; // eax
  __int64 v24; // rax
  unsigned int v25; // [rsp+40h] [rbp-C0h]
  void *v26; // [rsp+48h] [rbp-B8h]
  unsigned int v27; // [rsp+50h] [rbp-B0h]
  __int64 v28; // [rsp+58h] [rbp-A8h]
  ULONG_PTR BugCheckParameter2; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v30; // [rsp+68h] [rbp-98h]
  __int64 v31; // [rsp+70h] [rbp-90h]
  PVOID Object[3]; // [rsp+78h] [rbp-88h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v35[64]; // [rsp+F0h] [rbp-10h] BYREF
  PSLIST_ENTRY ListEntry[64]; // [rsp+2F0h] [rbp+1F0h] BYREF

  if ( !StartContext )
    return;
  v1 = StartContext[10];
  v2 = 0LL;
  v3 = (unsigned int)StartContext[9];
  v5 = (__int64 *)*((_QWORD *)StartContext + 7);
  BugCheckParameter2 = 0LL;
  v25 = v1;
  v27 = v3;
  v6 = 3;
  memset(v35, 0, sizeof(v35));
  memset(ListEntry, 0, sizeof(ListEntry));
  v7 = v5[102];
  v31 = 3 * v3;
  v8 = (unsigned int)v3;
  v30 = v3;
  v9 = (void *)(v7 + 24 * v3);
  v26 = v9;
  v28 = v5[103] + 404 * v3;
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
        v10 = MmWaitMultipleForCacheManagerPrefetch((__int64)v35, v2, v9);
        v6 = v10 < (unsigned int)v2;
      }
      else
      {
        v23 = KeWaitForMultipleObjects(2u, Object, WaitAny, WrFreePage, 0, 0, 0LL, &WaitBlockArray);
        v10 = v23;
        if ( v23 )
        {
          if ( v23 == 1 )
            v6 = 2;
        }
        else
        {
          v6 = 0;
        }
      }
      v9 = v26;
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
      v20 = v10;
      v21 = ListEntry[v20];
      if ( v21 )
      {
        Next = v21[3].Next;
        if ( Next )
        {
          ExFreePoolWithTag(Next, 0x73416343u);
          *((_BYTE *)&v21[7].Next + 8) = 6;
          v21[3].Next = 0LL;
          v35[v10] = 0LL;
          ListEntry[v10] = 0LL;
          if ( *((_DWORD *)&v21[1].Next[32].Next + 2) == 1 && *((_DWORD *)&v21[2].Next + 2) <= 0x20000u )
          {
            CcCompleteAsyncRead((__int64)v21);
            CcFreeWorkQueueEntry(v21);
          }
          else
          {
            CcPostWorkQueueAsyncRead(v21, 0LL);
          }
          v2 = (unsigned int)(v2 - 1);
          while ( v10 < (unsigned int)v2 )
          {
            v35[v20++] = v35[++v10];
            v35[v20 + 63] = ListEntry[v10];
          }
          v9 = v26;
          v35[v10] = 0LL;
          ListEntry[v10] = 0LL;
          _InterlockedDecrement((volatile signed __int32 *)(v28 + 4LL * v25));
          if ( !v26 )
          {
            v9 = (void *)(v5[102] + 8 * v31);
            v26 = v9;
          }
        }
      }
    }
LABEL_20:
    v8 = v30;
    if ( v25 && !(_DWORD)v2 )
      return;
  }
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(v5 + 104), 0LL);
  v13 = 16 * v8;
  while ( 1 )
  {
    v14 = (_QWORD *)(v13 + v5[100]);
    if ( (_QWORD *)*v14 == v14 )
      break;
    if ( (unsigned int)v2 >= CcMaxAsyncReadItemsPerThread )
    {
      ExReleasePushLockEx((ULONG_PTR)(v5 + 104), 0LL, v11, v12);
      CcShouldSpinAsyncReadWorkerThread((__int64)v5, &BugCheckParameter2, v27);
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(v5 + 104), 0LL);
      break;
    }
    NextWorkQueueEntry = CcFindNextWorkQueueEntry((__int64)v5, v14);
    ExReleasePushLockEx((ULONG_PTR)(v5 + 104), 0LL, v16, v17);
    if ( !CcAsyncReadPrefetch((__int64)NextWorkQueueEntry) )
      goto LABEL_41;
    v18 = (_QWORD *)NextWorkQueueEntry[6];
    if ( !*v18 )
    {
      ExFreePoolWithTag(v18, 0x73416343u);
      v24 = NextWorkQueueEntry[2];
      NextWorkQueueEntry[6] = 0LL;
      *((_BYTE *)NextWorkQueueEntry + 120) = 6;
      if ( *(_DWORD *)(v24 + 520) != 1 || *((_DWORD *)NextWorkQueueEntry + 10) > 0x20000u )
      {
        CcPostWorkQueueAsyncRead((PSLIST_ENTRY)NextWorkQueueEntry, 0LL);
        goto LABEL_17;
      }
LABEL_41:
      CcCompleteAsyncRead((__int64)NextWorkQueueEntry);
      CcFreeWorkQueueEntry((PSLIST_ENTRY)NextWorkQueueEntry);
      goto LABEL_17;
    }
    v35[v2] = *v18;
    ListEntry[v2] = (PSLIST_ENTRY)NextWorkQueueEntry;
    v2 = (unsigned int)(v2 + 1);
    _InterlockedIncrement((volatile signed __int32 *)(v28 + 4LL * v25));
    if ( (unsigned int)v2 >= CcMaxAsyncReadItemsPerThread )
      v26 = 0LL;
LABEL_17:
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(v5 + 104), 0LL);
  }
  ExReleasePushLockEx((ULONG_PTR)(v5 + 104), 0LL, v11, v12);
  v19 = (_QWORD *)BugCheckParameter2;
  if ( !BugCheckParameter2 )
    goto LABEL_19;
  *(_DWORD *)(v28 + 4LL * *(unsigned int *)(BugCheckParameter2 + 40)) = 0;
  *v19 = 0LL;
  ExQueueWorkItemToPartition((ULONG_PTR)v19, 0, 0xFFFFFFFF, v5[1]);
  BugCheckParameter2 = 0LL;
LABEL_47:
  if ( v6 != 2 )
  {
LABEL_19:
    v9 = v26;
    goto LABEL_20;
  }
  if ( !v25 )
  {
    ExFreePoolWithTag(StartContext, 0x71576343u);
    CcDereferencePartition((__int64)v5);
  }
}
