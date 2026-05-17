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

__int64 __fastcall RtlRegisterSecureMemoryCacheCallback(__int64 a1)
{
  __int64 result; // rax
  __int64 Heap; // rax
  __int64 v4; // rbx
  __int64 *v5; // rax

  result = ZwQuerySystemInformation();
  if ( (int)result >= 0 )
  {
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 32LL);
    v4 = Heap;
    if ( Heap )
    {
      *(_DWORD *)(Heap + 16) = 1;
      *(_QWORD *)(Heap + 24) = a1;
      RtlAcquireSRWLockExclusive(&qword_18015C730);
      v5 = (__int64 *)off_1801559E8;
      if ( *off_1801559E8 != (_UNKNOWN *)&off_1801559E0 )
        __fastfail(3u);
      *(_QWORD *)v4 = &off_1801559E0;
      *(_QWORD *)(v4 + 8) = v5;
      *v5 = v4;
      off_1801559E8 = (_UNKNOWN **)v4;
      RtlReleaseSRWLockExclusive(&qword_18015C730);
      return 0LL;
    }
    else
    {
      return 3221225495LL;
    }
  }
  return result;
}
