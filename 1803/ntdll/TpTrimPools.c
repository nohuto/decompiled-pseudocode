/*
 * XREFs of TpTrimPools @ 0x18007F020
 * Callers:
 *     LdrShutdownThread @ 0x180038A30 (LdrShutdownThread.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180010990 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180010A60 (RtlAcquireSRWLockShared.c)
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     RtlSleepConditionVariableSRW @ 0x180025E20 (RtlSleepConditionVariableSRW.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwWaitForMultipleObjects @ 0x18009B610 (ZwWaitForMultipleObjects.c)
 *     ZwSetInformationWorkerFactory @ 0x18009DD90 (ZwSetInformationWorkerFactory.c)
 */

void TpTrimPools()
{
  _UNKNOWN **v0; // r14
  _UNKNOWN **v1; // rbx
  _RTL_SRWLOCK *v2; // rbp
  _RTL_SRWLOCK *v3; // r15
  char v4; // r13
  NTSTATUS v5; // r9d
  unsigned __int64 v6; // r8
  NTSTATUS v7; // eax
  void **v8; // rsi
  char *Heap; // r12
  PVOID *v10; // r15
  __int64 v11; // rdi
  _QWORD *v12; // rdx
  __int64 v13; // rcx
  _QWORD *v14; // rax
  unsigned int v15; // ebx
  __int64 v16; // rcx
  ULONG v17; // r10d
  PVOID *v18; // rbx
  void ***v19; // rdi
  void **v20; // rcx
  void **v21; // rax
  void ***v22; // rdi
  void **v23; // rcx
  void **v24; // rax
  int WorkerFactoryInformation; // [rsp+70h] [rbp+8h] BYREF
  LARGE_INTEGER Timeout; // [rsp+78h] [rbp+10h] BYREF
  _RTL_SRWLOCK *v27; // [rsp+80h] [rbp+18h]

  Timeout.QuadPart = -1000000LL;
  RtlAcquireSRWLockExclusive(&stru_18015D398);
  v0 = (_UNKNOWN **)off_1801566A0;
  while ( v0 != &off_1801566A0 )
  {
    v1 = v0 - 48;
    v0 = (_UNKNOWN **)*v0;
    v2 = (_RTL_SRWLOCK *)(v1 + 46);
    RtlAcquireSRWLockShared((PRTL_SRWLOCK)v1 + 46);
    if ( *((_BYTE *)v1 + 377) )
      goto LABEL_31;
    v3 = (_RTL_SRWLOCK *)(v1 + 9);
    v27 = (_RTL_SRWLOCK *)(v1 + 9);
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)v1 + 9);
    WorkerFactoryInformation = 0;
    v4 = 1;
    if ( ZwSetInformationWorkerFactory(v1[7], WorkerFactoryTimeoutWaiters, &WorkerFactoryInformation, 4u) >= 0
      && WorkerFactoryInformation )
    {
      v5 = 0;
      v6 = *((_DWORD *)v1 + 109) ^ (*((_DWORD *)v1 + 109) ^ (2 * WorkerFactoryInformation)) & 0xFFEu;
      *((_DWORD *)v1 + 109) = v6;
      if ( (((unsigned int)v6 >> 11) & 0xFFE) < (v6 & 0xFFE) )
      {
        do
        {
          if ( v5 == 258 )
            break;
          v7 = RtlSleepConditionVariableSRW((PRTL_CONDITION_VARIABLE)v1 + 55, (PRTL_SRWLOCK)v1 + 9, &Timeout, 0);
          v6 = *((unsigned int *)v1 + 109);
          v5 = v7;
        }
        while ( (((unsigned int)v6 >> 11) & 0xFFE) < (*((_DWORD *)v1 + 109) & 0xFFEu) );
      }
      if ( (v6 & 0x7FF000) == 0 )
      {
        *((_DWORD *)v1 + 109) = v6 & 0xFFFFF001;
        goto LABEL_30;
      }
      v8 = (void **)(v1 + 56);
      Heap = (char *)RtlAllocateHeap(
                       NtCurrentPeb()->ProcessHeap,
                       (dword_18015D050 + 786432) | 8,
                       8 * ((v6 >> 12) & 0x7FF));
      if ( !Heap )
      {
        while ( 1 )
        {
          v19 = (void ***)*v8;
          if ( *v8 == v8 )
            break;
          v20 = *v19;
          if ( (*v19)[1] != v19 || (v21 = v19[1], *v21 != v19) )
            __fastfail(3u);
          *v21 = v20;
          v20[1] = v21;
          ZwClose(v19[2]);
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, dword_18015D050 + 786432, v19);
        }
        *((_DWORD *)v1 + 109) &= 0xFF800001;
        goto LABEL_30;
      }
      v10 = (PVOID *)RtlAllocateHeap(
                       NtCurrentPeb()->ProcessHeap,
                       (dword_18015D050 + 786432) | 8,
                       8LL * ((*((_DWORD *)v1 + 109) >> 12) & 0x7FF));
      if ( v10 )
      {
        v11 = 0LL;
        while ( 1 )
        {
          v12 = *v8;
          if ( *v8 == v8 )
            break;
          *(_QWORD *)&Heap[8 * v11] = v12[2];
          v10[v11] = v12;
          v13 = *v12;
          if ( *(_QWORD **)(*v12 + 8LL) != v12 || (v14 = (_QWORD *)v12[1], (_QWORD *)*v14 != v12) )
            __fastfail(3u);
          *v14 = v13;
          v11 = (unsigned int)(v11 + 1);
          *(_QWORD *)(v13 + 8) = v14;
        }
        *((_DWORD *)v1 + 109) &= 0xFF800001;
        RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)v1 + 9);
        RtlReleaseSRWLockShared((PRTL_SRWLOCK)v1 + 46);
        v4 = 0;
        v15 = 0;
        do
        {
          v16 = v15 << 6;
          if ( (unsigned int)v16 >= (unsigned int)v11 )
            break;
          v17 = (int)v16 + 64 <= (unsigned int)v11 ? 64 : v11 & 0x3F;
          if ( ZwWaitForMultipleObjects(v17, (HANDLE *)&Heap[8 * v16], WaitAll, 0, &Timeout) == 258 )
            break;
          ++v15;
        }
        while ( v15 <= (unsigned int)v11 >> 6 );
        if ( (_DWORD)v11 )
        {
          v18 = v10;
          do
          {
            ZwClose(*(PVOID *)((char *)v18 + Heap - (char *)v10));
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, dword_18015D050 + 786432, *v18++);
            --v11;
          }
          while ( v11 );
        }
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, dword_18015D050 + 786432, v10);
      }
      else
      {
        while ( 1 )
        {
          v22 = (void ***)*v8;
          if ( *v8 == v8 )
            break;
          v23 = *v22;
          if ( (*v22)[1] != v22 || (v24 = v22[1], *v24 != v22) )
            __fastfail(3u);
          *v24 = v23;
          v23[1] = v24;
          ZwClose(v22[2]);
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, dword_18015D050 + 786432, v22);
        }
        *((_DWORD *)v1 + 109) &= 0xFF800001;
      }
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, dword_18015D050 + 786432, Heap);
      if ( v4 )
      {
        v3 = v27;
        goto LABEL_30;
      }
    }
    else
    {
LABEL_30:
      RtlReleaseSRWLockExclusive(v3);
LABEL_31:
      RtlReleaseSRWLockShared(v2);
    }
  }
  RtlReleaseSRWLockExclusive(&stru_18015D398);
}
