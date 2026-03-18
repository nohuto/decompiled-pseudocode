/*
 * XREFs of CmpQueueLazyCommitWorker @ 0x1406694A0
 * Callers:
 *     CmKtmNotification @ 0x14042C540 (CmKtmNotification.c)
 * Callees:
 *     KiSetTimerEx @ 0x14004D040 (KiSetTimerEx.c)
 *     ExAcquireFastMutexUnsafe @ 0x140052AB0 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140052C30 (ExReleaseFastMutexUnsafe.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 */

__int64 __fastcall CmpQueueLazyCommitWorker(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  char v2; // di
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  bool v6; // zf
  __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  v2 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
  *(_DWORD *)(a1 + 48) &= ~0x40u;
  v4 = (_QWORD *)qword_14036AEC8;
  v5 = (_QWORD *)(a1 + 32);
  if ( *(__int64 **)qword_14036AEC8 != &CmpLazyCommitListHead )
    __fastfail(3u);
  v6 = CmpLazyCommitWorkItemActive == 0;
  *v5 = &CmpLazyCommitListHead;
  v5[1] = v4;
  *v4 = v5;
  qword_14036AEC8 = (__int64)v5;
  if ( v6 )
  {
    v2 = 1;
    CmpLazyCommitWorkItemActive = 1;
  }
  ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
  result = KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v2 )
    return KiSetTimerEx((__int64)&CmpLazyCommitTimer, -300000000LL, 0, 0, (__int64)&CmpLazyCommitDpc);
  return result;
}
