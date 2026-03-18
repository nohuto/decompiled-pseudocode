/*
 * XREFs of CmpFreeKeyControlBlock @ 0x1404A82B0
 * Callers:
 *     CmpDereferenceKeyControlBlock @ 0x1404A86C0 (CmpDereferenceKeyControlBlock.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1404A8840 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpUnlockKcb @ 0x1404AA790 (CmpUnlockKcb.c)
 *     CmpWalkOneLevel @ 0x1404AA800 (CmpWalkOneLevel.c)
 *     CmpCreateKeyControlBlock @ 0x1404AB0E0 (CmpCreateKeyControlBlock.c)
 *     CmpUnlockTwoKcbs @ 0x1404ACE30 (CmpUnlockTwoKcbs.c)
 *     CmQueryKey @ 0x1404AE2E0 (CmQueryKey.c)
 *     CmpCreateKeyBody @ 0x14054C380 (CmpCreateKeyBody.c)
 *     CmpCleanUpKCBCacheTable @ 0x14054E3C0 (CmpCleanUpKCBCacheTable.c)
 *     CmQueryValueKey @ 0x1405A0B80 (CmQueryValueKey.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1405A5560 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoParseKey @ 0x1405A7800 (CmpDoParseKey.c)
 *     CmpCloneToUnbackedKcb @ 0x1406F3310 (CmpCloneToUnbackedKcb.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x1406F38B0 (CmpSearchKeyControlBlockTreeEx.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x140009034 (CmpFreeTransientPoolWithTag.c)
 *     ExpReleaseFastMutexContended @ 0x140064400 (ExpReleaseFastMutexContended.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquireFastMutex @ 0x140103930 (ExAcquireFastMutex.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall CmpFreeKeyControlBlock(ULONG_PTR BugCheckParameter2)
{
  _QWORD *v1; // rdi
  void *v3; // rcx
  unsigned __int64 v4; // rcx
  _QWORD *v5; // rax
  _DWORD *v6; // rbx
  unsigned __int8 v7; // bl
  signed __int32 v8; // eax
  unsigned __int16 i; // dx
  _QWORD *v10; // rax
  __int64 v11; // r8
  _QWORD *v12; // rcx

  _InterlockedDecrement64(&CmPerfCounters);
  v1 = (_QWORD *)(BugCheckParameter2 + 112);
  if ( (_QWORD *)*v1 != v1 )
    KeBugCheckEx(0x51u, 0x11uLL, BugCheckParameter2, 0LL, 0LL);
  v3 = *(void **)(BugCheckParameter2 + 192);
  if ( (unsigned __int64)v3 >= 2 )
    ExFreePoolWithTag(v3, 0x624E4D43u);
  v4 = *(_QWORD *)(BugCheckParameter2 + 288);
  if ( (v4 & 1) != 0 )
    v4 &= ~1uLL;
  if ( v4 )
    CmpFreeTransientPoolWithTag((void *)v4, 0x624E4D43u);
  if ( (*(_DWORD *)(BugCheckParameter2 + 4) & 0x10000) != 0 )
  {
    _InterlockedDecrement64(qword_140862AA0);
    _InterlockedIncrement64(&qword_140862A98);
    ExAcquireFastMutex((PFAST_MUTEX)&CmpAllocBucketLock);
    *(_QWORD *)(BugCheckParameter2 + 24) = 0LL;
    v5 = (_QWORD *)qword_1403CA6E8;
    if ( *(__int64 **)qword_1403CA6E8 != &CmpFreeKCBListHead )
      __fastfail(3u);
    *v1 = &CmpFreeKCBListHead;
    v6 = (_DWORD *)(BugCheckParameter2 & 0xFFFFFFFFFFFFF000uLL);
    v1[1] = v5;
    *v5 = v1;
    qword_1403CA6E8 = (__int64)v1;
    if ( ++*v6 == 13 )
    {
      for ( i = 0; i < 0xDu; ++i )
      {
        v10 = &v6[76 * i + 30];
        v11 = *v10;
        if ( *(_QWORD **)(*v10 + 8LL) != v10 || (v12 = (_QWORD *)v10[1], (_QWORD *)*v12 != v10) )
          __fastfail(3u);
        *v12 = v11;
        *(_QWORD *)(v11 + 8) = v12;
        _InterlockedDecrement64(&qword_140862A98);
      }
      CmpFreeTransientPoolWithTag(v6, 0x6C414D43u);
      _InterlockedDecrement64(&qword_140862A90);
    }
    v7 = *((_BYTE *)&CmpAllocBucketLock + 48);
    *(&CmpAllocBucketLock + 1) = 0LL;
    v8 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpAllocBucketLock, 1, 0);
    if ( v8 )
      ExpReleaseFastMutexContended((__int64)&CmpAllocBucketLock, v8);
    __writecr8(v7);
    KeAbPostRelease((ULONG_PTR)&CmpAllocBucketLock);
  }
  else
  {
    CmpFreeTransientPoolWithTag((void *)BugCheckParameter2, 0x626B4D43u);
  }
}
