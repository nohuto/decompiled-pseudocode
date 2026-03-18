/*
 * XREFs of CmDeleteKey @ 0x14049FF78
 * Callers:
 *     NtDeleteKey @ 0x14056D9C4 (NtDeleteKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140002440 (CmSiFreeMemory.c)
 *     CmpTransEnlistUowInCmTrans @ 0x14000709C (CmpTransEnlistUowInCmTrans.c)
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     CmpTransEnlistUowInKcb @ 0x14007C9A4 (CmpTransEnlistUowInKcb.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     CmDeleteLayeredKey @ 0x140222964 (CmDeleteLayeredKey.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     CmpLockIXLockExclusive @ 0x1404984A8 (CmpLockIXLockExclusive.c)
 *     CmpLockIXLockIntent @ 0x140498504 (CmpLockIXLockIntent.c)
 *     CmpRundownUnitOfWork @ 0x14049896C (CmpRundownUnitOfWork.c)
 *     CmEqualTrans @ 0x140498AE0 (CmEqualTrans.c)
 *     CmpLockKcbStackExclusive @ 0x14049A938 (CmpLockKcbStackExclusive.c)
 *     CmpDiscardKcb @ 0x14049AB30 (CmpDiscardKcb.c)
 *     CmpLockRegistryExclusive @ 0x14049BC8C (CmpLockRegistryExclusive.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x14049C254 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpGetKeyNodeForKcb @ 0x1404A05A0 (CmpGetKeyNodeForKcb.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1404A5BC8 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpLockRegistry @ 0x1404A71E0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x1404A8188 (CmpUnlockRegistry.c)
 *     CmpLockHashEntryExclusiveByKcb @ 0x1404A8AD0 (CmpLockHashEntryExclusiveByKcb.c)
 *     CmpUnlockKcbStack @ 0x1404A8B74 (CmpUnlockKcbStack.c)
 *     CmpAttachToRegistryProcess @ 0x1404AC4D0 (CmpAttachToRegistryProcess.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1404AECB0 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpSignalDeferredPosts @ 0x1404E21B4 (CmpSignalDeferredPosts.c)
 *     CmpReportNotifyForKcbStack @ 0x1404E25D4 (CmpReportNotifyForKcbStack.c)
 *     CmpFreeKeyByCell @ 0x1405150FC (CmpFreeKeyByCell.c)
 *     CmpCleanUpSubKeyInfo @ 0x140516B80 (CmpCleanUpSubKeyInfo.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x14054BFC8 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpUnlockHashEntryByKcb @ 0x14054DE30 (CmpUnlockHashEntryByKcb.c)
 *     CmpMarkKeyUnbacked @ 0x14054DED8 (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x14054DF64 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmGetVisibleSubkeyCount @ 0x14054EC80 (CmGetVisibleSubkeyCount.c)
 *     CmAddLogForAction @ 0x140576A18 (CmAddLogForAction.c)
 *     CmpAllocateUnitOfWork @ 0x14057D8F0 (CmpAllocateUnitOfWork.c)
 *     CmpCleanupDiscardReplaceContext @ 0x14057DF08 (CmpCleanupDiscardReplaceContext.c)
 *     CmpRollbackTransactionArray @ 0x1406F9C2C (CmpRollbackTransactionArray.c)
 *     CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x1406FAB8C (CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x1406FADDC (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x1406FB1DC (CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpSnapshotTxOwnerArray @ 0x1406FD100 (CmpSnapshotTxOwnerArray.c)
 */

__int64 __fastcall CmDeleteKey(_QWORD *a1)
{
  ULONG_PTR v1; // rsi
  _QWORD *v2; // r15
  char v3; // di
  char v4; // r14
  __int64 UnitOfWork; // r12
  __int64 v6; // r13
  __int64 v7; // rbx
  int started; // edi
  char v9; // di
  char IsKeyDeletedForKeyBody; // al
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r15
  __int64 v14; // rax
  __int64 v15; // rdx
  int *v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rax
  char v22; // bl
  char v23; // r15
  __int64 v24; // rbx
  char v26; // al
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  bool v30; // al
  signed __int64 *v31; // rbx
  char v32; // al
  __int64 v33; // r8
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // rax
  char v37; // [rsp+38h] [rbp-D0h]
  char v38; // [rsp+3Ah] [rbp-CEh]
  char v39; // [rsp+3Bh] [rbp-CDh]
  unsigned int v40; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v41; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v42; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD *v43; // [rsp+50h] [rbp-B8h]
  __int64 v44; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v45; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v46[2]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v47; // [rsp+78h] [rbp-90h] BYREF
  __int64 KeyNodeForKcb; // [rsp+80h] [rbp-88h]
  int v49; // [rsp+88h] [rbp-80h] BYREF
  __int16 v50; // [rsp+8Ch] [rbp-7Ch]
  PPRIVILEGE_SET v51[4]; // [rsp+90h] [rbp-78h] BYREF
  PPRIVILEGE_SET v52[4]; // [rsp+B0h] [rbp-58h] BYREF
  _QWORD v53[4]; // [rsp+D0h] [rbp-38h] BYREF
  _BYTE v54[48]; // [rsp+F0h] [rbp-18h] BYREF

  v1 = 0LL;
  v43 = a1;
  v39 = 0;
  v46[1] = v46;
  v2 = a1;
  v37 = 0;
  v46[0] = v46;
  v3 = 0;
  v4 = 0;
  memset(v51, 0, sizeof(v51));
  WORD1(v51[0]) = -1;
  memset(v52, 0, sizeof(v52));
  WORD1(v52[0]) = -1;
  v38 = 0;
  KeyNodeForKcb = 0LL;
  v47 = 0LL;
  LODWORD(v41) = 0;
  UnitOfWork = 0LL;
  v6 = 0LL;
  v7 = MEMORY[0xFFFFF78000000014];
  v45 = 0xFFFFFFFFLL;
  v42 = 0xFFFFFFFFLL;
  memset(v53, 0, sizeof(v53));
  LODWORD(v53[1]) = -1073741823;
  v53[3] = &v53[2];
  v53[2] = &v53[2];
  CmpAttachToRegistryProcess(v54);
  while ( (CmpShutdownRundown & 1) == 0 )
  {
    if ( v3 )
      CmpLockRegistryExclusive();
    else
      CmpLockRegistry(0LL);
    v1 = v2[1];
    if ( (*(_DWORD *)(*(_QWORD *)(v1 + 24) + 160LL) & 0x100000) != 0 )
    {
      started = -1073741790;
      goto LABEL_103;
    }
    if ( !*(_QWORD *)(v1 + 64) )
    {
      started = -1073741535;
      goto LABEL_106;
    }
    if ( *(_WORD *)(v1 + 58) )
    {
      started = CmDeleteLayeredKey((__int64)v2, (__int64)v46);
      goto LABEL_103;
    }
    started = CmpStartKcbStackForTopLayerKcb(v52, v1);
    if ( started < 0 )
      goto LABEL_108;
    started = CmpStartKcbStackForTopLayerKcb(v51, *(_QWORD *)(v1 + 64));
    if ( started < 0 )
      goto LABEL_106;
    v9 = v39;
    if ( !v39 )
    {
      CmpLockHashEntryExclusiveByKcb(v1);
      v4 = 1;
      CmpLockKcbStackTopExclusiveRestShared((__int64)v51);
      CmpLockKcbStackExclusive((__int64)v52);
      v38 = 1;
    }
    IsKeyDeletedForKeyBody = CmpIsKeyDeletedForKeyBody(v2, 0LL);
    v12 = 0LL;
    if ( IsKeyDeletedForKeyBody )
    {
LABEL_91:
      started = 0;
LABEL_92:
      v22 = 0;
      goto LABEL_32;
    }
    if ( v2[7] || v2[8] )
    {
      started = CmpTransSearchAddTransFromKeyBody(v2, &v47);
      if ( started < 0 )
        goto LABEL_108;
      if ( (*(_DWORD *)(*(_QWORD *)(v1 + 24) + 160LL) & 2) != 0 )
      {
        started = -1072103423;
LABEL_103:
        v22 = 0;
        goto LABEL_32;
      }
      v13 = v47;
      v26 = CmpIsKeyDeletedForKeyBody(v43, v47);
      v12 = 0LL;
      if ( v26 )
        goto LABEL_91;
      if ( !v13 )
      {
        v9 = v39;
        goto LABEL_16;
      }
LABEL_17:
      v15 = *(_QWORD *)(v1 + 232);
      if ( v15 )
      {
        v32 = CmEqualTrans(v13, v15);
        v12 = 0LL;
        if ( !v32 )
        {
          started = -1073741535;
          goto LABEL_92;
        }
      }
      if ( v13 )
      {
        UnitOfWork = CmpAllocateUnitOfWork(v11, v15, 0LL);
        if ( !UnitOfWork )
        {
          started = -1073741670;
          v22 = 0;
          goto LABEL_32;
        }
        v6 = CmpAllocateUnitOfWork(v28, v27, v29);
        if ( !v6 )
        {
          started = -1073741670;
          goto LABEL_31;
        }
        CmpTransEnlistUowInKcb((_QWORD *)UnitOfWork, *(_QWORD *)(v1 + 64));
        started = CmpTransEnlistUowInCmTrans((_QWORD *)UnitOfWork, v13);
        if ( started < 0 )
        {
LABEL_108:
          v22 = 0;
          goto LABEL_32;
        }
        CmpTransEnlistUowInKcb((_QWORD *)v6, v1);
        started = CmpTransEnlistUowInCmTrans((_QWORD *)v6, v13);
        if ( started >= 0 )
        {
          if ( !CmpLockIXLockIntent((unsigned int *)(*(_QWORD *)(v1 + 64) + 240LL), UnitOfWork)
            || !CmpLockIXLockExclusive(v1 + 240, (_QWORD *)v6, 0) )
          {
            started = -1072103423;
            goto LABEL_31;
          }
          v30 = CmpLockIXLockExclusive(v1 + 256, (_QWORD *)v6, 1);
          v12 = 0LL;
          if ( !v30 )
          {
            started = -1072103423;
            goto LABEL_92;
          }
LABEL_22:
          if ( !v39 )
          {
            ExAcquirePushLockSharedEx(*(_QWORD *)(v1 + 24) + 72LL, 0LL);
            v37 = 1;
          }
          LOBYTE(v12) = 1;
          KeyNodeForKcb = CmpGetKeyNodeForKcb(v1, &v45, v12);
          v17 = KeyNodeForKcb;
          if ( (unsigned int)CmGetVisibleSubkeyCount(v1, KeyNodeForKcb, v13) || (*(_BYTE *)(v17 + 2) & 8) != 0 )
          {
            started = -1073741535;
            goto LABEL_31;
          }
          (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v1 + 24) + 16LL))(*(_QWORD *)(v1 + 24), &v45);
          KeyNodeForKcb = 0LL;
          if ( v13 )
          {
            *(_DWORD *)(UnitOfWork + 68) = 3;
            *(_QWORD *)(UnitOfWork + 88) = v1;
            *(_DWORD *)(v6 + 68) = 2;
            *(_QWORD *)(v6 + 80) = UnitOfWork;
            v31 = (signed __int64 *)(*(_QWORD *)(v1 + 24) + 72LL);
            if ( _InterlockedCompareExchange64(v31, 0LL, 17LL) != 17 )
              ExfReleasePushLockShared(v31);
            KeAbPostRelease((ULONG_PTR)v31);
            v22 = 0;
            started = CmAddLogForAction(v6);
            if ( started >= 0 )
            {
              v6 = 0LL;
              UnitOfWork = 0LL;
              CmpReportNotifyForKcbStack(v51, v47, 1LL, v46);
              started = 0;
            }
          }
          else
          {
            v18 = *(_QWORD *)(v1 + 184);
            if ( !v18 || *(_QWORD *)(v18 + 32) == v18 + 32 )
            {
              CmpReportNotifyForKcbStack(v51, 0LL, 1LL, v46);
              started = CmpFreeKeyByCell(*(_QWORD *)(v1 + 24), *(unsigned int *)(v1 + 32));
              if ( started >= 0 )
              {
                CmpFlushNotifiesOnKeyBodyList(v1, 8LL);
                LOBYTE(v19) = 1;
                CmpCleanUpSubKeyInfo(*(_QWORD *)(v1 + 64), v19);
                LOBYTE(v20) = 1;
                v21 = CmpGetKeyNodeForKcb(*(_QWORD *)(v1 + 64), &v42, v20);
                *(_WORD *)(*(_QWORD *)(v1 + 64) + 168LL) = *(_WORD *)(v21 + 52);
                ++*(_QWORD *)(*(_QWORD *)(v1 + 64) + 296LL);
                *(_QWORD *)(v21 + 4) = v7;
                *(_QWORD *)(*(_QWORD *)(v1 + 64) + 160LL) = v7;
                (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(*(_QWORD *)(v1 + 64) + 24LL) + 16LL))(
                  *(_QWORD *)(*(_QWORD *)(v1 + 64) + 24LL),
                  &v42);
                CmpMarkKeyUnbacked(v1);
                CmpDiscardKcb(v1);
                goto LABEL_30;
              }
            }
            else
            {
              started = CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers(v1);
              if ( started >= 0 )
              {
                CmpReportNotifyForKcbStack(v51, 0LL, 1LL, v46);
                started = CmpFreeKeyByCell(*(_QWORD *)(v1 + 24), *(unsigned int *)(v1 + 32));
                if ( started >= 0 )
                {
                  v49 = 8;
                  v50 = 257;
                  CmpEnumerateAllHigherLayerKcbs(
                    v1,
                    (unsigned int)CmpFlushNotifiesPreCallback,
                    (unsigned int)CmpFlushNotifiesPostCallback,
                    (unsigned int)&v49,
                    1,
                    1);
                  CmpFlushNotifiesOnKeyBodyList(v1, 8LL);
                  LOBYTE(v34) = 1;
                  CmpCleanUpSubKeyInfo(*(_QWORD *)(v1 + 64), v34);
                  LOBYTE(v35) = 1;
                  v36 = CmpGetKeyNodeForKcb(*(_QWORD *)(v1 + 64), &v42, v35);
                  *(_WORD *)(*(_QWORD *)(v1 + 64) + 168LL) = *(_WORD *)(v36 + 52);
                  ++*(_QWORD *)(*(_QWORD *)(v1 + 64) + 296LL);
                  *(_QWORD *)(v36 + 4) = v7;
                  *(_QWORD *)(*(_QWORD *)(v1 + 64) + 160LL) = v7;
                  (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(*(_QWORD *)(v1 + 64) + 24LL) + 16LL))(
                    *(_QWORD *)(*(_QWORD *)(v1 + 64) + 24LL),
                    &v42);
                  CmpMarkKeyUnbacked(v1);
                  CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers(v1);
LABEL_30:
                  started = 0;
                }
              }
            }
LABEL_31:
            v22 = v37;
          }
LABEL_32:
          v23 = 1;
          goto LABEL_33;
        }
LABEL_106:
        v22 = 0;
        goto LABEL_32;
      }
      v16 = (int *)(*(_QWORD *)(v1 + 64) + 240LL);
      if ( *v16 >= 0 )
      {
        v16 = (int *)(v1 + 240);
        if ( !*(_DWORD *)(v1 + 240) )
        {
          v16 = (int *)(v1 + 256);
          if ( !*(_DWORD *)(v1 + 256) )
            goto LABEL_22;
        }
      }
      v23 = 0;
      started = CmpSnapshotTxOwnerArray(v16, &v40, &v44);
      if ( started < 0 )
        goto LABEL_103;
      if ( v38 )
      {
        CmpUnlockKcbStack(v52);
        CmpUnlockKcbStack(v51);
        v38 = 0;
      }
      if ( v4 )
        CmpUnlockHashEntryByKcb(v1);
      v4 = 0;
      CmpUnlockRegistry();
      started = CmpRollbackTransactionArray(v40, v44, v33, &v41);
      if ( started < 0 )
      {
        v22 = 0;
        goto LABEL_33;
      }
      v2 = v43;
      v3 = v39;
    }
    else
    {
      v13 = v47;
LABEL_16:
      v14 = *(_QWORD *)(v1 + 184);
      if ( !v14 || *(_QWORD *)(v14 + 32) == v14 + 32 || v9 )
        goto LABEL_17;
      v3 = 1;
      v39 = 1;
      CmpUnlockKcbStack(v52);
      CmpUnlockKcbStack(v51);
      v38 = 0;
      CmpUnlockHashEntryByKcb(v1);
      v4 = 0;
      if ( v52[3] )
        CmSiFreeMemory(v52[3]);
      memset(v52, 0, sizeof(v52));
      WORD1(v52[0]) = -1;
      if ( v51[3] )
        CmSiFreeMemory(v51[3]);
      memset(v51, 0, sizeof(v51));
      WORD1(v51[0]) = -1;
      CmpUnlockRegistry();
      v2 = v43;
    }
  }
  started = -1073741431;
  v23 = 0;
  v22 = 0;
LABEL_33:
  CmpCleanupDiscardReplaceContext(v53);
  if ( KeyNodeForKcb )
    (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v1 + 24) + 16LL))(*(_QWORD *)(v1 + 24), &v45);
  if ( v22 )
  {
    v24 = *(_QWORD *)(v1 + 24);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v24 + 72), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v24 + 72));
    KeAbPostRelease(v24 + 72);
  }
  if ( v6 )
  {
    CmpRundownUnitOfWork((_QWORD *)v6);
    ExFreePoolWithTag((PVOID)v6, 0x77554D43u);
  }
  if ( UnitOfWork )
  {
    CmpRundownUnitOfWork((_QWORD *)UnitOfWork);
    ExFreePoolWithTag((PVOID)UnitOfWork, 0x77554D43u);
  }
  if ( v38 )
  {
    CmpUnlockKcbStack(v52);
    CmpUnlockKcbStack(v51);
  }
  if ( v4 )
    CmpUnlockHashEntryByKcb(v1);
  if ( v52[3] )
    CmSiFreeMemory(v52[3]);
  if ( v51[3] )
    CmSiFreeMemory(v51[3]);
  if ( v23 )
    CmpUnlockRegistry();
  KiUnstackDetachProcess((__int64)v54, 0LL);
  if ( (_QWORD *)v46[0] != v46 )
    CmpSignalDeferredPosts(v46);
  return (unsigned int)started;
}
