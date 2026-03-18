/*
 * XREFs of CmpTryToRundownHive @ 0x14007EC54
 * Callers:
 *     CmpLateUnloadHiveWorker @ 0x1404CC580 (CmpLateUnloadHiveWorker.c)
 * Callees:
 *     ExpUnblockPushLock @ 0x14007EB48 (ExpUnblockPushLock.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     ExWaitForRundownProtectionRelease @ 0x14010EFC0 (ExWaitForRundownProtectionRelease.c)
 *     ExRundownCompleted @ 0x1401161E0 (ExRundownCompleted.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     CmSnapshotRMTxArray @ 0x1404CA4DC (CmSnapshotRMTxArray.c)
 *     CmpLogTransactionAbortedForRollbackPacket @ 0x1404CA598 (CmpLogTransactionAbortedForRollbackPacket.c)
 *     CmCloseRmHandle @ 0x1404CA5B8 (CmCloseRmHandle.c)
 *     CmCloseTmHandle @ 0x1404CA5DC (CmCloseTmHandle.c)
 *     CmShutdownCmRM @ 0x1404CA600 (CmShutdownCmRM.c)
 *     CmpSearchForOpenSubKeys @ 0x1404CAA50 (CmpSearchForOpenSubKeys.c)
 *     CmpCleanupRollbackPacket @ 0x1404CC6FC (CmpCleanupRollbackPacket.c)
 *     CmpInitializeRollbackPacket @ 0x1404CC734 (CmpInitializeRollbackPacket.c)
 *     UNLOCK_HIVE_LOAD @ 0x1404D8520 (UNLOCK_HIVE_LOAD.c)
 *     CmpLockRegistryFreezeAware @ 0x1404D8558 (CmpLockRegistryFreezeAware.c)
 *     LOCK_HIVE_LOAD @ 0x1404D85E4 (LOCK_HIVE_LOAD.c)
 *     CmpUnlockRegistry @ 0x1404FF92C (CmpUnlockRegistry.c)
 *     CmpAbortRollbackPacket @ 0x14059B764 (CmpAbortRollbackPacket.c)
 *     CmObliterateRMTxArray @ 0x140669100 (CmObliterateRMTxArray.c)
 */

char __fastcall CmpTryToRundownHive(struct _EX_RUNDOWN_REF *a1, _DWORD *a2, _BYTE *a3, char a4)
{
  char v5; // r15
  char v6; // r14
  char *v9; // r8
  char v10; // r12
  struct _KTHREAD *CurrentThread; // rax
  bool v12; // zf
  unsigned __int64 Count; // rcx
  __int64 v15; // rcx
  void *v16; // r14
  void *v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  signed __int32 v22[8]; // [rsp+0h] [rbp-58h] BYREF
  _DWORD v23[14]; // [rsp+20h] [rbp-38h] BYREF

  v5 = 0;
  v6 = 0;
  CmpInitializeRollbackPacket(v23);
  v10 = *v9;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( *a3 )
      {
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
        KiLeaveCriticalRegionUnsafe(KeGetCurrentThread());
      }
      CurrentThread = KeGetCurrentThread();
      *a3 = 0;
      --CurrentThread->KernelApcDisable;
      if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
      {
        KiLeaveCriticalRegionUnsafe(KeGetCurrentThread());
LABEL_25:
        if ( v5 )
        {
          a2[1] &= ~0x40000u;
          _InterlockedExchange64((volatile __int64 *)&a1[347], 0LL);
          if ( _InterlockedExchangeAdd(&CmpActiveHiveRundownCount, 0xFFFFFFFF) == 1 )
          {
            _InterlockedOr(v22, 0);
            if ( CmpActiveHiveRundownEvent )
              ExpUnblockPushLock(&CmpActiveHiveRundownEvent, 0LL, 0);
          }
        }
        CmpCleanupRollbackPacket(v23);
        if ( *a3 )
        {
          ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
          KiLeaveCriticalRegionUnsafe(KeGetCurrentThread());
          *a3 = 0;
        }
        return 0;
      }
      v12 = *a2 == 2;
      *a3 = 1;
      if ( !v12 && ((unsigned int)CmpSearchForOpenSubKeys(a2, 0LL, 0LL) || *a2 != 2) )
        goto LABEL_25;
      if ( v5 )
        break;
      a2[1] |= 0x40000u;
      CmpUnlockRegistry();
      UNLOCK_HIVE_LOAD();
      _InterlockedIncrement(&CmpActiveHiveRundownCount);
      ExWaitForRundownProtectionRelease(a1 + 347);
      ExRundownCompleted(a1 + 347);
      v5 = 1;
      LOCK_HIVE_LOAD();
      LOBYTE(v15) = 1;
      CmpLockRegistryFreezeAware(v15);
    }
    Count = a1[675].Count;
    if ( !Count || v6 )
      break;
    if ( (int)CmSnapshotRMTxArray(Count, v23) < 0 )
      goto LABEL_25;
    CmpLogTransactionAbortedForRollbackPacket(a2, 11LL, v23);
    CmpUnlockRegistry();
    if ( v23[0] )
    {
      UNLOCK_HIVE_LOAD();
      if ( (int)CmpAbortRollbackPacket(v23) < 0 )
      {
        LOCK_HIVE_LOAD();
        LOBYTE(v21) = 1;
        CmpLockRegistryFreezeAware(v21);
        goto LABEL_25;
      }
      if ( a4 == 1 )
        CmObliterateRMTxArray(a1[675].Count);
      LOCK_HIVE_LOAD();
      LOBYTE(v20) = 1;
      CmpLockRegistryFreezeAware(v20);
    }
    else
    {
      v16 = (void *)CmCloseRmHandle(a1[675].Count, 0LL);
      v17 = (void *)CmCloseTmHandle(a1[675].Count);
      UNLOCK_HIVE_LOAD();
      if ( v16 )
        ZwClose(v16);
      if ( v17 )
        ZwClose(v17);
      LOCK_HIVE_LOAD();
      LOBYTE(v18) = 1;
      CmShutdownCmRM(a1[675].Count, v18);
      LOBYTE(v19) = 1;
      CmpLockRegistryFreezeAware(v19);
      v6 = 1;
    }
  }
  if ( !_InterlockedDecrement(&CmpActiveHiveRundownCount) )
  {
    _InterlockedOr(v22, 0);
    if ( CmpActiveHiveRundownEvent )
      ExpUnblockPushLock(&CmpActiveHiveRundownEvent, 0LL, 0);
  }
  CmpCleanupRollbackPacket(v23);
  if ( !v10 )
  {
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KiLeaveCriticalRegionUnsafe(KeGetCurrentThread());
    *a3 = 0;
  }
  return 1;
}
