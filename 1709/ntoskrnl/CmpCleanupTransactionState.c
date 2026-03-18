/*
 * XREFs of CmpCleanupTransactionState @ 0x1405E31E8
 * Callers:
 *     CmKtmNotification @ 0x1405697C0 (CmKtmNotification.c)
 *     CmpRunDownCmRM @ 0x140597B4C (CmpRunDownCmRM.c)
 *     CmObliterateRMTxArray @ 0x140693E78 (CmObliterateRMTxArray.c)
 *     CmpLazyCommitWorker @ 0x140693FA0 (CmpLazyCommitWorker.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140016B40 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140016CF0 (ExReleaseFastMutexUnsafe.c)
 *     ObDereferenceObjectDeferDelete @ 0x140071350 (ObDereferenceObjectDeferDelete.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     CmpLockRegistry @ 0x14047E6F0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x14047E950 (CmpUnlockRegistry.c)
 *     CmpLockRegistryExclusive @ 0x1404E3BCC (CmpLockRegistryExclusive.c)
 *     CmpTransDereferenceTransaction @ 0x140568FAC (CmpTransDereferenceTransaction.c)
 *     CmpTransMgrFreeVolatileData @ 0x1405691F0 (CmpTransMgrFreeVolatileData.c)
 *     CmpLogCheckpoint @ 0x1405E3310 (CmpLogCheckpoint.c)
 */

void __fastcall CmpCleanupTransactionState(__int64 a1, _QWORD *a2, int a3, char a4)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v9; // rdx
  void **v10; // rax
  void *v11; // rcx
  struct _KTHREAD *v12; // rax
  __int64 v13; // r8
  __int64 v14; // rdx

  CmpLockRegistryExclusive();
  CmpTransMgrFreeVolatileData((__int64)a2, a3);
  CmpUnlockRegistry();
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
