/*
 * XREFs of CmpAddToDelayedClose @ 0x140491608
 * Callers:
 *     CmpDereferenceKeyControlBlockWithLock @ 0x140490F80 (CmpDereferenceKeyControlBlockWithLock.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140010A20 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1400F0060 (ExAcquireFastMutex.c)
 *     ExQueueWorkItem @ 0x1400FED80 (ExQueueWorkItem.c)
 */

void __fastcall CmpAddToDelayedClose(__int64 a1)
{
  __int64 v2; // rcx
  _QWORD *v3; // rax
  bool v4; // bl

  ExAcquireFastMutex((PFAST_MUTEX)&CmpDelayedCloseTableLock);
  v2 = CmpDelayedLRUListHead;
  v3 = (_QWORD *)(a1 + 216);
  if ( *(__int64 **)(CmpDelayedLRUListHead + 8) != &CmpDelayedLRUListHead )
    __fastfail(3u);
  *v3 = CmpDelayedLRUListHead;
  *(_QWORD *)(a1 + 224) = &CmpDelayedLRUListHead;
  *(_QWORD *)(v2 + 8) = v3;
  CmpDelayedLRUListHead = a1 + 216;
  *(_BYTE *)(a1 + 56) |= 2u;
  ++qword_1407AD0C8;
  v4 = ++CmpDelayedCloseElements > (unsigned int)CmpDelayedCloseSize;
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)&CmpDelayedCloseTableLock);
  if ( v4 && !_InterlockedExchange(&CmpDelayCloseWorkItemActive, 1) )
    ExQueueWorkItem(&CmpDelayCloseWorkItem, DelayedWorkQueue);
}
