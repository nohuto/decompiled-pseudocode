/*
 * XREFs of CmpCleanupLightWeightTransaction @ 0x14054BEFC
 * Callers:
 *     CmpAbortLightWeightTransaction @ 0x14054BBE8 (CmpAbortLightWeightTransaction.c)
 *     CmpCommitLightWeightTransaction @ 0x14054BE4C (CmpCommitLightWeightTransaction.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     ExAcquireFastMutexUnsafe @ 0x140068180 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140068300 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     CmpTransMgrFreeVolatileData @ 0x140498730 (CmpTransMgrFreeVolatileData.c)
 *     CmpLockRegistryExclusive @ 0x14049BC8C (CmpLockRegistryExclusive.c)
 *     CmpUnlockRegistry @ 0x1404A8188 (CmpUnlockRegistry.c)
 *     CmpAttachToRegistryProcess @ 0x1404AC4D0 (CmpAttachToRegistryProcess.c)
 *     CmpTransDereferenceTransaction @ 0x14054C8AC (CmpTransDereferenceTransaction.c)
 */

_QWORD *__fastcall CmpCleanupLightWeightTransaction(_QWORD *a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rax
  _QWORD *result; // rax
  _BYTE v8[48]; // [rsp+20h] [rbp-48h] BYREF

  CmpAttachToRegistryProcess((__int64)v8);
  CmpLockRegistryExclusive();
  CmpTransMgrFreeVolatileData((__int64)a1, a2);
  CmpUnlockRegistry();
  KiUnstackDetachProcess((__int64)v8, 0LL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
  v5 = *a1;
  if ( *(_QWORD **)(*a1 + 8LL) != a1 || (v6 = (_QWORD *)a1[1], (_QWORD *)*v6 != a1) )
    __fastfail(3u);
  *v6 = v5;
  *(_QWORD *)(v5 + 8) = v6;
  ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
  result = KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( a1[7] )
    return (_QWORD *)CmpTransDereferenceTransaction(a1[7]);
  return result;
}
