/*
 * XREFs of RtlRegisterSecureMemoryCacheCallback @ 0x1800F3160
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     ZwQuerySystemInformation @ 0x1800A59C0 (ZwQuerySystemInformation.c)
 */

NTSTATUS __cdecl RtlRegisterSecureMemoryCacheCallback(PRTL_SECURE_MEMORY_CACHE_CALLBACK Callback)
{
  NTSTATUS result; // eax
  _DWORD *Heap; // rax
  _DWORD *v4; // rbx
  _QWORD *v5; // rax

  result = ZwQuerySystemInformation(SystemRangeStartInformation, &unk_180159A60, 8u, 0LL);
  if ( result >= 0 )
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x20uLL);
    v4 = Heap;
    if ( Heap )
    {
      Heap[4] = 1;
      *((_QWORD *)Heap + 3) = Callback;
      RtlAcquireSRWLockExclusive(&stru_18015C730);
      v5 = off_1801559E8;
      if ( *off_1801559E8 != (_UNKNOWN *)&off_1801559E0 )
        __fastfail(3u);
      *(_QWORD *)v4 = &off_1801559E0;
      *((_QWORD *)v4 + 1) = v5;
      *v5 = v4;
      off_1801559E8 = (_UNKNOWN **)v4;
      RtlReleaseSRWLockExclusive(&stru_18015C730);
      return 0;
    }
    else
    {
      return -1073741801;
    }
  }
  return result;
}
