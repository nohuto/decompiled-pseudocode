/*
 * XREFs of TpTrimPools @ 0x180083540
 * Callers:
 *     LdrShutdownThread @ 0x18002E930 (LdrShutdownThread.c)
 * Callees:
 *     RtlSleepConditionVariableSRW @ 0x1800380E0 (RtlSleepConditionVariableSRW.c)
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockShared @ 0x1800467D0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180046FA0 (RtlAcquireSRWLockShared.c)
 *     NtClose @ 0x1800A02A0 (NtClose.c)
 *     NtWaitForMultipleObjects @ 0x1800A0C10 (NtWaitForMultipleObjects.c)
 *     NtSetInformationWorkerFactory @ 0x1800A3350 (NtSetInformationWorkerFactory.c)
 */

void TpTrimPools()
{
  _UNKNOWN **v0; // r14
  _UNKNOWN **v1; // rbx
  _RTL_SRWLOCK *v2; // rbp
  _RTL_SRWLOCK *v3; // rsi
  char v4; // r13
  NTSTATUS v5; // r8d
  unsigned __int64 v6; // r8
  char *Heap; // r12
  PVOID *v8; // r15
  __int64 v9; // rdi
  _QWORD **v10; // r8
  _QWORD *v11; // rdx
  __int64 v12; // rcx
  _QWORD *v13; // rax
  unsigned int v14; // ebx
  __int64 v15; // rcx
  ULONG v16; // r10d
  PVOID *v17; // rbx
  void **v18; // rsi
  void ***v19; // rdi
  void **v20; // rcx
  void **v21; // rax
  void **v22; // rsi
  void ***v23; // rdi
  void **v24; // rcx
  void **v25; // rax
  int WorkerFactoryInformation; // [rsp+70h] [rbp+8h] BYREF
  LARGE_INTEGER Timeout; // [rsp+78h] [rbp+10h] BYREF
  _RTL_SRWLOCK *v28; // [rsp+80h] [rbp+18h]

  Timeout.QuadPart = -1000000LL;
  RtlAcquireSRWLockExclusive(&TppPoolpListLock);
  v0 = (_UNKNOWN **)TppPoolpList;
  while ( v0 != &TppPoolpList )
  {
    v1 = v0 - 48;
    v0 = (_UNKNOWN **)*v0;
    v2 = (_RTL_SRWLOCK *)(v1 + 46);
    RtlAcquireSRWLockShared((PRTL_SRWLOCK)v1 + 46);
    if ( *((_BYTE *)v1 + 377) )
      goto LABEL_31;
    v3 = (_RTL_SRWLOCK *)(v1 + 9);
    v28 = (_RTL_SRWLOCK *)(v1 + 9);
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)v1 + 9);
    WorkerFactoryInformation = 0;
    v4 = 1;
    if ( NtSetInformationWorkerFactory(v1[7], WorkerFactoryTimeoutWaiters, &WorkerFactoryInformation, 4u) >= 0
      && WorkerFactoryInformation )
    {
      v5 = 0;
      for ( *((_DWORD *)v1 + 109) ^= (*((_DWORD *)v1 + 109) ^ (2 * WorkerFactoryInformation)) & 0xFFE;
            ((*((_DWORD *)v1 + 109) >> 11) & 0xFFEu) < (*((_DWORD *)v1 + 109) & 0xFFEu);
            v5 = RtlSleepConditionVariableSRW((PRTL_CONDITION_VARIABLE)v1 + 55, (PRTL_SRWLOCK)v1 + 9, &Timeout, 0) )
      {
        if ( v5 == 258 )
          break;
      }
      v6 = *((unsigned int *)v1 + 109);
      if ( (v6 & 0x7FF000) == 0 )
      {
        *((_DWORD *)v1 + 109) = v6 & 0xFFFFF001;
        goto LABEL_30;
      }
      Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (TppHeapTag + 786432) | 8, 8 * ((v6 >> 12) & 0x7FF));
      if ( !Heap )
      {
        v18 = (void **)(v1 + 56);
        while ( 1 )
        {
          v19 = (void ***)*v18;
          if ( *v18 == v18 )
            break;
          v20 = *v19;
          if ( (*v19)[1] != v19 || (v21 = v19[1], *v21 != v19) )
            __fastfail(3u);
          *v21 = v20;
          v20[1] = v21;
          NtClose(v19[2]);
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, v19);
        }
        *((_DWORD *)v1 + 109) &= 0xFF800001;
LABEL_28:
        v3 = v28;
        goto LABEL_30;
      }
      v8 = (PVOID *)RtlAllocateHeap(
                      NtCurrentPeb()->ProcessHeap,
                      (TppHeapTag + 786432) | 8,
                      8LL * ((*((_DWORD *)v1 + 109) >> 12) & 0x7FF));
      if ( v8 )
      {
        v9 = 0LL;
        v10 = (_QWORD **)(v1 + 56);
        while ( 1 )
        {
          v11 = *v10;
          if ( *v10 == v10 )
            break;
          *(_QWORD *)&Heap[8 * v9] = v11[2];
          v8[v9] = v11;
          v12 = *v11;
          if ( *(_QWORD **)(*v11 + 8LL) != v11 || (v13 = (_QWORD *)v11[1], (_QWORD *)*v13 != v11) )
            __fastfail(3u);
          *v13 = v12;
          v9 = (unsigned int)(v9 + 1);
          *(_QWORD *)(v12 + 8) = v13;
        }
        *((_DWORD *)v1 + 109) &= 0xFF800001;
        RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)v1 + 9);
        RtlReleaseSRWLockShared((PRTL_SRWLOCK)v1 + 46);
        v4 = 0;
        v14 = 0;
        do
        {
          v15 = v14 << 6;
          if ( (unsigned int)v15 >= (unsigned int)v9 )
            break;
          v16 = (int)v15 + 64 <= (unsigned int)v9 ? 64 : v9 & 0x3F;
          if ( NtWaitForMultipleObjects(v16, (HANDLE *)&Heap[8 * v15], WaitAll, 0, &Timeout) == 258 )
            break;
          ++v14;
        }
        while ( v14 <= (unsigned int)v9 >> 6 );
        if ( (_DWORD)v9 )
        {
          v17 = v8;
          do
          {
            NtClose(*(PVOID *)((char *)v17 + Heap - (char *)v8));
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, *v17++);
            --v9;
          }
          while ( v9 );
        }
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, v8);
      }
      else
      {
        v22 = (void **)(v1 + 56);
        while ( 1 )
        {
          v23 = (void ***)*v22;
          if ( *v22 == v22 )
            break;
          v24 = *v23;
          if ( (*v23)[1] != v23 || (v25 = v23[1], *v25 != v23) )
            __fastfail(3u);
          *v25 = v24;
          v24[1] = v25;
          NtClose(v23[2]);
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, v23);
        }
        *((_DWORD *)v1 + 109) &= 0xFF800001;
      }
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, Heap);
      if ( v4 )
        goto LABEL_28;
    }
    else
    {
LABEL_30:
      RtlReleaseSRWLockExclusive(v3);
LABEL_31:
      RtlReleaseSRWLockShared(v2);
    }
  }
  RtlReleaseSRWLockExclusive(&TppPoolpListLock);
}
