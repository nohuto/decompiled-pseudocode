/*
 * XREFs of RtlpHeapTrkTrackStack @ 0x1800F7D6C
 * Callers:
 *     RtlpHeapTrkTrackAdd @ 0x1800F7A6C (RtlpHeapTrkTrackAdd.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x180024AA0 (RtlCaptureStackBackTrace.c)
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x1800A4640 (RtlCompareMemory.c)
 *     memmove @ 0x1800A6940 (memmove.c)
 */

unsigned __int64 RtlpHeapTrkTrackStack()
{
  USHORT v0; // bp
  ULONG v1; // r12d
  unsigned __int64 Heap; // rdi
  __int64 v3; // r14
  unsigned __int64 v4; // rdx
  unsigned __int64 *v5; // r8
  __int64 v6; // r9
  __int64 v7; // rbx
  _QWORD *v8; // rcx
  _QWORD *v9; // rsi
  __int64 v11; // rax
  __int64 v12; // rdx
  ULONG BackTraceHash[4]; // [rsp+20h] [rbp-238h] BYREF
  PVOID BackTrace[64]; // [rsp+30h] [rbp-228h] BYREF

  BackTraceHash[0] = 0;
  v0 = RtlCaptureStackBackTrace(3u, 0x40u, BackTrace, BackTraceHash);
  BackTraceHash[0] %= 0x1EEFu;
  v1 = BackTraceHash[0];
  Heap = RtlAllocateHeap(qword_180160890, 0, 8 * (unsigned int)v0 + 24);
  v3 = v1 & 0xF;
  RtlAcquireSRWLockExclusive(*(_QWORD *)(qword_180160888 + 8 * v3), v4, v5, v6);
  v7 = qword_1801607D8;
  v8 = (_QWORD *)(qword_1801607D8 + 16LL * v1);
  v9 = (_QWORD *)*v8;
  if ( (_QWORD *)*v8 == v8 )
  {
LABEL_6:
    if ( Heap )
    {
      *(_WORD *)(Heap + 16) = v0;
      *(_WORD *)(Heap + 18) = v1;
      *(_DWORD *)(Heap + 20) = 1;
      memmove((void *)(Heap + 24), BackTrace, 8LL * v0);
      v11 = v7 + 16LL * v1;
      v12 = *(_QWORD *)v11;
      if ( *(_QWORD *)(*(_QWORD *)v11 + 8LL) != v11 )
        __fastfail(3u);
      *(_QWORD *)Heap = v12;
      *(_QWORD *)(Heap + 8) = v11;
      *(_QWORD *)(v12 + 8) = Heap;
      *(_QWORD *)v11 = Heap;
      _InterlockedIncrement(&dword_1801607D0);
      RtlReleaseSRWLockExclusive(*(volatile signed __int64 **)(qword_180160888 + 8 * v3));
      return Heap;
    }
    else
    {
      RtlReleaseSRWLockExclusive(*(volatile signed __int64 **)(qword_180160888 + 8 * v3));
      return 0LL;
    }
  }
  while ( *((_WORD *)v9 + 8) != v0 )
  {
LABEL_5:
    v9 = (_QWORD *)*v9;
    if ( v9 == (_QWORD *)(v7 + 16LL * v1) )
      goto LABEL_6;
  }
  if ( RtlCompareMemory(BackTrace, v9 + 3, 8LL * v0) != 8LL * v0 )
  {
    v7 = qword_1801607D8;
    goto LABEL_5;
  }
  ++*((_DWORD *)v9 + 5);
  RtlReleaseSRWLockExclusive(*(volatile signed __int64 **)(qword_180160888 + 8 * v3));
  if ( Heap )
    RtlFreeHeap(qword_180160890, 0, Heap);
  return (unsigned __int64)v9;
}
