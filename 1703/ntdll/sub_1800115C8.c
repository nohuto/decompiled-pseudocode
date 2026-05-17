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

__int64 __fastcall sub_1800115C8(__int64 *a1, char a2)
{
  __int64 v3; // rax
  __int64 v4; // r12
  uint64_t v5; // rsi
  struct _PEB *v6; // rax
  uint64_t MinimumStackCommit; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 Heap; // rdi
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 i; // r8
  _QWORD *v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rax
  unsigned int v17; // r14d
  int IoCompletion; // ebx
  __int64 v19; // r9
  _QWORD *v20; // r15
  int v21; // eax
  _QWORD *v22; // r14
  _QWORD *v23; // rax
  _QWORD *v24; // rdx
  __int64 v25; // rax
  __int64 v26; // r8
  __int64 v27; // r10
  __int64 v28; // r9
  __int64 v29; // rcx
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
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (dword_18015C000 + 786432) | 8u, 464LL);
  v33 = Heap;
  if ( Heap )
  {
    v25 = RtlAllocateHeap(
            NtCurrentPeb()->ProcessHeap,
            (unsigned int)(dword_18015C000 + 786432),
            72LL * (unsigned int)dword_18015BFF0);
    v34 = v25;
    if ( !v25 )
    {
      IoCompletion = -1073741801;
      v31 = -1073741801;
      Heap = v33;
      goto LABEL_36;
    }
    v26 = 0LL;
    v27 = v33;
    v28 = (unsigned int)dword_18015BFF0;
    while ( (unsigned int)v26 < 3 )
    {
      *(_QWORD *)(v27 + 8 * v26 + 16) = v34 + 24LL * (unsigned int)(v26 * v28);
      v26 = (unsigned int)(v26 + 1);
    }
    for ( i = 0LL; (unsigned int)i < 3 * (int)v28; i = (unsigned int)(i + 1) )
    {
      v14 = (_QWORD *)(v34 + 24 * i);
      v14[2] = 0LL;
      v14[1] = v14;
      *v14 = v14;
    }
    v15 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (dword_18015C000 + 786432) | 8u, 4 * v28);
    Heap = v33;
    *(_QWORD *)(v33 + 40) = v15;
    if ( v15 )
    {
      v16 = RtlAllocateHeap(
              NtCurrentPeb()->ProcessHeap,
              (dword_18015C000 + 786432) | 8u,
              16LL * (unsigned int)dword_18015BFF0);
      Heap = v33;
      *(_QWORD *)(v33 + 48) = v16;
      if ( v16 )
      {
        v17 = MEMORY[0x7FFE03C0];
        *(_DWORD *)(Heap + 424) = MEMORY[0x7FFE03C0];
        IoCompletion = sub_1800114C0(Heap);
        v31 = IoCompletion;
        if ( IoCompletion < 0 )
          goto LABEL_36;
        *(_DWORD *)(Heap + 428) = -2;
        v35 = (unsigned __int16)v17;
        *(_QWORD *)(Heap + 8) = (unsigned __int16)v17;
        *(_DWORD *)Heap = 1;
        v19 = v17 + 1;
        if ( v17 < 4 )
          v19 = 4LL;
        v20 = (_QWORD *)(Heap + 64);
        IoCompletion = ZwCreateIoCompletion(Heap + 64, 2031619LL, 0LL, v19);
        v31 = IoCompletion;
        if ( IoCompletion < 0 )
          goto LABEL_36;
        v21 = 4 * MEMORY[0x7FFE03C0];
        if ( (unsigned int)(4 * MEMORY[0x7FFE03C0]) < 0x200 )
          v21 = 512;
        v22 = (_QWORD *)(Heap + 56);
        IoCompletion = ZwCreateWorkerFactory(Heap + 56, 983295LL, 0LL, *v20, -1LL, &sub_180014980, Heap, v21, v4, v5);
        v31 = IoCompletion;
        if ( IoCompletion < 0 )
          goto LABEL_26;
        if ( v37 )
        {
          IoCompletion = ZwSetInformationWorkerFactory(*v22, 13LL, &v37);
          v31 = IoCompletion;
          if ( IoCompletion < 0 )
          {
LABEL_26:
            if ( IoCompletion < 0 )
            {
              ZwClose(*v20);
              v9 = *v22;
              if ( *v22 )
              {
                ZwClose(v9);
                *v22 = 0LL;
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
        sub_180017A78(Heap, v32, 0LL);
        *(_QWORD *)(Heap + 400) = retaddr;
        IoCompletion = sub_180013438(Heap + 112, Heap);
        v31 = IoCompletion;
        if ( IoCompletion >= 0 )
        {
          IoCompletion = 0;
          v31 = 0;
          RtlAcquireSRWLockExclusive(&unk_18015C360);
          v23 = (_QWORD *)(Heap + 384);
          v24 = off_180155658;
          if ( *(_UNKNOWN ***)off_180155658 != &off_180155650 )
            __fastfail(3u);
          *v23 = &off_180155650;
          *(_QWORD *)(Heap + 392) = v24;
          *v24 = v23;
          off_180155658 = (_UNKNOWN *)(Heap + 384);
          RtlReleaseSRWLockExclusive(&unk_18015C360);
        }
        goto LABEL_26;
      }
    }
  }
  IoCompletion = -1073741801;
  v31 = -1073741801;
LABEL_36:
  if ( IoCompletion >= 0 )
    goto LABEL_37;
  if ( Heap )
  {
    if ( v34 )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, (unsigned int)(dword_18015C000 + 786432));
      Heap = v33;
    }
    if ( *(_QWORD *)(Heap + 40) )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, (unsigned int)(dword_18015C000 + 786432));
      Heap = v33;
    }
    if ( *(_QWORD *)(Heap + 48) )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, (unsigned int)(dword_18015C000 + 786432));
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, (unsigned int)(dword_18015C000 + 786432));
    Heap = 0LL;
    v33 = 0LL;
    IoCompletion = v31;
  }
  if ( IoCompletion >= 0 )
  {
LABEL_37:
    *a1 = Heap;
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v9, v8, v11, v12) )
    {
      v29 = (__int64)NtCurrentPeb()->HotpatchInformation + 556;
      IoCompletion = v31;
      Heap = v33;
    }
    else
    {
      v29 = 2147353478LL;
    }
    if ( *(_BYTE *)v29 )
      sub_180004A78(Heap);
  }
  return (unsigned int)IoCompletion;
}
