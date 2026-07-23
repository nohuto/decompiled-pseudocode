/*
 * XREFs of CmpFreeKeyControlBlock @ 0x140478B50
 * Callers:
 *     CmpCleanUpKCBCacheTable @ 0x14046EB3C (CmpCleanUpKCBCacheTable.c)
 *     CmpDereferenceKeyControlBlock @ 0x140478370 (CmpDereferenceKeyControlBlock.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1404784E0 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpGetSymbolicLinkTarget @ 0x14047EAB0 (CmpGetSymbolicLinkTarget.c)
 *     CmpUnlockKcb @ 0x14047F670 (CmpUnlockKcb.c)
 *     CmpWalkOneLevel @ 0x140480060 (CmpWalkOneLevel.c)
 *     CmpCreateKeyControlBlock @ 0x140480870 (CmpCreateKeyControlBlock.c)
 *     CmpUnlockTwoKcbs @ 0x140482410 (CmpUnlockTwoKcbs.c)
 *     CmQueryKey @ 0x1404A7650 (CmQueryKey.c)
 *     CmpDeleteKeyObject @ 0x1404A97C0 (CmpDeleteKeyObject.c)
 *     CmQueryValueKey @ 0x1404AB970 (CmQueryValueKey.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1404B39C0 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoParseKey @ 0x1404B47B0 (CmpDoParseKey.c)
 *     CmpCreateKeyBody @ 0x1404B8240 (CmpCreateKeyBody.c)
 *     CmpCloneToUnbackedKcb @ 0x14068F450 (CmpCloneToUnbackedKcb.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x14068FD50 (CmpSearchKeyControlBlockTreeEx.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x14001655C (CmpFreeTransientPoolWithTag.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExpReleaseFastMutexContended @ 0x1400A6FF0 (ExpReleaseFastMutexContended.c)
 *     ExpAcquireFastMutexContended @ 0x1400BAC30 (ExpAcquireFastMutexContended.c)
 *     KeAbPreAcquire @ 0x1400BAD80 (KeAbPreAcquire.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall CmpFreeKeyControlBlock(ULONG_PTR BugCheckParameter2)
{
  _QWORD *v1; // rdi
  void *v3; // rcx
  unsigned __int64 v4; // rcx
  _RTL_BALANCED_NODE *v5; // rax
  _RTL_BALANCED_NODE *v6; // rsi
  unsigned __int8 CurrentIrql; // bp
  _QWORD *v8; // rax
  _DWORD *v9; // rbx
  unsigned __int8 v10; // bl
  signed __int32 v11; // eax
  unsigned __int16 i; // dx
  _QWORD *v13; // rax
  __int64 v14; // r8
  _QWORD *v15; // rcx

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
    _InterlockedDecrement64(qword_1407F4160);
    _InterlockedIncrement64(&qword_1407F4158);
    v5 = KeAbPreAcquire((ULONG_PTR)&CmpAllocBucketLock, 0LL, 0);
    v6 = v5;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( !_interlockedbittestandreset((volatile signed __int32 *)&CmpAllocBucketLock, 0) )
      ExpAcquireFastMutexContended((ULONG_PTR)&CmpAllocBucketLock, v5);
    if ( v6 )
      BYTE2(v6[1].Left) |= 1u;
    *(&CmpAllocBucketLock + 1) = (ULONG_PTR)KeGetCurrentThread();
    *((_DWORD *)&CmpAllocBucketLock + 12) = CurrentIrql;
    *(_QWORD *)(BugCheckParameter2 + 24) = 0LL;
    v8 = (_QWORD *)qword_1403871A8;
    if ( *(__int64 **)qword_1403871A8 != &CmpFreeKCBListHead )
      __fastfail(3u);
    *v1 = &CmpFreeKCBListHead;
    v9 = (_DWORD *)(BugCheckParameter2 & 0xFFFFFFFFFFFFF000uLL);
    v1[1] = v8;
    *v8 = v1;
    qword_1403871A8 = (__int64)v1;
    if ( ++*v9 == 13 )
    {
      for ( i = 0; i < 0xDu; ++i )
      {
        v13 = &v9[76 * i + 30];
        v14 = *v13;
        if ( *(_QWORD **)(*v13 + 8LL) != v13 || (v15 = (_QWORD *)v13[1], (_QWORD *)*v15 != v13) )
          __fastfail(3u);
        *v15 = v14;
        *(_QWORD *)(v14 + 8) = v15;
        _InterlockedDecrement64(&qword_1407F4158);
      }
      CmpFreeTransientPoolWithTag(v9, 0x6C414D43u);
      _InterlockedDecrement64(&qword_1407F4150);
    }
    v10 = *((_BYTE *)&CmpAllocBucketLock + 48);
    *(&CmpAllocBucketLock + 1) = 0LL;
    v11 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpAllocBucketLock, 1, 0);
    if ( v11 )
      ExpReleaseFastMutexContended((__int64)&CmpAllocBucketLock, v11);
    __writecr8(v10);
    KeAbPostRelease((ULONG_PTR)&CmpAllocBucketLock);
  }
  else
  {
    CmpFreeTransientPoolWithTag((void *)BugCheckParameter2, 0x626B4D43u);
  }
}
