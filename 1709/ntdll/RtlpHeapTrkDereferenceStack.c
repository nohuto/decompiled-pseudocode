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

void __fastcall RtlpHeapTrkDereferenceStack(PVOID **BaseAddress)
{
  __int64 v2; // rdi
  char v3; // si
  PVOID *v5; // rax
  PVOID *v6; // rcx

  v2 = *((_WORD *)BaseAddress + 9) & 0xF;
  v3 = 0;
  RtlAcquireSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_180160888 + 8 * v2));
  if ( (*((_DWORD *)BaseAddress + 5))-- == 1 )
  {
    v5 = *BaseAddress;
    if ( (*BaseAddress)[1] != BaseAddress || (v6 = BaseAddress[1], *v6 != BaseAddress) )
      __fastfail(3u);
    *v6 = v5;
    v3 = 1;
    v5[1] = v6;
    _InterlockedDecrement(&dword_1801607D0);
  }
  RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_180160888 + 8 * v2));
  if ( v3 )
    RtlFreeHeap(HeapHandle, 0, BaseAddress);
}
