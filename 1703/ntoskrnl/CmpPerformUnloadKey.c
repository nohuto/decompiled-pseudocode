/*
 * XREFs of CmpPerformUnloadKey @ 0x1404CB738
 * Callers:
 *     CmUnloadKey @ 0x1404CB114 (CmUnloadKey.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x14010EFC0 (ExWaitForRundownProtectionRelease.c)
 *     ExRundownCompleted @ 0x1401161E0 (ExRundownCompleted.c)
 *     ExfUnblockPushLock @ 0x14017DAD0 (ExfUnblockPushLock.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x14045E258 (CmpLogTransactionAbortedWithChildName.c)
 *     CmpReportNotify @ 0x14048CFF4 (CmpReportNotify.c)
 *     CmSnapshotRMTxArray @ 0x1404CA4DC (CmSnapshotRMTxArray.c)
 *     CmCloseRmHandle @ 0x1404CA5B8 (CmCloseRmHandle.c)
 *     CmCloseTmHandle @ 0x1404CA5DC (CmCloseTmHandle.c)
 *     CmpRunDownCmRM @ 0x1404CA648 (CmpRunDownCmRM.c)
 *     CmpStopRMLog @ 0x1404CA850 (CmpStopRMLog.c)
 *     CmpFreezeHive @ 0x1404CA998 (CmpFreezeHive.c)
 *     CmpSearchForOpenSubKeys @ 0x1404CAA50 (CmpSearchForOpenSubKeys.c)
 *     CmpEnumerateAllOpenSubKeys @ 0x1404CAAE4 (CmpEnumerateAllOpenSubKeys.c)
 *     CmpFlushNotify @ 0x1404CB670 (CmpFlushNotify.c)
 *     CmpCleanupRollbackPacket @ 0x1404CC6FC (CmpCleanupRollbackPacket.c)
 *     CmpCompleteUnloadKey @ 0x1404CD454 (CmpCompleteUnloadKey.c)
 *     CmpSignalDeferredPosts @ 0x1404CE014 (CmpSignalDeferredPosts.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x1404D1090 (CmpFlushNotifiesOnKeyBodyList.c)
 *     UNLOCK_HIVE_LOAD @ 0x1404D8520 (UNLOCK_HIVE_LOAD.c)
 *     CmpLockRegistryFreezeAware @ 0x1404D8558 (CmpLockRegistryFreezeAware.c)
 *     LOCK_HIVE_LOAD @ 0x1404D85E4 (LOCK_HIVE_LOAD.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1404FCE78 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpUnlockRegistry @ 0x1404FF92C (CmpUnlockRegistry.c)
 *     CmpTryAcquireKcbIXLocks @ 0x140585FC8 (CmpTryAcquireKcbIXLocks.c)
 *     CmpPrepareForSubtreeInvalidation @ 0x14058652C (CmpPrepareForSubtreeInvalidation.c)
 *     CmpAbortRollbackPacket @ 0x14059B764 (CmpAbortRollbackPacket.c)
 *     CmpUnfreezeHive @ 0x14066575C (CmpUnfreezeHive.c)
 *     CmObliterateRMTxArray @ 0x140669100 (CmObliterateRMTxArray.c)
 *     CmpLogUnsupportedOperation @ 0x14066DAD0 (CmpLogUnsupportedOperation.c)
 */

__int64 __fastcall CmpPerformUnloadKey(__int64 a1, char a2, char a3, void *a4)
{
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rsi
  int v10; // edi
  __int64 v11; // r14
  int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // r9
  int v20; // eax
  char v21; // r15
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r9
  __int64 v27; // rcx
  void *v28; // rdi
  char v29; // dl
  void *v30; // rbx
  __int64 v31; // rcx
  __int64 v32; // rbx
  __int64 v33; // rcx
  signed __int32 v34[8]; // [rsp+0h] [rbp-60h] BYREF
  int v35; // [rsp+30h] [rbp-30h] BYREF
  __int64 v36; // [rsp+38h] [rbp-28h] BYREF
  __int64 v37; // [rsp+40h] [rbp-20h]
  __int64 v38[3]; // [rsp+48h] [rbp-18h] BYREF

  v38[1] = (__int64)v38;
  v38[0] = (__int64)v38;
  v36 = 0LL;
  v37 = 0LL;
  LOCK_HIVE_LOAD(a1);
  LOBYTE(v7) = 1;
  CmpLockRegistryFreezeAware(v7);
  v9 = *(_QWORD *)(a1 + 8);
  v10 = 6;
  v35 = 6;
  v11 = *(_QWORD *)(v9 + 24);
  if ( (*(_DWORD *)(v9 + 4) & 0x80u) != 0 )
    goto LABEL_47;
  v12 = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
  if ( v12 < 0 )
    goto LABEL_48;
  if ( (*(_DWORD *)(v9 + 4) & 0x40000) != 0 )
  {
    v12 = -1073740763;
    goto LABEL_48;
  }
  if ( *(_BYTE *)(v11 + 4112) && ((a2 & 1) == 0 || (*(_DWORD *)(v11 + 5360) & 0x20) == 0) )
  {
    v12 = -1073741431;
    goto LABEL_48;
  }
  CmpReportNotify(v9, *(_QWORD *)(v9 + 24), *(_DWORD *)(v9 + 32), 0LL, 4, (__int64)v38);
  LOBYTE(v13) = 1;
  CmpFlushNotify(a1, v13, v38);
  v8 = *(_QWORD *)(v9 + 24);
  if ( v8 == CmpMasterHive || (*(_DWORD *)(v9 + 176) & 0x40000) == 0 )
  {
    v12 = -1073741811;
    goto LABEL_48;
  }
  if ( (*(_DWORD *)(v8 + 5360) & 4) != 0 )
  {
LABEL_47:
    v12 = -1073741790;
    goto LABEL_48;
  }
  if ( (a2 & 1) == 0 )
  {
    if ( (unsigned int)CmpSearchForOpenSubKeys(v9, 0LL, 0LL) || *(_DWORD *)v9 != 2 )
    {
      if ( a3 )
      {
        v12 = CmpFreezeHive(v9, a4);
        if ( v12 >= 0 )
        {
          v12 = 259;
          goto LABEL_13;
        }
        goto LABEL_48;
      }
      goto LABEL_60;
    }
    goto LABEL_26;
  }
  v17 = *(_QWORD *)(v9 + 184);
  if ( v17 && *(_QWORD *)(v17 + 32) != v17 + 32 )
  {
    CmpLogUnsupportedOperation(3LL);
LABEL_60:
    v12 = -1073741535;
    goto LABEL_48;
  }
  v18 = CmpTryAcquireKcbIXLocks(v9, v14, v15, &v36);
  v12 = v18;
  if ( v18 == -1073741267 )
  {
LABEL_63:
    CmpLogTransactionAbortedWithChildName(v9, 0LL, 0xAu, v19, v36);
    CmpUnlockRegistry();
    UNLOCK_HIVE_LOAD();
    v10 = 0;
    v35 = 0;
    v12 = CmpAbortRollbackPacket(&v36);
    if ( v12 >= 0 )
      v12 = -1073741267;
    v21 = 0;
    goto LABEL_49;
  }
  if ( v18 < 0 )
  {
LABEL_48:
    v21 = 0;
    goto LABEL_49;
  }
  v20 = CmpPrepareForSubtreeInvalidation(v9, &v36);
  v12 = v20;
  if ( v20 == -1073741267 )
    goto LABEL_63;
  if ( v20 < 0 )
    goto LABEL_48;
  CmpEnumerateAllOpenSubKeys(v9, 0, (__int64)CmpInvalidateSubtreeWorker, 0LL);
  CmpFlushNotifiesOnKeyBodyList(v9, 1LL);
LABEL_26:
  *(_DWORD *)(v9 + 4) |= 0x40000u;
  v21 = 1;
  if ( *(_BYTE *)(v11 + 4112) == 1 )
  {
    CmpUnfreezeHive(v11);
    ++CmpActiveAppHiveUnloadCount;
  }
  CmpUnlockRegistry();
  UNLOCK_HIVE_LOAD();
  _InterlockedIncrement(&CmpActiveHiveRundownCount);
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(v11 + 2776));
  ExRundownCompleted((PEX_RUNDOWN_REF)(v11 + 2776));
  LOCK_HIVE_LOAD(v22);
  LOBYTE(v23) = 1;
  CmpLockRegistryFreezeAware(v23);
  v25 = *(_QWORD *)(v11 + 5400);
  v35 = 6;
  if ( !v25 )
    goto LABEL_29;
  v12 = CmSnapshotRMTxArray(v25, &v36);
  if ( v12 >= 0 )
  {
    CmpLogTransactionAbortedWithChildName(v9, 0LL, 9u, v26, v36);
    CmpUnlockRegistry();
    UNLOCK_HIVE_LOAD();
    v10 = 0;
    v35 = 0;
    v12 = CmpAbortRollbackPacket(&v36);
    if ( v12 >= 0 )
    {
      CmpCleanupRollbackPacket(&v36);
      v36 = 0LL;
      v37 = 0LL;
      LOCK_HIVE_LOAD(v27);
      v28 = (void *)CmCloseRmHandle(*(_QWORD *)(v11 + 5400), 0);
      v30 = (void *)CmCloseTmHandle(*(_QWORD *)(v11 + 5400), v29);
      UNLOCK_HIVE_LOAD();
      if ( v28 )
        ZwClose(v28);
      if ( v30 )
        ZwClose(v30);
      LOCK_HIVE_LOAD(v31);
      v32 = *(_QWORD *)(v11 + 5400);
      if ( v32 )
      {
        if ( *(_DWORD *)(v32 + 64) )
        {
          _InterlockedDecrement((volatile signed __int32 *)(v32 + 64));
          if ( !*(_DWORD *)(v32 + 64) )
            CmpStopRMLog(v32);
        }
      }
      CmpRunDownCmRM(v32, 1);
      LOBYTE(v33) = 1;
      CmpLockRegistryFreezeAware(v33);
      v35 = 6;
LABEL_29:
      CmpCompleteUnloadKey(v9, v24, &v35);
      v12 = 0;
      goto LABEL_30;
    }
  }
LABEL_49:
  if ( (v10 & 4) == 0 )
  {
    LOCK_HIVE_LOAD(v8);
    v10 |= 4u;
    v35 = v10;
  }
  if ( (v10 & 2) == 0 )
  {
    LOBYTE(v8) = 1;
    CmpLockRegistryFreezeAware(v8);
    v10 |= 2u;
    v35 = v10;
  }
  if ( v21 )
  {
    _InterlockedExchange64((volatile __int64 *)(v11 + 2776), 0LL);
    *(_DWORD *)(v9 + 4) &= ~0x40000u;
LABEL_30:
    if ( _InterlockedExchangeAdd(&CmpActiveHiveRundownCount, 0xFFFFFFFF) == 1 )
    {
      _InterlockedOr(v34, 0);
      if ( CmpActiveHiveRundownEvent )
        ExfUnblockPushLock(&CmpActiveHiveRundownEvent, 0LL);
    }
    LOBYTE(v10) = v35;
  }
LABEL_13:
  if ( (v10 & 2) != 0 )
    CmpUnlockRegistry();
  if ( (v10 & 4) != 0 )
    UNLOCK_HIVE_LOAD();
  if ( (__int64 *)v38[0] != v38 )
    CmpSignalDeferredPosts(v38);
  CmpCleanupRollbackPacket(&v36);
  return (unsigned int)v12;
}
