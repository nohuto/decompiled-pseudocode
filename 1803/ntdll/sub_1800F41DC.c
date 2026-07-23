/*
 * XREFs of sub_1800F41DC @ 0x1800F41DC
 * Callers:
 *     sub_1800F3EDC @ 0x1800F3EDC (sub_1800F3EDC.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x18000C3C0 (RtlCaptureStackBackTrace.c)
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x18009F080 (RtlCompareMemory.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 */

_WORD *sub_1800F41DC()
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
  Heap = RtlAllocateHeap(qword_18015D7E8, 0, 8 * (unsigned int)v0 + 24);
  v3 = v1 & 0xF;
  RtlAcquireSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_18015D7E0 + 8 * v3));
  v4 = qword_18015D730;
  v5 = (_QWORD *)(qword_18015D730 + 16LL * v1);
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
      _InterlockedIncrement(&dword_18015D728);
      RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_18015D7E0 + 8 * v3));
      return Heap;
    }
    else
    {
      RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_18015D7E0 + 8 * v3));
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
    v4 = qword_18015D730;
    goto LABEL_5;
  }
  ++*((_DWORD *)v6 + 5);
  RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_18015D7E0 + 8 * v3));
  if ( Heap )
    RtlFreeHeap(qword_18015D7E8, 0, Heap);
  return v6;
}
