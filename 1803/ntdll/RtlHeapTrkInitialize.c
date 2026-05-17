/*
 * XREFs of RtlHeapTrkInitialize @ 0x1800F3000
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     RtlCreateHeap @ 0x18005AA80 (RtlCreateHeap.c)
 *     RtlDestroyHeap @ 0x18005D440 (RtlDestroyHeap.c)
 *     RtlSetHeapInformation @ 0x18007B300 (RtlSetHeapInformation.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwMapViewOfSection @ 0x18009AFC0 (ZwMapViewOfSection.c)
 *     ZwUnmapViewOfSection @ 0x18009B000 (ZwUnmapViewOfSection.c)
 *     ZwQueryPerformanceCounter @ 0x18009B0E0 (ZwQueryPerformanceCounter.c)
 *     memset @ 0x1800A16C0 (memset.c)
 *     sub_1800EB750 @ 0x1800EB750 (sub_1800EB750.c)
 *     sub_1800F33A0 @ 0x1800F33A0 (sub_1800F33A0.c)
 *     sub_1800F388C @ 0x1800F388C (sub_1800F388C.c)
 */

__int64 __fastcall RtlHeapTrkInitialize(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 Heap; // rax
  __int64 v7; // rax
  _QWORD *v8; // rdx
  __int64 v9; // r10
  __int64 v10; // r9
  __int64 v11; // r8
  char *v12; // rcx
  _QWORD *v13; // rax
  _QWORD v14[11]; // [rsp+58h] [rbp-1h] BYREF
  int v15; // [rsp+C0h] [rbp+67h] BYREF
  __int64 v16; // [rsp+C8h] [rbp+6Fh]
  __int64 v17; // [rsp+D0h] [rbp+77h]
  __int64 v18; // [rsp+D8h] [rbp+7Fh] BYREF

  v17 = 0x10000LL;
  v16 = 0LL;
  v18 = 0LL;
  if ( qword_18015D7D0 )
    return 3221225473LL;
  if ( !a1 || (int)ZwMapViewOfSection() < 0 )
    return 3221225485LL;
  if ( *(_QWORD *)v16 < 0x400uLL )
    return 3221225507LL;
  if ( *(_DWORD *)(v16 + 52) > 0x40u
    || *(_DWORD *)(v16 + 56) > 2u
    || !*(_QWORD *)(v16 + 8)
    || *(_QWORD *)(v16 + 8) == -1LL
    || !*(_QWORD *)(v16 + 16)
    || *(_QWORD *)(v16 + 16) == -1LL
    || !*(_QWORD *)(v16 + 24)
    || *(_QWORD *)(v16 + 24) == -1LL )
  {
    return 3221225485LL;
  }
  result = ZwQueryPerformanceCounter();
  if ( (int)result >= 0 )
  {
    if ( !qword_18015D438 )
      return 3221225473LL;
    dword_18015D738 = *(_DWORD *)(v16 + 56);
    sub_1800F388C((unsigned int)dword_18015D738, v3, v4, v5, 0LL, &v18);
    Heap = RtlCreateHeap(
             *(_DWORD *)(v16 + 52) == 0 ? 2 : 0,
             0LL,
             (unsigned __int64 *)(unsigned int)(*(_DWORD *)(v16 + 52) << 20),
             0LL,
             0LL,
             0LL);
    qword_18015D7E8 = Heap;
    if ( !Heap )
      return 3221225473LL;
    v15 = 2;
    RtlSetHeapInformation(Heap, 0, (__int64)&v15, 4uLL);
    dword_18015D7D8 = NtCurrentPeb()->NumberOfProcessors;
    if ( !(unsigned __int8)sub_1800F33A0(&qword_18015D440, &qword_18015D7F8, 32LL) )
      goto LABEL_27;
    if ( !(unsigned __int8)sub_1800F33A0(&qword_18015D7C8, &qword_18015D7C0, 8LL) )
      goto LABEL_27;
    if ( !(unsigned __int8)sub_1800F33A0(&qword_18015D7E0, &qword_18015D7B8, 8LL) )
      goto LABEL_27;
    qword_18015D720 = RtlAllocateHeap(qword_18015D7E8, 0, 126704LL);
    if ( !qword_18015D720 )
      goto LABEL_27;
    v7 = RtlAllocateHeap(qword_18015D7E8, 0, 126704LL);
    qword_18015D730 = v7;
    if ( !v7 )
      goto LABEL_27;
    v8 = (_QWORD *)qword_18015D720;
    v9 = 7919LL;
    qword_18015D7D0 = a1;
    v10 = qword_18015D720 - v7;
    dword_18015D728 = 0;
    v11 = v7 - qword_18015D720;
    do
    {
      v12 = (char *)v8 + v11;
      *v8 = v8;
      *(_QWORD *)&v12[v10 + 8] = v8;
      v13 = (_QWORD *)((char *)v8 + v11);
      v8 += 2;
      *((_QWORD *)v12 + 1) = v13;
      *v13 = v13;
      --v9;
    }
    while ( v9 );
    memset(v14, 0, 0x30uLL);
    LOWORD(v14[1]) = 0;
    v14[0] = sub_1800F39A0;
    v14[5] = sub_1800F3B70;
    if ( (int)sub_1800EB750(0LL, (__int64)v14) < 0 )
    {
LABEL_27:
      RtlDestroyHeap(qword_18015D7E8);
      qword_18015D7E8 = 0LL;
      qword_18015D7F8 = 0LL;
      qword_18015D720 = 0LL;
      qword_18015D7C8 = 0LL;
      qword_18015D7C0 = 0LL;
      qword_18015D730 = 0LL;
      qword_18015D7E0 = 0LL;
      qword_18015D7B8 = 0LL;
      if ( v16 )
        ZwUnmapViewOfSection();
      if ( qword_18015D7D0 )
      {
        ZwClose();
        qword_18015D7D0 = 0LL;
      }
      return 3221225473LL;
    }
    ZwUnmapViewOfSection();
    return 0LL;
  }
  return result;
}
