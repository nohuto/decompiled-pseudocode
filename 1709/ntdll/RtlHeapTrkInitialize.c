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

__int64 __fastcall RtlHeapTrkInitialize(void *a1)
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
  if ( Handle )
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
  result = NtQueryPerformanceCounter();
  if ( (int)result >= 0 )
  {
    if ( !qword_1801604E0 )
      return 3221225473LL;
    dword_1801607E0 = *(_DWORD *)(v16 + 56);
    RtlpHeapTrkGenerateHashRandoms((unsigned int)dword_1801607E0, v3, v4, v5, 0LL, &v18);
    Heap = RtlCreateHeap(
             *(_DWORD *)(v16 + 52) == 0 ? 2 : 0,
             0LL,
             (unsigned int)(*(_DWORD *)(v16 + 52) << 20),
             0LL,
             0LL,
             0LL);
    qword_180160890 = Heap;
    if ( !Heap )
      return 3221225473LL;
    v15 = 2;
    RtlSetHeapInformation(Heap, 0, (__int64)&v15, 4uLL);
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
    qword_1801607C8 = RtlAllocateHeap(qword_180160890, 0, 126704LL);
    if ( !qword_1801607C8 )
      goto LABEL_27;
    v7 = RtlAllocateHeap(qword_180160890, 0, 126704LL);
    qword_1801607D8 = v7;
    if ( !v7 )
      goto LABEL_27;
    v8 = (_QWORD *)qword_1801607C8;
    v9 = 7919LL;
    Handle = a1;
    v10 = qword_1801607C8 - v7;
    dword_1801607D0 = 0;
    v11 = v7 - qword_1801607C8;
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
    v14[0] = RtlpHeapTrkInterceptor;
    v14[5] = RtlpHeapTrkLeakCallback;
    if ( (int)RtlSetHeapDebuggingInformation(0LL, (__int64)v14) < 0 )
    {
LABEL_27:
      RtlDestroyHeap(qword_180160890);
      qword_180160890 = 0LL;
      qword_1801608A0 = 0LL;
      qword_1801607C8 = 0LL;
      qword_180160870 = 0LL;
      qword_180160868 = 0LL;
      qword_1801607D8 = 0LL;
      qword_180160888 = 0LL;
      qword_180160860 = 0LL;
      if ( v16 )
        NtUnmapViewOfSection();
      if ( Handle )
      {
        NtClose(Handle);
        Handle = 0LL;
      }
      return 3221225473LL;
    }
    NtUnmapViewOfSection();
    return 0LL;
  }
  return result;
}
