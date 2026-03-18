/*
 * XREFs of CmRenameKey @ 0x1406F1120
 * Callers:
 *     NtRenameKey @ 0x1406EC3E0 (NtRenameKey.c)
 * Callees:
 *     CmpTransEnlistUowInCmTrans @ 0x14000709C (CmpTransEnlistUowInCmTrans.c)
 *     CmpTransEnlistUowInKcb @ 0x14007C9A4 (CmpTransEnlistUowInKcb.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     CmpLockIXLockExclusive @ 0x1404984A8 (CmpLockIXLockExclusive.c)
 *     CmpRebuildKcbCache @ 0x1404985B8 (CmpRebuildKcbCache.c)
 *     CmpRundownUnitOfWork @ 0x14049896C (CmpRundownUnitOfWork.c)
 *     CmpDiscardKcb @ 0x14049AB30 (CmpDiscardKcb.c)
 *     CmpLockRegistryExclusive @ 0x14049BC8C (CmpLockRegistryExclusive.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x1404A339C (CmpUpdateKeyNodeAccessBits.c)
 *     CmpUnlockRegistry @ 0x1404A8188 (CmpUnlockRegistry.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1404A8840 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpCreateKeyControlBlock @ 0x1404AB0E0 (CmpCreateKeyControlBlock.c)
 *     CmpFindKcbInHashEntryByName @ 0x1404AB5BC (CmpFindKcbInHashEntryByName.c)
 *     CmpDereferenceNameControlBlockWithLock @ 0x1404AB680 (CmpDereferenceNameControlBlockWithLock.c)
 *     CmpGetNameControlBlock @ 0x1404AB750 (CmpGetNameControlBlock.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1404AECB0 (CmpIsKeyDeletedForKeyBody.c)
 *     HvpMarkCellDirty @ 0x1404E3EC4 (HvpMarkCellDirty.c)
 *     CmpHashUnicodeComponent @ 0x1405132A0 (CmpHashUnicodeComponent.c)
 *     CmpAddSubKeyEx @ 0x140513418 (CmpAddSubKeyEx.c)
 *     CmpCopyName @ 0x1405157EC (CmpCopyName.c)
 *     HvFreeCell @ 0x14051584C (HvFreeCell.c)
 *     HvAllocateCell @ 0x140515B84 (HvAllocateCell.c)
 *     CmpCleanUpSubKeyInfo @ 0x140516B80 (CmpCleanUpSubKeyInfo.c)
 *     CmpRemoveSubKey @ 0x140517384 (CmpRemoveSubKey.c)
 *     CmpReferenceKeyControlBlock @ 0x14052AA50 (CmpReferenceKeyControlBlock.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x14054BFC8 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpSearchForOpenSubKeys @ 0x14054CAAC (CmpSearchForOpenSubKeys.c)
 *     CmpMarkKeyUnbacked @ 0x14054DED8 (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x14054DF64 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpCleanupRollbackPacket @ 0x14054E0A8 (CmpCleanupRollbackPacket.c)
 *     CmpReportNotify @ 0x14054F614 (CmpReportNotify.c)
 *     CmpRemoveKeyHash @ 0x140558678 (CmpRemoveKeyHash.c)
 *     CmpNameSize @ 0x140560BD4 (CmpNameSize.c)
 *     CmpMarkIndexDirty @ 0x14057076C (CmpMarkIndexDirty.c)
 *     CmAddLogForAction @ 0x140576A18 (CmAddLogForAction.c)
 *     CmpAllocateUnitOfWork @ 0x14057D8F0 (CmpAllocateUnitOfWork.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x140583DF4 (CmpLogTransactionAbortedWithChildName.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x1405DDE50 (CmpFindSubKeyByNameWithStatus.c)
 *     EnlistKeyBodyWithKCB @ 0x14062E454 (EnlistKeyBodyWithKCB.c)
 *     CmpComputeKcbConvKey @ 0x1406F3494 (CmpComputeKcbConvKey.c)
 *     CmpInsertKeyHash @ 0x1406F3784 (CmpInsertKeyHash.c)
 *     DelistKeyBodyFromKCB @ 0x1406F3A84 (DelistKeyBodyFromKCB.c)
 *     CmpCheckKeyAccess @ 0x1406F5DB8 (CmpCheckKeyAccess.c)
 *     CmpDoAccessCheckOnSubtree @ 0x1406F62BC (CmpDoAccessCheckOnSubtree.c)
 *     CmpRollbackTransactionArray @ 0x1406F9C2C (CmpRollbackTransactionArray.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x1406FADDC (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmpLogUnsupportedOperation @ 0x1406FB130 (CmpLogUnsupportedOperation.c)
 *     CmpSnapshotTxOwnerArray @ 0x1406FD100 (CmpSnapshotTxOwnerArray.c)
 *     CmpDuplicateIndex @ 0x1406FF144 (CmpDuplicateIndex.c)
 *     CmpFreeIndexByCell @ 0x1406FF334 (CmpFreeIndexByCell.c)
 *     CmpUpdateParentForEachSon @ 0x140700868 (CmpUpdateParentForEachSon.c)
 */

__int64 __fastcall CmRenameKey(__int64 a1, __m128i *a2, char a3)
{
  __int64 v4; // r12
  __int64 v5; // r13
  ULONG_PTR v6; // rsi
  __int64 v7; // rdi
  int v8; // ebx
  ULONG_PTR v9; // r14
  __int64 v10; // rax
  int v11; // r8d
  PVOID v12; // rcx
  int v13; // r8d
  _DWORD *v14; // rcx
  __int64 v15; // r9
  unsigned int v16; // ebx
  __int64 v17; // r8
  __int64 v18; // rcx
  _QWORD *v19; // rbx
  _QWORD *v20; // r13
  _QWORD *v21; // rbx
  unsigned int v22; // ebx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rbx
  int v26; // eax
  ULONG_PTR v27; // rax
  ULONG_PTR v28; // rbx
  int v29; // eax
  unsigned int v30; // ebx
  _WORD *v31; // rbx
  __int64 v32; // rbx
  unsigned __int16 v33; // ax
  unsigned int v34; // edi
  __int64 v35; // rbx
  unsigned int v36; // r15d
  int v37; // eax
  int v38; // r15d
  char *NameControlBlock; // rax
  __int64 v40; // rax
  int v41; // ebx
  __int64 v42; // rcx
  void *v43; // rcx
  int v44; // edi
  unsigned int v45; // ebx
  ULONG_PTR KcbInHashEntryByName; // rax
  ULONG_PTR v47; // r13
  _QWORD *v48; // r13
  unsigned int v49; // eax
  ULONG_PTR v50; // rdx
  PVOID v51; // rdi
  PVOID v52; // rdi
  PVOID v53; // rdi
  ULONG_PTR v54; // rdi
  ULONG_PTR v55; // rdi
  _QWORD *v56; // rcx
  ULONG v57; // edx
  _QWORD *v58; // rax
  __int64 v59; // rdx
  __int64 v60; // r8
  __int64 v61; // r9
  unsigned int v63; // [rsp+58h] [rbp-B0h]
  unsigned int v64; // [rsp+5Ch] [rbp-ACh] BYREF
  unsigned int BugCheckParameter3; // [rsp+60h] [rbp-A8h]
  unsigned int BugCheckParameter3_4; // [rsp+64h] [rbp-A4h]
  ULONG_PTR v67; // [rsp+68h] [rbp-A0h]
  __int64 v68; // [rsp+70h] [rbp-98h] BYREF
  __int64 v69; // [rsp+78h] [rbp-90h] BYREF
  _DWORD v70[2]; // [rsp+80h] [rbp-88h] BYREF
  _DWORD v71[2]; // [rsp+88h] [rbp-80h] BYREF
  __int64 v72; // [rsp+90h] [rbp-78h] BYREF
  _DWORD v73[2]; // [rsp+98h] [rbp-70h] BYREF
  PVOID P; // [rsp+A0h] [rbp-68h]
  PVOID UnitOfWork; // [rsp+A8h] [rbp-60h]
  ULONG_PTR BugCheckParameter2; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v77; // [rsp+B8h] [rbp-50h] BYREF
  int v78; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v79; // [rsp+C8h] [rbp-40h] BYREF
  _DWORD v80[2]; // [rsp+D0h] [rbp-38h] BYREF
  unsigned int *v81; // [rsp+D8h] [rbp-30h]
  _QWORD v82[2]; // [rsp+E0h] [rbp-28h] BYREF
  _QWORD v83[2]; // [rsp+F0h] [rbp-18h] BYREF
  char v84; // [rsp+100h] [rbp-8h] BYREF
  int v85; // [rsp+104h] [rbp-4h]
  PVOID v86; // [rsp+108h] [rbp+0h]
  _QWORD v87[9]; // [rsp+110h] [rbp+8h] BYREF
  char v90; // [rsp+180h] [rbp+78h] BYREF

  v79 = 0LL;
  v70[0] = -1;
  v70[1] = 0;
  v4 = 0LL;
  v71[1] = 0;
  v5 = 0LL;
  v80[1] = 0;
  v73[1] = 0;
  v87[0] = 0LL;
  v87[1] = 0LL;
  v71[0] = -1;
  LODWORD(v67) = -1;
  BugCheckParameter3_4 = -1;
  v80[0] = -1;
  v73[0] = -1;
  v81 = 0LL;
  P = 0LL;
  v86 = 0LL;
  UnitOfWork = 0LL;
  BugCheckParameter2 = 0LL;
  LODWORD(v68) = 0;
  while ( 1 )
  {
    if ( (CmpShutdownRundown & 1) != 0 )
    {
      v8 = -1073741431;
      goto LABEL_127;
    }
    v6 = *(_QWORD *)(a1 + 8);
    v7 = 0LL;
    v72 = 0LL;
    if ( (*(_DWORD *)(*(_QWORD *)(v6 + 24) + 160LL) & 0x100000) != 0 )
    {
      v8 = -1073741790;
      goto LABEL_127;
    }
    if ( CmpIsKeyDeletedForKeyBody(a1, 0LL) )
      goto LABEL_124;
    if ( *(_QWORD *)(a1 + 56) || *(_QWORD *)(a1 + 64) )
    {
      v8 = CmpTransSearchAddTransFromKeyBody((_QWORD *)a1, &v72);
      if ( v8 < 0 )
        goto LABEL_127;
      v7 = v72;
    }
    if ( CmpIsKeyDeletedForKeyBody(a1, v7) )
    {
LABEL_124:
      v8 = (*(_BYTE *)(a1 + 48) & 1) != 0 ? -1073740763 : -1073741444;
      goto LABEL_127;
    }
    v9 = *(_QWORD *)(v6 + 24);
    BugCheckParameter3 = *(_DWORD *)(v6 + 32);
    v63 = BugCheckParameter3 >> 31;
    if ( (PVOID)v9 == CmpMasterHive
      || (v10 = *(_QWORD *)(v6 + 64), v11 = 0, !v10)
      || (v12 = *(PVOID *)(v10 + 24), v12 == CmpMasterHive) )
    {
      v8 = -1073741790;
      goto LABEL_120;
    }
    if ( *(_WORD *)(v6 + 58) )
    {
      CmpLogUnsupportedOperation(5LL);
      v8 = -1073741822;
      goto LABEL_127;
    }
    LOBYTE(v11) = a3;
    v8 = CmpCheckKeyAccess((_DWORD)v12, *(_DWORD *)(v10 + 32), v11, 4, 0);
    if ( v8 < 0 )
      goto LABEL_127;
    LOBYTE(v13) = a3;
    v8 = CmpDoAccessCheckOnSubtree(v9, BugCheckParameter3, v13, 0x10000, 1);
    if ( v8 < 0 )
      goto LABEL_127;
    CmpReportNotify(v6, v7, 1, 0LL);
    if ( v7 )
      break;
    v14 = (_DWORD *)(v6 + 240);
    if ( !*(_DWORD *)(v6 + 240) )
    {
      v14 = (_DWORD *)(v6 + 256);
      if ( !*(_DWORD *)(v6 + 256) )
      {
        v18 = *(_QWORD *)(v6 + 64);
        if ( *(_DWORD *)(v18 + 240) )
        {
          v14 = (_DWORD *)(v18 + 240);
        }
        else
        {
          v14 = (_DWORD *)(v18 + 256);
          if ( !*v14 )
            goto LABEL_37;
        }
      }
    }
    v8 = CmpSnapshotTxOwnerArray(v14, &v64, &v69);
    if ( v8 >= 0 )
    {
      v16 = v64;
      CmpLogTransactionAbortedWithChildName(v6, 0LL, 4u, v15, v64);
      CmpUnlockRegistry();
      v8 = CmpRollbackTransactionArray(v16, v69, v17, &v68);
      CmpLockRegistryExclusive();
      if ( v8 >= 0 )
        continue;
    }
    goto LABEL_127;
  }
  if ( *(_QWORD *)(v6 + 200) != v6 + 200 )
  {
    v8 = -1072103423;
    goto LABEL_127;
  }
  P = CmpAllocateUnitOfWork();
  v19 = P;
  if ( !P || (UnitOfWork = CmpAllocateUnitOfWork()) == 0LL )
  {
LABEL_72:
    v8 = -1073741670;
LABEL_93:
    v36 = v63;
LABEL_94:
    v49 = BugCheckParameter3_4;
    if ( BugCheckParameter3_4 != -1 )
    {
      v50 = *(unsigned int *)(v5 + 4LL * v36 + 28);
      if ( (_DWORD)v50 != -1 )
      {
        CmpFreeIndexByCell(v9, v50);
        v49 = BugCheckParameter3_4;
      }
      *(_DWORD *)(v5 + 4LL * v36 + 28) = v49;
    }
    goto LABEL_98;
  }
  CmpTransEnlistUowInKcb(v19, *(_QWORD *)(v6 + 64));
  v8 = CmpTransEnlistUowInCmTrans(v19, v7);
  if ( v8 < 0 )
    goto LABEL_106;
  v20 = UnitOfWork;
  CmpTransEnlistUowInKcb(UnitOfWork, v6);
  v8 = CmpTransEnlistUowInCmTrans(v20, v7);
  if ( v8 < 0 )
    goto LABEL_106;
  v21 = P;
  if ( !CmpLockIXLockExclusive(*(_QWORD *)(v6 + 64) + 240LL, P, 0)
    || !CmpLockIXLockExclusive(*(_QWORD *)(v6 + 64) + 256LL, v21, 1)
    || !CmpLockIXLockExclusive(v6 + 240, v20, 0)
    || !CmpLockIXLockExclusive(v6 + 256, v20, 1) )
  {
    v8 = -1072103423;
    goto LABEL_106;
  }
  v63 = 1;
LABEL_37:
  v22 = BugCheckParameter3;
  v23 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v9 + 8))(v9, BugCheckParameter3, v70);
  v4 = v23;
  if ( !v23 )
  {
    v8 = -1073741670;
LABEL_106:
    v51 = P;
    if ( P )
    {
      CmpRundownUnitOfWork(P);
      ExFreePoolWithTag(v51, 0x77554D43u);
    }
    v52 = v86;
    if ( v86 )
    {
      CmpRundownUnitOfWork(v86);
      ExFreePoolWithTag(v52, 0x77554D43u);
    }
    v53 = UnitOfWork;
    if ( UnitOfWork )
    {
      CmpRundownUnitOfWork(UnitOfWork);
      ExFreePoolWithTag(v53, 0x77554D43u);
    }
    v54 = BugCheckParameter2;
    if ( BugCheckParameter2 )
    {
      CmpMarkKeyUnbacked(v6);
      CmpDereferenceKeyControlBlockWithLock(v54);
    }
    goto LABEL_127;
  }
  CmpUpdateKeyNodeAccessBits(v9, v23, v22);
  v24 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v9 + 8))(v9, *(unsigned int *)(v4 + 16), v71);
  v5 = v24;
  if ( !v24 )
  {
    v8 = -1073741670;
LABEL_98:
    if ( v4 )
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v9 + 16))(v9, v70);
    if ( v5 )
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v9 + 16))(v9, v71);
    if ( (_DWORD)v67 != -1 )
      HvFreeCell(v9, (unsigned int)v67);
    if ( v81 )
      *(_QWORD *)(v6 + 72) = v81;
    goto LABEL_106;
  }
  CmpUpdateKeyNodeAccessBits(v9, v24, *(_DWORD *)(v4 + 16));
  CmpFindSubKeyByNameWithStatus(v9, v5, (unsigned __int16 *)a2, &v78);
  if ( v78 != -1 )
  {
    v8 = -1073741535;
    goto LABEL_98;
  }
  if ( v7 )
  {
LABEL_49:
    v29 = (unsigned __int16)CmpNameSize((unsigned __int16 *)a2) + 76;
    LODWORD(v67) = v29;
    if ( !v7 )
    {
      if ( !HvpMarkCellDirty(v9, *(unsigned int *)(v4 + 16), 0) )
        goto LABEL_51;
      if ( !CmpMarkIndexDirty(v9, *(_DWORD *)(v4 + 16), v22) )
        goto LABEL_51;
      if ( !HvpMarkCellDirty(v9, v22, 0) )
        goto LABEL_51;
      v30 = *(_DWORD *)(v5 + 4LL * v63 + 28);
      BugCheckParameter3_4 = v30;
      if ( v30 == -1 || !HvpMarkCellDirty(v9, v30, 0) )
        goto LABEL_51;
      v31 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v9 + 8))(v9, v30, v73);
      if ( !v31 )
      {
        v8 = -1073741670;
        goto LABEL_120;
      }
      if ( *v31 == 26994 && v31[1] )
      {
        while ( HvpMarkCellDirty(v9, *(unsigned int *)&v31[2 * (unsigned int)v7 + 2], 0) )
        {
          LODWORD(v7) = v7 + 1;
          if ( (unsigned int)v7 >= (unsigned __int16)v31[1] )
            goto LABEL_62;
        }
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v9 + 16))(v9, v73);
        goto LABEL_51;
      }
LABEL_62:
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v9 + 16))(v9, v73);
      v29 = v67;
    }
    LODWORD(v67) = HvAllocateCell(v9, v29, v63, (__int64)&v79, (__int64)v80);
    if ( (_DWORD)v67 != -1 )
    {
      v32 = v79;
      *(_OWORD *)v79 = *(_OWORD *)v4;
      *(_OWORD *)(v32 + 16) = *(_OWORD *)(v4 + 16);
      *(_OWORD *)(v32 + 32) = *(_OWORD *)(v4 + 32);
      *(_OWORD *)(v32 + 48) = *(_OWORD *)(v4 + 48);
      *(_QWORD *)(v32 + 64) = *(_QWORD *)(v4 + 64);
      *(_DWORD *)(v32 + 72) = *(_DWORD *)(v4 + 72);
      v33 = CmpCopyName((_BYTE *)(v32 + 76), (const void **)a2);
      *(_WORD *)(v32 + 72) = v33;
      v34 = a2->m128i_u16[0];
      if ( v33 >= v34 )
        *(_WORD *)(v32 + 2) &= ~0x20u;
      else
        *(_WORD *)(v32 + 2) |= 0x20u;
      v35 = MEMORY[0xFFFFF78000000014];
      *(_QWORD *)(v79 + 4) = MEMORY[0xFFFFF78000000014];
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v9 + 16))(v9, v80);
      if ( !v72 )
      {
        v36 = v63;
        v37 = CmpDuplicateIndex(v9);
        *(_DWORD *)(v5 + 4LL * v63 + 28) = v37;
        if ( v37 == -1 )
        {
          v8 = -1073741670;
          goto LABEL_94;
        }
        v38 = v67;
        if ( CmpAddSubKeyEx(v9, *(unsigned int *)(v4 + 16), v67, 0) )
        {
          if ( CmpRemoveSubKey(v9, *(unsigned int *)(v4 + 16), BugCheckParameter3) )
          {
            v81 = *(unsigned int **)(v6 + 72);
            NameControlBlock = CmpGetNameControlBlock((unsigned __int16 *)a2, 0LL, &v90);
            *(_QWORD *)(v6 + 72) = NameControlBlock;
            if ( NameControlBlock )
            {
              if ( (unsigned __int8)CmpUpdateParentForEachSon(v9) )
              {
                CmpFreeIndexByCell(v9, BugCheckParameter3_4);
                v40 = *(_QWORD *)(v6 + 64);
                ++*(_QWORD *)(v6 + 296);
                *(_DWORD *)(v6 + 32) = v38;
                *(_QWORD *)(v6 + 160) = v35;
                ++*(_QWORD *)(v40 + 296);
                CmpCleanUpSubKeyInfo(*(_QWORD *)(v6 + 64), 1);
                if ( (unsigned __int16)*(_DWORD *)(v5 + 52) < v34 )
                {
                  *(_WORD *)(v5 + 52) = v34;
                  *(_WORD *)(*(_QWORD *)(v6 + 64) + 168LL) = v34;
                }
                v41 = CmpComputeKcbConvKey(v6);
                if ( v41 != *(_DWORD *)(v6 + 8) )
                {
                  CmpRemoveKeyHash(*(_QWORD *)(v6 + 24), (_DWORD *)(v6 + 8));
                  v42 = *(_QWORD *)(v6 + 24);
                  *(_DWORD *)(v6 + 8) = v41;
                  CmpInsertKeyHash(v42, v6 + 8);
                }
                (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v9 + 16))(v9, v71);
                (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v9 + 16))(v9, v70);
                CmpSearchForOpenSubKeys(v6, 1, 0LL);
                CmpDereferenceNameControlBlockWithLock(v81);
                v8 = 0;
                if ( *(_QWORD *)(v6 + 288) )
                  _InterlockedOr64((volatile signed __int64 *)(v6 + 288), 1uLL);
                v43 = *(void **)(v6 + 192);
                if ( (unsigned __int64)v43 >= 2 )
                  ExFreePoolWithTag(v43, 0x624E4D43u);
                *(_QWORD *)(v6 + 192) = v90 == 1;
                goto LABEL_127;
              }
            }
          }
        }
        goto LABEL_72;
      }
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v9 + 16))(v9, v71);
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v9 + 16))(v9, v70);
      v4 = 0LL;
      v44 = CmpHashUnicodeComponent(a2);
      v77 = *(_QWORD *)(v6 + 64);
      v45 = v44 + 37 * *(_DWORD *)(v77 + 8);
      KcbInHashEntryByName = CmpFindKcbInHashEntryByName(v9, v45, v77, (__int64)a2);
      v47 = KcbInHashEntryByName;
      if ( KcbInHashEntryByName )
      {
        if ( !CmpReferenceKeyControlBlock(KcbInHashEntryByName) )
        {
          v8 = -1073741670;
          v5 = 0LL;
          goto LABEL_93;
        }
        *(_DWORD *)(v47 + 32) = v67;
        BugCheckParameter2 = v47;
        CmpRebuildKcbCache(v47);
      }
      else
      {
        v8 = CmpCreateKeyControlBlock(v9, v67, v77, 0LL, 0, (unsigned __int16 *)a2, v44, v45, &BugCheckParameter2);
        if ( v8 < 0 )
        {
LABEL_92:
          v5 = 0LL;
          goto LABEL_93;
        }
      }
      v48 = CmpAllocateUnitOfWork();
      v86 = v48;
      if ( v48 )
      {
        v55 = BugCheckParameter2;
        CmpTransEnlistUowInKcb(v48, BugCheckParameter2);
        v8 = CmpTransEnlistUowInCmTrans(v48, v72);
        if ( v8 >= 0 )
        {
          CmpLockIXLockExclusive(v55 + 240, v48, 0);
          CmpLockIXLockExclusive(v55 + 256, v48, 1);
          v56 = UnitOfWork;
          v57 = BugCheckParameter3;
          *(_QWORD *)(v55 + 232) = v72;
          v58 = P;
          v48[11] = v6;
          v57 >>= 31;
          v58[11] = v6;
          v56[11] = v55;
          v58[12] = v55;
          *((_DWORD *)v58 + 17) = 10;
          *((_DWORD *)v56 + 17) = 11;
          *((_DWORD *)v48 + 17) = 12;
          *((_DWORD *)v48 + 18) = v57;
          v48[10] = v58;
          v8 = CmAddLogForAction((__int64)v56, v57);
          if ( v8 >= 0 )
          {
            CmpDereferenceKeyControlBlockWithLock(v6);
            LOBYTE(v59) = 1;
            DelistKeyBodyFromKCB(a1, v59);
            *(_QWORD *)(a1 + 8) = v55;
            EnlistKeyBodyWithKCB((ULONG_PTR *)a1, 2LL, v60, v61);
            v8 = 0;
            goto LABEL_127;
          }
        }
      }
      else
      {
        v8 = -1073741670;
      }
      goto LABEL_92;
    }
LABEL_51:
    v8 = -1073741443;
    goto LABEL_120;
  }
  v25 = *(_QWORD *)(v6 + 64);
  v26 = CmpHashUnicodeComponent(a2);
  v27 = CmpFindKcbInHashEntryByName(v9, v26 + 37 * *(_DWORD *)(v25 + 8), v25, (__int64)a2);
  v67 = v27;
  if ( !v27 )
    goto LABEL_47;
  v82[0] = 1LL;
  v82[1] = v87;
  CmpEnumerateAllHigherLayerKcbs(
    v27,
    (unsigned int)CmpCleanUpHigherLayerKcbCachesPreCallback,
    (unsigned int)CmpPrepareToInvalidateAllHigherLayerKcbsPostCallback,
    (unsigned int)v82,
    1,
    1);
  v8 = HIDWORD(v82[0]);
  if ( v82[0] >= 0 )
  {
    v28 = v67;
    v84 = 1;
    v85 = 8;
    CmpEnumerateAllHigherLayerKcbs(
      v67,
      (unsigned int)CmpCleanUpHigherLayerKcbCachesPreCallback,
      (unsigned int)CmpInvalidateAllHigherLayerKcbsPostCallback,
      (unsigned int)&v84,
      1,
      1);
    CmpFlushNotifiesOnKeyBodyList(v28, 8LL, 1);
    CmpDiscardKcb(v28);
LABEL_47:
    v83[0] = 1LL;
    v83[1] = v87;
    CmpEnumerateAllHigherLayerKcbs(
      v6,
      (unsigned int)CmpCleanUpHigherLayerKcbCachesPreCallback,
      (unsigned int)CmpPrepareToInvalidateAllHigherLayerKcbsPostCallback,
      (unsigned int)v83,
      1,
      1);
    v8 = HIDWORD(v83[0]);
    if ( v83[0] >= 0 )
    {
      LOBYTE(v77) = 1;
      HIDWORD(v77) = 8;
      CmpEnumerateAllHigherLayerKcbs(
        v6,
        (unsigned int)CmpCleanUpHigherLayerKcbCachesPreCallback,
        (unsigned int)CmpInvalidateAllHigherLayerKcbsPostCallback,
        (unsigned int)&v77,
        1,
        1);
      v22 = BugCheckParameter3;
      goto LABEL_49;
    }
  }
LABEL_120:
  if ( v4 )
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v9 + 16))(v9, v70);
  if ( v5 )
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v9 + 16))(v9, v71);
LABEL_127:
  CmpCleanupRollbackPacket((__int64)v87);
  return (unsigned int)v8;
}
