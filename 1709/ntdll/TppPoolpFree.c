/*
 * XREFs of TppPoolpFree @ 0x180081F4C
 * Callers:
 *     TppWorkerThread @ 0x18000CFC0 (TppWorkerThread.c)
 *     TpUnreserveTaskPost @ 0x180011098 (TpUnreserveTaskPost.c)
 *     TppCleanupGroupMemberDestroy @ 0x180035EC8 (TppCleanupGroupMemberDestroy.c)
 *     TppCleanupGroupMemberInitialize @ 0x180036E40 (TppCleanupGroupMemberInitialize.c)
 *     TpReleasePool @ 0x180081D20 (TpReleasePool.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     TppDestroyTimerSubQueue @ 0x180082058 (TppDestroyTimerSubQueue.c)
 *     NtClose @ 0x1800A02A0 (NtClose.c)
 */

__int64 __fastcall TppPoolpFree(unsigned __int64 a1)
{
  void *v2; // rcx
  unsigned __int64 v3; // rdx
  unsigned __int64 *v4; // r8
  __int64 v5; // r9
  __int64 v6; // r8
  _QWORD *v7; // rdx

  v2 = *(void **)(a1 + 56);
  if ( v2 )
  {
    NtClose(v2);
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  TppDestroyTimerSubQueue(a1 + 120);
  TppDestroyTimerSubQueue(a1 + 240);
  NtClose(*(HANDLE *)(a1 + 64));
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, *(_QWORD *)(a1 + 16));
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, *(_QWORD *)(a1 + 40));
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, *(_QWORD *)(a1 + 48));
  RtlAcquireSRWLockExclusive((unsigned __int64)&TppPoolpListLock, v3, v4, v5);
  v6 = *(_QWORD *)(a1 + 384);
  v7 = *(_QWORD **)(a1 + 392);
  if ( *(_QWORD *)(v6 + 8) != a1 + 384 || *v7 != a1 + 384 )
    __fastfail(3u);
  *v7 = v6;
  *(_QWORD *)(v6 + 8) = v7;
  RtlReleaseSRWLockExclusive(&TppPoolpListLock);
  return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, a1);
}
