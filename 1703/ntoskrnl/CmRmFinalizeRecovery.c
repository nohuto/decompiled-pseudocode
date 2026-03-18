/*
 * XREFs of CmRmFinalizeRecovery @ 0x1404CBACC
 * Callers:
 *     CmpLoadKeyCommon @ 0x14007EF3C (CmpLoadKeyCommon.c)
 *     CmpFinishSystemHivesLoad @ 0x1405A3DE0 (CmpFinishSystemHivesLoad.c)
 *     CmpMountPreloadedHives @ 0x1405A67E8 (CmpMountPreloadedHives.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140052AB0 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140052C30 (ExReleaseFastMutexUnsafe.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     CmpTransDereferenceTransaction @ 0x14042DE48 (CmpTransDereferenceTransaction.c)
 *     CmpTransMgrRollback @ 0x14042E45C (CmpTransMgrRollback.c)
 *     CmpTransMgrFreeVolatileData @ 0x1404CE2D0 (CmpTransMgrFreeVolatileData.c)
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
    v6 = **v3;
    if ( (__int64 **)(*v3)[1] != v3 || *(__int64 **)(v6 + 8) != v5 )
      __fastfail(3u);
    *v3 = (__int64 *)v6;
    *(_QWORD *)(v6 + 8) = v3;
    ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    CmpTransMgrRollback((__int64)v5, &v10);
    CmpTransMgrFreeVolatileData(v5, 8LL);
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
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return 0LL;
}
