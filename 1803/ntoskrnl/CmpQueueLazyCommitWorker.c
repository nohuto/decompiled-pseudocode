/*
 * XREFs of CmpQueueLazyCommitWorker @ 0x1406F740C
 * Callers:
 *     CmKtmNotification @ 0x14054ED10 (CmKtmNotification.c)
 * Callees:
 *     KiSetTimerEx @ 0x14005AB60 (KiSetTimerEx.c)
 *     ExAcquireFastMutexUnsafe @ 0x140068180 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140068300 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 */

_QWORD *__fastcall CmpQueueLazyCommitWorker(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  char v2; // di
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  bool v6; // zf
  _QWORD *result; // rax

  CurrentThread = KeGetCurrentThread();
  v2 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
  *(_DWORD *)(a1 + 48) &= ~0x40u;
  v4 = (_QWORD *)qword_1403CA3A8;
  v5 = (_QWORD *)(a1 + 32);
  if ( *(__int64 **)qword_1403CA3A8 != &CmpLazyCommitListHead )
    __fastfail(3u);
  v6 = CmpLazyCommitWorkItemActive == 0;
  *v5 = &CmpLazyCommitListHead;
  v5[1] = v4;
  *v4 = v5;
  qword_1403CA3A8 = (__int64)v5;
  if ( v6 )
  {
    v2 = 1;
    CmpLazyCommitWorkItemActive = 1;
  }
  ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
  result = KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v2 )
    return (_QWORD *)KiSetTimerEx((__int64)&CmpLazyCommitTimer, -300000000LL, 0, 0, (__int64)&CmpLazyCommitDpc);
  return result;
}
