/*
 * XREFs of CmRmFinalizeRecovery @ 0x14059BF00
 * Callers:
 *     CmpLoadKeyCommon @ 0x1400AF5E8 (CmpLoadKeyCommon.c)
 *     CmpFinishSystemHivesLoad @ 0x1405C09E0 (CmpFinishSystemHivesLoad.c)
 *     CmpMountPreloadedHives @ 0x1405C2F10 (CmpMountPreloadedHives.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140016B40 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140016CF0 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     CmpTransDereferenceTransaction @ 0x140568FAC (CmpTransDereferenceTransaction.c)
 *     CmpTransMgrFreeVolatileData @ 0x1405691F0 (CmpTransMgrFreeVolatileData.c)
 *     CmpTransMgrRollback @ 0x14056964C (CmpTransMgrRollback.c)
 */

__int64 __fastcall CmRmFinalizeRecovery(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 **v3; // rdi
  __int64 *v5; // rbx
  __int64 v6; // rax
  void *v7; // rcx
  void *v8; // rcx
  struct _KTHREAD *v9; // rax
  int v10; // [rsp+30h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
  v3 = (__int64 **)(a1 + 16);
  while ( *v3 != (__int64 *)v3 )
  {
    v5 = *v3;
    if ( (__int64 **)(*v3)[1] != v3 || (v6 = *v5, *(__int64 **)(*v5 + 8) != v5) )
      __fastfail(3u);
    *v3 = (__int64 *)v6;
    *(_QWORD *)(v6 + 8) = v3;
    ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    CmpTransMgrRollback((__int64)v5, &v10);
    CmpTransMgrFreeVolatileData((__int64)v5, 8);
    if ( v5[7] )
      CmpTransDereferenceTransaction(v5[7]);
    v7 = (void *)v5[9];
    if ( v7 )
      ObfDereferenceObject(v7);
    v8 = (void *)v5[10];
    if ( v8 )
      ZwClose(v8);
    ExFreePoolWithTag(v5, 0x72544D43u);
    v9 = KeGetCurrentThread();
    --v9->KernelApcDisable;
    ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
  }
  ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return 0LL;
}
