/*
 * XREFs of sub_180057618 @ 0x180057618
 * Callers:
 *     sub_180056E90 @ 0x180056E90 (sub_180056E90.c)
 *     TpAllocPool @ 0x180057270 (TpAllocPool.c)
 * Callees:
 *     sub_180003910 @ 0x180003910 (sub_180003910.c)
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     sub_180024854 @ 0x180024854 (sub_180024854.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     RtlImageNtHeader @ 0x18002DC30 (RtlImageNtHeader.c)
 *     sub_1800583B8 @ 0x1800583B8 (sub_1800583B8.c)
 *     sub_1800593D8 @ 0x1800593D8 (sub_1800593D8.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwCreateIoCompletion @ 0x18009BF90 (ZwCreateIoCompletion.c)
 *     ZwCreateWorkerFactory @ 0x18009C370 (ZwCreateWorkerFactory.c)
 *     ZwSetInformationWorkerFactory @ 0x18009DD90 (ZwSetInformationWorkerFactory.c)
 */

__int64 __fastcall sub_180057618(_QWORD *a1, char a2)
{
  PIMAGE_NT_HEADERS v3; // rax
  SIZE_T StackReserve; // r12
  SIZE_T StackCommit; // rsi
  struct _PEB *v6; // rax
  SIZE_T MinimumStackCommit; // rcx
  _DWORD *StartParameter; // rdi
  __int64 v9; // r8
  _QWORD *v10; // r10
  __int64 v11; // r9
  __int64 i; // r8
  _QWORD *v13; // rdx
  PVOID Heap; // rax
  PVOID v15; // rax
  unsigned int v16; // r14d
  NTSTATUS IoCompletion; // ebx
  ULONG v18; // r9d
  HANDLE *v19; // r15
  ULONG MaxThreadCount; // eax
  HANDLE *v21; // r14
  _QWORD *v22; // rax
  _QWORD *v23; // rdx
  __int64 v24; // rcx
  void *v26; // r8
  void *v27; // r8
  int v28; // [rsp+50h] [rbp-68h]
  int v29; // [rsp+60h] [rbp-58h] BYREF
  PVOID v30; // [rsp+68h] [rbp-50h]
  PVOID BaseAddress; // [rsp+70h] [rbp-48h]
  __int64 v32; // [rsp+78h] [rbp-40h]
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
  StartParameter = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (dword_18015D050 + 786432) | 8, 0x1D0uLL);
  v30 = StartParameter;
  if ( StartParameter )
  {
    BaseAddress = RtlAllocateHeap(
                    NtCurrentPeb()->ProcessHeap,
                    dword_18015D050 + 786432,
                    72LL * (unsigned int)dword_18015D044);
    if ( !BaseAddress )
    {
      IoCompletion = -1073741801;
      v28 = -1073741801;
      StartParameter = v30;
      goto LABEL_34;
    }
    v9 = 0LL;
    v10 = v30;
    v11 = (unsigned int)dword_18015D044;
    while ( (unsigned int)v9 < 3 )
    {
      v10[v9 + 2] = (char *)BaseAddress + 24 * (unsigned int)(v9 * v11);
      v9 = (unsigned int)(v9 + 1);
    }
    for ( i = 0LL; (unsigned int)i < 3 * (int)v11; i = (unsigned int)(i + 1) )
    {
      v13 = (char *)BaseAddress + 24 * i;
      v13[2] = 0LL;
      v13[1] = v13;
      *v13 = v13;
    }
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (dword_18015D050 + 786432) | 8, 4 * v11);
    StartParameter = v30;
    *((_QWORD *)v30 + 5) = Heap;
    if ( Heap )
    {
      v15 = RtlAllocateHeap(
              NtCurrentPeb()->ProcessHeap,
              (dword_18015D050 + 786432) | 8,
              16LL * (unsigned int)dword_18015D044);
      StartParameter = v30;
      *((_QWORD *)v30 + 6) = v15;
      if ( v15 )
      {
        v16 = MEMORY[0x7FFE03C0];
        StartParameter[106] = MEMORY[0x7FFE03C0];
        IoCompletion = sub_1800593D8(StartParameter);
        v28 = IoCompletion;
        if ( IoCompletion < 0 )
          goto LABEL_34;
        StartParameter[107] = -2;
        v32 = (unsigned __int16)v16;
        *((_QWORD *)StartParameter + 1) = (unsigned __int16)v16;
        *StartParameter = 1;
        v18 = v16 + 1;
        if ( v16 < 4 )
          v18 = 4;
        v19 = (HANDLE *)(StartParameter + 16);
        IoCompletion = ZwCreateIoCompletion((PHANDLE)StartParameter + 8, 0x1F0003u, 0LL, v18);
        v28 = IoCompletion;
        if ( IoCompletion < 0 )
          goto LABEL_34;
        MaxThreadCount = 4 * MEMORY[0x7FFE03C0];
        if ( (unsigned int)(4 * MEMORY[0x7FFE03C0]) < 0x200 )
          MaxThreadCount = 512;
        v21 = (HANDLE *)(StartParameter + 14);
        IoCompletion = ZwCreateWorkerFactory(
                         (PHANDLE)StartParameter + 7,
                         0xF00FFu,
                         0LL,
                         *v19,
                         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                         sub_180026330,
                         StartParameter,
                         MaxThreadCount,
                         StackReserve,
                         StackCommit);
        v28 = IoCompletion;
        if ( IoCompletion < 0 )
          goto LABEL_29;
        if ( WorkerFactoryInformation )
        {
          IoCompletion = ZwSetInformationWorkerFactory(*v21, WorkerFactoryFlags, &WorkerFactoryInformation, 4u);
          v28 = IoCompletion;
          if ( IoCompletion < 0 )
          {
LABEL_29:
            if ( IoCompletion < 0 )
            {
              ZwClose(*v19);
              if ( *v21 )
              {
                ZwClose(*v21);
                *v21 = 0LL;
              }
            }
            goto LABEL_34;
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
        sub_180024854((__int64)StartParameter, &v29, 0LL);
        *((_QWORD *)StartParameter + 50) = retaddr;
        IoCompletion = sub_1800583B8(StartParameter + 28, StartParameter);
        v28 = IoCompletion;
        if ( IoCompletion >= 0 )
        {
          IoCompletion = 0;
          v28 = 0;
          RtlAcquireSRWLockExclusive(&stru_18015D398);
          v22 = StartParameter + 96;
          v23 = off_1801566A8;
          if ( *off_1801566A8 != (_UNKNOWN *)&off_1801566A0 )
            __fastfail(3u);
          *v22 = &off_1801566A0;
          *((_QWORD *)StartParameter + 49) = v23;
          *v23 = v22;
          off_1801566A8 = (_UNKNOWN **)(StartParameter + 96);
          RtlReleaseSRWLockExclusive(&stru_18015D398);
        }
        goto LABEL_29;
      }
    }
  }
  IoCompletion = -1073741801;
  v28 = -1073741801;
LABEL_34:
  if ( IoCompletion >= 0 )
    goto LABEL_35;
  if ( StartParameter )
  {
    if ( BaseAddress )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, dword_18015D050 + 786432, BaseAddress);
      StartParameter = v30;
    }
    v26 = (void *)*((_QWORD *)StartParameter + 5);
    if ( v26 )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, dword_18015D050 + 786432, v26);
      StartParameter = v30;
    }
    v27 = (void *)*((_QWORD *)StartParameter + 6);
    if ( v27 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, dword_18015D050 + 786432, v27);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, dword_18015D050 + 786432, v30);
    StartParameter = 0LL;
    v30 = 0LL;
    IoCompletion = v28;
  }
  if ( IoCompletion >= 0 )
  {
LABEL_35:
    *a1 = StartParameter;
    if ( RtlGetCurrentServiceSessionId() )
    {
      v24 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[3];
      IoCompletion = v28;
      StartParameter = v30;
    }
    else
    {
      v24 = 2147353478LL;
    }
    if ( *(_BYTE *)v24 )
      sub_180003910((__int64)StartParameter);
  }
  return (unsigned int)IoCompletion;
}
