/*
 * XREFs of DbgpInsertDebugPrintCallback @ 0x14023B144
 * Callers:
 *     DbgSetDebugPrintCallback @ 0x14023B0F0 (DbgSetDebugPrintCallback.c)
 * Callees:
 *     ExInitializePushLock @ 0x140023310 (ExInitializePushLock.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140096D40 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall DbgpInsertDebugPrintCallback(KSPIN_LOCK a1)
{
  KSPIN_LOCK *PoolWithTag; // rax
  KSPIN_LOCK *v3; // rbx
  unsigned __int8 CurrentIrql; // di
  _QWORD *v6; // rcx
  _QWORD *v7; // rax

  PoolWithTag = (KSPIN_LOCK *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x62436244u);
  v3 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  ExInitializePushLock(PoolWithTag + 1);
  *(_DWORD *)v3 = 0;
  v3[2] = a1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  ExAcquireSpinLockExclusiveAtDpcLevel(&RtlpDebugPrintCallbackLock);
  v6 = off_14033C568[0];
  v7 = v3 + 3;
  if ( *(_UNKNOWN ***)off_14033C568[0] != &RtlpDebugPrintCallbackList )
    __fastfail(3u);
  v3[4] = (KSPIN_LOCK)off_14033C568[0];
  *v7 = &RtlpDebugPrintCallbackList;
  *v6 = v7;
  off_14033C568[0] = (_UNKNOWN **)(v3 + 3);
  RtlpDebugPrintCallbacksActive = 1;
  ExReleaseSpinLockExclusiveFromDpcLevel(&RtlpDebugPrintCallbackLock);
  __writecr8(CurrentIrql);
  return 0LL;
}
