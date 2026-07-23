/*
 * XREFs of CmpDereferenceKeyControlBlockWithLock @ 0x1404784E0
 * Callers:
 *     CmpRunDownDelayDerefKCBEngine @ 0x14046EBF0 (CmpRunDownDelayDerefKCBEngine.c)
 *     CmpDereferenceKeyControlBlock @ 0x140478370 (CmpDereferenceKeyControlBlock.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x140478800 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpCleanUpKcbValueCache @ 0x1404789E8 (CmpCleanUpKcbValueCache.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1404B39C0 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoParseKey @ 0x1404B47B0 (CmpDoParseKey.c)
 *     CmpRundownUnitOfWork @ 0x140569428 (CmpRundownUnitOfWork.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x1405F2DD8 (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmRenameKey @ 0x14068CE58 (CmRenameKey.c)
 *     CmpUnfreezeHive @ 0x14068F084 (CmpUnfreezeHive.c)
 *     CmpCleanupDiscardReplacePost @ 0x140697AF0 (CmpCleanupDiscardReplacePost.c)
 *     CmpCommitDiscardReplacePost @ 0x140697C10 (CmpCommitDiscardReplacePost.c)
 *     CmpPrepareDiscardReplacePost @ 0x140698100 (CmpPrepareDiscardReplacePost.c)
 *     CmpCommitRenameKeyUoW @ 0x14069E7D0 (CmpCommitRenameKeyUoW.c)
 *     CmpLightWeightCommitRenameKeyUoW @ 0x14069F008 (CmpLightWeightCommitRenameKeyUoW.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x14069F8B8 (CmpLightWeightPrepareRenameKeyUoW.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1400613A0 (ExQueueWorkItem.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExpReleaseFastMutexContended @ 0x1400A6FF0 (ExpReleaseFastMutexContended.c)
 *     CmpDeleteHive @ 0x1400AFD08 (CmpDeleteHive.c)
 *     ExpAcquireFastMutexContended @ 0x1400BAC30 (ExpAcquireFastMutexContended.c)
 *     KeAbPreAcquire @ 0x1400BAD80 (KeAbPreAcquire.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x140478800 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpFreeKeyControlBlock @ 0x140478B50 (CmpFreeKeyControlBlock.c)
 */

void __fastcall CmpDereferenceKeyControlBlockWithLock(ULONG_PTR BugCheckParameter4)
{
  signed __int32 v1; // eax
  signed __int32 v3; // ecx
  signed __int32 v4; // ett
  bool v5; // dl
  int v6; // ecx
  char v7; // bp
  PRTL_BALANCED_NODE v8; // rdi
  unsigned __int8 CurrentIrql; // r14
  __int64 v10; // rcx
  _QWORD *v11; // rax
  int v12; // eax
  unsigned __int8 v13; // bl
  signed __int32 v14; // eax
  __int64 v15; // rdi
  struct _KTHREAD *CurrentThread; // rax

  v1 = *(_DWORD *)BugCheckParameter4;
  do
  {
    v3 = v1 - 1;
    v4 = v1;
    v1 = _InterlockedCompareExchange((volatile signed __int32 *)BugCheckParameter4, v1 - 1, v1);
  }
  while ( v4 != v1 );
  if ( !v3 )
  {
    if ( (*(_DWORD *)(BugCheckParameter4 + 176) & 0x40000) != 0 )
    {
      v15 = *(_QWORD *)(BugCheckParameter4 + 24);
      CmpCleanUpKcbCacheWithLock(BugCheckParameter4);
      CurrentThread = KeGetCurrentThread();
      *(_DWORD *)(v15 + 144) |= 0x80u;
      *(_QWORD *)(v15 + 5424) = CurrentThread;
      *(_DWORD *)(v15 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v15 + 5500), 1u) & 0x7F) + 5504) = 31;
      if ( (*(_DWORD *)(v15 + 144) & 0x20) == 0
        && _InterlockedExchangeAdd((volatile signed __int32 *)(v15 + 5496), 0xFFFFFFFF) == 1 )
      {
        CmpDeleteHive((PERESOURCE *)v15);
      }
    }
    else
    {
      v5 = 0;
      v6 = *(_DWORD *)(BugCheckParameter4 + 4);
      if ( (v6 & 0x20) == 0 )
        v5 = (v6 & 0x20000) == 0;
      if ( CmpHoldLazyFlush
        && (*(_WORD *)(BugCheckParameter4 + 178) & 0x10) == 0
        && (*(_BYTE *)(BugCheckParameter4 + 4) & 8) == 0
        || !v5 )
      {
        CmpCleanUpKcbCacheWithLock(BugCheckParameter4);
        if ( *(struct _KTHREAD **)(BugCheckParameter4 + 48) != KeGetCurrentThread()
          && (*(_DWORD *)(BugCheckParameter4 + 4) & 0x80000) != 0 )
        {
          CmpFreeKeyControlBlock(BugCheckParameter4);
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
          BYTE2(v8[1].Left) |= 1u;
        v10 = CmpDelayedLRUListHead;
        *(&CmpDelayedCloseTableLock + 1) = (ULONG_PTR)KeGetCurrentThread();
        *((_DWORD *)&CmpDelayedCloseTableLock + 12) = CurrentIrql;
        v11 = (_QWORD *)(BugCheckParameter4 + 216);
        if ( *(__int64 **)(CmpDelayedLRUListHead + 8) != &CmpDelayedLRUListHead )
          __fastfail(3u);
        *v11 = CmpDelayedLRUListHead;
        *(_QWORD *)(BugCheckParameter4 + 224) = &CmpDelayedLRUListHead;
        *(_QWORD *)(v10 + 8) = v11;
        CmpDelayedLRUListHead = BugCheckParameter4 + 216;
        v12 = CmpDelayedCloseElements;
        *(_BYTE *)(BugCheckParameter4 + 56) |= 2u;
        ++qword_1407F4148;
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
