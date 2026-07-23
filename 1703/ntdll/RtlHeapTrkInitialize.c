/*
 * XREFs of RtlHeapTrkInitialize @ 0x1800F5D20
 * Callers:
 *     <none>
 * Callees:
 *     RtlDestroyHeap @ 0x18000ABF0 (RtlDestroyHeap.c)
 *     RtlCreateHeap @ 0x18000CA40 (RtlCreateHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     RtlSetHeapInformation @ 0x18007EF50 (RtlSetHeapInformation.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwMapViewOfSection @ 0x1800A5800 (ZwMapViewOfSection.c)
 *     ZwUnmapViewOfSection @ 0x1800A5840 (ZwUnmapViewOfSection.c)
 *     ZwQueryPerformanceCounter @ 0x1800A5920 (ZwQueryPerformanceCounter.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 *     sub_1800EF700 @ 0x1800EF700 (sub_1800EF700.c)
 *     sub_1800F60C0 @ 0x1800F60C0 (sub_1800F60C0.c)
 *     sub_1800F6540 @ 0x1800F6540 (sub_1800F6540.c)
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
    dword_18015C720 = *((_DWORD *)BaseAddress + 14);
    sub_1800F6540();
    Heap = RtlCreateHeap(
             *((_DWORD *)BaseAddress + 13) == 0 ? 2 : 0,
             0LL,
             (unsigned int)(*((_DWORD *)BaseAddress + 13) << 20),
             0LL,
             0LL,
             0LL);
    qword_18015C450 = Heap;
    if ( !Heap )
      return -1073741823;
    HeapInformation = 2;
    RtlSetHeapInformation(Heap, HeapCompatibilityInformation, &HeapInformation, 4uLL);
    dword_18015C470 = NtCurrentPeb()->NumberOfProcessors;
    if ( !(unsigned __int8)sub_1800F60C0(&qword_18015C458, &qword_18015C7B0, 32LL, (unsigned int)dword_18015C470) )
      goto LABEL_27;
    if ( !(unsigned __int8)sub_1800F60C0(&qword_18015C3E8, &qword_18015C798, 8LL, 16LL) )
      goto LABEL_27;
    if ( !(unsigned __int8)sub_1800F60C0(&qword_18015C3F0, &qword_18015C790, 8LL, 16LL) )
      goto LABEL_27;
    qword_18015C438 = (__int64)RtlAllocateHeap(qword_18015C450, 0, 0x1EEF0uLL);
    if ( !qword_18015C438 )
      goto LABEL_27;
    v4 = (char *)RtlAllocateHeap(qword_18015C450, 0, 0x1EEF0uLL);
    qword_18015C440 = (__int64)v4;
    if ( !v4 )
      goto LABEL_27;
    v5 = (_QWORD *)qword_18015C438;
    v6 = 7919LL;
    SectionHandle = a1;
    v7 = qword_18015C438 - (_QWORD)v4;
    dword_18015C0D0 = 0;
    v8 = &v4[-qword_18015C438];
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
    v12[0] = sub_180095910;
    v12[5] = sub_1800F65B0;
    if ( (int)sub_1800EF700(0LL, (__int64)v12) < 0 )
    {
LABEL_27:
      RtlDestroyHeap(qword_18015C450);
      qword_18015C450 = 0LL;
      qword_18015C7B0 = 0LL;
      qword_18015C438 = 0LL;
      qword_18015C3E8 = 0LL;
      qword_18015C798 = 0LL;
      qword_18015C440 = 0LL;
      qword_18015C3F0 = 0LL;
      qword_18015C790 = 0LL;
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
