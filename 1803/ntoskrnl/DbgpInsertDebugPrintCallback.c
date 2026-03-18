/*
 * XREFs of DbgpInsertDebugPrintCallback @ 0x140286450
 * Callers:
 *     DbgSetDebugPrintCallback @ 0x1402863F0 (DbgSetDebugPrintCallback.c)
 * Callees:
 *     ExInitializePushLock @ 0x1400BA070 (ExInitializePushLock.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1400E4380 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
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
  v6 = off_140397740;
  v7 = v3 + 3;
  if ( *off_140397740 != (_UNKNOWN *)&RtlpDebugPrintCallbackList )
    __fastfail(3u);
  v3[4] = (KSPIN_LOCK)off_140397740;
  *v7 = &RtlpDebugPrintCallbackList;
  *v6 = v7;
  off_140397740 = (_UNKNOWN **)(v3 + 3);
  RtlpDebugPrintCallbacksActive = 1;
  ExReleaseSpinLockExclusiveFromDpcLevel(&RtlpDebugPrintCallbackLock);
  __writecr8(CurrentIrql);
  return 0LL;
}
