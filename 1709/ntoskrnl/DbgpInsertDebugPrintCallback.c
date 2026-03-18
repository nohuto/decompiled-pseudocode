/*
 * XREFs of DbgpInsertDebugPrintCallback @ 0x1402509F0
 * Callers:
 *     DbgSetDebugPrintCallback @ 0x140250990 (DbgSetDebugPrintCallback.c)
 * Callees:
 *     ExInitializePushLock @ 0x140025A30 (ExInitializePushLock.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140067810 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
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
  v6 = off_140354498;
  v7 = v3 + 3;
  if ( *off_140354498 != (_UNKNOWN *)&RtlpDebugPrintCallbackList )
    __fastfail(3u);
  v3[4] = (KSPIN_LOCK)off_140354498;
  *v7 = &RtlpDebugPrintCallbackList;
  *v6 = v7;
  off_140354498 = (_UNKNOWN **)(v3 + 3);
  RtlpDebugPrintCallbacksActive = 1;
  ExReleaseSpinLockExclusiveFromDpcLevel(&RtlpDebugPrintCallbackLock);
  __writecr8(CurrentIrql);
  return 0LL;
}
