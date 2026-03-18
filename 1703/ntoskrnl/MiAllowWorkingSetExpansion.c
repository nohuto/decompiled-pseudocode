/*
 * XREFs of MiAllowWorkingSetExpansion @ 0x140064644
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x14049DBB4 (MmInitializeProcessAddressSpace.c)
 *     MiInitializeSystemWorkingSetList @ 0x14057EA30 (MiInitializeSystemWorkingSetList.c)
 *     MmInitializeHandBuiltProcess @ 0x1405D1CE0 (MmInitializeHandBuiltProcess.c)
 * Callees:
 *     MiReturnWsToExpansionList @ 0x1400646C4 (MiReturnWsToExpansionList.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 */

__int64 __fastcall MiAllowWorkingSetExpansion(__int64 a1)
{
  __int64 result; // rax
  _QWORD *v3; // rdx
  _QWORD *v4; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&qword_14036CF80, &LockHandle);
  if ( (*(_BYTE *)(a1 + 192) & 7) == 1 )
  {
    v3 = (_QWORD *)qword_14036D048;
    v4 = (_QWORD *)(a1 - 2864);
    if ( *(__int64 **)qword_14036D048 != &qword_14036D040 )
      __fastfail(3u);
    *v4 = &qword_14036D040;
    v4[1] = v3;
    *v3 = v4;
    qword_14036D048 = a1 - 2864;
  }
  MiReturnWsToExpansionList(a1, 0LL);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = LockHandle.OldIrql;
  __writecr8(LockHandle.OldIrql);
  return result;
}
