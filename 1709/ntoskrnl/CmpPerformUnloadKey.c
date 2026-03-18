/*
 * XREFs of CmpPerformUnloadKey @ 0x14046E4FC
 * Callers:
 *     CmUnloadKey @ 0x14046DF74 (CmUnloadKey.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x1400A9850 (ExWaitForRundownProtectionRelease.c)
 *     ExRundownCompleted @ 0x1400ADB30 (ExRundownCompleted.c)
 *     ExfUnblockPushLock @ 0x14017D4F0 (ExfUnblockPushLock.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     CmpFlushNotify @ 0x14046E88C (CmpFlushNotify.c)
 *     CmpSearchForOpenSubKeys @ 0x14046E954 (CmpSearchForOpenSubKeys.c)
 *     CmpFreezeHive @ 0x14046ED40 (CmpFreezeHive.c)
 *     CmpSignalDeferredPosts @ 0x14046FA38 (CmpSignalDeferredPosts.c)
 *     CmpCompleteUnloadKey @ 0x14046FBB4 (CmpCompleteUnloadKey.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x140472EE4 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpReportNotify @ 0x14047C204 (CmpReportNotify.c)
 *     CmpUnlockRegistry @ 0x14047E950 (CmpUnlockRegistry.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140482C20 (CmpPerformKeyBodyDeletionCheck.c)
 *     UNLOCK_HIVE_LOAD @ 0x1404E3B40 (UNLOCK_HIVE_LOAD.c)
 *     CmpLockRegistryFreezeAware @ 0x1404E3B7C (CmpLockRegistryFreezeAware.c)
 *     LOCK_HIVE_LOAD @ 0x1404E3C0C (LOCK_HIVE_LOAD.c)
 *     CmpCleanupRollbackPacket @ 0x1404E691C (CmpCleanupRollbackPacket.c)
 *     CmSnapshotRMTxArray @ 0x140569704 (CmSnapshotRMTxArray.c)
 *     CmpRunDownCmRM @ 0x140597B4C (CmpRunDownCmRM.c)
 *     CmpStopRMLog @ 0x140597D54 (CmpStopRMLog.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x14059E850 (CmpLogTransactionAbortedWithChildName.c)
 *     CmCloseRmHandle @ 0x14059EC4C (CmCloseRmHandle.c)
 *     CmCloseTmHandle @ 0x14059EC70 (CmCloseTmHandle.c)
 *     CmpInvalidateSubtree @ 0x1405A6E98 (CmpInvalidateSubtree.c)
 *     CmpPrepareForSubtreeInvalidation @ 0x1405A6ED8 (CmpPrepareForSubtreeInvalidation.c)
 *     CmpTryAcquireKcbIXLocks @ 0x1405A6F34 (CmpTryAcquireKcbIXLocks.c)
 *     CmpAbortRollbackPacket @ 0x1405F2D18 (CmpAbortRollbackPacket.c)
 *     CmpUnfreezeHive @ 0x14068F084 (CmpUnfreezeHive.c)
 *     CmObliterateRMTxArray @ 0x140693E78 (CmObliterateRMTxArray.c)
 *     CmpLogUnsupportedOperation @ 0x140697FF0 (CmpLogUnsupportedOperation.c)
 */

__int64 __fastcall CmpPerformUnloadKey(__int64 a1, char a2, char a3, __int64 a4)
{
  __int64 v7; // rcx
  _DWORD *v8; // rcx
  __int64 v9; // rsi
  int v10; // edi
  __int64 v11; // r14
  int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v17; // rax
  int v18; // eax
  int v19; // eax
  char v20; // r15
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  void *v24; // rdi
  void *v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // rbx
  __int64 v28; // rcx
  signed __int32 v29[8]; // [rsp+0h] [rbp-60h] BYREF
  int v30; // [rsp+20h] [rbp-40h]
  int v31; // [rsp+30h] [rbp-30h] BYREF
  __int64 v32; // [rsp+38h] [rbp-28h] BYREF
  __int64 v33; // [rsp+40h] [rbp-20h]
  _QWORD v34[3]; // [rsp+48h] [rbp-18h] BYREF

  v34[1] = v34;
  v34[0] = v34;
  v32 = 0LL;
  v33 = 0LL;
  LOCK_HIVE_LOAD();
  LOBYTE(v7) = 1;
  CmpLockRegistryFreezeAware(v7);
  v9 = *(_QWORD *)(a1 + 8);
  v10 = 6;
  v31 = 6;
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
  CmpReportNotify(v9, *(_QWORD *)(v9 + 24), *(_DWORD *)(v9 + 32), 0, 4, (__int64)v34);
  LOBYTE(v13) = 1;
  CmpFlushNotify(a1, v13, v34);
  v8 = *(_DWORD **)(v9 + 24);
  if ( v8 == CmpMasterHive || (*(_DWORD *)(v9 + 176) & 0x40000) == 0 )
  {
    v12 = -1073741811;
    goto LABEL_48;
  }
  if ( (v8[1340] & 4) != 0 )
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
  LOBYTE(v14) = 1;
  v18 = CmpTryAcquireKcbIXLocks(v9, v14, v15, &v32);
  v12 = v18;
  if ( v18 == -1073741267 )
  {
LABEL_63:
    v30 = v32;
    CmpLogTransactionAbortedWithChildName(v9, 0LL, 10LL);
    CmpUnlockRegistry();
    UNLOCK_HIVE_LOAD();
    v10 = 0;
    v31 = 0;
    v12 = CmpAbortRollbackPacket(&v32);
    if ( v12 >= 0 )
      v12 = -1073741267;
    v20 = 0;
    goto LABEL_49;
  }
  if ( v18 < 0 )
  {
LABEL_48:
    v20 = 0;
    goto LABEL_49;
  }
  v19 = CmpPrepareForSubtreeInvalidation(v9, &v32);
  v12 = v19;
  if ( v19 == -1073741267 )
    goto LABEL_63;
  if ( v19 < 0 )
    goto LABEL_48;
  CmpInvalidateSubtree(v9, 1LL);
  CmpFlushNotifiesOnKeyBodyList(v9, 1LL);
LABEL_26:
  *(_DWORD *)(v9 + 4) |= 0x40000u;
  v20 = 1;
  if ( *(_BYTE *)(v11 + 4112) == 1 )
  {
    CmpUnfreezeHive((PVOID)v11);
    ++CmpActiveAppHiveUnloadCount;
  }
  CmpUnlockRegistry();
  UNLOCK_HIVE_LOAD();
  _InterlockedIncrement(&CmpActiveHiveRundownCount);
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(v11 + 2776));
  ExRundownCompleted((PEX_RUNDOWN_REF)(v11 + 2776));
  LOCK_HIVE_LOAD();
  LOBYTE(v21) = 1;
  CmpLockRegistryFreezeAware(v21);
  v23 = *(_QWORD *)(v11 + 5400);
  v31 = 6;
  if ( !v23 )
    goto LABEL_29;
  v12 = CmSnapshotRMTxArray(v23, &v32);
  if ( v12 >= 0 )
  {
    v30 = v32;
    CmpLogTransactionAbortedWithChildName(v9, 0LL, 9LL);
    CmpUnlockRegistry();
    UNLOCK_HIVE_LOAD();
    v10 = 0;
    v31 = 0;
    v12 = CmpAbortRollbackPacket(&v32);
    if ( v12 >= 0 )
    {
      CmpCleanupRollbackPacket(&v32);
      v32 = 0LL;
      v33 = 0LL;
      LOCK_HIVE_LOAD();
      v24 = (void *)CmCloseRmHandle(*(_QWORD *)(v11 + 5400), 0LL);
      v25 = (void *)CmCloseTmHandle(*(_QWORD *)(v11 + 5400));
      UNLOCK_HIVE_LOAD();
      if ( v24 )
        ZwClose(v24);
      if ( v25 )
        ZwClose(v25);
      LOCK_HIVE_LOAD();
      v27 = *(_QWORD *)(v11 + 5400);
      if ( v27 )
      {
        if ( *(_DWORD *)(v27 + 64) )
        {
          _InterlockedDecrement((volatile signed __int32 *)(v27 + 64));
          if ( !*(_DWORD *)(v27 + 64) )
            CmpStopRMLog(v27);
        }
      }
      LOBYTE(v26) = 1;
      CmpRunDownCmRM(v27, v26);
      LOBYTE(v28) = 1;
      CmpLockRegistryFreezeAware(v28);
      v31 = 6;
LABEL_29:
      CmpCompleteUnloadKey(v9, v22, &v31);
      v12 = 0;
      goto LABEL_30;
    }
  }
LABEL_49:
  if ( (v10 & 4) == 0 )
  {
    LOCK_HIVE_LOAD();
    v10 |= 4u;
    v31 = v10;
  }
  if ( (v10 & 2) == 0 )
  {
    LOBYTE(v8) = 1;
    CmpLockRegistryFreezeAware(v8);
    v10 |= 2u;
    v31 = v10;
  }
  if ( v20 )
  {
    _InterlockedExchange64((volatile __int64 *)(v11 + 2776), 0LL);
    *(_DWORD *)(v9 + 4) &= ~0x40000u;
LABEL_30:
    if ( _InterlockedExchangeAdd(&CmpActiveHiveRundownCount, 0xFFFFFFFF) == 1 )
    {
      _InterlockedOr(v29, 0);
      if ( CmpActiveHiveRundownEvent )
        ExfUnblockPushLock(&CmpActiveHiveRundownEvent, 0LL);
    }
    LOBYTE(v10) = v31;
  }
LABEL_13:
  if ( (v10 & 2) != 0 )
    CmpUnlockRegistry();
  if ( (v10 & 4) != 0 )
    UNLOCK_HIVE_LOAD();
  if ( (_QWORD *)v34[0] != v34 )
    CmpSignalDeferredPosts(v34);
  CmpCleanupRollbackPacket(&v32);
  return (unsigned int)v12;
}
