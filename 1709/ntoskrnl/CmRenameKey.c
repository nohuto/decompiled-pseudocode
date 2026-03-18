/*
 * XREFs of CmRenameKey @ 0x14068CE58
 * Callers:
 *     NtRenameKey @ 0x14068812C (NtRenameKey.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     CmpTransEnlistUowInKcb @ 0x140100358 (CmpTransEnlistUowInKcb.c)
 *     CmpTransEnlistUowInCmTrans @ 0x14010A3B0 (CmpTransEnlistUowInCmTrans.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     CmpSearchForOpenSubKeys @ 0x14046E954 (CmpSearchForOpenSubKeys.c)
 *     CmpDiscardKcb @ 0x140472C60 (CmpDiscardKcb.c)
 *     CmpMarkKeyUnbacked @ 0x140472E5C (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x140472EE4 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpMarkIndexDirty @ 0x140472FC8 (CmpMarkIndexDirty.c)
 *     CmpRemoveSubKey @ 0x140473274 (CmpRemoveSubKey.c)
 *     CmpAddSubKeyEx @ 0x140473D00 (CmpAddSubKeyEx.c)
 *     CmpHashUnicodeComponent @ 0x140474458 (CmpHashUnicodeComponent.c)
 *     CmpCleanUpSubKeyInfo @ 0x140476784 (CmpCleanUpSubKeyInfo.c)
 *     HvFreeCell @ 0x1404778AC (HvFreeCell.c)
 *     CmpCopyName @ 0x140477D28 (CmpCopyName.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1404784E0 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpDereferenceNameControlBlockWithLock @ 0x140478920 (CmpDereferenceNameControlBlockWithLock.c)
 *     HvAllocateCell @ 0x140479BF4 (HvAllocateCell.c)
 *     CmpReportNotify @ 0x14047C204 (CmpReportNotify.c)
 *     HvpMarkCellDirty @ 0x14047D0F4 (HvpMarkCellDirty.c)
 *     CmpUnlockRegistry @ 0x14047E950 (CmpUnlockRegistry.c)
 *     CmpCreateKeyControlBlock @ 0x140480870 (CmpCreateKeyControlBlock.c)
 *     CmpGetNameControlBlock @ 0x140480E00 (CmpGetNameControlBlock.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x140481B84 (CmpUpdateKeyNodeAccessBits.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140482380 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpLockRegistryExclusive @ 0x1404E3BCC (CmpLockRegistryExclusive.c)
 *     CmpReferenceKeyControlBlock @ 0x140563480 (CmpReferenceKeyControlBlock.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x140568D78 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpLockIXLockExclusive @ 0x140569108 (CmpLockIXLockExclusive.c)
 *     CmpRundownUnitOfWork @ 0x140569428 (CmpRundownUnitOfWork.c)
 *     CmpRebuildKcbCache @ 0x1405695C4 (CmpRebuildKcbCache.c)
 *     CmpNameSize @ 0x1405750F8 (CmpNameSize.c)
 *     CmpRemoveKeyHash @ 0x140593894 (CmpRemoveKeyHash.c)
 *     CmAddLogForAction @ 0x140593D1C (CmAddLogForAction.c)
 *     CmpAllocateUnitOfWork @ 0x14059ABD8 (CmpAllocateUnitOfWork.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x14059E850 (CmpLogTransactionAbortedWithChildName.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x1405BC634 (CmpFindSubKeyByNameWithStatus.c)
 *     EnlistKeyBodyWithKCB @ 0x1405C098C (EnlistKeyBodyWithKCB.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x1405F2DD8 (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmpComputeKcbConvKey @ 0x14068F5CC (CmpComputeKcbConvKey.c)
 *     CmpFindKcbInHashEntryByName @ 0x14068F9BC (CmpFindKcbInHashEntryByName.c)
 *     CmpInsertKeyHash @ 0x14068FAB4 (CmpInsertKeyHash.c)
 *     DelistKeyBodyFromKCB @ 0x14068FEE8 (DelistKeyBodyFromKCB.c)
 *     CmpCheckKeyAccess @ 0x140692EC8 (CmpCheckKeyAccess.c)
 *     CmpDoAccessCheckOnSubtree @ 0x1406933CC (CmpDoAccessCheckOnSubtree.c)
 *     CmpRollbackTransactionArray @ 0x1406961BC (CmpRollbackTransactionArray.c)
 *     CmpLogUnsupportedOperation @ 0x140697FF0 (CmpLogUnsupportedOperation.c)
 *     CmpSnapshotTxOwnerArray @ 0x1406998A4 (CmpSnapshotTxOwnerArray.c)
 *     CmpDuplicateIndex @ 0x14069A568 (CmpDuplicateIndex.c)
 *     CmpFreeIndexByCell @ 0x14069A758 (CmpFreeIndexByCell.c)
 *     CmpUpdateParentForEachSon @ 0x14069BC20 (CmpUpdateParentForEachSon.c)
 */

__int64 __fastcall CmRenameKey(__int64 a1, __m128i *a2, char a3)
{
  char v4; // al
  char v5; // bl
  ULONG_PTR v6; // r14
  __int64 v7; // r15
  __int64 v8; // r12
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v10; // rsi
  __int64 v11; // rdi
  int v12; // ebx
  bool IsKeyDeletedForKeyBody; // al
  int v14; // r8d
  __int64 v15; // rax
  PVOID v16; // rcx
  int v17; // r8d
  _DWORD *v18; // rcx
  __int64 v19; // r9
  unsigned int v20; // ebx
  __int64 v21; // r8
  __int64 v22; // rcx
  _QWORD *v23; // r13
  _QWORD *v24; // r15
  unsigned int v25; // r13d
  __int64 v26; // rax
  __int64 v27; // rax
  unsigned __int16 *v28; // rbx
  __int64 v29; // rbx
  int v30; // eax
  __int64 KcbInHashEntryByName; // r13
  int v32; // eax
  unsigned int v33; // ebx
  _WORD *v34; // rbx
  int v35; // edi
  __int64 v36; // rbx
  unsigned __int16 v37; // ax
  unsigned int v38; // edi
  __int64 v39; // rbx
  int v40; // eax
  unsigned int v41; // edx
  char *NameControlBlock; // rax
  unsigned int v43; // r13d
  __int64 v44; // rax
  int v45; // ebx
  __int64 v46; // rcx
  void *v47; // rcx
  int v48; // edi
  __int64 v49; // r8
  unsigned int v50; // ebx
  ULONG_PTR v51; // rax
  ULONG_PTR v52; // r13
  _QWORD *v53; // rax
  _QWORD *v54; // rbx
  ULONG_PTR v55; // rdi
  __int64 v56; // r13
  _QWORD *v57; // rbx
  _QWORD *v58; // rcx
  unsigned int v59; // eax
  _QWORD *v60; // r13
  ULONG v61; // edx
  __int64 v62; // rdx
  int v63; // r13d
  __int64 v64; // rdi
  ULONG_PTR v65; // rdx
  PVOID v66; // rdi
  PVOID v67; // rdi
  ULONG_PTR v68; // rdi
  unsigned int v70; // [rsp+58h] [rbp-B0h]
  int v71; // [rsp+5Ch] [rbp-ACh] BYREF
  unsigned int v72; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int BugCheckParameter3; // [rsp+64h] [rbp-A4h]
  unsigned int BugCheckParameter3_4; // [rsp+68h] [rbp-A0h]
  int v75; // [rsp+6Ch] [rbp-9Ch] BYREF
  ULONG_PTR v76; // [rsp+70h] [rbp-98h]
  __int64 v77; // [rsp+78h] [rbp-90h] BYREF
  _DWORD v78[2]; // [rsp+80h] [rbp-88h] BYREF
  _DWORD v79[2]; // [rsp+88h] [rbp-80h] BYREF
  _QWORD *UnitOfWork; // [rsp+90h] [rbp-78h]
  _DWORD v81[2]; // [rsp+98h] [rbp-70h] BYREF
  __int64 v82; // [rsp+A0h] [rbp-68h] BYREF
  PVOID v83; // [rsp+A8h] [rbp-60h]
  ULONG_PTR v84; // [rsp+B0h] [rbp-58h] BYREF
  int v85; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v86; // [rsp+C0h] [rbp-48h] BYREF
  _DWORD v87[2]; // [rsp+C8h] [rbp-40h] BYREF
  unsigned int *v88; // [rsp+D0h] [rbp-38h]
  PVOID P; // [rsp+D8h] [rbp-30h]
  _QWORD v90[2]; // [rsp+E0h] [rbp-28h] BYREF
  _QWORD v91[11]; // [rsp+F0h] [rbp-18h] BYREF
  int v95; // [rsp+170h] [rbp+68h]
  __int64 v96; // [rsp+170h] [rbp+68h]

  v86 = 0LL;
  v4 = 0;
  v78[0] = -1;
  v78[1] = 0;
  v5 = a3;
  v79[1] = 0;
  v6 = 0LL;
  v87[1] = 0;
  v7 = 0LL;
  v81[1] = 0;
  v8 = 0LL;
  v79[0] = -1;
  BugCheckParameter3 = -1;
  LODWORD(v76) = -1;
  v87[0] = -1;
  v81[0] = -1;
  v88 = 0LL;
  UnitOfWork = 0LL;
  P = 0LL;
  v83 = 0LL;
  v84 = 0LL;
  v75 = 0;
  while ( 1 )
  {
    if ( v4 )
    {
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
      break;
    v10 = *(_QWORD *)(a1 + 8);
    v11 = 0LL;
    v82 = 0LL;
    if ( (*(_DWORD *)(*(_QWORD *)(v10 + 24) + 144LL) & 0x100000) != 0 )
      goto LABEL_123;
    if ( CmpIsKeyDeletedForKeyBody(a1, 0LL) )
      goto LABEL_122;
    if ( *(_QWORD *)(a1 + 56) || *(_QWORD *)(a1 + 64) )
    {
      v12 = CmpTransSearchAddTransFromKeyBody((_QWORD *)a1, &v82);
      if ( v12 < 0 )
        goto LABEL_124;
      v11 = v82;
      v5 = a3;
    }
    IsKeyDeletedForKeyBody = CmpIsKeyDeletedForKeyBody(a1, v11);
    v14 = 0;
    if ( IsKeyDeletedForKeyBody )
    {
LABEL_122:
      v12 = (*(_BYTE *)(a1 + 48) & 1) != 0 ? -1073740763 : -1073741444;
      goto LABEL_124;
    }
    v6 = *(_QWORD *)(v10 + 24);
    BugCheckParameter3_4 = *(_DWORD *)(v10 + 32);
    v70 = BugCheckParameter3_4 >> 31;
    if ( (PVOID)v6 == CmpMasterHive
      || (v15 = *(_QWORD *)(v10 + 64)) == 0
      || (v16 = *(PVOID *)(v15 + 24), v16 == CmpMasterHive) )
    {
LABEL_123:
      v12 = -1073741790;
      goto LABEL_124;
    }
    if ( *(_WORD *)(v10 + 58) )
    {
      CmpLogUnsupportedOperation(5LL);
      v12 = -1073741822;
      goto LABEL_124;
    }
    LOBYTE(v14) = v5;
    v12 = CmpCheckKeyAccess((_DWORD)v16, *(_DWORD *)(v15 + 32), v14, 4, 0);
    if ( v12 < 0 )
      goto LABEL_124;
    LOBYTE(v17) = a3;
    v12 = CmpDoAccessCheckOnSubtree(v6, BugCheckParameter3_4, v17, 0x10000, 1);
    if ( v12 < 0 )
      goto LABEL_124;
    CmpReportNotify(v10, v6, BugCheckParameter3_4, v11, 1, 0LL);
    if ( v11 )
    {
      if ( *(_QWORD *)(v10 + 200) != v10 + 200 )
      {
        v12 = -1072103423;
        goto LABEL_124;
      }
      UnitOfWork = CmpAllocateUnitOfWork();
      v23 = UnitOfWork;
      if ( !UnitOfWork )
        goto LABEL_96;
      v83 = CmpAllocateUnitOfWork();
      if ( !v83 )
        goto LABEL_96;
      CmpTransEnlistUowInKcb(v23, *(_QWORD *)(v10 + 64));
      v12 = CmpTransEnlistUowInCmTrans(v23, v11);
      if ( v12 < 0 )
        goto LABEL_111;
      v24 = v83;
      CmpTransEnlistUowInKcb(v83, v10);
      v12 = CmpTransEnlistUowInCmTrans(v24, v11);
      if ( v12 < 0 )
        goto LABEL_111;
      if ( !CmpLockIXLockExclusive(*(_QWORD *)(v10 + 64) + 240LL, (__int64)v23, 0)
        || !CmpLockIXLockExclusive(*(_QWORD *)(v10 + 64) + 256LL, (__int64)v23, 1)
        || !CmpLockIXLockExclusive(v10 + 240, (__int64)v24, 0)
        || !CmpLockIXLockExclusive(v10 + 256, (__int64)v24, 1) )
      {
        v12 = -1072103423;
        goto LABEL_111;
      }
      v70 = 1;
LABEL_39:
      v25 = BugCheckParameter3_4;
      v26 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v6 + 8))(v6, BugCheckParameter3_4, v78);
      v7 = v26;
      if ( !v26 )
      {
        v12 = -1073741670;
        goto LABEL_110;
      }
      CmpUpdateKeyNodeAccessBits(v6, v26, v25);
      v27 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v6 + 8))(v6, *(unsigned int *)(v7 + 16), v79);
      v8 = v27;
      if ( !v27 )
      {
        v12 = -1073741670;
LABEL_102:
        if ( v7 )
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v6 + 16))(v6, v78);
        if ( v8 )
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v6 + 16))(v6, v79);
        if ( BugCheckParameter3 != -1 )
          HvFreeCell(v6, BugCheckParameter3);
        if ( v88 )
          *(_QWORD *)(v10 + 72) = v88;
LABEL_110:
        v23 = UnitOfWork;
LABEL_111:
        if ( v23 )
        {
          CmpRundownUnitOfWork(v23);
          ExFreePoolWithTag(v23, 0x77554D43u);
        }
        v66 = P;
        if ( P )
        {
          CmpRundownUnitOfWork(P);
          ExFreePoolWithTag(v66, 0x77554D43u);
        }
        v67 = v83;
        if ( v83 )
        {
          CmpRundownUnitOfWork(v83);
          ExFreePoolWithTag(v67, 0x77554D43u);
        }
        v68 = v84;
        if ( v84 )
        {
          CmpMarkKeyUnbacked(v10);
          CmpDereferenceKeyControlBlockWithLock(v68);
        }
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        return (unsigned int)v12;
      }
      CmpUpdateKeyNodeAccessBits(v6, v27, *(_DWORD *)(v7 + 16));
      v28 = (unsigned __int16 *)a2;
      CmpFindSubKeyByNameWithStatus(v6, v8, (unsigned __int16 *)a2, &v85);
      if ( v85 != -1 )
      {
        v12 = -1073741535;
        goto LABEL_102;
      }
      if ( !v11 )
      {
        v29 = *(_QWORD *)(v10 + 64);
        v30 = CmpHashUnicodeComponent(a2);
        KcbInHashEntryByName = CmpFindKcbInHashEntryByName(v6, (unsigned int)(v30 + 37 * *(_DWORD *)(v29 + 8)), v29, a2);
        if ( !KcbInHashEntryByName )
          goto LABEL_49;
        v90[0] = 0LL;
        v90[1] = 0LL;
        CmpEnumerateAllHigherLayerKcbs(
          KcbInHashEntryByName,
          (unsigned int (__fastcall *)(ULONG_PTR, __int64))CmpForceInvalidatePreCallback,
          (unsigned int (__fastcall *)(_QWORD, _QWORD))CmpForceInvalidatePostCallback,
          (__int64)v90,
          1,
          1);
        v12 = v90[0];
        if ( SLODWORD(v90[0]) >= 0 )
        {
          CmpFlushNotifiesOnKeyBodyList(KcbInHashEntryByName, 8, 1);
          CmpDiscardKcb(KcbInHashEntryByName);
LABEL_49:
          v91[0] = 0LL;
          v91[1] = 0LL;
          CmpEnumerateAllHigherLayerKcbs(
            v10,
            (unsigned int (__fastcall *)(ULONG_PTR, __int64))CmpForceInvalidatePreCallback,
            (unsigned int (__fastcall *)(_QWORD, _QWORD))CmpForceInvalidatePostCallback,
            (__int64)v91,
            1,
            1);
          v12 = v91[0];
          if ( SLODWORD(v91[0]) >= 0 )
          {
            v25 = BugCheckParameter3_4;
            v28 = (unsigned __int16 *)a2;
            goto LABEL_51;
          }
        }
LABEL_124:
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        if ( v7 )
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v6 + 16))(v6, v78);
        if ( v8 )
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v6 + 16))(v6, v79);
        return (unsigned int)v12;
      }
LABEL_51:
      v32 = (unsigned __int16)CmpNameSize(v28) + 76;
      v95 = v32;
      if ( v11 )
        goto LABEL_65;
      if ( !HvpMarkCellDirty(v6, *(unsigned int *)(v7 + 16), 0) )
        goto LABEL_53;
      if ( !CmpMarkIndexDirty(v6, *(_DWORD *)(v7 + 16), v25) )
        goto LABEL_53;
      if ( !HvpMarkCellDirty(v6, v25, 0) )
        goto LABEL_53;
      v33 = *(_DWORD *)(v8 + 4LL * v70 + 28);
      LODWORD(v76) = v33;
      if ( v33 == -1 || !HvpMarkCellDirty(v6, v33, 0) )
        goto LABEL_53;
      v34 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v6 + 8))(v6, v33, v81);
      if ( !v34 )
      {
        v12 = -1073741670;
        goto LABEL_124;
      }
      if ( *v34 == 26994 )
      {
        v35 = 0;
        if ( v34[1] )
        {
          while ( HvpMarkCellDirty(v6, *(unsigned int *)&v34[2 * v35 + 2], 0) )
          {
            if ( ++v35 >= (unsigned int)(unsigned __int16)v34[1] )
              goto LABEL_64;
          }
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v6 + 16))(v6, v81);
          goto LABEL_53;
        }
      }
LABEL_64:
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v6 + 16))(v6, v81);
      v32 = v95;
LABEL_65:
      BugCheckParameter3 = HvAllocateCell(v6, v32, v70, (__int64)&v86, (__int64)v87);
      if ( BugCheckParameter3 == -1 )
      {
LABEL_53:
        v12 = -1073741443;
        goto LABEL_124;
      }
      v36 = v86;
      *(_OWORD *)v86 = *(_OWORD *)v7;
      *(_OWORD *)(v36 + 16) = *(_OWORD *)(v7 + 16);
      *(_OWORD *)(v36 + 32) = *(_OWORD *)(v7 + 32);
      *(_OWORD *)(v36 + 48) = *(_OWORD *)(v7 + 48);
      *(_QWORD *)(v36 + 64) = *(_QWORD *)(v7 + 64);
      *(_DWORD *)(v36 + 72) = *(_DWORD *)(v7 + 72);
      v37 = CmpCopyName((_BYTE *)(v36 + 76), (const void **)a2);
      *(_WORD *)(v36 + 72) = v37;
      v38 = a2->m128i_u16[0];
      if ( v37 >= v38 )
        *(_WORD *)(v36 + 2) &= ~0x20u;
      else
        *(_WORD *)(v36 + 2) |= 0x20u;
      v39 = MEMORY[0xFFFFF78000000014];
      *(_QWORD *)(v86 + 4) = MEMORY[0xFFFFF78000000014];
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v6 + 16))(v6, v87);
      if ( v82 )
      {
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v6 + 16))(v6, v79);
        v8 = 0LL;
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v6 + 16))(v6, v78);
        v7 = 0LL;
        v48 = CmpHashUnicodeComponent(a2);
        v49 = *(_QWORD *)(v10 + 64);
        v96 = v49;
        v50 = v48 + 37 * *(_DWORD *)(v49 + 8);
        v51 = CmpFindKcbInHashEntryByName(v6, v50, v49, a2);
        v52 = v51;
        if ( v51 )
        {
          if ( !CmpReferenceKeyControlBlock(v51) )
            goto LABEL_96;
          *(_DWORD *)(v52 + 32) = BugCheckParameter3;
          v84 = v52;
          CmpRebuildKcbCache(v52);
        }
        else
        {
          v12 = CmpCreateKeyControlBlock(v6, BugCheckParameter3, v96, 0LL, 0, (unsigned __int16 *)a2, v48, v50, &v84);
          if ( v12 < 0 )
            goto LABEL_97;
        }
        v53 = CmpAllocateUnitOfWork();
        P = v53;
        v54 = v53;
        if ( !v53 )
          goto LABEL_96;
        v55 = v84;
        CmpTransEnlistUowInKcb(v53, v84);
        v56 = v82;
        v12 = CmpTransEnlistUowInCmTrans(v54, v82);
        if ( v12 >= 0 )
        {
          v57 = P;
          CmpLockIXLockExclusive(v55 + 240, (__int64)P, 0);
          CmpLockIXLockExclusive(v55 + 256, (__int64)v57, 1);
          v58 = v83;
          v59 = BugCheckParameter3_4;
          *(_QWORD *)(v55 + 232) = v56;
          v60 = UnitOfWork;
          v57[11] = v10;
          v60[11] = v10;
          v58[11] = v55;
          v60[12] = v55;
          *((_DWORD *)v60 + 17) = 10;
          *((_DWORD *)v58 + 17) = 11;
          *((_DWORD *)v57 + 17) = 12;
          *((_DWORD *)v57 + 18) = v59 >> 31;
          v57[10] = v60;
          v12 = CmAddLogForAction((__int64)v58, v61);
          if ( v12 >= 0 )
          {
            CmpDereferenceKeyControlBlockWithLock(v10);
            LOBYTE(v62) = 1;
            DelistKeyBodyFromKCB(a1, v62);
            *(_QWORD *)(a1 + 8) = v55;
            EnlistKeyBodyWithKCB((ULONG_PTR *)a1, 2);
LABEL_94:
            v12 = 0;
            v8 = 0LL;
            goto LABEL_124;
          }
        }
      }
      else
      {
        v40 = CmpDuplicateIndex(v6);
        v41 = v70;
        *(_DWORD *)(v8 + 4LL * v70 + 28) = v40;
        if ( v40 == -1 )
        {
          v12 = -1073741670;
          goto LABEL_98;
        }
        if ( CmpAddSubKeyEx(v6, *(unsigned int *)(v7 + 16), BugCheckParameter3, 0) )
        {
          if ( CmpRemoveSubKey(v6, *(unsigned int *)(v7 + 16), v25) )
          {
            v88 = *(unsigned int **)(v10 + 72);
            NameControlBlock = CmpGetNameControlBlock(a2, 0LL, (char *)&v71);
            *(_QWORD *)(v10 + 72) = NameControlBlock;
            if ( NameControlBlock )
            {
              v43 = BugCheckParameter3;
              if ( (unsigned __int8)CmpUpdateParentForEachSon(v6) )
              {
                CmpFreeIndexByCell(v6, (unsigned int)v76);
                v44 = *(_QWORD *)(v10 + 64);
                ++*(_QWORD *)(v10 + 296);
                *(_DWORD *)(v10 + 32) = v43;
                *(_QWORD *)(v10 + 160) = v39;
                ++*(_QWORD *)(v44 + 296);
                CmpCleanUpSubKeyInfo(*(_QWORD *)(v10 + 64));
                if ( (unsigned __int16)*(_DWORD *)(v8 + 52) < v38 )
                {
                  *(_WORD *)(v8 + 52) = v38;
                  *(_WORD *)(*(_QWORD *)(v10 + 64) + 168LL) = v38;
                }
                v45 = CmpComputeKcbConvKey(v10);
                if ( v45 != *(_DWORD *)(v10 + 8) )
                {
                  CmpRemoveKeyHash(*(_QWORD *)(v10 + 24), (_DWORD *)(v10 + 8));
                  v46 = *(_QWORD *)(v10 + 24);
                  *(_DWORD *)(v10 + 8) = v45;
                  CmpInsertKeyHash(v46, v10 + 8);
                }
                (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v6 + 16))(v6, v79);
                (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v6 + 16))(v6, v78);
                CmpSearchForOpenSubKeys(v10, 3LL, 0LL);
                CmpDereferenceNameControlBlockWithLock(v88);
                v7 = 0LL;
                if ( *(_QWORD *)(v10 + 288) )
                  _InterlockedOr64((volatile signed __int64 *)(v10 + 288), 1uLL);
                v47 = *(void **)(v10 + 192);
                if ( (unsigned __int64)v47 >= 2 )
                  ExFreePoolWithTag(v47, 0x624E4D43u);
                *(_QWORD *)(v10 + 192) = (_BYTE)v71 == 1;
                goto LABEL_94;
              }
            }
          }
        }
LABEL_96:
        v12 = -1073741670;
      }
LABEL_97:
      v41 = v70;
LABEL_98:
      v63 = v76;
      if ( (_DWORD)v76 != -1 )
      {
        v64 = v41;
        v65 = *(unsigned int *)(v8 + 4LL * v41 + 28);
        if ( (_DWORD)v65 != -1 )
          CmpFreeIndexByCell(v6, v65);
        *(_DWORD *)(v8 + 4 * v64 + 28) = v63;
      }
      goto LABEL_102;
    }
    v18 = (_DWORD *)(v10 + 240);
    if ( !*(_DWORD *)(v10 + 240) )
    {
      v18 = (_DWORD *)(v10 + 256);
      if ( !*(_DWORD *)(v10 + 256) )
      {
        v22 = *(_QWORD *)(v10 + 64);
        if ( *(_DWORD *)(v22 + 240) )
        {
          v18 = (_DWORD *)(v22 + 240);
        }
        else
        {
          v18 = (_DWORD *)(v22 + 256);
          if ( !*v18 )
            goto LABEL_39;
        }
      }
    }
    v12 = CmpSnapshotTxOwnerArray(v18, &v72, &v77);
    if ( v12 < 0 )
      goto LABEL_124;
    v20 = v72;
    CmpLogTransactionAbortedWithChildName(v10, 0LL, 4u, v19, v72);
    CmpUnlockRegistry();
    v12 = CmpRollbackTransactionArray(v20, v77, v21, &v75);
    CmpLockRegistryExclusive();
    if ( v12 < 0 )
      goto LABEL_124;
    v4 = 1;
    v5 = a3;
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return 3221225865LL;
}
