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

__int64 __fastcall RtlRegisterSecureMemoryCacheCallback(__int64 a1)
{
  __int64 result; // rax
  __int64 Heap; // rax
  unsigned __int64 v4; // rdx
  unsigned __int64 *v5; // r8
  __int64 v6; // r9
  __int64 v7; // rbx
  __int64 *v8; // rax

  result = ZwQuerySystemInformation();
  if ( (int)result >= 0 )
  {
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 32LL);
    v7 = Heap;
    if ( Heap )
    {
      *(_DWORD *)(Heap + 16) = 1;
      *(_QWORD *)(Heap + 24) = a1;
      RtlAcquireSRWLockExclusive((unsigned __int64)&qword_18015D760, v4, v5, v6);
      v8 = (__int64 *)off_180156A48;
      if ( *off_180156A48 != (_UNKNOWN *)&off_180156A40 )
        __fastfail(3u);
      *(_QWORD *)v7 = &off_180156A40;
      *(_QWORD *)(v7 + 8) = v8;
      *v8 = v7;
      off_180156A48 = (_UNKNOWN **)v7;
      RtlReleaseSRWLockExclusive(&qword_18015D760);
      return 0LL;
    }
    else
    {
      return 3221225495LL;
    }
  }
  return result;
}
