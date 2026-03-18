/*
 * XREFs of MiEmptyTargetedWorkingSet @ 0x1402597EC
 * Callers:
 *     MiTrimAllSystemPagableMemory @ 0x14025A32C (MiTrimAllSystemPagableMemory.c)
 * Callees:
 *     MiReturnWsToExpansionList @ 0x14006A984 (MiReturnWsToExpansionList.c)
 *     MiEmptyWorkingSetInitiate @ 0x1400839D0 (MiEmptyWorkingSetInitiate.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 */

__int64 __fastcall MiEmptyTargetedWorkingSet(__int64 a1)
{
  _QWORD *v2; // rax
  __int64 v3; // rdx
  _QWORD *v4; // rcx
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&qword_1403CC4C0, &LockHandle);
  v2 = (_QWORD *)(a1 + 24);
  v3 = *(_QWORD *)(a1 + 24);
  if ( v3 )
  {
    if ( *(_QWORD **)(v3 + 8) != v2 || (v4 = *(_QWORD **)(a1 + 32), (_QWORD *)*v4 != v2) )
      __fastfail(3u);
    *v4 = v3;
    *(_QWORD *)(v3 + 8) = v4;
    *v2 = 0LL;
    *(_BYTE *)(a1 + 185) = *(_BYTE *)(a1 + 185) & 0xF9 | 2;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    MiEmptyWorkingSetInitiate(a1, 0, 0LL, -1LL);
    KeAcquireInStackQueuedSpinLock(&qword_1403CC4C0, &LockHandle);
    *(_BYTE *)(a1 + 185) &= 0xF9u;
    MiReturnWsToExpansionList(a1, 0);
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = LockHandle.OldIrql;
  __writecr8(LockHandle.OldIrql);
  return result;
}
