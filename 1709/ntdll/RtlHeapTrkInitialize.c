/*
 * XREFs of RtlHeapTrkInitialize @ 0x1800F6B90
 * Callers:
 *     <none>
 * Callees:
 *     RtlCreateHeap @ 0x180007E70 (RtlCreateHeap.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     RtlDestroyHeap @ 0x1800610F0 (RtlDestroyHeap.c)
 *     RtlSetHeapInformation @ 0x18007D960 (RtlSetHeapInformation.c)
 *     NtClose @ 0x1800A02A0 (NtClose.c)
 *     ZwMapViewOfSection @ 0x1800A05C0 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1800A0600 (NtUnmapViewOfSection.c)
 *     NtQueryPerformanceCounter @ 0x1800A06E0 (NtQueryPerformanceCounter.c)
 *     memset @ 0x1800A6C80 (memset.c)
 *     RtlSetHeapDebuggingInformation @ 0x1800EF510 (RtlSetHeapDebuggingInformation.c)
 *     RtlpHeapTrkAllocCacheAligned @ 0x1800F6F30 (RtlpHeapTrkAllocCacheAligned.c)
 *     RtlpHeapTrkGenerateHashRandoms @ 0x1800F741C (RtlpHeapTrkGenerateHashRandoms.c)
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
  result = NtQueryPerformanceCounter(&PerformanceCounter, &PerformanceFrequency);
  if ( result >= 0 )
  {
    if ( !PerformanceFrequency.QuadPart )
      return -1073741823;
    dword_1801607E0 = *((_DWORD *)BaseAddress + 14);
    RtlpHeapTrkGenerateHashRandoms();
    Heap = RtlCreateHeap(
             *((_DWORD *)BaseAddress + 13) == 0 ? 2 : 0,
             0LL,
             (unsigned int)(*((_DWORD *)BaseAddress + 13) << 20),
             0LL,
             0LL,
             0LL);
    HeapHandle = Heap;
    if ( !Heap )
      return -1073741823;
    HeapInformation = 2;
    RtlSetHeapInformation(Heap, HeapCompatibilityInformation, &HeapInformation, 4uLL);
    dword_180160880 = NtCurrentPeb()->NumberOfProcessors;
    if ( !(unsigned __int8)RtlpHeapTrkAllocCacheAligned(
                             &qword_1801604E8,
                             &qword_1801608A0,
                             32LL,
                             (unsigned int)dword_180160880) )
      goto LABEL_27;
    if ( !(unsigned __int8)RtlpHeapTrkAllocCacheAligned(&qword_180160870, &qword_180160868, 8LL, 16LL) )
      goto LABEL_27;
    if ( !(unsigned __int8)RtlpHeapTrkAllocCacheAligned(&qword_180160888, &qword_180160860, 8LL, 16LL) )
      goto LABEL_27;
    qword_1801607C8 = (__int64)RtlAllocateHeap(HeapHandle, 0, 0x1EEF0uLL);
    if ( !qword_1801607C8 )
      goto LABEL_27;
    v4 = (char *)RtlAllocateHeap(HeapHandle, 0, 0x1EEF0uLL);
    qword_1801607D8 = (__int64)v4;
    if ( !v4 )
      goto LABEL_27;
    v5 = (_QWORD *)qword_1801607C8;
    v6 = 7919LL;
    SectionHandle = a1;
    v7 = qword_1801607C8 - (_QWORD)v4;
    dword_1801607D0 = 0;
    v8 = &v4[-qword_1801607C8];
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
    v12[0] = RtlpHeapTrkInterceptor;
    v12[5] = RtlpHeapTrkLeakCallback;
    if ( (int)RtlSetHeapDebuggingInformation(0LL, (__int64)v12) < 0 )
    {
LABEL_27:
      RtlDestroyHeap(HeapHandle);
      HeapHandle = 0LL;
      qword_1801608A0 = 0LL;
      qword_1801607C8 = 0LL;
      qword_180160870 = 0LL;
      qword_180160868 = 0LL;
      qword_1801607D8 = 0LL;
      qword_180160888 = 0LL;
      qword_180160860 = 0LL;
      if ( BaseAddress )
        NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
      if ( SectionHandle )
      {
        NtClose(SectionHandle);
        SectionHandle = 0LL;
      }
      return -1073741823;
    }
    NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
    return 0;
  }
  return result;
}
