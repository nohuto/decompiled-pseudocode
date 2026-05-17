/*
 * XREFs of RtlpHeapTrkDereferenceStack @ 0x1800F7058
 * Callers:
 *     RtlpHeapTrkTrackRemove @ 0x1800F7B40 (RtlpHeapTrkTrackRemove.c)
 *     RtlpHeapTrkTrackRemoveHeap @ 0x1800F7C24 (RtlpHeapTrkTrackRemoveHeap.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 */

signed __int64 __fastcall RtlpHeapTrkDereferenceStack(
        unsigned __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 *a3,
        __int64 a4)
{
  __int64 v5; // rdi
  char v6; // si
  __int64 v8; // rax
  _QWORD *v9; // rcx
  signed __int64 result; // rax

  v5 = *(_WORD *)(a1 + 18) & 0xF;
  v6 = 0;
  RtlAcquireSRWLockExclusive(*(_QWORD *)(qword_180160888 + 8 * v5), a2, a3, a4);
  if ( (*(_DWORD *)(a1 + 20))-- == 1 )
  {
    v8 = *(_QWORD *)a1;
    if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) != a1 || (v9 = *(_QWORD **)(a1 + 8), *v9 != a1) )
      __fastfail(3u);
    *v9 = v8;
    v6 = 1;
    *(_QWORD *)(v8 + 8) = v9;
    _InterlockedDecrement(&dword_1801607D0);
  }
  result = RtlReleaseSRWLockExclusive(*(volatile signed __int64 **)(qword_180160888 + 8 * v5));
  if ( v6 )
    return RtlFreeHeap(qword_180160890, 0, a1);
  return result;
}
