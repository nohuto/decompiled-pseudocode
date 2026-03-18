/*
 * XREFs of CmDeleteKey @ 0x140472480
 * Callers:
 *     NtDeleteKey @ 0x14047207C (NtDeleteKey.c)
 * Callees:
 *     MiDeleteSubsection @ 0x14000DDD0 (MiDeleteSubsection.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceSharedLite @ 0x1400800D0 (ExAcquireResourceSharedLite.c)
 *     HvpGetCellContextReinitialize @ 0x1400812C8 (HvpGetCellContextReinitialize.c)
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     CmpTransEnlistUowInKcb @ 0x140100358 (CmpTransEnlistUowInKcb.c)
 *     CmpTransEnlistUowInCmTrans @ 0x14010A3B0 (CmpTransEnlistUowInCmTrans.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memset @ 0x140192F40 (memset.c)
 *     CmDeleteLayeredKey @ 0x1401E47C0 (CmDeleteLayeredKey.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     CmpSignalDeferredPosts @ 0x14046FA38 (CmpSignalDeferredPosts.c)
 *     CmpGetKeyNodeForKcb @ 0x140472A4C (CmpGetKeyNodeForKcb.c)
 *     CmpUnlockHashEntryByKcb @ 0x140472AB8 (CmpUnlockHashEntryByKcb.c)
 *     CmpCleanupDiscardReplaceContext @ 0x140472B60 (CmpCleanupDiscardReplaceContext.c)
 *     CmGetVisibleSubkeyCount @ 0x140472B8C (CmGetVisibleSubkeyCount.c)
 *     CmpLockKcbStackExclusive @ 0x140472C1C (CmpLockKcbStackExclusive.c)
 *     CmpDiscardKcb @ 0x140472C60 (CmpDiscardKcb.c)
 *     CmpMarkKeyUnbacked @ 0x140472E5C (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x140472EE4 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpFreeKeyByCell @ 0x140475940 (CmpFreeKeyByCell.c)
 *     CmpCleanUpSubKeyInfo @ 0x140476784 (CmpCleanUpSubKeyInfo.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x140477E80 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpLockHashEntryExclusiveByKcb @ 0x140478770 (CmpLockHashEntryExclusiveByKcb.c)
 *     CmpReportNotify @ 0x14047C204 (CmpReportNotify.c)
 *     CmpLockRegistry @ 0x14047E6F0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x14047E950 (CmpUnlockRegistry.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x14047E9F0 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpUnlockKcbStack @ 0x14047EA68 (CmpUnlockKcbStack.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140482380 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpLockRegistryExclusive @ 0x1404E3BCC (CmpLockRegistryExclusive.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x140568D78 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpLockIXLockExclusive @ 0x140569108 (CmpLockIXLockExclusive.c)
 *     CmpLockIXLockIntent @ 0x140569164 (CmpLockIXLockIntent.c)
 *     CmpRundownUnitOfWork @ 0x140569428 (CmpRundownUnitOfWork.c)
 *     CmEqualTrans @ 0x14056959C (CmEqualTrans.c)
 *     CmAddLogForAction @ 0x140593D1C (CmAddLogForAction.c)
 *     CmpAllocateUnitOfWork @ 0x14059ABD8 (CmpAllocateUnitOfWork.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x1405F2DD8 (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmpRollbackTransactionArray @ 0x1406961BC (CmpRollbackTransactionArray.c)
 *     CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x140697BB8 (CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x14069809C (CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpSnapshotTxOwnerArray @ 0x1406998A4 (CmpSnapshotTxOwnerArray.c)
 */

__int64 __fastcall CmDeleteKey(_QWORD *a1)
{
  char v2; // r14
  ULONG_PTR UnitOfWork; // r13
  ULONG_PTR v4; // r15
  ULONG_PTR v5; // rsi
  __int64 v6; // rbx
  struct _KTHREAD *CurrentThread; // rax
  int started; // edi
  __int64 v9; // r8
  __int64 v10; // r14
  __int64 v11; // rax
  int *v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // rax
  char v18; // r14
  char v19; // bl
  __int64 v21; // r8
  __int64 v22; // r8
  __int64 v23; // rax
  char v24; // [rsp+30h] [rbp-89h]
  char v25; // [rsp+31h] [rbp-88h]
  BOOLEAN v26; // [rsp+32h] [rbp-87h]
  unsigned int v27; // [rsp+34h] [rbp-85h] BYREF
  int v28; // [rsp+38h] [rbp-81h] BYREF
  __int64 v29; // [rsp+40h] [rbp-79h] BYREF
  _QWORD *v30[2]; // [rsp+48h] [rbp-71h] BYREF
  _BYTE v31[8]; // [rsp+58h] [rbp-61h] BYREF
  __int64 v32; // [rsp+60h] [rbp-59h] BYREF
  int v33; // [rsp+68h] [rbp-51h] BYREF
  __int16 v34; // [rsp+6Ch] [rbp-4Dh]
  __int64 KeyNodeForKcb; // [rsp+70h] [rbp-49h]
  _BYTE v36[8]; // [rsp+78h] [rbp-41h] BYREF
  PPRIVILEGE_SET v37[4]; // [rsp+80h] [rbp-39h] BYREF
  PPRIVILEGE_SET v38[4]; // [rsp+A0h] [rbp-19h] BYREF
  _QWORD v39[10]; // [rsp+C0h] [rbp+7h] BYREF
  char v40; // [rsp+128h] [rbp+6Fh]
  char v41; // [rsp+138h] [rbp+7Fh]

  v30[1] = v30;
  v25 = 0;
  v30[0] = v30;
  v24 = 0;
  v40 = 0;
  v2 = 0;
  memset(v38, 0, sizeof(v38));
  WORD1(v38[0]) = -1;
  memset(v37, 0, sizeof(v37));
  WORD1(v37[0]) = -1;
  v41 = 0;
  v32 = 0LL;
  UnitOfWork = 0LL;
  v28 = 0;
  v4 = 0LL;
  v5 = 0LL;
  KeyNodeForKcb = 0LL;
  v6 = MEMORY[0xFFFFF78000000014];
  HvpGetCellContextReinitialize((__int64)v36);
  HvpGetCellContextReinitialize((__int64)v31);
  memset(v39, 0, 0x20uLL);
  LODWORD(v39[1]) = -1073741823;
  v39[3] = &v39[2];
  v39[2] = &v39[2];
  while ( 1 )
  {
    while ( 1 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v26 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
      if ( !v26 )
      {
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        v18 = 0;
        started = -1073741431;
        goto LABEL_102;
      }
      if ( v2 )
        CmpLockRegistryExclusive();
      else
        CmpLockRegistry();
      v5 = a1[1];
      if ( (*(_DWORD *)(*(_QWORD *)(v5 + 24) + 144LL) & 0x100000) != 0 )
      {
        started = -1073741790;
        goto LABEL_90;
      }
      if ( !*(_QWORD *)(v5 + 64) )
        goto LABEL_81;
      if ( *(_WORD *)(v5 + 58) )
      {
        started = CmDeleteLayeredKey((__int64)a1, (__int64)v30);
LABEL_90:
        v18 = 1;
LABEL_102:
        v19 = 0;
        goto LABEL_32;
      }
      started = CmpStartKcbStackForTopLayerKcb(v37, v5);
      if ( started < 0 )
        goto LABEL_90;
      started = CmpStartKcbStackForTopLayerKcb(v38, *(_QWORD *)(v5 + 64));
      if ( started < 0 )
        goto LABEL_90;
      started = 0;
      if ( !v2 )
      {
        CmpLockHashEntryExclusiveByKcb(v5);
        v24 = 1;
        CmpLockKcbStackTopExclusiveRestShared(v38);
        CmpLockKcbStackExclusive(v37);
        v41 = 1;
      }
      if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, 0LL) )
      {
LABEL_99:
        v18 = 1;
        v19 = 0;
        goto LABEL_32;
      }
      if ( !a1[7] && !a1[8] )
      {
        v10 = v32;
        goto LABEL_16;
      }
      started = CmpTransSearchAddTransFromKeyBody(a1, &v32);
      if ( started < 0 )
        goto LABEL_90;
      if ( (*(_DWORD *)(*(_QWORD *)(v5 + 24) + 144LL) & 2) != 0 )
      {
        started = -1072103423;
        goto LABEL_90;
      }
      v10 = v32;
      started = 0;
      if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, v32) )
        goto LABEL_99;
      if ( v10 )
        break;
LABEL_16:
      v11 = *(_QWORD *)(v5 + 184);
      if ( !v11 || *(_QWORD *)(v11 + 32) == v11 + 32 || v25 )
        break;
      v2 = 1;
      v25 = 1;
      CmpUnlockKcbStack(v37);
      CmpUnlockKcbStack(v38);
      v41 = 0;
      CmpUnlockHashEntryByKcb(v5);
      v24 = 0;
      if ( v37[3] )
        MiDeleteSubsection(v37[3]);
      memset(v37, 0, sizeof(v37));
      WORD1(v37[0]) = -1;
      if ( v38[3] )
        MiDeleteSubsection(v38[3]);
      memset(v38, 0, sizeof(v38));
      WORD1(v38[0]) = -1;
      CmpUnlockRegistry();
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    }
    if ( *(_QWORD *)(v5 + 232) && !(unsigned __int8)CmEqualTrans(v10) )
    {
LABEL_81:
      started = -1073741535;
      goto LABEL_90;
    }
    if ( v10 )
      break;
    v12 = (int *)(*(_QWORD *)(v5 + 64) + 240LL);
    if ( *v12 >= 0 )
    {
      v12 = (int *)(v5 + 240);
      if ( !*(_DWORD *)(v5 + 240) )
      {
        v12 = (int *)(v5 + 256);
        if ( !*(_DWORD *)(v5 + 256) )
          goto LABEL_22;
      }
    }
    v18 = 0;
    started = CmpSnapshotTxOwnerArray(v12, &v27, &v29);
    if ( started < 0 )
      goto LABEL_90;
    if ( v41 )
    {
      CmpUnlockKcbStack(v37);
      CmpUnlockKcbStack(v38);
      v41 = 0;
    }
    if ( v24 )
    {
      CmpUnlockHashEntryByKcb(v5);
      v24 = 0;
    }
    CmpUnlockRegistry();
    started = CmpRollbackTransactionArray(v27, v29, v21, &v28);
    if ( started < 0 )
      goto LABEL_102;
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v2 = v25;
  }
  UnitOfWork = CmpAllocateUnitOfWork();
  if ( !UnitOfWork )
  {
    v18 = 1;
    started = -1073741670;
    v19 = 0;
    goto LABEL_32;
  }
  v4 = CmpAllocateUnitOfWork();
  if ( !v4 )
  {
    started = -1073741670;
    goto LABEL_31;
  }
  CmpTransEnlistUowInKcb((_QWORD *)UnitOfWork, *(_QWORD *)(v5 + 64));
  started = CmpTransEnlistUowInCmTrans((_QWORD *)UnitOfWork, v10);
  if ( started < 0 )
    goto LABEL_31;
  CmpTransEnlistUowInKcb((_QWORD *)v4, v5);
  started = CmpTransEnlistUowInCmTrans((_QWORD *)v4, v10);
  if ( started < 0 )
    goto LABEL_31;
  if ( !(unsigned __int8)CmpLockIXLockIntent(*(_QWORD *)(v5 + 64) + 240LL, UnitOfWork)
    || !(unsigned __int8)CmpLockIXLockExclusive(v5 + 240, v4, 0LL)
    || !(unsigned __int8)CmpLockIXLockExclusive(v5 + 256, v4, 1LL) )
  {
    started = -1072103423;
    goto LABEL_31;
  }
LABEL_22:
  if ( !v25 )
  {
    ExAcquireResourceSharedLite(*(PERESOURCE *)(*(_QWORD *)(v5 + 24) + 2848LL), 1u);
    v40 = 1;
  }
  LOBYTE(v9) = 1;
  KeyNodeForKcb = CmpGetKeyNodeForKcb(v5, v36, v9);
  v13 = KeyNodeForKcb;
  if ( (unsigned int)CmGetVisibleSubkeyCount(v5, KeyNodeForKcb, v10) || (*(_BYTE *)(v13 + 2) & 8) != 0 )
  {
    started = -1073741535;
    goto LABEL_31;
  }
  (*(void (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)(v5 + 24) + 16LL))(*(_QWORD *)(v5 + 24), v36);
  KeyNodeForKcb = 0LL;
  if ( !v10 )
  {
    v15 = *(_QWORD *)(v5 + 184);
    if ( !v15 || *(_QWORD *)(v15 + 32) == v15 + 32 )
    {
      CmpReportNotify(v5, *(_QWORD *)(v5 + 24), *(_DWORD *)(v5 + 32), 0, 1, (__int64)v30);
      started = CmpFreeKeyByCell(*(_QWORD *)(v5 + 24));
      if ( started >= 0 )
      {
        CmpFlushNotifiesOnKeyBodyList(v5, 8LL);
        CmpCleanUpSubKeyInfo(*(_QWORD *)(v5 + 64));
        LOBYTE(v16) = 1;
        v17 = CmpGetKeyNodeForKcb(*(_QWORD *)(v5 + 64), v31, v16);
        *(_WORD *)(*(_QWORD *)(v5 + 64) + 168LL) = *(_WORD *)(v17 + 52);
        ++*(_QWORD *)(*(_QWORD *)(v5 + 64) + 296LL);
        *(_QWORD *)(v17 + 4) = v6;
        *(_QWORD *)(*(_QWORD *)(v5 + 64) + 160LL) = v6;
        (*(void (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)(*(_QWORD *)(v5 + 64) + 24LL) + 16LL))(
          *(_QWORD *)(*(_QWORD *)(v5 + 64) + 24LL),
          v31);
        CmpMarkKeyUnbacked(v5);
        CmpDiscardKcb(v5);
        goto LABEL_30;
      }
    }
    else
    {
      started = CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers(v5, v39, v14);
      if ( started < 0 )
        goto LABEL_31;
      CmpReportNotify(v5, *(_QWORD *)(v5 + 24), *(_DWORD *)(v5 + 32), 0, 1, (__int64)v30);
      started = CmpFreeKeyByCell(*(_QWORD *)(v5 + 24));
      if ( started < 0 )
        goto LABEL_31;
      v33 = 8;
      v34 = 257;
      CmpEnumerateAllHigherLayerKcbs(
        v5,
        (unsigned int)CmpFlushNotifiesPreCallback,
        (unsigned int)CmpFlushNotifiesPostCallback,
        (unsigned int)&v33,
        1,
        1);
      CmpFlushNotifiesOnKeyBodyList(v5, 8LL);
      CmpCleanUpSubKeyInfo(*(_QWORD *)(v5 + 64));
      LOBYTE(v22) = 1;
      v23 = CmpGetKeyNodeForKcb(*(_QWORD *)(v5 + 64), v31, v22);
      *(_WORD *)(*(_QWORD *)(v5 + 64) + 168LL) = *(_WORD *)(v23 + 52);
      ++*(_QWORD *)(*(_QWORD *)(v5 + 64) + 296LL);
      *(_QWORD *)(v23 + 4) = v6;
      *(_QWORD *)(*(_QWORD *)(v5 + 64) + 160LL) = v6;
      (*(void (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)(*(_QWORD *)(v5 + 64) + 24LL) + 16LL))(
        *(_QWORD *)(*(_QWORD *)(v5 + 64) + 24LL),
        v31);
      CmpMarkKeyUnbacked(v5);
      CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers(v5, v39);
LABEL_30:
      started = 0;
    }
LABEL_31:
    v18 = 1;
    v19 = v40;
    goto LABEL_32;
  }
  *(_DWORD *)(UnitOfWork + 68) = 3;
  *(_QWORD *)(UnitOfWork + 88) = v5;
  *(_DWORD *)(v4 + 68) = 2;
  *(_QWORD *)(v4 + 80) = UnitOfWork;
  ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(v5 + 24) + 2848LL));
  v19 = 0;
  started = CmAddLogForAction(v4);
  if ( started >= 0 )
  {
    v4 = 0LL;
    UnitOfWork = 0LL;
    CmpReportNotify(v5, *(_QWORD *)(v5 + 24), *(_DWORD *)(v5 + 32), v10, 1, (__int64)v30);
    started = 0;
  }
  v18 = 1;
LABEL_32:
  CmpCleanupDiscardReplaceContext(v39);
  if ( KeyNodeForKcb )
    (*(void (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)(v5 + 24) + 16LL))(*(_QWORD *)(v5 + 24), v36);
  if ( v19 )
    ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(v5 + 24) + 2848LL));
  if ( v4 )
  {
    CmpRundownUnitOfWork(v4);
    ExFreePoolWithTag((PVOID)v4, 0x77554D43u);
  }
  if ( UnitOfWork )
  {
    CmpRundownUnitOfWork(UnitOfWork);
    ExFreePoolWithTag((PVOID)UnitOfWork, 0x77554D43u);
  }
  if ( v41 )
  {
    CmpUnlockKcbStack(v37);
    CmpUnlockKcbStack(v38);
  }
  if ( v24 )
    CmpUnlockHashEntryByKcb(v5);
  if ( v37[3] )
    MiDeleteSubsection(v37[3]);
  if ( v38[3] )
    MiDeleteSubsection(v38[3]);
  if ( v18 )
    CmpUnlockRegistry();
  if ( v30[0] != v30 )
    CmpSignalDeferredPosts(v30);
  if ( v26 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return (unsigned int)started;
}
