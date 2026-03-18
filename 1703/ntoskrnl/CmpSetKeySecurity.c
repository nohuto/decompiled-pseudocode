/*
 * XREFs of CmpSetKeySecurity @ 0x14006E950
 * Callers:
 *     CmpSecurityMethod @ 0x1404FCC50 (CmpSecurityMethod.c)
 * Callees:
 *     CmpTransEnlistUowInCmTrans @ 0x14007FCDC (CmpTransEnlistUowInCmTrans.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     CmpTransEnlistUowInKcb @ 0x14011E248 (CmpTransEnlistUowInKcb.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x14042DC14 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpAllocateUnitOfWork @ 0x1404589B0 (CmpAllocateUnitOfWork.c)
 *     CmpReportNotify @ 0x14048CFF4 (CmpReportNotify.c)
 *     CmpIsKcbImmutable @ 0x14048FCEC (CmpIsKcbImmutable.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x1404917CC (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpTryAcquireIXLockExclusive @ 0x1404BF0F4 (CmpTryAcquireIXLockExclusive.c)
 *     CmpUnlockHiveFlusher @ 0x1404BF104 (CmpUnlockHiveFlusher.c)
 *     CmUnlockHiveSecurity @ 0x1404BF118 (CmUnlockHiveSecurity.c)
 *     CmpSetSecurityDescriptorInfo @ 0x1404BF12C (CmpSetSecurityDescriptorInfo.c)
 *     CmLockHiveSecurityExclusive @ 0x1404BFFEC (CmLockHiveSecurityExclusive.c)
 *     CmpLockHiveFlusherShared @ 0x1404C0000 (CmpLockHiveFlusherShared.c)
 *     CmpSignalDeferredPosts @ 0x1404CE014 (CmpSignalDeferredPosts.c)
 *     CmpLockIXLockExclusive @ 0x1404CE168 (CmpLockIXLockExclusive.c)
 *     CmpRundownUnitOfWork @ 0x1404CE510 (CmpRundownUnitOfWork.c)
 *     CmpGetKeyNodeForKcb @ 0x1404CFE00 (CmpGetKeyNodeForKcb.c)
 *     CmpLockRegistryExclusive @ 0x1404D85A8 (CmpLockRegistryExclusive.c)
 *     CmpInitializeKcbStack @ 0x1404FC458 (CmpInitializeKcbStack.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1404FC480 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpCleanupKcbStack @ 0x1404FCC2C (CmpCleanupKcbStack.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1404FCE78 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpLockRegistry @ 0x1404FF6F0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x1404FF92C (CmpUnlockRegistry.c)
 *     CmpUnlockKcbStack @ 0x1404FF9E0 (CmpUnlockKcbStack.c)
 *     CmpReleaseKeyNodeForKcb @ 0x1405D11E0 (CmpReleaseKeyNodeForKcb.c)
 *     CmpPartialPromoteSubkeys @ 0x140661850 (CmpPartialPromoteSubkeys.c)
 *     CmpPromoteKey @ 0x140661A80 (CmpPromoteKey.c)
 *     CmpRollbackTransactionArray @ 0x14066BB50 (CmpRollbackTransactionArray.c)
 *     CmpGetEffectiveKcbSemantics @ 0x14066D9E0 (CmpGetEffectiveKcbSemantics.c)
 *     CmpSnapshotTxOwnerArray @ 0x14067355C (CmpSnapshotTxOwnerArray.c)
 *     CmpFreeUnitOfWork @ 0x140673C98 (CmpFreeUnitOfWork.c)
 */

__int64 __fastcall CmpSetKeySecurity(_QWORD *a1, __int64 a2, __int64 a3)
{
  char v3; // di
  char v5; // r15
  char v6; // r12
  char v7; // r13
  ULONG_PTR v8; // r14
  struct _KTHREAD *CurrentThread; // rax
  __int64 v10; // rdi
  __int64 v11; // r15
  __int64 v12; // rcx
  char v13; // si
  BOOLEAN v14; // r15
  __int64 UnitOfWork; // rax
  __int16 v17; // dx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 KeyNodeForKcb; // rax
  int started; // ebx
  char v24; // [rsp+49h] [rbp-48h]
  unsigned int v25; // [rsp+4Ch] [rbp-45h] BYREF
  int v26; // [rsp+50h] [rbp-41h] BYREF
  __int64 v27; // [rsp+58h] [rbp-39h] BYREF
  __int64 v28; // [rsp+60h] [rbp-31h] BYREF
  __int64 v29; // [rsp+68h] [rbp-29h] BYREF
  _QWORD v30[2]; // [rsp+70h] [rbp-21h] BYREF
  _BYTE v31[88]; // [rsp+80h] [rbp-11h] BYREF
  BOOLEAN v34; // [rsp+100h] [rbp+6Fh]

  v3 = 0;
  v28 = 0LL;
  v5 = 0;
  v24 = 0;
  v6 = 0;
  CmpInitializeKcbStack(v31);
  v26 = 0;
  v7 = 0;
  v27 = 0xFFFFFFFFLL;
  v8 = 0LL;
  v30[1] = v30;
  v30[0] = v30;
  while ( 1 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v34 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    if ( !v34 )
    {
      KiLeaveCriticalRegionUnsafe(KeGetCurrentThread());
      started = -1073741431;
      goto LABEL_35;
    }
    if ( v5 )
      CmpLockRegistryExclusive();
    else
      CmpLockRegistry();
    v10 = a1[1];
    if ( (unsigned __int8)CmpIsKcbImmutable(v10) )
      goto LABEL_69;
    started = CmpStartKcbStackForTopLayerKcb(v31, v10);
    if ( started < 0 )
      goto LABEL_34;
    if ( !v5 )
    {
      CmpLockKcbStackTopExclusiveRestShared(v31);
      v7 = 1;
    }
    started = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
    if ( started < 0 )
      goto LABEL_34;
    if ( a1[7] || a1[8] )
    {
      started = CmpTransSearchAddTransFromKeyBody(a1, &v28);
      if ( started < 0 )
        goto LABEL_34;
      started = CmpPerformKeyBodyDeletionCheck(a1, v28);
      if ( started < 0 )
        goto LABEL_34;
    }
    if ( KeGetCurrentThread()->PreviousMode && (*(_DWORD *)(*(_QWORD *)(v10 + 24) + 5360LL) & 0x20) != 0 )
    {
LABEL_69:
      started = -1073741790;
      goto LABEL_34;
    }
    if ( *(_WORD *)(v10 + 58) )
    {
      if ( !(unsigned int)CmpGetEffectiveKcbSemantics(v10) && !v5 )
      {
        v5 = 1;
        v24 = 1;
        CmpUnlockKcbStack(v31);
        v7 = 0;
        CmpCleanupKcbStack(v31);
        CmpInitializeKcbStack(v31);
        CmpUnlockRegistry();
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
        KiLeaveCriticalRegionUnsafe(KeGetCurrentThread());
        goto LABEL_58;
      }
      if ( v17 )
      {
        if ( !(unsigned int)CmpGetEffectiveKcbSemantics(v10) )
        {
          LOBYTE(v18) = 1;
          started = CmpPromoteKey(v31, v18, 0LL);
          if ( started < 0 )
            goto LABEL_34;
          started = CmpPartialPromoteSubkeys(v31);
          if ( started < 0 )
            goto LABEL_34;
        }
      }
    }
    v11 = v28;
    if ( v28 )
      break;
    if ( (unsigned __int8)CmpTryAcquireIXLockExclusive(v10 + 240)
      && (unsigned __int8)CmpTryAcquireIXLockExclusive(v10 + 256) )
    {
      goto LABEL_19;
    }
    v14 = 0;
    started = CmpSnapshotTxOwnerArray(v12, &v25, &v29);
    if ( started < 0 )
      goto LABEL_34;
    if ( v7 )
    {
      CmpUnlockKcbStack(v31);
      v7 = 0;
    }
    CmpCleanupKcbStack(v31);
    CmpInitializeKcbStack(v31);
    CmpUnlockRegistry();
    v3 = 0;
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KiLeaveCriticalRegionUnsafe(KeGetCurrentThread());
    started = CmpRollbackTransactionArray(v25, v29, v19, &v26);
    if ( started < 0 )
      goto LABEL_36;
    v5 = v24;
LABEL_58:
    v3 = 0;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(v10 + 24) + 144LL) & 2) != 0 )
  {
    started = -1072103423;
    goto LABEL_34;
  }
  UnitOfWork = CmpAllocateUnitOfWork();
  v8 = UnitOfWork;
  if ( !UnitOfWork )
  {
    started = -1073741670;
    goto LABEL_34;
  }
  CmpTransEnlistUowInKcb(UnitOfWork, v10);
  started = CmpTransEnlistUowInCmTrans(v8, v11);
  if ( started >= 0 )
  {
    if ( !(unsigned __int8)CmpLockIXLockExclusive(v10 + 240, v8, 0LL)
      || !(unsigned __int8)CmpLockIXLockExclusive(v10 + 256, v8, 1LL) )
    {
      started = -1072103423;
      goto LABEL_32;
    }
LABEL_19:
    if ( !v24 )
    {
      CmpLockHiveFlusherShared(*(_QWORD *)(v10 + 24));
      v6 = 1;
      CmLockHiveSecurityExclusive(*(_QWORD *)(v10 + 24));
    }
    started = CmpSetSecurityDescriptorInfo(v10, a2, a3);
    v13 = v6;
    if ( started >= 0 )
    {
      started = 0;
      v8 = 0LL;
      if ( v6 )
      {
        CmUnlockHiveSecurity(*(_QWORD *)(v10 + 24));
        v13 = 0;
      }
      if ( *(_WORD *)(v10 + 58) && !(unsigned int)CmpGetEffectiveKcbSemantics(v10) )
      {
        LOBYTE(v21) = v6;
        KeyNodeForKcb = CmpGetKeyNodeForKcb(v20, &v27, v21);
        *(_BYTE *)(KeyNodeForKcb + 13) = *(_BYTE *)(KeyNodeForKcb + 13) & 0xFC | 2;
        CmpReleaseKeyNodeForKcb(v10, &v27);
        *(_BYTE *)(v10 + 57) = 2;
      }
      if ( v6 )
      {
        CmpUnlockHiveFlusher(*(_QWORD *)(v10 + 24));
        v6 = 0;
      }
      CmpReportNotify(v10, *(_QWORD *)(v10 + 24), *(_DWORD *)(v10 + 32), v11, 10, (__int64)v30);
    }
    if ( v13 )
      CmUnlockHiveSecurity(*(_QWORD *)(v10 + 24));
    if ( v6 )
      CmpUnlockHiveFlusher(*(_QWORD *)(v10 + 24));
  }
LABEL_32:
  if ( v8 )
  {
    CmpRundownUnitOfWork(v8);
    CmpFreeUnitOfWork(v8);
  }
LABEL_34:
  v3 = 1;
LABEL_35:
  v14 = v34;
LABEL_36:
  if ( v7 )
    CmpUnlockKcbStack(v31);
  CmpCleanupKcbStack(v31);
  if ( v3 )
    CmpUnlockRegistry();
  if ( (_QWORD *)v30[0] != v30 )
    CmpSignalDeferredPosts(v30);
  if ( v14 )
  {
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KiLeaveCriticalRegionUnsafe(KeGetCurrentThread());
  }
  return (unsigned int)started;
}
