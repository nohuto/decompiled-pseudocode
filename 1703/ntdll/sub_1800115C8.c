/*
 * XREFs of sub_1800115C8 @ 0x1800115C8
 * Callers:
 *     sub_18000FD48 @ 0x18000FD48 (sub_18000FD48.c)
 *     TpAllocPool @ 0x180010280 (TpAllocPool.c)
 * Callees:
 *     sub_180004A78 @ 0x180004A78 (sub_180004A78.c)
 *     sub_1800114C0 @ 0x1800114C0 (sub_1800114C0.c)
 *     sub_180013438 @ 0x180013438 (sub_180013438.c)
 *     sub_180017A78 @ 0x180017A78 (sub_180017A78.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     RtlImageNtHeader @ 0x180036560 (RtlImageNtHeader.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwCreateIoCompletion @ 0x1800A6790 (ZwCreateIoCompletion.c)
 *     ZwCreateWorkerFactory @ 0x1800A6B70 (ZwCreateWorkerFactory.c)
 *     ZwSetInformationWorkerFactory @ 0x1800A8530 (ZwSetInformationWorkerFactory.c)
 */

__int64 __fastcall sub_1800115C8(_QWORD *a1, char a2)
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
  int IoCompletion; // ebx
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
  StartParameter = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (dword_18015C000 + 786432) | 8, 0x1D0uLL);
  v31 = StartParameter;
  if ( StartParameter )
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, dword_18015C000 + 786432, 72LL * (unsigned int)dword_18015BFF0);
    BaseAddress = Heap;
    if ( !Heap )
    {
      IoCompletion = -1073741801;
      v29 = -1073741801;
      StartParameter = v31;
      goto LABEL_36;
    }
    v22 = 0LL;
    v23 = v31;
    v24 = (unsigned int)dword_18015BFF0;
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
    v11 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (dword_18015C000 + 786432) | 8, 4 * v24);
    StartParameter = v31;
    *((_QWORD *)v31 + 5) = v11;
    if ( v11 )
    {
      v12 = RtlAllocateHeap(
              NtCurrentPeb()->ProcessHeap,
              (dword_18015C000 + 786432) | 8,
              16LL * (unsigned int)dword_18015BFF0);
      StartParameter = v31;
      *((_QWORD *)v31 + 6) = v12;
      if ( v12 )
      {
        v13 = MEMORY[0x7FFE03C0];
        StartParameter[106] = MEMORY[0x7FFE03C0];
        IoCompletion = sub_1800114C0((__int64)StartParameter);
        v29 = IoCompletion;
        if ( IoCompletion < 0 )
          goto LABEL_36;
        StartParameter[107] = -2;
        v33 = (unsigned __int16)v13;
        *((_QWORD *)StartParameter + 1) = (unsigned __int16)v13;
        *StartParameter = 1;
        v15 = v13 + 1;
        if ( v13 < 4 )
          v15 = 4;
        v16 = (HANDLE *)(StartParameter + 16);
        IoCompletion = ZwCreateIoCompletion((PHANDLE)StartParameter + 8, 0x1F0003u, 0LL, v15);
        v29 = IoCompletion;
        if ( IoCompletion < 0 )
          goto LABEL_36;
        MaxThreadCount = 4 * MEMORY[0x7FFE03C0];
        if ( (unsigned int)(4 * MEMORY[0x7FFE03C0]) < 0x200 )
          MaxThreadCount = 512;
        v18 = (HANDLE *)(StartParameter + 14);
        IoCompletion = ZwCreateWorkerFactory(
                         (PHANDLE)StartParameter + 7,
                         0xF00FFu,
                         0LL,
                         *v16,
                         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                         &sub_180014980,
                         StartParameter,
                         MaxThreadCount,
                         StackReserve,
                         StackCommit);
        v29 = IoCompletion;
        if ( IoCompletion < 0 )
          goto LABEL_26;
        if ( WorkerFactoryInformation )
        {
          IoCompletion = ZwSetInformationWorkerFactory(*v18, WorkerFactoryFlags, &WorkerFactoryInformation, 4u);
          v29 = IoCompletion;
          if ( IoCompletion < 0 )
          {
LABEL_26:
            if ( IoCompletion < 0 )
            {
              ZwClose(*v16);
              if ( *v18 )
              {
                ZwClose(*v18);
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
        sub_180017A78(StartParameter, v30, 0LL);
        *((_QWORD *)StartParameter + 50) = retaddr;
        IoCompletion = sub_180013438(StartParameter + 28, StartParameter);
        v29 = IoCompletion;
        if ( IoCompletion >= 0 )
        {
          IoCompletion = 0;
          v29 = 0;
          RtlAcquireSRWLockExclusive(&stru_18015C360);
          v19 = StartParameter + 96;
          v20 = off_180155658;
          if ( *(_UNKNOWN ***)off_180155658 != &off_180155650 )
            __fastfail(3u);
          *v19 = &off_180155650;
          *((_QWORD *)StartParameter + 49) = v20;
          *v20 = v19;
          off_180155658 = StartParameter + 96;
          RtlReleaseSRWLockExclusive(&stru_18015C360);
        }
        goto LABEL_26;
      }
    }
  }
  IoCompletion = -1073741801;
  v29 = -1073741801;
LABEL_36:
  if ( IoCompletion >= 0 )
    goto LABEL_37;
  if ( StartParameter )
  {
    if ( BaseAddress )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, dword_18015C000 + 786432, BaseAddress);
      StartParameter = v31;
    }
    v27 = (void *)*((_QWORD *)StartParameter + 5);
    if ( v27 )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, dword_18015C000 + 786432, v27);
      StartParameter = v31;
    }
    v28 = (void *)*((_QWORD *)StartParameter + 6);
    if ( v28 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, dword_18015C000 + 786432, v28);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, dword_18015C000 + 786432, v31);
    StartParameter = 0LL;
    v31 = 0LL;
    IoCompletion = v29;
  }
  if ( IoCompletion >= 0 )
  {
LABEL_37:
    *a1 = StartParameter;
    if ( RtlGetCurrentServiceSessionId() )
    {
      v25 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[3];
      IoCompletion = v29;
      StartParameter = v31;
    }
    else
    {
      v25 = 2147353478LL;
    }
    if ( *(_BYTE *)v25 )
      sub_180004A78((__int64)StartParameter);
  }
  return (unsigned int)IoCompletion;
}
