/*
 * XREFs of CmDeleteKey @ 0x1404CF840
 * Callers:
 *     NtDeleteKey @ 0x1404CF43C (NtDeleteKey.c)
 * Callees:
 *     MiDeleteSubsection @ 0x14002D920 (MiDeleteSubsection.c)
 *     CmpTransEnlistUowInCmTrans @ 0x14007FCDC (CmpTransEnlistUowInCmTrans.c)
 *     HvpGetCellContextReinitialize @ 0x14008D150 (HvpGetCellContextReinitialize.c)
 *     ExAcquireResourceSharedLite @ 0x14008F530 (ExAcquireResourceSharedLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     CmpTransEnlistUowInKcb @ 0x14011E248 (CmpTransEnlistUowInKcb.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memset @ 0x140192D80 (memset.c)
 *     CmDeleteLayeredKey @ 0x1401E0660 (CmDeleteLayeredKey.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     CmAddLogForAction @ 0x14042C988 (CmAddLogForAction.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x14042DC14 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpAllocateUnitOfWork @ 0x1404589B0 (CmpAllocateUnitOfWork.c)
 *     CmpReportNotify @ 0x14048CFF4 (CmpReportNotify.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x1404917CC (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpSignalDeferredPosts @ 0x1404CE014 (CmpSignalDeferredPosts.c)
 *     CmpLockIXLockExclusive @ 0x1404CE168 (CmpLockIXLockExclusive.c)
 *     CmpLockIXLockIntent @ 0x1404CE1C4 (CmpLockIXLockIntent.c)
 *     CmpRundownUnitOfWork @ 0x1404CE510 (CmpRundownUnitOfWork.c)
 *     CmEqualTrans @ 0x1404CE678 (CmEqualTrans.c)
 *     CmpGetKeyNodeForKcb @ 0x1404CFE00 (CmpGetKeyNodeForKcb.c)
 *     CmpUnlockHashEntryByKcb @ 0x1404CFE70 (CmpUnlockHashEntryByKcb.c)
 *     CmpCleanupDiscardReplaceContext @ 0x1404CFF1C (CmpCleanupDiscardReplaceContext.c)
 *     CmGetVisibleSubkeyCount @ 0x1404CFF48 (CmGetVisibleSubkeyCount.c)
 *     CmpLockKcbStackExclusive @ 0x1404CFFD8 (CmpLockKcbStackExclusive.c)
 *     CmpLockHashEntryExclusiveByKcb @ 0x1404D001C (CmpLockHashEntryExclusiveByKcb.c)
 *     CmpDiscardKcb @ 0x1404D00DC (CmpDiscardKcb.c)
 *     CmpMarkKeyUnbacked @ 0x1404D0304 (CmpMarkKeyUnbacked.c)
 *     CmpCleanUpSubKeyInfo @ 0x1404D0ED8 (CmpCleanUpSubKeyInfo.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x1404D1090 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpFreeKeyByCell @ 0x1404D1394 (CmpFreeKeyByCell.c)
 *     CmpLockRegistryExclusive @ 0x1404D85A8 (CmpLockRegistryExclusive.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1404FC480 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpLockRegistry @ 0x1404FF6F0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x1404FF92C (CmpUnlockRegistry.c)
 *     CmpUnlockKcbStack @ 0x1404FF9E0 (CmpUnlockKcbStack.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140501430 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpRollbackTransactionArray @ 0x14066BB50 (CmpRollbackTransactionArray.c)
 *     CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x14066D548 (CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x14066D79C (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x14066DB80 (CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpSnapshotTxOwnerArray @ 0x14067355C (CmpSnapshotTxOwnerArray.c)
 */

__int64 __fastcall CmDeleteKey(_QWORD *a1)
{
  char v2; // r14
  _QWORD *UnitOfWork; // r13
  _QWORD *v4; // r15
  ULONG_PTR v5; // rsi
  __int64 v6; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rcx
  int started; // edi
  __int64 v10; // r8
  __int64 v11; // r14
  __int64 v12; // rax
  __int64 v13; // rdx
  int *v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // rax
  char v19; // r14
  char v20; // bl
  ULONG v22; // edx
  __int64 v23; // r8
  __int64 v24; // r8
  __int64 v25; // rax
  char v26; // [rsp+30h] [rbp-89h]
  char v27; // [rsp+31h] [rbp-88h]
  BOOLEAN v28; // [rsp+32h] [rbp-87h]
  unsigned int v29; // [rsp+34h] [rbp-85h] BYREF
  int v30; // [rsp+38h] [rbp-81h] BYREF
  __int64 v31; // [rsp+40h] [rbp-79h] BYREF
  _QWORD *v32[2]; // [rsp+48h] [rbp-71h] BYREF
  _BYTE v33[8]; // [rsp+58h] [rbp-61h] BYREF
  __int64 v34; // [rsp+60h] [rbp-59h] BYREF
  int v35; // [rsp+68h] [rbp-51h] BYREF
  __int16 v36; // [rsp+6Ch] [rbp-4Dh]
  __int64 KeyNodeForKcb; // [rsp+70h] [rbp-49h]
  _BYTE v38[8]; // [rsp+78h] [rbp-41h] BYREF
  PPRIVILEGE_SET v39[4]; // [rsp+80h] [rbp-39h] BYREF
  PPRIVILEGE_SET v40[4]; // [rsp+A0h] [rbp-19h] BYREF
  _QWORD v41[10]; // [rsp+C0h] [rbp+7h] BYREF
  char v42; // [rsp+128h] [rbp+6Fh]
  char v43; // [rsp+138h] [rbp+7Fh]

  v32[1] = v32;
  v27 = 0;
  v32[0] = v32;
  v26 = 0;
  v42 = 0;
  v2 = 0;
  memset(v40, 0, sizeof(v40));
  WORD1(v40[0]) = -1;
  memset(v39, 0, sizeof(v39));
  WORD1(v39[0]) = -1;
  v43 = 0;
  v34 = 0LL;
  UnitOfWork = 0LL;
  v30 = 0;
  v4 = 0LL;
  v5 = 0LL;
  KeyNodeForKcb = 0LL;
  v6 = MEMORY[0xFFFFF78000000014];
  HvpGetCellContextReinitialize((__int64)v38);
  HvpGetCellContextReinitialize((__int64)v33);
  memset(v41, 0, 0x20uLL);
  LODWORD(v41[1]) = -1073741823;
  v41[3] = &v41[2];
  v41[2] = &v41[2];
  while ( 1 )
  {
    while ( 1 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v28 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
      if ( !v28 )
      {
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        v19 = 0;
        started = -1073741431;
        goto LABEL_103;
      }
      if ( v2 )
        CmpLockRegistryExclusive();
      else
        CmpLockRegistry(v8);
      v5 = a1[1];
      if ( (*(_DWORD *)(*(_QWORD *)(v5 + 24) + 144LL) & 0x100000) != 0 )
      {
        started = -1073741790;
        goto LABEL_91;
      }
      if ( !*(_QWORD *)(v5 + 64) )
        goto LABEL_82;
      if ( *(_WORD *)(v5 + 58) )
      {
        started = CmDeleteLayeredKey((__int64)a1, (__int64)v32);
LABEL_91:
        v19 = 1;
LABEL_103:
        v20 = 0;
        goto LABEL_33;
      }
      started = CmpStartKcbStackForTopLayerKcb(v39, v5);
      if ( started < 0 )
        goto LABEL_91;
      started = CmpStartKcbStackForTopLayerKcb(v40, *(_QWORD *)(v5 + 64));
      if ( started < 0 )
        goto LABEL_91;
      started = 0;
      if ( !v2 )
      {
        CmpLockHashEntryExclusiveByKcb(v5);
        v26 = 1;
        CmpLockKcbStackTopExclusiveRestShared((__int64)v40);
        CmpLockKcbStackExclusive(v39);
        v43 = 1;
      }
      if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, 0LL) )
      {
LABEL_100:
        v19 = 1;
        v20 = 0;
        goto LABEL_33;
      }
      if ( !a1[7] && !a1[8] )
      {
        v11 = v34;
        goto LABEL_16;
      }
      started = CmpTransSearchAddTransFromKeyBody((__int64)a1, &v34);
      if ( started < 0 )
        goto LABEL_91;
      if ( (*(_DWORD *)(*(_QWORD *)(v5 + 24) + 144LL) & 2) != 0 )
      {
        started = -1072103423;
        goto LABEL_91;
      }
      v11 = v34;
      started = 0;
      if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, v34) )
        goto LABEL_100;
      if ( v11 )
        break;
LABEL_16:
      v12 = *(_QWORD *)(v5 + 184);
      if ( !v12 || *(_QWORD *)(v12 + 32) == v12 + 32 || v27 )
        break;
      v2 = 1;
      v27 = 1;
      CmpUnlockKcbStack(v39);
      CmpUnlockKcbStack(v40);
      v43 = 0;
      CmpUnlockHashEntryByKcb(v5);
      v26 = 0;
      if ( v39[3] )
        MiDeleteSubsection(v39[3]);
      memset(v39, 0, sizeof(v39));
      WORD1(v39[0]) = -1;
      if ( v40[3] )
        MiDeleteSubsection(v40[3]);
      memset(v40, 0, sizeof(v40));
      WORD1(v40[0]) = -1;
      CmpUnlockRegistry();
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    }
    v13 = *(_QWORD *)(v5 + 232);
    if ( v13 && !CmEqualTrans(v11, v13) )
    {
LABEL_82:
      started = -1073741535;
      goto LABEL_91;
    }
    if ( v11 )
      break;
    v14 = (int *)(*(_QWORD *)(v5 + 64) + 240LL);
    if ( *v14 >= 0 )
    {
      v14 = (int *)(v5 + 240);
      if ( !*(_DWORD *)(v5 + 240) )
      {
        v14 = (int *)(v5 + 256);
        if ( !*(_DWORD *)(v5 + 256) )
          goto LABEL_22;
      }
    }
    v19 = 0;
    started = CmpSnapshotTxOwnerArray(v14, &v29, &v31);
    if ( started < 0 )
      goto LABEL_91;
    if ( v43 )
    {
      CmpUnlockKcbStack(v39);
      CmpUnlockKcbStack(v40);
      v43 = 0;
    }
    if ( v26 )
    {
      CmpUnlockHashEntryByKcb(v5);
      v26 = 0;
    }
    CmpUnlockRegistry();
    started = CmpRollbackTransactionArray(v29, v31, v23, &v30);
    if ( started < 0 )
      goto LABEL_103;
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v2 = v27;
  }
  UnitOfWork = CmpAllocateUnitOfWork();
  if ( !UnitOfWork )
  {
    v19 = 1;
    started = -1073741670;
    v20 = 0;
    goto LABEL_33;
  }
  v4 = CmpAllocateUnitOfWork();
  if ( !v4 )
  {
    started = -1073741670;
    goto LABEL_31;
  }
  CmpTransEnlistUowInKcb(UnitOfWork, *(_QWORD *)(v5 + 64));
  started = CmpTransEnlistUowInCmTrans(UnitOfWork, v11);
  if ( started < 0 )
    goto LABEL_31;
  CmpTransEnlistUowInKcb(v4, v5);
  started = CmpTransEnlistUowInCmTrans(v4, v11);
  if ( started < 0 )
    goto LABEL_31;
  if ( !CmpLockIXLockIntent((unsigned int *)(*(_QWORD *)(v5 + 64) + 240LL), (__int64)UnitOfWork)
    || !CmpLockIXLockExclusive(v5 + 240, v4, 0) )
  {
    started = -1072103423;
    goto LABEL_31;
  }
  if ( !CmpLockIXLockExclusive(v5 + 256, v4, 1) )
  {
    started = -1072103423;
    v19 = 1;
    goto LABEL_32;
  }
LABEL_22:
  if ( !v27 )
  {
    ExAcquireResourceSharedLite(*(PERESOURCE *)(*(_QWORD *)(v5 + 24) + 2848LL), 1u);
    v42 = 1;
  }
  LOBYTE(v10) = 1;
  KeyNodeForKcb = CmpGetKeyNodeForKcb(v5, v38, v10);
  v15 = KeyNodeForKcb;
  if ( (unsigned int)CmGetVisibleSubkeyCount(v5, KeyNodeForKcb, v11) || (*(_BYTE *)(v15 + 2) & 8) != 0 )
  {
    started = -1073741535;
    goto LABEL_31;
  }
  (*(void (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)(v5 + 24) + 16LL))(*(_QWORD *)(v5 + 24), v38);
  KeyNodeForKcb = 0LL;
  if ( !v11 )
  {
    v16 = *(_QWORD *)(v5 + 184);
    if ( !v16 || *(_QWORD *)(v16 + 32) == v16 + 32 )
    {
      CmpReportNotify(v5, *(_QWORD *)(v5 + 24), *(_DWORD *)(v5 + 32), 0LL, 1, (__int64)v32);
      started = CmpFreeKeyByCell(*(_QWORD *)(v5 + 24));
      if ( started >= 0 )
      {
        CmpFlushNotifiesOnKeyBodyList(v5, 8LL);
        CmpCleanUpSubKeyInfo(*(_QWORD *)(v5 + 64));
        LOBYTE(v17) = 1;
        v18 = CmpGetKeyNodeForKcb(*(_QWORD *)(v5 + 64), v33, v17);
        *(_WORD *)(*(_QWORD *)(v5 + 64) + 168LL) = *(_WORD *)(v18 + 52);
        *(_QWORD *)(v18 + 4) = v6;
        *(_QWORD *)(*(_QWORD *)(v5 + 64) + 160LL) = v6;
        (*(void (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)(*(_QWORD *)(v5 + 64) + 24LL) + 16LL))(
          *(_QWORD *)(*(_QWORD *)(v5 + 64) + 24LL),
          v33);
        CmpMarkKeyUnbacked(v5);
        CmpDiscardKcb(v5);
        goto LABEL_30;
      }
    }
    else
    {
      started = CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers(v5, v41);
      if ( started >= 0 )
      {
        CmpReportNotify(v5, *(_QWORD *)(v5 + 24), *(_DWORD *)(v5 + 32), 0LL, 1, (__int64)v32);
        started = CmpFreeKeyByCell(*(_QWORD *)(v5 + 24));
        if ( started >= 0 )
        {
          v35 = 8;
          v36 = 257;
          CmpEnumerateAllHigherLayerKcbs(
            v5,
            (unsigned int)CmpFlushNotifiesPreCallback,
            (unsigned int)CmpFlushNotifiesPostCallback,
            (unsigned int)&v35,
            1,
            1);
          CmpFlushNotifiesOnKeyBodyList(v5, 8LL);
          CmpCleanUpSubKeyInfo(*(_QWORD *)(v5 + 64));
          LOBYTE(v24) = 1;
          v25 = CmpGetKeyNodeForKcb(*(_QWORD *)(v5 + 64), v33, v24);
          *(_WORD *)(*(_QWORD *)(v5 + 64) + 168LL) = *(_WORD *)(v25 + 52);
          *(_QWORD *)(v25 + 4) = v6;
          *(_QWORD *)(*(_QWORD *)(v5 + 64) + 160LL) = v6;
          (*(void (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)(*(_QWORD *)(v5 + 64) + 24LL) + 16LL))(
            *(_QWORD *)(*(_QWORD *)(v5 + 64) + 24LL),
            v33);
          CmpMarkKeyUnbacked(v5);
          CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers(v5, v41);
LABEL_30:
          started = 0;
        }
      }
    }
LABEL_31:
    v19 = 1;
LABEL_32:
    v20 = v42;
    goto LABEL_33;
  }
  *((_DWORD *)UnitOfWork + 17) = 3;
  UnitOfWork[11] = v5;
  *((_DWORD *)v4 + 17) = 2;
  v4[10] = UnitOfWork;
  ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(v5 + 24) + 2848LL));
  v20 = 0;
  started = CmAddLogForAction((__int64)v4, v22);
  if ( started >= 0 )
  {
    v4 = 0LL;
    UnitOfWork = 0LL;
    CmpReportNotify(v5, *(_QWORD *)(v5 + 24), *(_DWORD *)(v5 + 32), v11, 1, (__int64)v32);
    started = 0;
  }
  v19 = 1;
LABEL_33:
  CmpCleanupDiscardReplaceContext(v41);
  if ( KeyNodeForKcb )
    (*(void (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)(v5 + 24) + 16LL))(*(_QWORD *)(v5 + 24), v38);
  if ( v20 )
    ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(v5 + 24) + 2848LL));
  if ( v4 )
  {
    CmpRundownUnitOfWork(v4);
    ExFreePoolWithTag(v4, 0x77554D43u);
  }
  if ( UnitOfWork )
  {
    CmpRundownUnitOfWork(UnitOfWork);
    ExFreePoolWithTag(UnitOfWork, 0x77554D43u);
  }
  if ( v43 )
  {
    CmpUnlockKcbStack(v39);
    CmpUnlockKcbStack(v40);
  }
  if ( v26 )
    CmpUnlockHashEntryByKcb(v5);
  if ( v39[3] )
    MiDeleteSubsection(v39[3]);
  if ( v40[3] )
    MiDeleteSubsection(v40[3]);
  if ( v19 )
    CmpUnlockRegistry();
  if ( v32[0] != v32 )
    CmpSignalDeferredPosts(v32);
  if ( v28 )
  {
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  return (unsigned int)started;
}
