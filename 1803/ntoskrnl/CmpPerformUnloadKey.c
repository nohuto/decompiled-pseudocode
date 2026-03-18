/*
 * XREFs of CmpPerformUnloadKey @ 0x14054D0B4
 * Callers:
 *     CmUnloadKey @ 0x14054CB34 (CmUnloadKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140002440 (CmSiFreeMemory.c)
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     ExWaitForRundownProtectionRelease @ 0x140040D50 (ExWaitForRundownProtectionRelease.c)
 *     ExRundownCompleted @ 0x14008AE10 (ExRundownCompleted.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ExfUnblockPushLock @ 0x1401A70F0 (ExfUnblockPushLock.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     UNLOCK_HIVE_LOAD @ 0x14049BB10 (UNLOCK_HIVE_LOAD.c)
 *     CmpLockRegistryFreezeAware @ 0x14049BC3C (CmpLockRegistryFreezeAware.c)
 *     LOCK_HIVE_LOAD @ 0x14049BCCC (LOCK_HIVE_LOAD.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1404A5BC8 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpUnlockRegistry @ 0x1404A8188 (CmpUnlockRegistry.c)
 *     CmpAttachToRegistryProcess @ 0x1404AC4D0 (CmpAttachToRegistryProcess.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1404AD468 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpSignalDeferredPosts @ 0x1404E21B4 (CmpSignalDeferredPosts.c)
 *     CmpReportNotifyForKcbStack @ 0x1404E25D4 (CmpReportNotifyForKcbStack.c)
 *     CmpFreezeHive @ 0x14054CA18 (CmpFreezeHive.c)
 *     CmpCompleteUnloadKey @ 0x14054D8E8 (CmpCompleteUnloadKey.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x14054DF64 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpCleanupRollbackPacket @ 0x14054E0A8 (CmpCleanupRollbackPacket.c)
 *     CmpFlushNotify @ 0x14054E0F0 (CmpFlushNotify.c)
 *     CmpDoesKeyHaveOpenSubkeys @ 0x14054E1F4 (CmpDoesKeyHaveOpenSubkeys.c)
 *     CmpRunDownCmRM @ 0x14054E698 (CmpRunDownCmRM.c)
 *     CmpStopRMLog @ 0x14054E8A0 (CmpStopRMLog.c)
 *     CmCloseTmHandle @ 0x14054E94C (CmCloseTmHandle.c)
 *     CmCloseRmHandle @ 0x14054E970 (CmCloseRmHandle.c)
 *     CmSnapshotRMTxArray @ 0x14054F008 (CmSnapshotRMTxArray.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x140583DF4 (CmpLogTransactionAbortedWithChildName.c)
 *     CmpAbortRollbackPacket @ 0x1405E9E8C (CmpAbortRollbackPacket.c)
 *     CmpTryAcquireKcbIXLocks @ 0x1406117BC (CmpTryAcquireKcbIXLocks.c)
 *     CmpPrepareForSubtreeInvalidation @ 0x140614070 (CmpPrepareForSubtreeInvalidation.c)
 *     CmpInvalidateSubtree @ 0x14061445C (CmpInvalidateSubtree.c)
 *     CmpUnfreezeHive @ 0x1406F326C (CmpUnfreezeHive.c)
 *     CmObliterateRMTxArray @ 0x1406F706C (CmObliterateRMTxArray.c)
 *     CmpLogUnsupportedOperation @ 0x1406FB130 (CmpLogUnsupportedOperation.c)
 */

__int64 __fastcall CmpPerformUnloadKey(__int64 a1, char a2, char a3, __int64 a4)
{
  __int64 v7; // rdx
  _DWORD *v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rsi
  int v12; // edi
  __int64 v13; // r14
  int v14; // ebx
  __int64 v15; // rdx
  __int64 v17; // rax
  int v18; // eax
  int v19; // eax
  char v20; // r15
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  void *v30; // rdi
  void *v31; // rbx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rdx
  __int64 v37; // rbx
  __int64 v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  signed __int32 v43[8]; // [rsp+0h] [rbp-99h] BYREF
  int v44; // [rsp+20h] [rbp-79h]
  char v45; // [rsp+30h] [rbp-69h]
  int v46; // [rsp+34h] [rbp-65h] BYREF
  __int64 v47; // [rsp+38h] [rbp-61h] BYREF
  __int64 v48; // [rsp+40h] [rbp-59h]
  _QWORD *v49[2]; // [rsp+48h] [rbp-51h] BYREF
  __int64 v50; // [rsp+58h] [rbp-41h]
  PPRIVILEGE_SET v51[4]; // [rsp+60h] [rbp-39h] BYREF
  _BYTE v52[48]; // [rsp+80h] [rbp-19h] BYREF

  v50 = a4;
  v49[1] = v49;
  v45 = 0;
  v49[0] = v49;
  v47 = 0LL;
  v48 = 0LL;
  memset(v51, 0, sizeof(v51));
  WORD1(v51[0]) = -1;
  LOCK_HIVE_LOAD();
  CmpLockRegistryFreezeAware(1);
  v11 = *(_QWORD *)(a1 + 8);
  v12 = 6;
  v46 = 6;
  v13 = *(_QWORD *)(v11 + 24);
  if ( (*(_DWORD *)(v11 + 4) & 0x80u) != 0 )
    goto LABEL_60;
  v14 = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
  if ( v14 < 0 )
    goto LABEL_53;
  if ( (*(_DWORD *)(v11 + 4) & 0x40000) != 0 )
  {
    v14 = -1073740763;
    goto LABEL_53;
  }
  if ( *(_BYTE *)(v13 + 2936) && ((a2 & 1) == 0 || (*(_DWORD *)(v13 + 4152) & 0x20) == 0) )
  {
    v14 = -1073741431;
    goto LABEL_53;
  }
  if ( (int)CmpStartKcbStackForTopLayerKcb((__int64)v51, v11) < 0 )
  {
    v14 = -1073741670;
    goto LABEL_53;
  }
  CmpReportNotifyForKcbStack((__int64)v51, 0, 4, (__int64)v49);
  LOBYTE(v15) = 1;
  CmpFlushNotify(a1, v15, v49);
  v8 = *(_DWORD **)(v11 + 24);
  if ( v8 == CmpMasterHive || (*(_DWORD *)(v11 + 176) & 0x40000) == 0 )
  {
    v14 = -1073741811;
    goto LABEL_53;
  }
  if ( (v8[1038] & 4) != 0 )
  {
LABEL_60:
    v14 = -1073741790;
    goto LABEL_53;
  }
  if ( (a2 & 1) == 0 )
  {
    if ( (unsigned __int8)CmpDoesKeyHaveOpenSubkeys(v11) || *(_DWORD *)v11 != 2 )
    {
      if ( a3 )
      {
        v14 = CmpFreezeHive(v11, v50);
        if ( v14 >= 0 )
        {
          v14 = 259;
          goto LABEL_14;
        }
        goto LABEL_53;
      }
      goto LABEL_52;
    }
    goto LABEL_29;
  }
  v17 = *(_QWORD *)(v11 + 184);
  if ( v17 && *(_QWORD *)(v17 + 32) != v17 + 32 )
  {
    CmpLogUnsupportedOperation(3LL);
LABEL_52:
    v14 = -1073741535;
    goto LABEL_53;
  }
  LOBYTE(v7) = 1;
  v18 = CmpTryAcquireKcbIXLocks(v11, v7, v9, &v47);
  v14 = v18;
  if ( v18 == -1073741267 )
  {
LABEL_69:
    v44 = v47;
    CmpLogTransactionAbortedWithChildName(v11, 0LL, 10LL);
    CmpUnlockRegistry();
    UNLOCK_HIVE_LOAD(v40, v39, v41, v42);
    v12 = 0;
    v46 = 0;
    v14 = CmpAbortRollbackPacket(&v47);
    if ( v14 >= 0 )
      v14 = -1073741267;
    v20 = 0;
    goto LABEL_54;
  }
  if ( v18 < 0 )
  {
LABEL_53:
    v20 = v45;
    goto LABEL_54;
  }
  v19 = CmpPrepareForSubtreeInvalidation(v11, &v47);
  v14 = v19;
  if ( v19 == -1073741267 )
    goto LABEL_69;
  if ( v19 < 0 )
    goto LABEL_53;
  CmpInvalidateSubtree(v11, 1LL);
  CmpFlushNotifiesOnKeyBodyList(v11, 1LL);
LABEL_29:
  *(_DWORD *)(v11 + 4) |= 0x40000u;
  v20 = 1;
  if ( *(_BYTE *)(v13 + 2936) == 1 )
  {
    CmpUnfreezeHive((PVOID)v13);
    ++CmpActiveAppHiveUnloadCount;
  }
  CmpUnlockRegistry();
  UNLOCK_HIVE_LOAD(v22, v21, v23, v24);
  _InterlockedIncrement(&CmpActiveHiveRundownCount);
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(v13 + 1632));
  ExRundownCompleted((PEX_RUNDOWN_REF)(v13 + 1632));
  LOCK_HIVE_LOAD();
  CmpLockRegistryFreezeAware(1);
  v25 = *(_QWORD *)(v13 + 4192);
  v46 = 6;
  if ( !v25 )
    goto LABEL_45;
  v14 = CmSnapshotRMTxArray(v25, &v47);
  if ( v14 >= 0 )
  {
    v44 = v47;
    CmpLogTransactionAbortedWithChildName(v11, 0LL, 9LL);
    CmpUnlockRegistry();
    UNLOCK_HIVE_LOAD(v27, v26, v28, v29);
    v12 = 0;
    v46 = 0;
    v14 = CmpAbortRollbackPacket(&v47);
    if ( v14 >= 0 )
    {
      CmpCleanupRollbackPacket(&v47);
      v47 = 0LL;
      v48 = 0LL;
      if ( v45 )
        CmObliterateRMTxArray(*(_QWORD *)(v13 + 4192));
      LOCK_HIVE_LOAD();
      v30 = (void *)CmCloseRmHandle(*(_QWORD *)(v13 + 4192), 0LL);
      v31 = (void *)CmCloseTmHandle(*(_QWORD *)(v13 + 4192));
      UNLOCK_HIVE_LOAD(v33, v32, v34, v35);
      if ( v30 )
        ZwClose(v30);
      if ( v31 )
        ZwClose(v31);
      LOCK_HIVE_LOAD();
      v37 = *(_QWORD *)(v13 + 4192);
      if ( v37 )
      {
        if ( *(_DWORD *)(v37 + 64) )
        {
          _InterlockedDecrement((volatile signed __int32 *)(v37 + 64));
          if ( !*(_DWORD *)(v37 + 64) )
            CmpStopRMLog(v37);
        }
      }
      LOBYTE(v36) = 1;
      CmpRunDownCmRM(v37, v36);
      CmpLockRegistryFreezeAware(1);
      v46 = 6;
LABEL_45:
      CmpAttachToRegistryProcess((__int64)v52);
      CmpCompleteUnloadKey(v11, v38, &v46);
      KiUnstackDetachProcess((__int64)v52, 0LL);
      v14 = 0;
      goto LABEL_46;
    }
  }
LABEL_54:
  if ( (v12 & 4) == 0 )
  {
    LOCK_HIVE_LOAD();
    v12 |= 4u;
    v46 = v12;
  }
  if ( (v12 & 2) == 0 )
  {
    CmpLockRegistryFreezeAware(1);
    v12 |= 2u;
    v46 = v12;
  }
  if ( v20 )
  {
    _InterlockedExchange64((volatile __int64 *)(v13 + 1632), 0LL);
    *(_DWORD *)(v11 + 4) &= ~0x40000u;
LABEL_46:
    if ( _InterlockedExchangeAdd(&CmpActiveHiveRundownCount, 0xFFFFFFFF) == 1 )
    {
      _InterlockedOr(v43, 0);
      if ( CmpActiveHiveRundownEvent )
        ExfUnblockPushLock(&CmpActiveHiveRundownEvent, 0LL);
    }
    LOBYTE(v12) = v46;
  }
LABEL_14:
  if ( (v12 & 2) != 0 )
    CmpUnlockRegistry();
  if ( (v12 & 4) != 0 )
    UNLOCK_HIVE_LOAD((__int64)v8, v7, v9, v10);
  if ( v49[0] != v49 )
    CmpSignalDeferredPosts(v49);
  if ( v51[3] )
    CmSiFreeMemory(v51[3]);
  CmpCleanupRollbackPacket(&v47);
  return (unsigned int)v14;
}
