/*
 * XREFs of TpAllocPoolInternal @ 0x18000AC04
 * Callers:
 *     LdrpEnableParallelLoading @ 0x180009F74 (LdrpEnableParallelLoading.c)
 *     TpAllocPool @ 0x18000A460 (TpAllocPool.c)
 * Callees:
 *     TppETWPoolCreate @ 0x180002A8C (TppETWPoolCreate.c)
 *     TppPoolUpdateNodeRelation @ 0x18000B078 (TppPoolUpdateNodeRelation.c)
 *     TppInitializeTimerQueue @ 0x18000B70C (TppInitializeTimerQueue.c)
 *     RtlImageNtHeader @ 0x18002AA40 (RtlImageNtHeader.c)
 *     TppGetCurrentThreadNumaNode @ 0x180036CF8 (TppGetCurrentThreadNumaNode.c)
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     NtClose @ 0x1800A02A0 (NtClose.c)
 *     NtCreateIoCompletion @ 0x1800A1570 (NtCreateIoCompletion.c)
 *     NtCreateWorkerFactory @ 0x1800A1950 (NtCreateWorkerFactory.c)
 *     NtSetInformationWorkerFactory @ 0x1800A3350 (NtSetInformationWorkerFactory.c)
 */

__int64 __fastcall TpAllocPoolInternal(_QWORD *a1, char a2)
{
  PIMAGE_NT_HEADERS v3; // rax
  SIZE_T StackReserve; // r12
  SIZE_T StackCommit; // rsi
  struct _PEB *v6; // rax
  SIZE_T MinimumStackCommit; // rcx
  _DWORD *StartParameter; // rdi
  __int64 i; // r8
  _QWORD *v10; // rdx
  PVOID v11; // rax
  PVOID v12; // rax
  unsigned int v13; // r14d
  NTSTATUS updated; // ebx
  ULONG v15; // r9d
  HANDLE *v16; // r15
  ULONG MaxThreadCount; // eax
  HANDLE *v18; // r14
  _QWORD *v19; // rax
  _QWORD *v20; // rdx
  PVOID Heap; // rax
  __int64 v22; // r8
  _QWORD *v23; // r10
  __int64 v24; // r9
  __int64 v25; // rcx
  void *v27; // r8
  void *v28; // r8
  int v29; // [rsp+50h] [rbp-68h]
  _BYTE v30[8]; // [rsp+60h] [rbp-58h] BYREF
  PVOID v31; // [rsp+68h] [rbp-50h]
  PVOID BaseAddress; // [rsp+70h] [rbp-48h]
  __int64 v33; // [rsp+78h] [rbp-40h]
  _UNKNOWN *retaddr; // [rsp+B8h] [rbp+0h]
  int WorkerFactoryInformation; // [rsp+C8h] [rbp+10h] BYREF

  BaseAddress = 0LL;
  *a1 = 0LL;
  WorkerFactoryInformation = a2 & 1;
  v3 = RtlImageNtHeader(NtCurrentPeb()->ImageBaseAddress);
  if ( !v3 )
    return (unsigned int)-1073741701;
  if ( v3->OptionalHeader.Magic == 523 )
  {
    StackReserve = v3->OptionalHeader.SizeOfStackReserve;
    StackCommit = v3->OptionalHeader.SizeOfStackCommit;
  }
  else
  {
    StackReserve = LODWORD(v3->OptionalHeader.SizeOfStackReserve);
    StackCommit = HIDWORD(v3->OptionalHeader.SizeOfStackReserve);
  }
  v6 = NtCurrentPeb();
  MinimumStackCommit = v6->MinimumStackCommit;
  if ( MinimumStackCommit && StackCommit < MinimumStackCommit )
    StackCommit = v6->MinimumStackCommit;
  StartParameter = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (TppHeapTag + 786432) | 8, 0x1D0uLL);
  v31 = StartParameter;
  if ( StartParameter )
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, 72LL * (unsigned int)TppNumberNodes);
    BaseAddress = Heap;
    if ( !Heap )
    {
      updated = -1073741801;
      v29 = -1073741801;
      StartParameter = v31;
      goto LABEL_36;
    }
    v22 = 0LL;
    v23 = v31;
    v24 = (unsigned int)TppNumberNodes;
    while ( (unsigned int)v22 < 3 )
    {
      v23[v22 + 2] = (char *)BaseAddress + 24 * (unsigned int)(v22 * v24);
      v22 = (unsigned int)(v22 + 1);
    }
    for ( i = 0LL; (unsigned int)i < 3 * (int)v24; i = (unsigned int)(i + 1) )
    {
      v10 = (char *)BaseAddress + 24 * i;
      v10[2] = 0LL;
      v10[1] = v10;
      *v10 = v10;
    }
    v11 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (TppHeapTag + 786432) | 8, 4 * v24);
    StartParameter = v31;
    *((_QWORD *)v31 + 5) = v11;
    if ( v11 )
    {
      v12 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (TppHeapTag + 786432) | 8, 16LL * (unsigned int)TppNumberNodes);
      StartParameter = v31;
      *((_QWORD *)v31 + 6) = v12;
      if ( v12 )
      {
        v13 = MEMORY[0x7FFE03C0];
        StartParameter[106] = MEMORY[0x7FFE03C0];
        updated = TppPoolUpdateNodeRelation(StartParameter);
        v29 = updated;
        if ( updated < 0 )
          goto LABEL_36;
        StartParameter[107] = -2;
        v33 = (unsigned __int16)v13;
        *((_QWORD *)StartParameter + 1) = (unsigned __int16)v13;
        *StartParameter = 1;
        v15 = v13 + 1;
        if ( v13 < 4 )
          v15 = 4;
        v16 = (HANDLE *)(StartParameter + 16);
        updated = NtCreateIoCompletion((PHANDLE)StartParameter + 8, 0x1F0003u, 0LL, v15);
        v29 = updated;
        if ( updated < 0 )
          goto LABEL_36;
        MaxThreadCount = 4 * MEMORY[0x7FFE03C0];
        if ( (unsigned int)(4 * MEMORY[0x7FFE03C0]) < 0x200 )
          MaxThreadCount = 512;
        v18 = (HANDLE *)(StartParameter + 14);
        updated = NtCreateWorkerFactory(
                    (PHANDLE)StartParameter + 7,
                    0xF00FFu,
                    0LL,
                    *v16,
                    (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                    &TppWorkerThread,
                    StartParameter,
                    MaxThreadCount,
                    StackReserve,
                    StackCommit);
        v29 = updated;
        if ( updated < 0 )
          goto LABEL_26;
        if ( WorkerFactoryInformation )
        {
          updated = NtSetInformationWorkerFactory(*v18, WorkerFactoryFlags, &WorkerFactoryInformation, 4u);
          v29 = updated;
          if ( updated < 0 )
          {
LABEL_26:
            if ( updated < 0 )
            {
              NtClose(*v16);
              if ( *v18 )
              {
                NtClose(*v18);
                *v18 = 0LL;
              }
            }
            goto LABEL_36;
          }
          *((_WORD *)StartParameter + 189) = WorkerFactoryInformation;
        }
        *((_QWORD *)StartParameter + 9) = 0LL;
        *((_QWORD *)StartParameter + 46) = 0LL;
        *((_QWORD *)StartParameter + 55) = 0LL;
        *((_WORD *)StartParameter + 188) = 0;
        *((_QWORD *)StartParameter + 11) = StartParameter + 20;
        *((_QWORD *)StartParameter + 10) = StartParameter + 20;
        *((_QWORD *)StartParameter + 13) = StartParameter + 24;
        *((_QWORD *)StartParameter + 12) = StartParameter + 24;
        *((_QWORD *)StartParameter + 57) = StartParameter + 112;
        *((_QWORD *)StartParameter + 56) = StartParameter + 112;
        TppGetCurrentThreadNumaNode(StartParameter, v30, 0LL);
        *((_QWORD *)StartParameter + 50) = retaddr;
        updated = TppInitializeTimerQueue(StartParameter + 28, StartParameter);
        v29 = updated;
        if ( updated >= 0 )
        {
          updated = 0;
          v29 = 0;
          RtlAcquireSRWLockExclusive(&TppPoolpListLock);
          v19 = StartParameter + 96;
          v20 = off_180159698;
          if ( *off_180159698 != (_UNKNOWN *)&TppPoolpList )
            __fastfail(3u);
          *v19 = &TppPoolpList;
          *((_QWORD *)StartParameter + 49) = v20;
          *v20 = v19;
          off_180159698 = (_UNKNOWN **)(StartParameter + 96);
          RtlReleaseSRWLockExclusive(&TppPoolpListLock);
        }
        goto LABEL_26;
      }
    }
  }
  updated = -1073741801;
  v29 = -1073741801;
LABEL_36:
  if ( updated >= 0 )
    goto LABEL_37;
  if ( StartParameter )
  {
    if ( BaseAddress )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, BaseAddress);
      StartParameter = v31;
    }
    v27 = (void *)*((_QWORD *)StartParameter + 5);
    if ( v27 )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, v27);
      StartParameter = v31;
    }
    v28 = (void *)*((_QWORD *)StartParameter + 6);
    if ( v28 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, v28);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, v31);
    StartParameter = 0LL;
    v31 = 0LL;
    updated = v29;
  }
  if ( updated >= 0 )
  {
LABEL_37:
    *a1 = StartParameter;
    if ( RtlGetCurrentServiceSessionId() )
    {
      v25 = (__int64)NtCurrentPeb()->SharedData + 556;
      updated = v29;
      StartParameter = v31;
    }
    else
    {
      v25 = 2147353478LL;
    }
    if ( *(_BYTE *)v25 )
      TppETWPoolCreate((__int64)StartParameter);
  }
  return (unsigned int)updated;
}
