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
  if ( qword_18015C7A0 )
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
    if ( !qword_18015C410 )
      return 3221225473LL;
    dword_18015C720 = *(_DWORD *)(v16 + 56);
    sub_1800F6540((unsigned int)dword_18015C720, v3, v4, v5, 0LL, &v18);
    Heap = RtlCreateHeap(
             *(_DWORD *)(v16 + 52) == 0 ? 2 : 0,
             0LL,
             (unsigned int)(*(_DWORD *)(v16 + 52) << 20),
             0LL,
             0LL,
             0LL);
    qword_18015C450 = Heap;
    if ( !Heap )
      return 3221225473LL;
    v15 = 2;
    RtlSetHeapInformation(Heap, 0, (__int64)&v15, 4uLL);
    dword_18015C470 = NtCurrentPeb()->NumberOfProcessors;
    if ( !(unsigned __int8)sub_1800F60C0(&qword_18015C458, &qword_18015C7B0, 32LL, (unsigned int)dword_18015C470) )
      goto LABEL_27;
    if ( !(unsigned __int8)sub_1800F60C0(&qword_18015C3E8, &qword_18015C798, 8LL, 16LL) )
      goto LABEL_27;
    if ( !(unsigned __int8)sub_1800F60C0(&qword_18015C3F0, &qword_18015C790, 8LL, 16LL) )
      goto LABEL_27;
    qword_18015C438 = RtlAllocateHeap(qword_18015C450, 0, 126704LL);
    if ( !qword_18015C438 )
      goto LABEL_27;
    v7 = RtlAllocateHeap(qword_18015C450, 0, 126704LL);
    qword_18015C440 = v7;
    if ( !v7 )
      goto LABEL_27;
    v8 = (_QWORD *)qword_18015C438;
    v9 = 7919LL;
    qword_18015C7A0 = a1;
    v10 = qword_18015C438 - v7;
    dword_18015C0D0 = 0;
    v11 = v7 - qword_18015C438;
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
    v14[0] = sub_180095910;
    v14[5] = sub_1800F65B0;
    if ( (int)sub_1800EF700(0LL, (__int64)v14) < 0 )
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
      if ( v16 )
        ZwUnmapViewOfSection();
      if ( qword_18015C7A0 )
      {
        ZwClose();
        qword_18015C7A0 = 0LL;
      }
      return 3221225473LL;
    }
    ZwUnmapViewOfSection();
    return 0LL;
  }
  return result;
}
