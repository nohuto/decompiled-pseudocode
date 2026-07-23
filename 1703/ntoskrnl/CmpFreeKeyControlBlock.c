/*
 * XREFs of CmpFreeKeyControlBlock @ 0x140491410
 * Callers:
 *     CmpDereferenceKeyControlBlock @ 0x140490D70 (CmpDereferenceKeyControlBlock.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x140490F80 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpCleanUpKCBCacheTable @ 0x1404CAC38 (CmpCleanUpKCBCacheTable.c)
 *     CmpUnlockTwoKcbs @ 0x1404FDB60 (CmpUnlockTwoKcbs.c)
 *     CmpUnlockKcb @ 0x140500590 (CmpUnlockKcb.c)
 *     CmQueryKey @ 0x140500AB0 (CmQueryKey.c)
 *     CmpCreateKeyControlBlock @ 0x140502580 (CmpCreateKeyControlBlock.c)
 *     CmpWalkOneLevel @ 0x140503FA0 (CmpWalkOneLevel.c)
 *     CmQueryValueKey @ 0x1405063C0 (CmQueryValueKey.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x140533590 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoParseKey @ 0x1405343E0 (CmpDoParseKey.c)
 *     CmpCreateKeyBody @ 0x140538160 (CmpCreateKeyBody.c)
 *     CmpCloneToUnbackedKcb @ 0x140665800 (CmpCloneToUnbackedKcb.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x1406662B0 (CmpSearchKeyControlBlockTreeEx.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x1400DB880 (CmpFreeTransientPoolWithTag.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x1400FDE60 (KeAbPreAcquire.c)
 *     ExpReleaseFastMutexContended @ 0x140111A5C (ExpReleaseFastMutexContended.c)
 *     ExpAcquireFastMutexContended @ 0x14011C88C (ExpAcquireFastMutexContended.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

void __fastcall CmpFreeKeyControlBlock(unsigned __int64 P)
{
  _QWORD *v1; // rdi
  void *v3; // rcx
  unsigned __int64 v4; // rcx
  PRTL_BALANCED_NODE v5; // rax
  PRTL_BALANCED_NODE v6; // rsi
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
  v1 = (_QWORD *)(P + 112);
  if ( (_QWORD *)*v1 != v1 )
    KeBugCheckEx(0x51u, 0x11uLL, P, 0LL, 0LL);
  v3 = *(void **)(P + 192);
  if ( (unsigned __int64)v3 >= 2 )
    ExFreePoolWithTag(v3, 0x624E4D43u);
  v4 = *(_QWORD *)(P + 288);
  if ( (v4 & 1) != 0 )
    v4 &= ~1uLL;
  if ( v4 )
    CmpFreeTransientPoolWithTag((PVOID)v4, 0x624E4D43u);
  if ( (*(_DWORD *)(P + 4) & 0x10000) != 0 )
  {
    _InterlockedDecrement64(qword_1407AD0E0);
    _InterlockedIncrement64(&qword_1407AD0D8);
    v5 = KeAbPreAcquire((ULONG_PTR)&CmpAllocBucketLock, 0LL, 0);
    v6 = v5;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( !_interlockedbittestandreset((volatile signed __int32 *)&CmpAllocBucketLock, 0) )
      ExpAcquireFastMutexContended((ULONG_PTR)&CmpAllocBucketLock, (__int64)v5);
    if ( v6 )
      BYTE2(v6[1].Left) |= 1u;
    *(&CmpAllocBucketLock + 1) = (ULONG_PTR)KeGetCurrentThread();
    *((_DWORD *)&CmpAllocBucketLock + 12) = CurrentIrql;
    *(_QWORD *)(P + 24) = 0LL;
    v8 = (_QWORD *)qword_14036B208;
    if ( *(__int64 **)qword_14036B208 != &CmpFreeKCBListHead )
      __fastfail(3u);
    *v1 = &CmpFreeKCBListHead;
    v9 = (_DWORD *)(P & 0xFFFFFFFFFFFFF000uLL);
    v1[1] = v8;
    *v8 = v1;
    qword_14036B208 = (__int64)v1;
    if ( ++*v9 == 13 )
    {
      for ( i = 0; i < 0xDu; ++i )
      {
        v13 = &v9[74 * i + 30];
        v14 = *v13;
        v15 = (_QWORD *)v13[1];
        if ( *(_QWORD **)(*v13 + 8LL) != v13 || (_QWORD *)*v15 != v13 )
          __fastfail(3u);
        *v15 = v14;
        *(_QWORD *)(v14 + 8) = v15;
        _InterlockedDecrement64(&qword_1407AD0D8);
      }
      CmpFreeTransientPoolWithTag(v9, 0x6C414D43u);
      _InterlockedDecrement64(&qword_1407AD0D0);
    }
    v10 = *((_BYTE *)&CmpAllocBucketLock + 48);
    *(&CmpAllocBucketLock + 1) = 0LL;
    v11 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpAllocBucketLock, 1, 0);
    if ( v11 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)&CmpAllocBucketLock, v11);
    __writecr8(v10);
    KeAbPostRelease((ULONG_PTR)&CmpAllocBucketLock);
  }
  else
  {
    CmpFreeTransientPoolWithTag((PVOID)P, 0x626B4D43u);
  }
}
