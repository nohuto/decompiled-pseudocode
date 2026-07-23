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

_WORD *RtlpHeapTrkTrackStack()
{
  USHORT v0; // bp
  ULONG v1; // r12d
  _WORD *Heap; // rdi
  __int64 v3; // r14
  __int64 v4; // rbx
  _QWORD *v5; // rcx
  _QWORD *v6; // rsi
  __int64 v8; // rax
  __int64 v9; // rdx
  ULONG BackTraceHash[4]; // [rsp+20h] [rbp-238h] BYREF
  PVOID BackTrace[64]; // [rsp+30h] [rbp-228h] BYREF

  BackTraceHash[0] = 0;
  v0 = RtlCaptureStackBackTrace(3u, 0x40u, BackTrace, BackTraceHash);
  BackTraceHash[0] %= 0x1EEFu;
  v1 = BackTraceHash[0];
  Heap = RtlAllocateHeap(HeapHandle, 0, 8 * (unsigned int)v0 + 24);
  v3 = v1 & 0xF;
  RtlAcquireSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_180160888 + 8 * v3));
  v4 = qword_1801607D8;
  v5 = (_QWORD *)(qword_1801607D8 + 16LL * v1);
  v6 = (_QWORD *)*v5;
  if ( (_QWORD *)*v5 == v5 )
  {
LABEL_6:
    if ( Heap )
    {
      Heap[8] = v0;
      Heap[9] = v1;
      *((_DWORD *)Heap + 5) = 1;
      memmove(Heap + 12, BackTrace, 8LL * v0);
      v8 = v4 + 16LL * v1;
      v9 = *(_QWORD *)v8;
      if ( *(_QWORD *)(*(_QWORD *)v8 + 8LL) != v8 )
        __fastfail(3u);
      *(_QWORD *)Heap = v9;
      *((_QWORD *)Heap + 1) = v8;
      *(_QWORD *)(v9 + 8) = Heap;
      *(_QWORD *)v8 = Heap;
      _InterlockedIncrement(&dword_1801607D0);
      RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_180160888 + 8 * v3));
      return Heap;
    }
    else
    {
      RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_180160888 + 8 * v3));
      return 0LL;
    }
  }
  while ( *((_WORD *)v6 + 8) != v0 )
  {
LABEL_5:
    v6 = (_QWORD *)*v6;
    if ( v6 == (_QWORD *)(v4 + 16LL * v1) )
      goto LABEL_6;
  }
  if ( RtlCompareMemory(BackTrace, v6 + 3, 8LL * v0) != 8LL * v0 )
  {
    v4 = qword_1801607D8;
    goto LABEL_5;
  }
  ++*((_DWORD *)v6 + 5);
  RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_180160888 + 8 * v3));
  if ( Heap )
    RtlFreeHeap(HeapHandle, 0, Heap);
  return v6;
}
