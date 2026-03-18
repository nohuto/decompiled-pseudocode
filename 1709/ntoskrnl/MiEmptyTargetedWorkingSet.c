/*
 * XREFs of MiEmptyTargetedWorkingSet @ 0x14021D450
 * Callers:
 *     MiTrimAllSystemPagableMemory @ 0x14021E570 (MiTrimAllSystemPagableMemory.c)
 * Callees:
 *     MiEmptyWorkingSet @ 0x14000AF54 (MiEmptyWorkingSet.c)
 *     MiReturnWsToExpansionList @ 0x1400147A4 (MiReturnWsToExpansionList.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 */

__int64 __fastcall MiEmptyTargetedWorkingSet(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  _QWORD *v4; // rdx
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&qword_140389240, &LockHandle);
  v2 = a1 + 24;
  if ( *(_QWORD *)(a1 + 24) )
  {
    v3 = *(_QWORD *)v2;
    if ( *(_QWORD *)(*(_QWORD *)v2 + 8LL) != v2 || (v4 = *(_QWORD **)(a1 + 32), *v4 != v2) )
      __fastfail(3u);
    *v4 = v3;
    *(_QWORD *)(v3 + 8) = v4;
    *(_QWORD *)v2 = 0LL;
    *(_BYTE *)(a1 + 193) = *(_BYTE *)(a1 + 193) & 0xF9 | 2;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    MiEmptyWorkingSet(a1, 0);
    KeAcquireInStackQueuedSpinLock(&qword_140389240, &LockHandle);
    *(_BYTE *)(a1 + 193) &= 0xF9u;
    MiReturnWsToExpansionList(a1, 0);
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = LockHandle.OldIrql;
  __writecr8(LockHandle.OldIrql);
  return result;
}
