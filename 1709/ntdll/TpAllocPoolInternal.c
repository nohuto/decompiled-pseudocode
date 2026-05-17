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

__int64 __fastcall TpAllocPoolInternal(__int64 *a1, char a2)
{
  __int64 v3; // rax
  __int64 v4; // r12
  unsigned __int64 v5; // rsi
  struct _PEB *v6; // rax
  unsigned __int64 MinimumStackCommit; // rcx
  __int64 v8; // rdx
  void *v9; // rcx
  __int64 Heap; // rdi
  __int64 i; // r8
  _QWORD *v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned int v15; // r14d
  int updated; // ebx
  __int64 v17; // r9
  HANDLE *v18; // r15
  int v19; // eax
  _QWORD *v20; // r14
  _QWORD *v21; // rax
  _QWORD *v22; // rdx
  __int64 v23; // rax
  __int64 v24; // r8
  __int64 v25; // r10
  __int64 v26; // r9
  __int64 v27; // rcx
  __int64 v29; // r8
  __int64 v30; // r8
  int v31; // [rsp+50h] [rbp-68h]
  char v32[8]; // [rsp+60h] [rbp-58h] BYREF
  __int64 v33; // [rsp+68h] [rbp-50h]
  __int64 v34; // [rsp+70h] [rbp-48h]
  __int64 v35; // [rsp+78h] [rbp-40h]
  _UNKNOWN *retaddr; // [rsp+B8h] [rbp+0h]
  int v37; // [rsp+C8h] [rbp+10h] BYREF

  v34 = 0LL;
  *a1 = 0LL;
  v37 = a2 & 1;
  v3 = RtlImageNtHeader(NtCurrentPeb()->ImageBaseAddress);
  if ( !v3 )
    return (unsigned int)-1073741701;
  if ( *(_WORD *)(v3 + 24) == 523 )
  {
    v4 = *(_QWORD *)(v3 + 96);
    v5 = *(_QWORD *)(v3 + 104);
  }
  else
  {
    v4 = *(unsigned int *)(v3 + 96);
    v5 = *(unsigned int *)(v3 + 100);
  }
  v6 = NtCurrentPeb();
  MinimumStackCommit = v6->MinimumStackCommit;
  if ( MinimumStackCommit && v5 < MinimumStackCommit )
    v5 = v6->MinimumStackCommit;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (TppHeapTag + 786432) | 8u, 464LL);
  v33 = Heap;
  if ( Heap )
  {
    v23 = RtlAllocateHeap(
            NtCurrentPeb()->ProcessHeap,
            (unsigned int)(TppHeapTag + 786432),
            72LL * (unsigned int)TppNumberNodes);
    v34 = v23;
    if ( !v23 )
    {
      updated = -1073741801;
      v31 = -1073741801;
      Heap = v33;
      goto LABEL_36;
    }
    v24 = 0LL;
    v25 = v33;
    v26 = (unsigned int)TppNumberNodes;
    while ( (unsigned int)v24 < 3 )
    {
      *(_QWORD *)(v25 + 8 * v24 + 16) = v34 + 24LL * (unsigned int)(v24 * v26);
      v24 = (unsigned int)(v24 + 1);
    }
    for ( i = 0LL; (unsigned int)i < 3 * (int)v26; i = (unsigned int)(i + 1) )
    {
      v12 = (_QWORD *)(v34 + 24 * i);
      v12[2] = 0LL;
      v12[1] = v12;
      *v12 = v12;
    }
    v13 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (TppHeapTag + 786432) | 8u, 4 * v26);
    Heap = v33;
    *(_QWORD *)(v33 + 40) = v13;
    if ( v13 )
    {
      v14 = RtlAllocateHeap(
              NtCurrentPeb()->ProcessHeap,
              (TppHeapTag + 786432) | 8u,
              16LL * (unsigned int)TppNumberNodes);
      Heap = v33;
      *(_QWORD *)(v33 + 48) = v14;
      if ( v14 )
      {
        v15 = MEMORY[0x7FFE03C0];
        *(_DWORD *)(Heap + 424) = MEMORY[0x7FFE03C0];
        updated = TppPoolUpdateNodeRelation(Heap);
        v31 = updated;
        if ( updated < 0 )
          goto LABEL_36;
        *(_DWORD *)(Heap + 428) = -2;
        v35 = (unsigned __int16)v15;
        *(_QWORD *)(Heap + 8) = (unsigned __int16)v15;
        *(_DWORD *)Heap = 1;
        v17 = v15 + 1;
        if ( v15 < 4 )
          v17 = 4LL;
        v18 = (HANDLE *)(Heap + 64);
        updated = NtCreateIoCompletion(Heap + 64, 2031619LL, 0LL, v17);
        v31 = updated;
        if ( updated < 0 )
          goto LABEL_36;
        v19 = 4 * MEMORY[0x7FFE03C0];
        if ( (unsigned int)(4 * MEMORY[0x7FFE03C0]) < 0x200 )
          v19 = 512;
        v20 = (_QWORD *)(Heap + 56);
        updated = NtCreateWorkerFactory(Heap + 56, 983295LL, 0LL, *v18, -1LL, &TppWorkerThread, Heap, v19, v4, v5);
        v31 = updated;
        if ( updated < 0 )
          goto LABEL_26;
        if ( v37 )
        {
          updated = NtSetInformationWorkerFactory(*v20, 13LL, &v37);
          v31 = updated;
          if ( updated < 0 )
          {
LABEL_26:
            if ( updated < 0 )
            {
              NtClose(*v18);
              v9 = (void *)*v20;
              if ( *v20 )
              {
                NtClose(v9);
                *v20 = 0LL;
              }
            }
            goto LABEL_36;
          }
          *(_WORD *)(Heap + 378) = v37;
        }
        *(_QWORD *)(Heap + 72) = 0LL;
        *(_QWORD *)(Heap + 368) = 0LL;
        *(_QWORD *)(Heap + 440) = 0LL;
        *(_WORD *)(Heap + 376) = 0;
        *(_QWORD *)(Heap + 88) = Heap + 80;
        *(_QWORD *)(Heap + 80) = Heap + 80;
        *(_QWORD *)(Heap + 104) = Heap + 96;
        *(_QWORD *)(Heap + 96) = Heap + 96;
        *(_QWORD *)(Heap + 456) = Heap + 448;
        *(_QWORD *)(Heap + 448) = Heap + 448;
        TppGetCurrentThreadNumaNode(Heap, v32, 0LL);
        *(_QWORD *)(Heap + 400) = retaddr;
        updated = TppInitializeTimerQueue(Heap + 112, Heap);
        v31 = updated;
        if ( updated >= 0 )
        {
          updated = 0;
          v31 = 0;
          RtlAcquireSRWLockExclusive(&TppPoolpListLock);
          v21 = (_QWORD *)(Heap + 384);
          v22 = off_180159698;
          if ( *off_180159698 != (_UNKNOWN *)&TppPoolpList )
            __fastfail(3u);
          *v21 = &TppPoolpList;
          *(_QWORD *)(Heap + 392) = v22;
          *v22 = v21;
          off_180159698 = (_UNKNOWN **)(Heap + 384);
          RtlReleaseSRWLockExclusive(&TppPoolpListLock);
        }
        goto LABEL_26;
      }
    }
  }
  updated = -1073741801;
  v31 = -1073741801;
LABEL_36:
  if ( updated >= 0 )
    goto LABEL_37;
  if ( Heap )
  {
    if ( v34 )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, (unsigned int)(TppHeapTag + 786432), v34);
      Heap = v33;
    }
    v29 = *(_QWORD *)(Heap + 40);
    if ( v29 )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, (unsigned int)(TppHeapTag + 786432), v29);
      Heap = v33;
    }
    v30 = *(_QWORD *)(Heap + 48);
    if ( v30 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, (unsigned int)(TppHeapTag + 786432), v30);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, (unsigned int)(TppHeapTag + 786432), v33);
    Heap = 0LL;
    v33 = 0LL;
    updated = v31;
  }
  if ( updated >= 0 )
  {
LABEL_37:
    *a1 = Heap;
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v9, v8) )
    {
      v27 = (__int64)NtCurrentPeb()->SharedData + 556;
      updated = v31;
      Heap = v33;
    }
    else
    {
      v27 = 2147353478LL;
    }
    if ( *(_BYTE *)v27 )
      TppETWPoolCreate(Heap);
  }
  return (unsigned int)updated;
}
