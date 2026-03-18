/*
 * XREFs of CmpTryToRundownHive @ 0x1400A1F10
 * Callers:
 *     CmpLateUnloadHiveWorker @ 0x14054D5D0 (CmpLateUnloadHiveWorker.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x140040D50 (ExWaitForRundownProtectionRelease.c)
 *     ExRundownCompleted @ 0x14008AE10 (ExRundownCompleted.c)
 *     ExpUnblockPushLock @ 0x1400A20F4 (ExpUnblockPushLock.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     UNLOCK_HIVE_LOAD @ 0x14049BB10 (UNLOCK_HIVE_LOAD.c)
 *     CmpLockRegistryFreezeAware @ 0x14049BC3C (CmpLockRegistryFreezeAware.c)
 *     LOCK_HIVE_LOAD @ 0x14049BCCC (LOCK_HIVE_LOAD.c)
 *     CmpAcquireShutdownRundown @ 0x1404A5B8C (CmpAcquireShutdownRundown.c)
 *     CmpReleaseShutdownRundown @ 0x1404A674C (CmpReleaseShutdownRundown.c)
 *     CmpUnlockRegistry @ 0x1404A8188 (CmpUnlockRegistry.c)
 *     CmpCleanupRollbackPacket @ 0x14054E0A8 (CmpCleanupRollbackPacket.c)
 *     CmpInitializeRollbackPacket @ 0x14054E0E0 (CmpInitializeRollbackPacket.c)
 *     CmpDoesKeyHaveOpenSubkeys @ 0x14054E1F4 (CmpDoesKeyHaveOpenSubkeys.c)
 *     CmShutdownCmRM @ 0x14054E650 (CmShutdownCmRM.c)
 *     CmCloseTmHandle @ 0x14054E94C (CmCloseTmHandle.c)
 *     CmCloseRmHandle @ 0x14054E970 (CmCloseRmHandle.c)
 *     CmpLogTransactionAbortedForRollbackPacket @ 0x14054E994 (CmpLogTransactionAbortedForRollbackPacket.c)
 *     CmSnapshotRMTxArray @ 0x14054F008 (CmSnapshotRMTxArray.c)
 *     CmpAbortRollbackPacket @ 0x1405E9E8C (CmpAbortRollbackPacket.c)
 *     CmObliterateRMTxArray @ 0x1406F706C (CmObliterateRMTxArray.c)
 */

char __fastcall CmpTryToRundownHive(struct _EX_RUNDOWN_REF *a1, _DWORD *a2, _BYTE *a3, char a4)
{
  char v5; // r15
  char v6; // r14
  char *v9; // r8
  char v10; // r12
  bool v11; // zf
  unsigned __int64 Count; // rcx
  __int64 v14; // rcx
  void *v15; // r14
  void *v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rcx
  signed __int32 v20[8]; // [rsp+0h] [rbp-58h] BYREF
  _DWORD v21[14]; // [rsp+20h] [rbp-38h] BYREF

  v5 = 0;
  v6 = 0;
  CmpInitializeRollbackPacket(v21);
  v10 = *v9;
  while ( 1 )
  {
    if ( *a3 )
      CmpReleaseShutdownRundown();
    *a3 = 0;
    if ( !(unsigned __int8)CmpAcquireShutdownRundown() )
      goto LABEL_26;
    v11 = *a2 == 2;
    *a3 = 1;
    if ( !v11 && ((unsigned __int8)CmpDoesKeyHaveOpenSubkeys(a2) || *a2 != 2) )
      goto LABEL_26;
    if ( !v5 )
    {
      a2[1] |= 0x40000u;
      CmpUnlockRegistry();
      UNLOCK_HIVE_LOAD();
      _InterlockedIncrement(&CmpActiveHiveRundownCount);
      ExWaitForRundownProtectionRelease(a1 + 204);
      ExRundownCompleted(a1 + 204);
      v5 = 1;
      LOCK_HIVE_LOAD();
      LOBYTE(v14) = 1;
      goto LABEL_15;
    }
    Count = a1[524].Count;
    if ( !Count || v6 )
      break;
    if ( (int)CmSnapshotRMTxArray(Count, v21) < 0 )
      goto LABEL_26;
    CmpLogTransactionAbortedForRollbackPacket(a2, 11LL, v21);
    CmpUnlockRegistry();
    if ( v21[0] )
    {
      UNLOCK_HIVE_LOAD();
      if ( (int)CmpAbortRollbackPacket(v21) < 0 )
      {
        LOCK_HIVE_LOAD();
        LOBYTE(v19) = 1;
        CmpLockRegistryFreezeAware(v19);
LABEL_26:
        if ( v5 )
        {
          a2[1] &= ~0x40000u;
          _InterlockedExchange64((volatile __int64 *)&a1[204], 0LL);
          if ( !_InterlockedDecrement(&CmpActiveHiveRundownCount) )
          {
            _InterlockedOr(v20, 0);
            if ( CmpActiveHiveRundownEvent )
              ExpUnblockPushLock(&CmpActiveHiveRundownEvent, 0LL, 0LL);
          }
        }
        CmpCleanupRollbackPacket(v21);
        if ( *a3 )
        {
          CmpReleaseShutdownRundown();
          *a3 = 0;
        }
        return 0;
      }
      if ( a4 == 1 )
        CmObliterateRMTxArray(a1[524].Count);
      LOCK_HIVE_LOAD();
      LOBYTE(v14) = 1;
LABEL_15:
      CmpLockRegistryFreezeAware(v14);
    }
    else
    {
      v15 = (void *)CmCloseRmHandle(a1[524].Count, 0LL);
      v16 = (void *)CmCloseTmHandle(a1[524].Count);
      UNLOCK_HIVE_LOAD();
      if ( v15 )
        ZwClose(v15);
      if ( v16 )
        ZwClose(v16);
      LOCK_HIVE_LOAD();
      LOBYTE(v17) = 1;
      CmShutdownCmRM(a1[524].Count, v17);
      LOBYTE(v18) = 1;
      CmpLockRegistryFreezeAware(v18);
      v6 = 1;
    }
  }
  if ( !_InterlockedDecrement(&CmpActiveHiveRundownCount) )
  {
    _InterlockedOr(v20, 0);
    if ( CmpActiveHiveRundownEvent )
      ExpUnblockPushLock(&CmpActiveHiveRundownEvent, 0LL, 0LL);
  }
  CmpCleanupRollbackPacket(v21);
  if ( !v10 )
  {
    CmpReleaseShutdownRundown();
    *a3 = 0;
  }
  return 1;
}
