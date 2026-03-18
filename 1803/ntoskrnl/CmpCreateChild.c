/*
 * XREFs of CmpCreateChild @ 0x140514170
 * Callers:
 *     CmpDoParseKey @ 0x1405A7800 (CmpDoParseKey.c)
 * Callees:
 *     CmpTransEnlistUowInCmTrans @ 0x14000709C (CmpTransEnlistUowInCmTrans.c)
 *     CmpGetSecurityDescriptorNode @ 0x140007750 (CmpGetSecurityDescriptorNode.c)
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     CmpTransEnlistUowInKcb @ 0x14007C9A4 (CmpTransEnlistUowInKcb.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     CmpLockIXLockExclusive @ 0x1404984A8 (CmpLockIXLockExclusive.c)
 *     CmpLockIXLockIntent @ 0x140498504 (CmpLockIXLockIntent.c)
 *     CmpRundownUnitOfWork @ 0x14049896C (CmpRundownUnitOfWork.c)
 *     CmpMarkKeyDirty @ 0x1404A0B4C (CmpMarkKeyDirty.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x1404A339C (CmpUpdateKeyNodeAccessBits.c)
 *     CmpIsKeyStackDeleted @ 0x1404A5D2C (CmpIsKeyStackDeleted.c)
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x1404A81C4 (CmpGetSecurityCacheEntryForKcbStack.c)
 *     CmpGetKcbAtLayerHeight @ 0x1404A8BB8 (CmpGetKcbAtLayerHeight.c)
 *     CmpCleanUpKcbValueCache @ 0x1404A99D4 (CmpCleanUpKcbValueCache.c)
 *     CmpAttachToRegistryProcess @ 0x1404AC4D0 (CmpAttachToRegistryProcess.c)
 *     CmpReportNotifyForKcbStack @ 0x1404E25D4 (CmpReportNotifyForKcbStack.c)
 *     HvpMarkCellDirty @ 0x1404E3EC4 (HvpMarkCellDirty.c)
 *     CmpAddSubKeyEx @ 0x140513418 (CmpAddSubKeyEx.c)
 *     CmpFreeKeyByCell @ 0x1405150FC (CmpFreeKeyByCell.c)
 *     CmpCopyName @ 0x1405157EC (CmpCopyName.c)
 *     HvFreeCell @ 0x14051584C (HvFreeCell.c)
 *     HvAllocateCell @ 0x140515B84 (HvAllocateCell.c)
 *     CmpRebuildKcbCacheFromNode @ 0x140516AA4 (CmpRebuildKcbCacheFromNode.c)
 *     CmpCleanUpSubKeyInfo @ 0x140516B80 (CmpCleanUpSubKeyInfo.c)
 *     CmpAssignSecurityToKcb @ 0x140516C04 (CmpAssignSecurityToKcb.c)
 *     SeAssignSecurity @ 0x140516CC0 (SeAssignSecurity.c)
 *     CmpFreeSecurityDescriptor @ 0x140517750 (CmpFreeSecurityDescriptor.c)
 *     CmpNameSize @ 0x140560BD4 (CmpNameSize.c)
 *     CmpIsSystemEntity @ 0x140565AF0 (CmpIsSystemEntity.c)
 *     SeDeassignSecurity @ 0x14056A020 (SeDeassignSecurity.c)
 *     CmpRecordParseFailure @ 0x14056D188 (CmpRecordParseFailure.c)
 *     CmAddLogForAction @ 0x140576A18 (CmAddLogForAction.c)
 *     CmpAllocateUnitOfWork @ 0x14057D8F0 (CmpAllocateUnitOfWork.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x140583DF4 (CmpLogTransactionAbortedWithChildName.c)
 *     CmpUndoDeleteKeyForTrans @ 0x1405C1A44 (CmpUndoDeleteKeyForTrans.c)
 *     CmpLogUnsupportedOperation @ 0x1406FB130 (CmpLogUnsupportedOperation.c)
 *     CmpSnapshotTxOwnerArray @ 0x1406FD100 (CmpSnapshotTxOwnerArray.c)
 */

__int64 __fastcall CmpCreateChild(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 *a4,
        __int64 a5,
        __int16 a6,
        char a7,
        __int64 a8)
{
  char *v9; // r13
  ULONG_PTR KcbAtLayerHeight; // rbx
  __int64 v11; // r10
  __int64 v12; // r10
  __int64 v13; // r14
  ULONG_PTR v14; // r15
  int v15; // ecx
  int v16; // edx
  __int16 v17; // ax
  __int16 v18; // dx
  __int64 v19; // rcx
  _DWORD *v20; // rsi
  int v21; // eax
  __int64 v22; // r8
  void *v23; // rbx
  __int64 SecurityCacheEntryForKcbStack; // rax
  NTSTATUS v25; // eax
  unsigned int v26; // ebx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rdx
  int *v30; // rcx
  unsigned int v31; // r13d
  int v32; // ebx
  unsigned __int16 v33; // ax
  _BYTE *v34; // rbx
  __int16 v35; // ax
  ULONG_PTR v36; // rcx
  int v37; // eax
  unsigned __int16 v38; // ax
  int SecurityDescriptorNode; // eax
  __int64 v40; // r8
  __int64 v41; // r9
  ULONG_PTR v42; // rbx
  __int64 v43; // rax
  __int64 v44; // r13
  __int64 v45; // rdx
  unsigned int v46; // eax
  __int64 v47; // r8
  __int64 v48; // r9
  char v49; // cl
  char v50; // al
  PVOID v51; // r14
  PVOID v52; // r14
  __int64 v53; // rsi
  void *v54; // rcx
  _QWORD *UnitOfWork; // rax
  int v57; // eax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  _QWORD *v61; // rax
  int v62; // eax
  _DWORD *v63; // rcx
  _DWORD *v64; // rax
  int v65; // eax
  __int64 v66; // r8
  __int64 v67; // rdx
  __int64 v68; // rdx
  __int64 v69; // r8
  unsigned __int16 v70; // ax
  __int64 v71; // rdx
  __int64 v72; // r8
  __int64 v73; // r9
  __int64 v74; // rbx
  __int64 v75; // rdx
  ULONG_PTR v76; // rax
  unsigned int v77; // ecx
  int v78; // eax
  int v79; // eax
  int v80; // eax
  int v81; // eax
  __int64 v82; // rdx
  __int64 v83; // r8
  __int64 v84; // rdx
  char v85; // [rsp+40h] [rbp-E8h]
  char v86; // [rsp+42h] [rbp-E6h]
  char v87; // [rsp+43h] [rbp-E5h]
  __int16 v88; // [rsp+46h] [rbp-E2h]
  ULONG_PTR BugCheckParameter3; // [rsp+48h] [rbp-E0h]
  void *v90; // [rsp+58h] [rbp-D0h] BYREF
  ULONG_PTR v91; // [rsp+60h] [rbp-C8h]
  int v92; // [rsp+68h] [rbp-C0h]
  PVOID P; // [rsp+70h] [rbp-B8h]
  PVOID v94; // [rsp+78h] [rbp-B0h]
  int v95; // [rsp+80h] [rbp-A8h]
  PSECURITY_DESCRIPTOR NewDescriptor; // [rsp+88h] [rbp-A0h] BYREF
  void *v97; // [rsp+90h] [rbp-98h] BYREF
  __int64 v98; // [rsp+98h] [rbp-90h] BYREF
  unsigned int v99; // [rsp+A0h] [rbp-88h] BYREF
  unsigned int v100; // [rsp+A4h] [rbp-84h]
  __int64 v101; // [rsp+A8h] [rbp-80h]
  __int64 v102; // [rsp+B0h] [rbp-78h] BYREF
  __int64 v103; // [rsp+B8h] [rbp-70h] BYREF
  _QWORD *v104; // [rsp+C0h] [rbp-68h]
  _QWORD *v105; // [rsp+C8h] [rbp-60h]
  __int64 v106; // [rsp+D8h] [rbp-50h]
  ULONG_PTR v107; // [rsp+E0h] [rbp-48h]
  unsigned int v111; // [rsp+168h] [rbp+40h]
  unsigned __int16 *v112; // [rsp+168h] [rbp+40h]

  v87 = 0;
  v85 = 0;
  v9 = 0LL;
  v90 = 0LL;
  v95 = -1;
  v103 = 0xFFFFFFFFLL;
  v97 = 0LL;
  BugCheckParameter3 = -1LL;
  v98 = 0xFFFFFFFFLL;
  v101 = 0LL;
  v102 = 0xFFFFFFFFLL;
  NewDescriptor = 0LL;
  v99 = -1;
  v94 = 0LL;
  v104 = 0LL;
  P = 0LL;
  v105 = 0LL;
  v86 = 0;
  KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1, *(_WORD *)(a1 + 2));
  v91 = KcbAtLayerHeight;
  v13 = CmpGetKcbAtLayerHeight(v11, *(_WORD *)(v11 + 2));
  v106 = v13;
  v14 = *(_QWORD *)(v13 + 24);
  v107 = v14;
  if ( a8 && (*(_DWORD *)(v14 + 160) & 2) != 0 )
  {
    v66 = 3222863873LL;
    v67 = 262400LL;
LABEL_121:
    v26 = v66;
    v20 = (_DWORD *)a5;
    CmpRecordParseFailure(a5, v67, v66);
    goto LABEL_68;
  }
  if ( (*(_DWORD *)(KcbAtLayerHeight + 4) & 0x80u) != 0 )
  {
    v66 = 3221225506LL;
    v67 = 262656LL;
    goto LABEL_121;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(KcbAtLayerHeight + 24) + 160LL) & 0x100000) != 0 )
  {
    v66 = 3221225506LL;
    v67 = 262912LL;
    goto LABEL_121;
  }
  if ( *(_BYTE *)(KcbAtLayerHeight + 57) == 1 )
  {
    v68 = 263168LL;
    goto LABEL_124;
  }
  v15 = *(_DWORD *)(KcbAtLayerHeight + 176);
  if ( !CmpVEEnabled || (v16 = 1, (v15 & 0x1000000) == 0) )
    v16 = 0;
  v17 = a6 | 0x100;
  if ( !v16 )
    v17 = a6;
  v18 = v17 | 0x200;
  v19 = v15 & 0x2000000;
  if ( !(_DWORD)v19 )
    v18 = v17;
  v88 = v18;
  if ( (*(_DWORD *)(v14 + 4152) & 0x20) != 0 && *(_QWORD *)(a3 + 64) )
  {
    v68 = 263424LL;
LABEL_124:
    v69 = 3221225506LL;
    v20 = (_DWORD *)a5;
    goto LABEL_126;
  }
  v20 = (_DWORD *)a5;
  v21 = *(_DWORD *)(a5 + 24) & 1;
  v100 = v21;
  if ( *(int *)(KcbAtLayerHeight + 32) < 0 && !v21 && (!a8 || !*(_QWORD *)(KcbAtLayerHeight + 232)) )
  {
    v26 = -1073741439;
    v69 = 3221225857LL;
    v68 = 263680LL;
    goto LABEL_127;
  }
  if ( a8 && !CmpIsKeyStackDeleted(v12, 0LL) )
  {
    if ( (int)CmpUndoDeleteKeyForTrans(v13, a8) < 0 )
    {
      v26 = -1073741772;
      v69 = 3221225524LL;
      v68 = 263936LL;
LABEL_127:
      CmpRecordParseFailure(v20, v68, v69);
      goto LABEL_68;
    }
LABEL_67:
    v26 = 0;
LABEL_68:
    v49 = 0;
    goto LABEL_69;
  }
  if ( (*(_DWORD *)(a5 + 160) & 1) == 0 )
  {
    CmpAttachToRegistryProcess(a5 + 168);
    *(_DWORD *)(a5 + 160) |= 1u;
  }
  v22 = 2LL;
  if ( (v88 & 2) == 0 )
  {
    if ( (*(_DWORD *)(v14 + 4152) & 0x20) != 0 )
    {
      NewDescriptor = (PSECURITY_DESCRIPTOR)(CmpGetSecurityCacheEntryForKcbStack(a1, a8) + 32);
    }
    else
    {
      if ( (*(_DWORD *)(v13 + 176) & 0x2000000) == 0
        || (LOBYTE(v19) = KeGetCurrentThread()->PreviousMode,
            v9 = (char *)v90,
            (unsigned __int8)CmpIsSystemEntity(v19, 0LL, a5 + 16)) )
      {
        v23 = *(void **)(a3 + 64);
      }
      else
      {
        v23 = 0LL;
      }
      SecurityCacheEntryForKcbStack = CmpGetSecurityCacheEntryForKcbStack(a1, a8);
      v25 = SeAssignSecurity(
              (PSECURITY_DESCRIPTOR)(SecurityCacheEntryForKcbStack + 32),
              v23,
              &NewDescriptor,
              1u,
              (PSECURITY_SUBJECT_CONTEXT)(a3 + 32),
              (PGENERIC_MAPPING)((char *)CmKeyObjectType + 76),
              *((POOL_TYPE *)CmKeyObjectType + 25));
      v26 = v25;
      if ( v25 < 0 )
      {
        v69 = (unsigned int)v25;
        v68 = 264192LL;
        goto LABEL_127;
      }
      KcbAtLayerHeight = v91;
    }
    v22 = 2LL;
  }
  v27 = v100;
  v28 = a8;
  if ( a8 )
    v27 = 1LL;
  v92 = v27;
  v29 = *(unsigned int *)(v13 + 32);
  if ( (_DWORD)v29 != -1 )
  {
    if ( (_DWORD)v27 != (unsigned int)v29 >> 31 )
    {
      CmpLogUnsupportedOperation(2LL);
      v29 = *(unsigned int *)(v13 + 32);
    }
    v111 = (unsigned int)v29 >> 31;
    if ( !a7 )
    {
      ExAcquirePushLockSharedEx(v14 + 72, 0LL);
      v85 = 1;
      v29 = *(unsigned int *)(v13 + 32);
    }
    v9 = (char *)(*(__int64 (__fastcall **)(ULONG_PTR, __int64, __int64 *))(v14 + 8))(v14, v29, &v103);
    v90 = v9;
    if ( (unsigned __int16)CmpNameSize(a4) != *((_WORD *)v9 + 36) )
    {
      CmpLogUnsupportedOperation(1LL);
      v26 = -1073741822;
      v69 = 3221225474LL;
      v68 = 264448LL;
      goto LABEL_127;
    }
    if ( !CmpMarkKeyDirty(v14, *(unsigned int *)(v13 + 32), 0) )
    {
      v69 = 3221225853LL;
      v68 = 264704LL;
      goto LABEL_126;
    }
    if ( !HvpMarkCellDirty(v14, *(unsigned int *)(KcbAtLayerHeight + 32), 0) )
    {
      v69 = 3221225853LL;
      v68 = 264960LL;
      goto LABEL_126;
    }
    v70 = *(_WORD *)(a5 + 4);
    if ( v70 )
    {
      LODWORD(BugCheckParameter3) = HvAllocateCell(v14, v70, v111, (unsigned int)&v97, (__int64)&v98);
      v92 = BugCheckParameter3;
      if ( (_DWORD)BugCheckParameter3 == -1 )
      {
        v69 = 3221225626LL;
        v68 = 265216LL;
        goto LABEL_126;
      }
      memmove(v97, *(const void **)(a5 + 8), *(unsigned __int16 *)(a5 + 4));
      (*(void (__fastcall **)(ULONG_PTR, __int64 *))(v14 + 16))(v14, &v98);
      v97 = 0LL;
    }
    ExAcquirePushLockExclusiveEx(v14 + 1776, 0LL);
    SecurityDescriptorNode = CmpGetSecurityDescriptorNode(
                               v14,
                               *(unsigned int *)(v13 + 32),
                               (__int64)v9,
                               NewDescriptor,
                               1,
                               &v99);
    v26 = SecurityDescriptorNode;
    if ( SecurityDescriptorNode >= 0 )
    {
      CmpFreeSecurityDescriptor(v14);
      *((_DWORD *)v9 + 11) = v99;
      ExReleasePushLockEx(v14 + 1776, 0LL, v72, v73);
      *((_DWORD *)v9 + 12) = BugCheckParameter3;
      v112 = (unsigned __int16 *)(v9 + 74);
      *((_WORD *)v9 + 37) = *(_WORD *)(a5 + 4);
      LODWORD(BugCheckParameter3) = -1;
      CmpCopyName(v9 + 76);
      v9[13] |= 3u;
      *((_WORD *)v9 + 1) = v88;
      if ( *((_WORD *)v9 + 36) < *a4 )
        *((_WORD *)v9 + 1) = v88 | 0x20;
      v74 = MEMORY[0xFFFFF78000000014];
      v9 = (char *)v90;
      *(_QWORD *)((char *)v90 + 4) = MEMORY[0xFFFFF78000000014];
      ++*(_QWORD *)(v13 + 296);
      CmpRebuildKcbCacheFromNode(v13);
      v75 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(v14 + 8))(v14, *(unsigned int *)(v91 + 32), &v102);
      v101 = v75;
      *(_QWORD *)(v75 + 4) = v74;
      v76 = v91;
      *(_QWORD *)(v91 + 160) = v74;
      ++*(_QWORD *)(v76 + 296);
      v77 = *v112;
      if ( *(_DWORD *)(v75 + 56) < v77 )
        *(_DWORD *)(v75 + 56) = v77;
      if ( v85 )
      {
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v14 + 72), 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v14 + 72));
        KeAbPostRelease(v14 + 72);
        v85 = 0;
        v9 = (char *)v90;
      }
      CmpReportNotifyForKcbStack(a1, 0, 1, 0LL);
      goto LABEL_67;
    }
    v71 = 265728LL;
    goto LABEL_149;
  }
  if ( !a7 )
  {
    ExAcquirePushLockSharedEx(v14 + 72, 0LL);
    v85 = 1;
    v28 = a8;
  }
  if ( v28 )
  {
    UnitOfWork = (_QWORD *)CmpAllocateUnitOfWork(v27, v29, v22);
    v94 = UnitOfWork;
    v104 = UnitOfWork;
    if ( !UnitOfWork )
    {
      v69 = 3221225626LL;
      v68 = 265984LL;
      goto LABEL_126;
    }
    CmpTransEnlistUowInKcb(UnitOfWork, KcbAtLayerHeight);
    v57 = CmpTransEnlistUowInCmTrans(v94, a8);
    v26 = v57;
    if ( v57 < 0 )
    {
      v69 = (unsigned int)v57;
      v68 = 266240LL;
      goto LABEL_127;
    }
    v61 = (_QWORD *)CmpAllocateUnitOfWork(v59, v58, v60);
    P = v61;
    v105 = v61;
    if ( !v61 )
    {
      v69 = 3221225626LL;
      v68 = 266496LL;
      goto LABEL_126;
    }
    CmpTransEnlistUowInKcb(v61, v13);
    v62 = CmpTransEnlistUowInCmTrans(P, a8);
    v26 = v62;
    if ( v62 < 0 )
    {
      v69 = (unsigned int)v62;
      v68 = 266752LL;
      goto LABEL_127;
    }
    if ( !CmpLockIXLockIntent((unsigned int *)(v91 + 240), (__int64)v94) )
    {
      v69 = 3222863873LL;
      v68 = 267008LL;
      goto LABEL_126;
    }
    if ( !CmpLockIXLockExclusive(v13 + 240, P, 0) )
    {
      v69 = 3222863873LL;
      v68 = 267264LL;
      goto LABEL_126;
    }
    if ( !CmpLockIXLockExclusive(v13 + 256, P, 1) )
    {
      v69 = 3222863873LL;
      v68 = 267520LL;
LABEL_126:
      v26 = v69;
      goto LABEL_127;
    }
  }
  else
  {
    v30 = (int *)(KcbAtLayerHeight + 240);
    if ( *(_QWORD *)(KcbAtLayerHeight + 232) )
    {
      v78 = CmpSnapshotTxOwnerArray(v30, a5 + 120, a5 + 128);
      v26 = v78;
      if ( v78 < 0 )
      {
        v69 = (unsigned int)v78;
        v68 = 267776LL;
        goto LABEL_127;
      }
      CmpLogTransactionAbortedWithChildName(v91, a4, 6LL);
      *(_DWORD *)(a5 + 96) |= 4u;
      v69 = 3221226029LL;
      v68 = 268032LL;
      goto LABEL_126;
    }
    if ( *v30 < 0 )
    {
      v79 = CmpSnapshotTxOwnerArray(v30, a5 + 120, a5 + 128);
      v26 = v79;
      if ( v79 < 0 )
      {
        v69 = (unsigned int)v79;
        v68 = 268288LL;
        goto LABEL_127;
      }
      CmpLogTransactionAbortedWithChildName(v91, a4, 6LL);
      *(_DWORD *)(a5 + 96) |= 4u;
      v69 = 3221226029LL;
      v68 = 268544LL;
      goto LABEL_126;
    }
    if ( *(_DWORD *)(v13 + 240) )
    {
      v80 = CmpSnapshotTxOwnerArray(v13 + 240, a5 + 120, a5 + 128);
      v26 = v80;
      if ( v80 < 0 )
      {
        v69 = (unsigned int)v80;
        v68 = 268800LL;
        goto LABEL_127;
      }
      CmpLogTransactionAbortedWithChildName(v91, a4, 6LL);
      *(_DWORD *)(a5 + 96) |= 4u;
      v69 = 3221226029LL;
      v68 = 269056LL;
      goto LABEL_126;
    }
    if ( *(_DWORD *)(v13 + 256) )
    {
      v81 = CmpSnapshotTxOwnerArray(v13 + 256, a5 + 120, a5 + 128);
      v26 = v81;
      if ( v81 < 0 )
      {
        v69 = (unsigned int)v81;
        v68 = 269312LL;
        goto LABEL_127;
      }
      CmpLogTransactionAbortedWithChildName(v91, a4, 6LL);
      *(_DWORD *)(a5 + 96) |= 4u;
      v69 = 3221226029LL;
      v68 = 269568LL;
      goto LABEL_126;
    }
  }
  v31 = (unsigned __int16)CmpNameSize(a4) + 76;
  v32 = v92;
  HIDWORD(BugCheckParameter3) = HvAllocateCell(v14, v31, v92, (unsigned int)&v90, (__int64)&v103);
  v95 = HIDWORD(BugCheckParameter3);
  if ( HIDWORD(BugCheckParameter3) == -1 )
  {
    v82 = 269824LL;
    goto LABEL_178;
  }
  v33 = *(_WORD *)(a5 + 4);
  if ( v33 )
  {
    LODWORD(BugCheckParameter3) = HvAllocateCell(v14, v33, v32, (unsigned int)&v97, (__int64)&v98);
    v92 = BugCheckParameter3;
    if ( (_DWORD)BugCheckParameter3 != -1 )
    {
      memmove(v97, *(const void **)(a5 + 8), *(unsigned __int16 *)(a5 + 4));
      (*(void (__fastcall **)(ULONG_PTR, __int64 *))(v14 + 16))(v14, &v98);
      v97 = 0LL;
      goto LABEL_36;
    }
    v82 = 270080LL;
LABEL_178:
    v26 = -1073741670;
    CmpRecordParseFailure(a5, v82, 3221225626LL);
    v9 = (char *)v90;
    goto LABEL_68;
  }
LABEL_36:
  v34 = v90;
  memset(v90, 0, v31);
  v35 = 27500;
  if ( (v88 & 2) == 0 )
    v35 = 27502;
  *(_WORD *)v34 = v35;
  v34[12] = CmpAccessBitForPhase;
  v36 = v91;
  if ( *(_BYTE *)(v91 + 57) == 3 )
    v34[13] |= 3u;
  else
    v34[13] &= 0xFCu;
  *((_WORD *)v34 + 1) = v88;
  v9 = (char *)v90;
  *(_QWORD *)((char *)v90 + 4) = MEMORY[0xFFFFF78000000014];
  *((_DWORD *)v9 + 4) = *(_DWORD *)(v36 + 32);
  *(_QWORD *)(v9 + 28) = -1LL;
  *((_QWORD *)v9 + 5) = -1LL;
  *((_DWORD *)v9 + 12) = BugCheckParameter3;
  *((_WORD *)v9 + 37) = *(_WORD *)(a5 + 4);
  LODWORD(BugCheckParameter3) = -1;
  v37 = *(_DWORD *)(v36 + 176);
  if ( (v37 & 0x80u) != 0 )
    *((_DWORD *)v9 + 13) ^= (*((_DWORD *)v9 + 13) ^ (v37 << 16)) & 0xF00000;
  v38 = CmpCopyName(v9 + 76);
  *((_WORD *)v9 + 36) = v38;
  if ( v38 < *a4 )
    *((_WORD *)v34 + 1) |= 0x20u;
  if ( (v88 & 2) != 0 )
  {
    *(_QWORD *)(v9 + 36) = *(_QWORD *)(a5 + 48);
    *((_DWORD *)v9 + 7) = *(_DWORD *)(a5 + 40);
  }
  v87 = 1;
  if ( (v88 & 2) != 0 )
  {
LABEL_49:
    v42 = v91;
    if ( HvpMarkCellDirty(v14, *(unsigned int *)(v91 + 32), 0) )
    {
      v43 = a8;
      if ( a8 )
      {
LABEL_53:
        v86 = 1;
        *(_DWORD *)(v13 + 32) = HIDWORD(BugCheckParameter3);
        HIDWORD(BugCheckParameter3) = -1;
        *(_QWORD *)(v13 + 232) = v43;
        if ( (v88 & 0x42) == 0 )
        {
          *(_DWORD *)(v13 + 88) = *((_DWORD *)v9 + 9);
          *(_QWORD *)(v13 + 96) = *((unsigned int *)v9 + 10);
        }
        ++*(_QWORD *)(v13 + 296);
        CmpRebuildKcbCacheFromNode(v13);
        if ( (v88 & 2) == 0 )
          CmpAssignSecurityToKcb(v13, *((unsigned int *)v9 + 11), 0);
        if ( !a8 )
          goto LABEL_58;
        v63 = P;
        *((_DWORD *)P + 17) = 0;
        v63[18] = v100;
        v64 = v94;
        *((_QWORD *)v63 + 10) = v94;
        v64[17] = 1;
        *((_QWORD *)v64 + 11) = v13;
        v65 = CmAddLogForAction(v63);
        v26 = v65;
        if ( v65 >= 0 )
        {
          P = 0LL;
          v94 = 0LL;
          v42 = v91;
LABEL_58:
          v44 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(v42 + 24) + 8LL))(
                  *(_QWORD *)(v42 + 24),
                  *(unsigned int *)(v42 + 32),
                  &v102);
          v101 = v44;
          CmpUpdateKeyNodeAccessBits(*(_QWORD *)(v42 + 24), v44, *(_DWORD *)(v42 + 32));
          *(_QWORD *)(v44 + 4) = MEMORY[0xFFFFF78000000014];
          v45 = *a4;
          if ( (unsigned __int16)*(_DWORD *)(v44 + 52) < (unsigned int)v45 )
            *(_WORD *)(v44 + 52) = v45;
          v46 = *(unsigned __int16 *)(a5 + 4);
          if ( *(_DWORD *)(v44 + 56) < v46 )
            *(_DWORD *)(v44 + 56) = v46;
          ++*(_QWORD *)(v42 + 296);
          *(_WORD *)(v42 + 168) = *(_WORD *)(v44 + 52);
          *(_QWORD *)(v42 + 160) = *(_QWORD *)(v44 + 4);
          LOBYTE(v45) = 1;
          CmpCleanUpSubKeyInfo(v42, v45);
          if ( v85 )
          {
            if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v14 + 72), 0LL, 17LL) != 17 )
              ExfReleasePushLockShared((signed __int64 *)(v14 + 72));
            KeAbPostRelease(v14 + 72);
            v85 = 0;
          }
          CmpReportNotifyForKcbStack(a1, a8, 1, 0LL);
          v9 = (char *)v90;
          goto LABEL_67;
        }
        v83 = (unsigned int)v65;
        v84 = 271360LL;
LABEL_184:
        CmpRecordParseFailure(a5, v84, v83);
        v50 = v86;
        goto LABEL_71;
      }
      if ( CmpAddSubKeyEx(v14, *(unsigned int *)(v42 + 32), HIDWORD(BugCheckParameter3), 0) )
      {
        v43 = 0LL;
        goto LABEL_53;
      }
      v83 = 3221225626LL;
      v84 = 271104LL;
    }
    else
    {
      v83 = 3221225853LL;
      v84 = 270848LL;
    }
    v26 = v83;
    goto LABEL_184;
  }
  ExAcquirePushLockExclusiveEx(v14 + 1776, 0LL);
  SecurityDescriptorNode = CmpGetSecurityDescriptorNode(
                             v14,
                             HIDWORD(BugCheckParameter3),
                             (__int64)v9,
                             NewDescriptor,
                             0,
                             (unsigned int *)v9 + 11);
  v26 = SecurityDescriptorNode;
  if ( SecurityDescriptorNode >= 0 )
  {
    ExReleasePushLockEx(v14 + 1776, 0LL, v40, v41);
    goto LABEL_49;
  }
  v71 = 270592LL;
LABEL_149:
  CmpRecordParseFailure(a5, v71, (unsigned int)SecurityDescriptorNode);
  v49 = 1;
LABEL_69:
  v50 = 0;
  if ( v49 )
  {
    ExReleasePushLockEx(v14 + 1776, 0LL, v47, v48);
    v50 = 0;
  }
LABEL_71:
  if ( v50 )
  {
    HIDWORD(BugCheckParameter3) = *(_DWORD *)(v13 + 32);
    *(_DWORD *)(v13 + 32) = -1;
    CmpCleanUpKcbValueCache(v13);
    *(_DWORD *)(v13 + 88) = 0;
    *(_QWORD *)(v13 + 96) = 0xFFFFFFFFLL;
    *(_WORD *)(v13 + 178) = 0;
    *(_DWORD *)(v13 + 104) = 0;
    *(_QWORD *)(v13 + 160) = 0LL;
    *(_QWORD *)(v13 + 168) = 0LL;
    *(_DWORD *)(v13 + 176) &= 0xFFFFFF00;
    *(_BYTE *)(v13 + 177) = 0;
    *(_QWORD *)(v13 + 232) = 0LL;
    *(_QWORD *)(v13 + 80) = 0LL;
  }
  v51 = P;
  if ( P )
  {
    CmpRundownUnitOfWork(P);
    ExFreePoolWithTag(v51, 0x77554D43u);
  }
  v52 = v94;
  if ( v94 )
  {
    CmpRundownUnitOfWork(v94);
    ExFreePoolWithTag(v52, 0x77554D43u);
  }
  if ( NewDescriptor && (*(_DWORD *)(v14 + 4152) & 0x20) == 0 )
  {
    if ( (*v20 & 1) != 0 && (v20[6] & 4) != 0 )
    {
      SeDeassignSecurity(&NewDescriptor);
    }
    else
    {
      v53 = *(_QWORD *)(a3 + 72);
      v54 = *(void **)(v53 + 48);
      if ( v54 )
        ExFreePoolWithTag(v54, 0);
      *(_QWORD *)(v53 + 48) = NewDescriptor;
    }
  }
  if ( v101 )
    (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v91 + 24) + 16LL))(*(_QWORD *)(v91 + 24), &v102);
  if ( v97 )
    (*(void (__fastcall **)(ULONG_PTR, __int64 *))(v14 + 16))(v14, &v98);
  if ( (_DWORD)BugCheckParameter3 != -1 )
    HvFreeCell(v14, (unsigned int)BugCheckParameter3);
  if ( v9 )
    (*(void (__fastcall **)(ULONG_PTR, __int64 *))(v14 + 16))(v14, &v103);
  if ( HIDWORD(BugCheckParameter3) != -1 )
  {
    if ( v87 )
      CmpFreeKeyByCell(v14, HIDWORD(BugCheckParameter3));
    else
      HvFreeCell(v14, HIDWORD(BugCheckParameter3));
  }
  if ( v85 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v14 + 72), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v14 + 72));
    KeAbPostRelease(v14 + 72);
  }
  return v26;
}
