/*
 * XREFs of CmpLogCheckpoint @ 0x14042EAB0
 * Callers:
 *     CmpTransWriteLog @ 0x14042CE64 (CmpTransWriteLog.c)
 *     CmpCleanupTransactionState @ 0x14042D17C (CmpCleanupTransactionState.c)
 *     CmpStopRMLog @ 0x1404CA850 (CmpStopRMLog.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140052AB0 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140052C30 (ExReleaseFastMutexUnsafe.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     CmListGetNextElement @ 0x1404D4148 (CmListGetNextElement.c)
 */

__int64 __fastcall CmpLogCheckpoint(__int64 a1, __int64 a2, char a3)
{
  int v3; // edi
  struct _KTHREAD *CurrentThread; // rax
  const CLFS_LSN *NextElement; // rax
  NTSTATUS LogFileInformation; // eax
  CLFS_LSN LastLsn; // rcx
  CLFS_INFORMATION *PoolWithTag; // rax
  CLFS_INFORMATION *v11; // rbx
  void *v12; // rcx
  NTSTATUS v13; // eax
  CLFS_INFORMATION *v14; // rax
  CLFS_INFORMATION *v15; // rbx
  const CLFS_LSN *v17; // r14
  CLFS_CONTAINER_ID v18; // ebx
  CLFS_LSN plsn; // [rsp+48h] [rbp-89h] BYREF
  ULONG pcbInfoBuffer; // [rsp+50h] [rbp-81h] BYREF
  ULONG v21; // [rsp+54h] [rbp-7Dh] BYREF
  ULONG v22; // [rsp+58h] [rbp-79h] BYREF
  __int64 v23; // [rsp+60h] [rbp-71h] BYREF
  CLFS_LSN plsnNext; // [rsp+68h] [rbp-69h] BYREF
  CLFS_LSN pvRestartBuffer; // [rsp+70h] [rbp-61h] BYREF
  CLFS_INFORMATION pinfoBuffer; // [rsp+78h] [rbp-59h] BYREF

  v3 = 0;
  v23 = 0LL;
  plsn.ullOffset = CLFS_LSN_INVALID_EXT;
  plsnNext.ullOffset = CLFS_LSN_NULL_EXT;
  pcbInfoBuffer = 120;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
  while ( 1 )
  {
    NextElement = (const CLFS_LSN *)CmListGetNextElement(a1 + 16, &v23, 0LL);
    if ( !NextElement )
      break;
    v17 = NextElement + 13;
    if ( !ClfsLsnInvalid(NextElement + 13) )
    {
      v18 = ClfsLsnContainer((const CLFS_LSN *)(a1 + 120));
      if ( ClfsLsnContainer(v17) == v18 )
      {
        ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        return 0LL;
      }
    }
    if ( ClfsLsnInvalid(&plsn) || ClfsLsnLess(v17, &plsn) )
      plsn = *v17;
  }
  ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( ClfsLsnInvalid(&plsn) )
  {
    LogFileInformation = ClfsGetLogFileInformation(*(PLOG_FILE_OBJECT *)(a1 + 88), &pinfoBuffer, &pcbInfoBuffer);
    LastLsn = plsn;
    v3 = LogFileInformation;
    if ( LogFileInformation >= 0 )
      LastLsn = pinfoBuffer.LastLsn;
    plsn = LastLsn;
  }
  v21 = 120;
  PoolWithTag = (CLFS_INFORMATION *)ExAllocatePoolWithTag(PagedPool, 0x78uLL, 0x20204D43u);
  v11 = PoolWithTag;
  if ( PoolWithTag )
  {
    ClfsGetLogFileInformation(*(PLOG_FILE_OBJECT *)(a1 + 88), PoolWithTag, &v21);
    ExFreePoolWithTag(v11, 0);
  }
  if ( v3 >= 0 )
  {
    v12 = *(void **)(a1 + 96);
    pvRestartBuffer = plsn;
    v13 = ClfsWriteRestartArea(
            v12,
            &pvRestartBuffer,
            8u,
            (PCLFS_LSN)((unsigned __int64)&plsn & -(__int64)(a3 != 0)),
            0,
            &pcbInfoBuffer,
            &plsnNext);
    v3 = v13;
    if ( a3 )
    {
      if ( v13 >= 0 )
        *(CLFS_LSN *)(a1 + 120) = plsn;
    }
  }
  v22 = 120;
  v14 = (CLFS_INFORMATION *)ExAllocatePoolWithTag(PagedPool, 0x78uLL, 0x20204D43u);
  v15 = v14;
  if ( v14 )
  {
    ClfsGetLogFileInformation(*(PLOG_FILE_OBJECT *)(a1 + 88), v14, &v22);
    ExFreePoolWithTag(v15, 0);
  }
  return (unsigned int)v3;
}
