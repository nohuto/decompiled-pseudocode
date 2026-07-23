/*
 * XREFs of RtlRegisterSecureMemoryCacheCallback @ 0x1800F0240
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     ZwQuerySystemInformation @ 0x18009B180 (ZwQuerySystemInformation.c)
 */

NTSTATUS __cdecl RtlRegisterSecureMemoryCacheCallback(PRTL_SECURE_MEMORY_CACHE_CALLBACK Callback)
{
  NTSTATUS result; // eax
  _DWORD *Heap; // rax
  _DWORD *v4; // rbx
  _QWORD *v5; // rax

  result = ZwQuerySystemInformation(SystemRangeStartInformation, &unk_18015AAA0, 8u, 0LL);
  if ( result >= 0 )
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x20uLL);
    v4 = Heap;
    if ( Heap )
    {
      Heap[4] = 1;
      *((_QWORD *)Heap + 3) = Callback;
      RtlAcquireSRWLockExclusive(&stru_18015D760);
      v5 = off_180156A48;
      if ( *off_180156A48 != (_UNKNOWN *)&off_180156A40 )
        __fastfail(3u);
      *(_QWORD *)v4 = &off_180156A40;
      *((_QWORD *)v4 + 1) = v5;
      *v5 = v4;
      off_180156A48 = (_UNKNOWN **)v4;
      RtlReleaseSRWLockExclusive(&stru_18015D760);
      return 0;
    }
    else
    {
      return -1073741801;
    }
  }
  return result;
}
