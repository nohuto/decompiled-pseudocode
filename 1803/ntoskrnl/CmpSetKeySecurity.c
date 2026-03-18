/*
 * XREFs of CmpSetKeySecurity @ 0x1400633D0
 * Callers:
 *     CmpSecurityMethod @ 0x1404A6510 (CmpSecurityMethod.c)
 * Callees:
 *     CmpTransEnlistUowInCmTrans @ 0x14000709C (CmpTransEnlistUowInCmTrans.c)
 *     CmpTransEnlistUowInKcb @ 0x14007C9A4 (CmpTransEnlistUowInKcb.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     CmpLockIXLockExclusive @ 0x1404984A8 (CmpLockIXLockExclusive.c)
 *     CmpRundownUnitOfWork @ 0x14049896C (CmpRundownUnitOfWork.c)
 *     CmpLockRegistryExclusive @ 0x14049BC8C (CmpLockRegistryExclusive.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x14049C254 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpGetKeyNodeForKcb @ 0x1404A05A0 (CmpGetKeyNodeForKcb.c)
 *     CmpIsKcbImmutable @ 0x1404A490C (CmpIsKcbImmutable.c)
 *     CmpInitializeKcbStack @ 0x1404A5B64 (CmpInitializeKcbStack.c)
 *     CmpAcquireShutdownRundown @ 0x1404A5B8C (CmpAcquireShutdownRundown.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1404A5BC8 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpCleanupKcbStack @ 0x1404A64E8 (CmpCleanupKcbStack.c)
 *     CmpReleaseShutdownRundown @ 0x1404A674C (CmpReleaseShutdownRundown.c)
 *     CmpLockRegistry @ 0x1404A71E0 (CmpLockRegistry.c)
 *     CmpDetachFromRegistryProcess @ 0x1404A80D8 (CmpDetachFromRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x1404A8188 (CmpUnlockRegistry.c)
 *     CmpUnlockKcbStack @ 0x1404A8B74 (CmpUnlockKcbStack.c)
 *     CmpAttachToRegistryProcess @ 0x1404AC4D0 (CmpAttachToRegistryProcess.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1404AD468 (CmpPerformKeyBodyDeletionCheck.c)
 *     SeCaptureSubjectContext @ 0x1404C8F50 (SeCaptureSubjectContext.c)
 *     HvpGetCellContextInitialize @ 0x1404E15B4 (HvpGetCellContextInitialize.c)
 *     HvLockHiveFlusherShared @ 0x1404E15C8 (HvLockHiveFlusherShared.c)
 *     CmLockHiveSecurityExclusive @ 0x1404E15E4 (CmLockHiveSecurityExclusive.c)
 *     CmpSetSecurityDescriptorInfo @ 0x1404E1604 (CmpSetSecurityDescriptorInfo.c)
 *     CmUnlockHiveSecurity @ 0x1404E1DF8 (CmUnlockHiveSecurity.c)
 *     HvUnlockHiveFlusherShared @ 0x1404E1E18 (HvUnlockHiveFlusherShared.c)
 *     CmpTryAcquireIXLockExclusive @ 0x1404E1E4C (CmpTryAcquireIXLockExclusive.c)
 *     CmpSignalDeferredPosts @ 0x1404E21B4 (CmpSignalDeferredPosts.c)
 *     CmpReportNotifyForKcbStack @ 0x1404E25D4 (CmpReportNotifyForKcbStack.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x14054BFC8 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpAllocateUnitOfWork @ 0x14057D8F0 (CmpAllocateUnitOfWork.c)
 *     SeReleaseSubjectContext @ 0x1405AD310 (SeReleaseSubjectContext.c)
 *     CmpReleaseKeyNodeForKcb @ 0x140651758 (CmpReleaseKeyNodeForKcb.c)
 *     CmpPartialPromoteSubkeys @ 0x1406EEF30 (CmpPartialPromoteSubkeys.c)
 *     CmpPromoteKey @ 0x1406EF198 (CmpPromoteKey.c)
 *     CmpRollbackTransactionArray @ 0x1406F9C2C (CmpRollbackTransactionArray.c)
 *     CmpGetEffectiveKcbSemantics @ 0x1406FAFDC (CmpGetEffectiveKcbSemantics.c)
 *     CmpSnapshotTxOwnerArray @ 0x1406FD100 (CmpSnapshotTxOwnerArray.c)
 *     CmpFreeUnitOfWork @ 0x140703F14 (CmpFreeUnitOfWork.c)
 */

__int64 __fastcall CmpSetKeySecurity(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  char v7; // r13
  char v8; // r12
  char v9; // si
  _QWORD *v10; // r14
  __int64 v11; // rdi
  int started; // ebx
  __int64 v13; // r13
  __int64 v14; // rcx
  int v15; // r9d
  char v16; // r15
  char v17; // di
  char v18; // r13
  __int64 UnitOfWork; // rax
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 KeyNodeForKcb; // rax
  char v27; // [rsp+50h] [rbp-B0h]
  char v28; // [rsp+52h] [rbp-AEh]
  unsigned int v29; // [rsp+54h] [rbp-ACh] BYREF
  int v30; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v31[32]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v32; // [rsp+80h] [rbp-80h] BYREF
  __int64 v33; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v34[2]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v35[8]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v36; // [rsp+A8h] [rbp-58h]
  __int64 v37; // [rsp+B0h] [rbp-50h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v39[48]; // [rsp+D8h] [rbp-28h] BYREF

  v36 = a3;
  v32 = 0LL;
  v28 = 0;
  v7 = 0;
  v37 = a2;
  v8 = 0;
  CmpInitializeKcbStack(v31);
  v30 = 0;
  v9 = 0;
  v10 = 0LL;
  HvpGetCellContextInitialize(v35);
  v34[1] = v34;
  v34[0] = v34;
  SeCaptureSubjectContext(&SubjectContext);
  CmpAttachToRegistryProcess(v39);
  while ( 1 )
  {
    v27 = CmpAcquireShutdownRundown();
    if ( !v27 )
      break;
    if ( v7 )
      CmpLockRegistryExclusive();
    else
      CmpLockRegistry();
    v11 = a1[1];
    if ( (unsigned __int8)CmpIsKcbImmutable(v11) )
    {
LABEL_66:
      started = -1073741790;
      goto LABEL_33;
    }
    started = CmpStartKcbStackForTopLayerKcb(v31, v11);
    if ( started < 0 )
      goto LABEL_33;
    if ( !v7 )
    {
      CmpLockKcbStackTopExclusiveRestShared(v31);
      v9 = 1;
    }
    started = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
    if ( started < 0 )
      goto LABEL_33;
    if ( a1[7] || a1[8] )
    {
      started = CmpTransSearchAddTransFromKeyBody(a1, &v32);
      if ( started < 0 )
        goto LABEL_33;
      started = CmpPerformKeyBodyDeletionCheck(a1, v32);
      if ( started < 0 )
        goto LABEL_33;
    }
    if ( KeGetCurrentThread()->PreviousMode && (*(_DWORD *)(*(_QWORD *)(v11 + 24) + 4152LL) & 0x20) != 0 )
      goto LABEL_66;
    if ( *(_WORD *)(v11 + 58) )
    {
      if ( (unsigned int)CmpGetEffectiveKcbSemantics(v11) || v7 )
      {
        if ( !(unsigned int)CmpGetEffectiveKcbSemantics(v21) )
        {
          LOBYTE(v22) = 1;
          started = CmpPromoteKey(v31, v22, 0LL);
          if ( started < 0 )
            goto LABEL_33;
          started = CmpPartialPromoteSubkeys(v31);
          if ( started < 0 )
            goto LABEL_33;
        }
        goto LABEL_15;
      }
      v7 = 1;
      v28 = 1;
      CmpUnlockKcbStack(v31);
      v9 = 0;
      CmpCleanupKcbStack(v31);
      CmpInitializeKcbStack(v31);
      CmpUnlockRegistry();
      CmpReleaseShutdownRundown();
    }
    else
    {
LABEL_15:
      v13 = v32;
      if ( v32 )
      {
        if ( (*(_DWORD *)(*(_QWORD *)(v11 + 24) + 160LL) & 2) != 0 )
        {
          started = -1072103423;
        }
        else
        {
          UnitOfWork = CmpAllocateUnitOfWork();
          v10 = (_QWORD *)UnitOfWork;
          if ( UnitOfWork )
          {
            CmpTransEnlistUowInKcb(UnitOfWork, v11);
            started = CmpTransEnlistUowInCmTrans(v10, v13);
            if ( started >= 0 )
            {
              if ( (unsigned __int8)CmpLockIXLockExclusive(v11 + 240, v10, 0LL)
                && (unsigned __int8)CmpLockIXLockExclusive(v11 + 256, v10, 1LL) )
              {
LABEL_18:
                if ( !v28 )
                {
                  HvLockHiveFlusherShared(*(_QWORD *)(v11 + 24));
                  v8 = 1;
                  CmLockHiveSecurityExclusive(*(_QWORD *)(v11 + 24));
                }
                started = CmpSetSecurityDescriptorInfo(
                            v11,
                            v37,
                            v36,
                            v15,
                            a5,
                            a6,
                            v13,
                            (__int64)v10,
                            (__int64)&SubjectContext);
                v16 = v8;
                if ( started >= 0 )
                {
                  started = 0;
                  v10 = 0LL;
                  if ( v8 )
                  {
                    CmUnlockHiveSecurity(*(_QWORD *)(v11 + 24));
                    v16 = 0;
                  }
                  if ( *(_WORD *)(v11 + 58) && !(unsigned int)CmpGetEffectiveKcbSemantics(v11) )
                  {
                    LOBYTE(v25) = v8;
                    KeyNodeForKcb = CmpGetKeyNodeForKcb(v24, v35, v25);
                    *(_BYTE *)(KeyNodeForKcb + 13) = *(_BYTE *)(KeyNodeForKcb + 13) & 0xFC | 2;
                    CmpReleaseKeyNodeForKcb(v11, v35);
                    *(_BYTE *)(v11 + 57) = 2;
                  }
                  if ( v8 )
                  {
                    HvUnlockHiveFlusherShared(*(_QWORD *)(v11 + 24));
                    v8 = 0;
                  }
                  CmpReportNotifyForKcbStack(v31, v13, 10LL, v34);
                }
                if ( v16 )
                  CmUnlockHiveSecurity(*(_QWORD *)(v11 + 24));
                if ( v8 )
                  HvUnlockHiveFlusherShared(*(_QWORD *)(v11 + 24));
              }
              else
              {
                started = -1072103423;
              }
            }
            if ( v10 )
            {
              CmpRundownUnitOfWork((ULONG_PTR)v10);
              CmpFreeUnitOfWork(v10);
            }
          }
          else
          {
            started = -1073741670;
          }
        }
LABEL_33:
        v17 = 1;
        goto LABEL_34;
      }
      if ( (unsigned __int8)CmpTryAcquireIXLockExclusive(v11 + 240)
        && (unsigned __int8)CmpTryAcquireIXLockExclusive(v11 + 256) )
      {
        goto LABEL_18;
      }
      v18 = 0;
      started = CmpSnapshotTxOwnerArray(v14, &v29, &v33);
      if ( started < 0 )
        goto LABEL_33;
      if ( v9 )
        CmpUnlockKcbStack(v31);
      v9 = 0;
      CmpCleanupKcbStack(v31);
      CmpInitializeKcbStack(v31);
      CmpUnlockRegistry();
      v17 = 0;
      CmpReleaseShutdownRundown();
      started = CmpRollbackTransactionArray(v29, v33, v23, &v30);
      if ( started < 0 )
        goto LABEL_35;
      v7 = v28;
    }
  }
  started = -1073741431;
  v17 = 0;
LABEL_34:
  v18 = v27;
LABEL_35:
  if ( v9 )
    CmpUnlockKcbStack(v31);
  CmpCleanupKcbStack(v31);
  if ( v17 )
    CmpUnlockRegistry();
  if ( (_QWORD *)v34[0] != v34 )
    CmpSignalDeferredPosts(v34);
  if ( v18 )
    CmpReleaseShutdownRundown();
  CmpDetachFromRegistryProcess(v39);
  SeReleaseSubjectContext(&SubjectContext);
  return (unsigned int)started;
}
