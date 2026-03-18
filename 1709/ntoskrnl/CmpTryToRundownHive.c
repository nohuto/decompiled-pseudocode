/*
 * XREFs of CmpTryToRundownHive @ 0x1400AFAE0
 * Callers:
 *     CmpLateUnloadHiveWorker @ 0x1404E67A0 (CmpLateUnloadHiveWorker.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     ExWaitForRundownProtectionRelease @ 0x1400A9850 (ExWaitForRundownProtectionRelease.c)
 *     ExRundownCompleted @ 0x1400ADB30 (ExRundownCompleted.c)
 *     ExpUnblockPushLock @ 0x1400BBEE8 (ExpUnblockPushLock.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     CmpSearchForOpenSubKeys @ 0x14046E954 (CmpSearchForOpenSubKeys.c)
 *     CmpUnlockRegistry @ 0x14047E950 (CmpUnlockRegistry.c)
 *     UNLOCK_HIVE_LOAD @ 0x1404E3B40 (UNLOCK_HIVE_LOAD.c)
 *     CmpLockRegistryFreezeAware @ 0x1404E3B7C (CmpLockRegistryFreezeAware.c)
 *     LOCK_HIVE_LOAD @ 0x1404E3C0C (LOCK_HIVE_LOAD.c)
 *     CmpCleanupRollbackPacket @ 0x1404E691C (CmpCleanupRollbackPacket.c)
 *     CmpInitializeRollbackPacket @ 0x1404E6954 (CmpInitializeRollbackPacket.c)
 *     CmSnapshotRMTxArray @ 0x140569704 (CmSnapshotRMTxArray.c)
 *     CmShutdownCmRM @ 0x140597B04 (CmShutdownCmRM.c)
 *     CmCloseRmHandle @ 0x14059EC4C (CmCloseRmHandle.c)
 *     CmCloseTmHandle @ 0x14059EC70 (CmCloseTmHandle.c)
 *     CmpLogTransactionAbortedForRollbackPacket @ 0x14059EFD4 (CmpLogTransactionAbortedForRollbackPacket.c)
 *     CmpAbortRollbackPacket @ 0x1405F2D18 (CmpAbortRollbackPacket.c)
 *     CmObliterateRMTxArray @ 0x140693E78 (CmObliterateRMTxArray.c)
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
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      }
      CurrentThread = KeGetCurrentThread();
      *a3 = 0;
      --CurrentThread->KernelApcDisable;
      if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
      {
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
LABEL_25:
        if ( v5 )
        {
          a2[1] &= ~0x40000u;
          _InterlockedExchange64((volatile __int64 *)&a1[347], 0LL);
          if ( _InterlockedExchangeAdd(&CmpActiveHiveRundownCount, 0xFFFFFFFF) == 1 )
          {
            _InterlockedOr(v22, 0);
            if ( CmpActiveHiveRundownEvent )
              ExpUnblockPushLock(&CmpActiveHiveRundownEvent, 0LL, 0LL);
          }
        }
        CmpCleanupRollbackPacket(v23);
        if ( *a3 )
        {
          ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
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
      ExpUnblockPushLock(&CmpActiveHiveRundownEvent, 0LL, 0LL);
  }
  CmpCleanupRollbackPacket(v23);
  if ( !v10 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    *a3 = 0;
  }
  return 1;
}
