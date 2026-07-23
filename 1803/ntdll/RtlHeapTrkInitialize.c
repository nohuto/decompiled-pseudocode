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

NTSTATUS __fastcall RtlHeapTrkInitialize(void *a1)
{
  NTSTATUS result; // eax
  PVOID Heap; // rax
  char *v4; // rax
  _QWORD *v5; // rdx
  __int64 v6; // r10
  __int64 v7; // r9
  char *v8; // r8
  char *v9; // rcx
  _QWORD *v10; // rax
  LARGE_INTEGER PerformanceCounter; // [rsp+50h] [rbp-9h] BYREF
  _QWORD v12[11]; // [rsp+58h] [rbp-1h] BYREF
  int HeapInformation; // [rsp+C0h] [rbp+67h] BYREF
  PVOID BaseAddress; // [rsp+C8h] [rbp+6Fh] BYREF
  ULONG_PTR ViewSize; // [rsp+D0h] [rbp+77h] BYREF
  LARGE_INTEGER SectionOffset; // [rsp+D8h] [rbp+7Fh] BYREF

  ViewSize = 0x10000LL;
  BaseAddress = 0LL;
  SectionOffset.QuadPart = 0LL;
  if ( SectionHandle )
    return -1073741823;
  if ( !a1
    || ZwMapViewOfSection(
         a1,
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         &BaseAddress,
         0LL,
         0LL,
         &SectionOffset,
         &ViewSize,
         ViewShare,
         0,
         4u) < 0 )
  {
    return -1073741811;
  }
  if ( *(_QWORD *)BaseAddress < 0x400uLL )
    return -1073741789;
  if ( *((_DWORD *)BaseAddress + 13) > 0x40u
    || *((_DWORD *)BaseAddress + 14) > 2u
    || !*((_QWORD *)BaseAddress + 1)
    || *((_QWORD *)BaseAddress + 1) == -1LL
    || !*((_QWORD *)BaseAddress + 2)
    || *((_QWORD *)BaseAddress + 2) == -1LL
    || !*((_QWORD *)BaseAddress + 3)
    || *((_QWORD *)BaseAddress + 3) == -1LL )
  {
    return -1073741811;
  }
  result = ZwQueryPerformanceCounter(&PerformanceCounter, &PerformanceFrequency);
  if ( result >= 0 )
  {
    if ( !PerformanceFrequency.QuadPart )
      return -1073741823;
    dword_18015D738 = *((_DWORD *)BaseAddress + 14);
    sub_1800F388C();
    Heap = RtlCreateHeap(
             *((_DWORD *)BaseAddress + 13) == 0 ? 2 : 0,
             0LL,
             (unsigned int)(*((_DWORD *)BaseAddress + 13) << 20),
             0LL,
             0LL,
             0LL);
    qword_18015D7E8 = Heap;
    if ( !Heap )
      return -1073741823;
    HeapInformation = 2;
    RtlSetHeapInformation(Heap, HeapCompatibilityInformation, &HeapInformation, 4uLL);
    dword_18015D7D8 = NtCurrentPeb()->NumberOfProcessors;
    if ( !(unsigned __int8)sub_1800F33A0(&qword_18015D440, &qword_18015D7F8, 32LL) )
      goto LABEL_27;
    if ( !(unsigned __int8)sub_1800F33A0(&qword_18015D7C8, &qword_18015D7C0, 8LL) )
      goto LABEL_27;
    if ( !(unsigned __int8)sub_1800F33A0(&qword_18015D7E0, &qword_18015D7B8, 8LL) )
      goto LABEL_27;
    qword_18015D720 = (__int64)RtlAllocateHeap(qword_18015D7E8, 0, 0x1EEF0uLL);
    if ( !qword_18015D720 )
      goto LABEL_27;
    v4 = (char *)RtlAllocateHeap(qword_18015D7E8, 0, 0x1EEF0uLL);
    qword_18015D730 = (__int64)v4;
    if ( !v4 )
      goto LABEL_27;
    v5 = (_QWORD *)qword_18015D720;
    v6 = 7919LL;
    SectionHandle = a1;
    v7 = qword_18015D720 - (_QWORD)v4;
    dword_18015D728 = 0;
    v8 = &v4[-qword_18015D720];
    do
    {
      v9 = (char *)v5 + (_QWORD)v8;
      *v5 = v5;
      *(_QWORD *)&v9[v7 + 8] = v5;
      v10 = (_QWORD *)((char *)v5 + (_QWORD)v8);
      v5 += 2;
      *((_QWORD *)v9 + 1) = v10;
      *v10 = v10;
      --v6;
    }
    while ( v6 );
    memset(v12, 0, 0x30uLL);
    LOWORD(v12[1]) = 0;
    v12[0] = sub_1800F39A0;
    v12[5] = sub_1800F3B70;
    if ( (int)sub_1800EB750(0LL, (__int64)v12) < 0 )
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
      if ( BaseAddress )
        ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
      if ( SectionHandle )
      {
        ZwClose(SectionHandle);
        SectionHandle = 0LL;
      }
      return -1073741823;
    }
    ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
    return 0;
  }
  return result;
}
