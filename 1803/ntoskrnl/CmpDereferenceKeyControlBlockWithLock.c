/*
 * XREFs of CmpDereferenceKeyControlBlockWithLock @ 0x1404A8840
 * Callers:
 *     CmpRundownUnitOfWork @ 0x14049896C (CmpRundownUnitOfWork.c)
 *     CmpDereferenceKeyControlBlock @ 0x1404A86C0 (CmpDereferenceKeyControlBlock.c)
 *     CmpCleanUpKcbValueCache @ 0x1404A99D4 (CmpCleanUpKcbValueCache.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1404A9A60 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpRunDownDelayDerefKCBEngine @ 0x14054E498 (CmpRunDownDelayDerefKCBEngine.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1405A5560 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoParseKey @ 0x1405A7800 (CmpDoParseKey.c)
 *     CmRenameKey @ 0x1406F1120 (CmRenameKey.c)
 *     CmpUnfreezeHive @ 0x1406F326C (CmpUnfreezeHive.c)
 *     CmpCleanupDiscardReplacePost @ 0x1406FAAB0 (CmpCleanupDiscardReplacePost.c)
 *     CmpCommitDiscardReplacePost @ 0x1406FABE0 (CmpCommitDiscardReplacePost.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x1406FADDC (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmpPrepareDiscardReplacePost @ 0x1406FB240 (CmpPrepareDiscardReplacePost.c)
 *     CmpCommitRenameKeyUoW @ 0x140703A10 (CmpCommitRenameKeyUoW.c)
 *     CmpLightWeightCommitRenameKeyUoW @ 0x140704408 (CmpLightWeightCommitRenameKeyUoW.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x140704F5C (CmpLightWeightPrepareRenameKeyUoW.c)
 * Callees:
 *     ExpAcquireFastMutexContended @ 0x140007DA0 (ExpAcquireFastMutexContended.c)
 *     KeAbPreAcquire @ 0x140008E50 (KeAbPreAcquire.c)
 *     ExpReleaseFastMutexContended @ 0x140064400 (ExpReleaseFastMutexContended.c)
 *     ExQueueWorkItem @ 0x14008FA50 (ExQueueWorkItem.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     CmpFreeKeyControlBlock @ 0x1404A82B0 (CmpFreeKeyControlBlock.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1404A9A60 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpDeleteHive @ 0x14054D76C (CmpDeleteHive.c)
 */

void __fastcall CmpDereferenceKeyControlBlockWithLock(ULONG_PTR BugCheckParameter2)
{
  signed __int32 v1; // eax
  signed __int32 v3; // ecx
  signed __int32 v4; // ett
  bool v5; // dl
  int v6; // ecx
  char v7; // bp
  __int64 v8; // rdi
  unsigned __int8 CurrentIrql; // r14
  __int64 v10; // rcx
  _QWORD *v11; // rax
  int v12; // eax
  unsigned __int8 v13; // bl
  signed __int32 v14; // eax
  __int64 v15; // rdi
  struct _KTHREAD *CurrentThread; // rax

  v1 = *(_DWORD *)BugCheckParameter2;
  do
  {
    v3 = v1 - 1;
    v4 = v1;
    v1 = _InterlockedCompareExchange((volatile signed __int32 *)BugCheckParameter2, v1 - 1, v1);
  }
  while ( v4 != v1 );
  if ( !v3 )
  {
    if ( (*(_DWORD *)(BugCheckParameter2 + 176) & 0x40000) != 0 )
    {
      v15 = *(_QWORD *)(BugCheckParameter2 + 24);
      CmpCleanUpKcbCacheWithLock(BugCheckParameter2);
      CurrentThread = KeGetCurrentThread();
      *(_DWORD *)(v15 + 160) |= 0x80u;
      *(_QWORD *)(v15 + 4216) = CurrentThread;
      *(_DWORD *)(v15 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v15 + 4292), 1u) & 0x7F) + 4296) = 31;
      if ( (*(_DWORD *)(v15 + 160) & 0x20) == 0
        && _InterlockedExchangeAdd((volatile signed __int32 *)(v15 + 4288), 0xFFFFFFFF) == 1 )
      {
        CmpDeleteHive((PVOID)v15);
      }
    }
    else
    {
      v5 = 0;
      v6 = *(_DWORD *)(BugCheckParameter2 + 4);
      if ( (v6 & 0x20) == 0 )
        v5 = (v6 & 0x20000) == 0;
      if ( CmpHoldLazyFlush
        && (*(_WORD *)(BugCheckParameter2 + 178) & 0x10) == 0
        && (*(_BYTE *)(BugCheckParameter2 + 4) & 8) == 0
        || !v5 )
      {
        CmpCleanUpKcbCacheWithLock(BugCheckParameter2);
        if ( *(struct _KTHREAD **)(BugCheckParameter2 + 48) != KeGetCurrentThread()
          && (*(_DWORD *)(BugCheckParameter2 + 4) & 0x80000) != 0 )
        {
          CmpFreeKeyControlBlock(BugCheckParameter2);
        }
      }
      else
      {
        v7 = 0;
        v8 = KeAbPreAcquire((ULONG_PTR)&CmpDelayedCloseTableLock, 0LL, 0);
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(1uLL);
        if ( !_interlockedbittestandreset((volatile signed __int32 *)&CmpDelayedCloseTableLock, 0) )
          ExpAcquireFastMutexContended((ULONG_PTR)&CmpDelayedCloseTableLock, v8);
        if ( v8 )
          *(_BYTE *)(v8 + 26) |= 1u;
        v10 = CmpDelayedLRUListHead;
        *(&CmpDelayedCloseTableLock + 1) = (ULONG_PTR)KeGetCurrentThread();
        *((_DWORD *)&CmpDelayedCloseTableLock + 12) = CurrentIrql;
        v11 = (_QWORD *)(BugCheckParameter2 + 216);
        if ( *(__int64 **)(CmpDelayedLRUListHead + 8) != &CmpDelayedLRUListHead )
          __fastfail(3u);
        *v11 = CmpDelayedLRUListHead;
        *(_QWORD *)(BugCheckParameter2 + 224) = &CmpDelayedLRUListHead;
        *(_QWORD *)(v10 + 8) = v11;
        CmpDelayedLRUListHead = BugCheckParameter2 + 216;
        v12 = CmpDelayedCloseElements;
        *(_BYTE *)(BugCheckParameter2 + 56) |= 2u;
        ++qword_140862A88;
        CmpDelayedCloseElements = v12 + 1;
        if ( v12 + 1 > (unsigned int)CmpDelayedCloseSize )
          v7 = 1;
        v13 = *((_BYTE *)&CmpDelayedCloseTableLock + 48);
        *(&CmpDelayedCloseTableLock + 1) = 0LL;
        v14 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpDelayedCloseTableLock, 1, 0);
        if ( v14 )
          ExpReleaseFastMutexContended((__int64)&CmpDelayedCloseTableLock, v14);
        __writecr8(v13);
        KeAbPostRelease((ULONG_PTR)&CmpDelayedCloseTableLock);
        if ( v7 == 1 && !_InterlockedExchange(&CmpDelayCloseWorkItemActive, 1) )
          ExQueueWorkItem(&CmpDelayCloseWorkItem, DelayedWorkQueue);
      }
    }
  }
}
