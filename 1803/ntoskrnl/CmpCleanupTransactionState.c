/*
 * XREFs of CmpCleanupTransactionState @ 0x1405E77C0
 * Callers:
 *     CmpRunDownCmRM @ 0x14054E698 (CmpRunDownCmRM.c)
 *     CmKtmNotification @ 0x14054ED10 (CmKtmNotification.c)
 *     CmObliterateRMTxArray @ 0x1406F706C (CmObliterateRMTxArray.c)
 *     CmpLazyCommitWorker @ 0x1406F7190 (CmpLazyCommitWorker.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     ExAcquireFastMutexUnsafe @ 0x140068180 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140068300 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ObDereferenceObjectDeferDelete @ 0x1400FA020 (ObDereferenceObjectDeferDelete.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400FFE30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     CmpTransMgrFreeVolatileData @ 0x140498730 (CmpTransMgrFreeVolatileData.c)
 *     CmpLockRegistryExclusive @ 0x14049BC8C (CmpLockRegistryExclusive.c)
 *     CmpLockRegistry @ 0x1404A71E0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x1404A8188 (CmpUnlockRegistry.c)
 *     CmpAttachToRegistryProcess @ 0x1404AC4D0 (CmpAttachToRegistryProcess.c)
 *     CmpTransDereferenceTransaction @ 0x14054C8AC (CmpTransDereferenceTransaction.c)
 *     CmpLogCheckpoint @ 0x1405E790C (CmpLogCheckpoint.c)
 */

void __fastcall CmpCleanupTransactionState(__int64 a1, _QWORD *a2, int a3, char a4)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v9; // rcx
  void **v10; // rax
  void *v11; // rcx
  struct _KTHREAD *v12; // rax
  __int64 v13; // r8
  __int64 v14; // rdx
  _BYTE v15[48]; // [rsp+20h] [rbp-58h] BYREF

  CmpAttachToRegistryProcess((__int64)v15);
  CmpLockRegistryExclusive();
  CmpTransMgrFreeVolatileData((__int64)a2, a3);
  CmpUnlockRegistry();
  KiUnstackDetachProcess((__int64)v15, 0LL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
  v9 = (_QWORD *)*a2;
  if ( *(_QWORD **)(*a2 + 8LL) != a2 || (v10 = (void **)a2[1], *v10 != a2) )
    __fastfail(3u);
  *v10 = v9;
  v9[1] = v10;
  ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  *((_DWORD *)a2 + 12) |= 0x10u;
  if ( a2[7] )
    CmpTransDereferenceTransaction(a2[7]);
  v11 = (void *)a2[9];
  if ( v11 )
    ObDereferenceObjectDeferDelete(v11);
  ExFreePoolWithTag(a2, 0x72544D43u);
  if ( a4 )
  {
    CmpLockRegistry();
    v12 = KeGetCurrentThread();
    --v12->KernelApcDisable;
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 128), 1u);
    LOBYTE(v13) = 1;
    CmpLogCheckpoint(a1, v14, v13);
    ExReleaseResourceLite(*(PERESOURCE *)(a1 + 128));
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    CmpUnlockRegistry();
  }
}
