/*
 * XREFs of CmDeleteValueKey @ 0x1404CEB38
 * Callers:
 *     NtDeleteValueKey @ 0x1404CE698 (NtDeleteValueKey.c)
 * Callees:
 *     MiDeleteSubsection @ 0x14002D920 (MiDeleteSubsection.c)
 *     CmpTransEnlistUowInCmTrans @ 0x14007FCDC (CmpTransEnlistUowInCmTrans.c)
 *     HvpGetCellContextReinitialize @ 0x14008D150 (HvpGetCellContextReinitialize.c)
 *     ExAcquireResourceSharedLite @ 0x14008F530 (ExAcquireResourceSharedLite.c)
 *     CmpFreeTransientPoolWithTag @ 0x1400DB880 (CmpFreeTransientPoolWithTag.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     CmpTransEnlistUowInKcb @ 0x14011E248 (CmpTransEnlistUowInKcb.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     CmAddLogForAction @ 0x14042C988 (CmAddLogForAction.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x14042DC14 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpAllocateUnitOfWork @ 0x1404589B0 (CmpAllocateUnitOfWork.c)
 *     CmpCloneKCBValueListForTrans @ 0x14045B8F4 (CmpCloneKCBValueListForTrans.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x14045E258 (CmpLogTransactionAbortedWithChildName.c)
 *     HvFreeCell @ 0x14048C8DC (HvFreeCell.c)
 *     CmpReportNotify @ 0x14048CFF4 (CmpReportNotify.c)
 *     CmpFindNameInListWithStatus @ 0x1404905C4 (CmpFindNameInListWithStatus.c)
 *     CmpCleanUpKcbValueCache @ 0x140491380 (CmpCleanUpKcbValueCache.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x1404917CC (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpSignalDeferredPosts @ 0x1404CE014 (CmpSignalDeferredPosts.c)
 *     CmpLockIXLockExclusive @ 0x1404CE168 (CmpLockIXLockExclusive.c)
 *     CmpLockIXLockIntent @ 0x1404CE1C4 (CmpLockIXLockIntent.c)
 *     CmpRundownUnitOfWork @ 0x1404CE510 (CmpRundownUnitOfWork.c)
 *     CmpRemoveValueFromList @ 0x1404CF298 (CmpRemoveValueFromList.c)
 *     CmpIsValueTombstone @ 0x1404CF370 (CmpIsValueTombstone.c)
 *     CmpFreeValue @ 0x1404D154C (CmpFreeValue.c)
 *     CmpFreeValueData @ 0x1404D15C4 (CmpFreeValueData.c)
 *     CmpMarkValueDataDirty @ 0x1404D1D08 (CmpMarkValueDataDirty.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1404FC480 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpLockRegistry @ 0x1404FF6F0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x1404FF92C (CmpUnlockRegistry.c)
 *     CmpUnlockKcbStack @ 0x1404FF9E0 (CmpUnlockKcbStack.c)
 *     CmpGetKcbAtLayerHeight @ 0x140500634 (CmpGetKcbAtLayerHeight.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x140500654 (CmpUpdateKeyNodeAccessBits.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140501430 (CmpIsKeyDeletedForKeyBody.c)
 *     HvpMarkCellDirty @ 0x14051559C (HvpMarkCellDirty.c)
 *     CmpPromoteKey @ 0x140661A80 (CmpPromoteKey.c)
 *     CmpSetValueKeyTombstone @ 0x1406656A8 (CmpSetValueKeyTombstone.c)
 *     CmpSnapshotKcbStackSecurity @ 0x14066894C (CmpSnapshotKcbStackSecurity.c)
 *     CmpRollbackTransactionArray @ 0x14066BB50 (CmpRollbackTransactionArray.c)
 *     CmpGetValueForAudit @ 0x140671210 (CmpGetValueForAudit.c)
 *     CmpSnapshotTxOwnerArray @ 0x14067355C (CmpSnapshotTxOwnerArray.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x1406F1108 (SeAdtRegistryValueChangedAuditAlarm.c)
 */

__int64 __fastcall CmDeleteValueKey(__int64 a1, _WORD *a2, __int64 a3, char a4)
{
  _QWORD *v4; // r15
  ULONG_PTR v5; // rsi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rcx
  int v10; // r8d
  int started; // edi
  char v12; // r14
  unsigned int v13; // r12d
  __int64 v14; // r13
  __int16 v15; // r15
  __int64 KcbAtLayerHeight; // rax
  __int64 v17; // r14
  __int64 v18; // rdx
  __int64 v19; // rax
  bool v20; // zf
  __int64 v21; // r15
  char v22; // r15
  _QWORD *v23; // rbx
  char v24; // r12
  __int64 v25; // r13
  PVOID v26; // rbx
  int NameInListWithStatus; // eax
  __int64 v29; // r13
  __int64 v30; // rdi
  __int64 v31; // rax
  __int64 v32; // r8
  __int64 v33; // rcx
  __int64 v34; // r14
  ULONG_PTR v35; // rcx
  ULONG_PTR v36; // rdx
  __int64 v37; // rdi
  int v38; // eax
  unsigned int v39; // r8d
  __int64 v40; // rdx
  _QWORD *UnitOfWork; // rax
  _QWORD *v42; // r14
  __int64 v43; // rcx
  ULONG v44; // edx
  __int64 v45; // r8
  ULONG_PTR v46; // rcx
  __int64 v47; // r9
  unsigned int v48; // ebx
  __int64 v49; // r8
  char v50; // al
  unsigned int v51; // eax
  ULONG_PTR v52; // rdx
  _QWORD *P; // [rsp+50h] [rbp-B8h]
  char v54; // [rsp+58h] [rbp-B0h] BYREF
  BOOLEAN v55; // [rsp+59h] [rbp-AFh]
  int v56; // [rsp+5Ch] [rbp-ACh] BYREF
  __int64 v57; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v58; // [rsp+68h] [rbp-A0h]
  unsigned int v59; // [rsp+70h] [rbp-98h] BYREF
  int v60; // [rsp+78h] [rbp-90h] BYREF
  int v61; // [rsp+80h] [rbp-88h] BYREF
  __int64 v62; // [rsp+88h] [rbp-80h] BYREF
  __int64 v63; // [rsp+90h] [rbp-78h]
  PPRIVILEGE_SET v64[4]; // [rsp+98h] [rbp-70h] BYREF
  __int64 v65; // [rsp+B8h] [rbp-50h] BYREF
  char v66[8]; // [rsp+C0h] [rbp-48h] BYREF
  _QWORD *v67[2]; // [rsp+C8h] [rbp-40h] BYREF
  char v68[8]; // [rsp+D8h] [rbp-30h] BYREF
  PVOID v69; // [rsp+E0h] [rbp-28h] BYREF
  PVOID v70[12]; // [rsp+E8h] [rbp-20h] BYREF

  v4 = (_QWORD *)a1;
  v67[1] = v67;
  v67[0] = v67;
  memset(v64, 0, sizeof(v64));
  P = 0LL;
  WORD1(v64[0]) = -1;
  v5 = 0LL;
  v54 = 0;
  v61 = 0;
  v62 = 0LL;
  v63 = 0LL;
  HvpGetCellContextReinitialize((__int64)v66);
  HvpGetCellContextReinitialize((__int64)v68);
  v58 = 0LL;
  HvpGetCellContextReinitialize((__int64)&v60);
  v56 = -1;
  LODWORD(v57) = -1;
  memset(v70, 0, 0x20uLL);
  v69 = 0LL;
LABEL_2:
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v55 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( !v55 )
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    started = -1073741431;
    v24 = 0;
    v12 = 0;
LABEL_100:
    v23 = P;
    v22 = 0;
    goto LABEL_26;
  }
  v8 = MEMORY[0xFFFFF78000000014];
  CmpLockRegistry(v7);
  v5 = v4[1];
  if ( (*(_DWORD *)(*(_QWORD *)(v5 + 24) + 144LL) & 0x100000) != 0 )
  {
    started = -1073741790;
LABEL_129:
    v12 = 0;
LABEL_103:
    v22 = 0;
LABEL_104:
    v23 = P;
    goto LABEL_70;
  }
  started = CmpStartKcbStackForTopLayerKcb(v64, v5);
  if ( started < 0 )
    goto LABEL_129;
  CmpLockKcbStackTopExclusiveRestShared((__int64)v64);
  v12 = 1;
  if ( v4[7] || v4[8] )
  {
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(v4, 0LL) )
    {
      v23 = P;
      v22 = 0;
      v25 = a1;
      v24 = 1;
      started = (*(_BYTE *)(a1 + 48) & 1) != 0 ? -1073740763 : -1073741444;
      goto LABEL_27;
    }
    started = CmpTransSearchAddTransFromKeyBody((__int64)v4, &v62);
    if ( started < 0 )
      goto LABEL_103;
    LODWORD(v9) = *(_DWORD *)(*(_QWORD *)(v5 + 24) + 144LL);
    if ( (v9 & 2) != 0 )
    {
      started = -1072103423;
      goto LABEL_103;
    }
  }
  v13 = v56;
  while ( 1 )
  {
    v14 = v62;
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(v4, v62) )
    {
      v25 = a1;
      v22 = 0;
      v23 = P;
      v12 = 1;
      v24 = 1;
      started = (*(_BYTE *)(a1 + 48) & 1) != 0 ? -1073740763 : -1073741444;
      goto LABEL_27;
    }
    if ( !v14 )
    {
      if ( *(int *)(v5 + 240) < 0 )
      {
        v46 = v5 + 240;
      }
      else
      {
        if ( !*(_DWORD *)(v5 + 256) )
          goto LABEL_12;
        v46 = v5 + 256;
      }
      started = CmpSnapshotTxOwnerArray(v46, &v59, &v65);
      if ( started < 0 )
      {
        v22 = 0;
        goto LABEL_25;
      }
      v48 = v59;
      CmpLogTransactionAbortedWithChildName(v5, 0LL, 1u, v47, v59);
      CmpUnlockKcbStack(v64);
      v12 = 0;
      if ( v64[3] )
        MiDeleteSubsection(v64[3]);
      memset(v64, 0, sizeof(v64));
      WORD1(v64[0]) = -1;
      CmpUnlockRegistry();
      v24 = 0;
      started = CmpRollbackTransactionArray(v48, v65, v49, &v61);
      if ( started < 0 )
        goto LABEL_100;
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      goto LABEL_2;
    }
    UnitOfWork = CmpAllocateUnitOfWork();
    P = UnitOfWork;
    v42 = UnitOfWork;
    if ( !UnitOfWork )
    {
      v25 = a1;
      v12 = 1;
      v24 = 1;
      v22 = 0;
      started = -1073741670;
      goto LABEL_29;
    }
    CmpTransEnlistUowInKcb(UnitOfWork, v5);
    v22 = 0;
    started = CmpTransEnlistUowInCmTrans(v42, v14);
    if ( started < 0 )
      goto LABEL_25;
    if ( !CmpLockIXLockIntent((unsigned int *)(v5 + 240), (__int64)v42) || !CmpLockIXLockExclusive(v5 + 256, v42, 1) )
    {
      started = -1072103423;
      goto LABEL_25;
    }
    ExAcquireResourceSharedLite(*(PERESOURCE *)(*(_QWORD *)(v5 + 24) + 2848LL), 1u);
    v22 = 1;
    if ( !CmpCloneKCBValueListForTrans(v5, v14, &v54) )
    {
      started = -1073741670;
      goto LABEL_25;
    }
    ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(v5 + 24) + 2848LL));
LABEL_12:
    v15 = *(_WORD *)(v5 + 58);
    if ( v15 >= 0 )
    {
      while ( 1 )
      {
        KcbAtLayerHeight = CmpGetKcbAtLayerHeight(v64, (unsigned __int16)v15);
        v17 = KcbAtLayerHeight;
        if ( *(_WORD *)(KcbAtLayerHeight + 58) && *(_BYTE *)(KcbAtLayerHeight + 57) == 1 )
        {
LABEL_21:
          v13 = v56;
          break;
        }
        v18 = *(unsigned int *)(KcbAtLayerHeight + 32);
        if ( (_DWORD)v18 != -1 )
        {
          if ( v14 && *(_QWORD *)(KcbAtLayerHeight + 280) == v14 )
          {
            NameInListWithStatus = CmpFindNameInListWithStatus(
                                     *(_QWORD *)(KcbAtLayerHeight + 24),
                                     (unsigned int *)(KcbAtLayerHeight + 272),
                                     (__int64)a2,
                                     0,
                                     (__int64)&v57,
                                     (__int64)&v56);
            started = NameInListWithStatus;
            if ( NameInListWithStatus >= 0 )
            {
LABEL_50:
              v13 = v56;
              v21 = v17;
              v58 = v17;
              goto LABEL_23;
            }
            v20 = NameInListWithStatus == -1073741772;
          }
          else
          {
            v19 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(*(_QWORD *)(KcbAtLayerHeight + 24) + 8LL))(
                    *(_QWORD *)(KcbAtLayerHeight + 24),
                    v18,
                    v68);
            started = CmpFindNameInListWithStatus(
                        *(_QWORD *)(v17 + 24),
                        (unsigned int *)(v19 + 36),
                        (__int64)a2,
                        0,
                        (__int64)&v57,
                        (__int64)&v56);
            (*(void (__fastcall **)(_QWORD, char *))(*(_QWORD *)(v17 + 24) + 16LL))(*(_QWORD *)(v17 + 24), v68);
            if ( started >= 0 )
              goto LABEL_50;
            v20 = started == -1073741772;
          }
          if ( !v20 )
          {
            v22 = 0;
            goto LABEL_25;
          }
          if ( *(_WORD *)(v17 + 58) && *(_BYTE *)(v17 + 57) )
            goto LABEL_21;
        }
        if ( --v15 < 0 )
          goto LABEL_21;
      }
    }
    v21 = v58;
LABEL_23:
    if ( v13 == -1 )
    {
      started = -1073741772;
      v22 = 0;
      goto LABEL_25;
    }
    v29 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(*(_QWORD *)(v21 + 24) + 8LL))(
            *(_QWORD *)(v21 + 24),
            v13,
            &v60);
    if ( (unsigned __int8)CmpIsValueTombstone(*(_QWORD *)(v21 + 24), v29) )
      break;
    (*(void (__fastcall **)(__int64, int *))(v9 + 16))(v9, &v60);
    v29 = 0LL;
    if ( *(_DWORD *)(v5 + 32) != -1 )
    {
      ExAcquireResourceSharedLite(*(PERESOURCE *)(*(_QWORD *)(v5 + 24) + 2848LL), 1u);
      v30 = v62;
      v22 = 1;
      if ( !v62 && !(unsigned __int8)HvpMarkCellDirty(*(_QWORD *)(v5 + 24), *(unsigned int *)(v5 + 32)) )
      {
        started = -1073741443;
LABEL_25:
        v23 = P;
        v12 = 1;
        v24 = 1;
        goto LABEL_26;
      }
      v31 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(*(_QWORD *)(v5 + 24) + 8LL))(
              *(_QWORD *)(v5 + 24),
              *(unsigned int *)(v5 + 32),
              v66);
      v32 = *(unsigned int *)(v5 + 32);
      v33 = *(_QWORD *)(v5 + 24);
      v34 = v31;
      v63 = v31;
      CmpUpdateKeyNodeAccessBits(v33, v31, v32);
      if ( a4 )
      {
        started = CmpSnapshotKcbStackSecurity(v64, v30, 843140419LL, &v69);
        v12 = 1;
        if ( started < 0 )
          goto LABEL_110;
        started = CmpGetValueForAudit(*(_QWORD *)(v58 + 24), v13, v70, 826363203LL);
        if ( started < 0 )
          goto LABEL_110;
        v34 = v63;
        v30 = v62;
      }
      v35 = *(_QWORD *)(v5 + 24);
      if ( v30 )
      {
        (*(void (__fastcall **)(ULONG_PTR, char *))(v35 + 16))(v35, v66);
        v43 = *(_QWORD *)(v5 + 24);
        v63 = 0LL;
        ExReleaseResourceLite(*(PERESOURCE *)(v43 + 2848));
        v22 = 0;
        v23 = P;
        *((_DWORD *)P + 17) = 6;
        *((_DWORD *)P + 22) = v13;
        started = CmAddLogForAction((__int64)P, v44);
        v12 = 1;
        if ( started < 0 )
          goto LABEL_70;
        ExAcquireResourceSharedLite(*(PERESOURCE *)(*(_QWORD *)(v5 + 24) + 2848LL), 1u);
        CmpRemoveValueFromList(*(_QWORD *)(v5 + 24));
LABEL_65:
        ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(v5 + 24) + 2848LL));
        v39 = *(_DWORD *)(v5 + 32);
        started = 0;
        v40 = *(_QWORD *)(v5 + 24);
        v22 = 0;
        v23 = 0LL;
        v54 = 0;
        CmpReportNotify(v5, v40, v39, v62, 4, (__int64)v67);
        goto LABEL_66;
      }
      v36 = *(unsigned int *)(v5 + 32);
      if ( *(_WORD *)(v5 + 58) )
      {
        v50 = HvpMarkCellDirty(v35, v36);
        if ( v5 == v58 )
        {
          if ( v50 && (unsigned __int8)HvpMarkCellDirty(*(_QWORD *)(v5 + 24), v13) )
          {
            v29 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(*(_QWORD *)(v5 + 24) + 8LL))(
                    *(_QWORD *)(v5 + 24),
                    v13,
                    &v60);
            if ( (unsigned __int8)CmpMarkValueDataDirty(*(_QWORD *)(v5 + 24)) )
            {
              CmpFreeValueData(*(_QWORD *)(v5 + 24), *(unsigned int *)(v29 + 8));
              *(_DWORD *)(v29 + 8) = -1;
              *(_WORD *)(v29 + 16) |= 2u;
              *(_DWORD *)(v29 + 12) = 0;
              *(_DWORD *)(v29 + 4) = 0;
              *(_QWORD *)(v34 + 4) = v8;
              *(_QWORD *)(v5 + 160) = v8;
LABEL_64:
              CmpCleanUpKcbValueCache(v5);
              v38 = *(_DWORD *)(v34 + 36);
              *(_QWORD *)(v5 + 96) = *(unsigned int *)(v34 + 40);
              *(_DWORD *)(v5 + 88) = v38;
              goto LABEL_65;
            }
LABEL_111:
            started = -1073741443;
            goto LABEL_122;
          }
        }
        else if ( v50 )
        {
          started = CmpSetValueKeyTombstone(*(_QWORD *)(v5 + 24), *(_DWORD *)(v5 + 32) >> 31);
          v12 = 1;
          if ( started >= 0 )
          {
            v34 = v63;
            *(_QWORD *)(v63 + 4) = v8;
            *(_QWORD *)(v5 + 160) = v8;
            v51 = (unsigned __int16)*a2;
            if ( *(_DWORD *)(v34 + 60) < v51 )
            {
              *(_DWORD *)(v34 + 60) = v51;
              *(_WORD *)(v5 + 170) = *a2;
            }
            goto LABEL_64;
          }
LABEL_110:
          v23 = P;
          goto LABEL_68;
        }
      }
      else if ( (unsigned __int8)HvpMarkCellDirty(v35, v36)
             && (unsigned __int8)HvpMarkCellDirty(*(_QWORD *)(v5 + 24), *(unsigned int *)(v34 + 40))
             && (unsigned __int8)HvpMarkCellDirty(*(_QWORD *)(v5 + 24), v13) )
      {
        v37 = v58;
        v29 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(*(_QWORD *)(v58 + 24) + 8LL))(
                *(_QWORD *)(v58 + 24),
                v13,
                &v60);
        if ( (unsigned __int8)CmpMarkValueDataDirty(*(_QWORD *)(v37 + 24)) )
        {
          (*(void (__fastcall **)(_QWORD, int *))(*(_QWORD *)(v37 + 24) + 16LL))(*(_QWORD *)(v37 + 24), &v60);
          v29 = 0LL;
          CmpRemoveValueFromList(*(_QWORD *)(v5 + 24));
          CmpFreeValue(*(_QWORD *)(v5 + 24), v13);
          *(_QWORD *)(v34 + 4) = v8;
          *(_QWORD *)(v5 + 160) = v8;
          if ( !*(_DWORD *)(v34 + 36) )
          {
            *(_DWORD *)(v34 + 60) = 0;
            *(_WORD *)(v5 + 170) = 0;
            *(_DWORD *)(v34 + 64) = 0;
            *(_DWORD *)(v5 + 172) = 0;
          }
          goto LABEL_64;
        }
        goto LABEL_111;
      }
      started = -1073741443;
      v12 = 1;
      goto LABEL_110;
    }
    CmpUnlockKcbStack(v64);
    LOBYTE(v45) = 1;
    v12 = 0;
    v22 = 0;
    started = CmpPromoteKey(v64, 0LL, v45);
    if ( started < 0 )
      goto LABEL_104;
    v4 = (_QWORD *)a1;
  }
  started = -1073741772;
  v22 = 0;
LABEL_122:
  v23 = P;
LABEL_66:
  v12 = 1;
  if ( v29 )
    (*(void (__fastcall **)(_QWORD, int *))(*(_QWORD *)(v58 + 24) + 16LL))(*(_QWORD *)(v58 + 24), &v60);
LABEL_68:
  if ( v63 )
    (*(void (__fastcall **)(_QWORD, char *))(*(_QWORD *)(v5 + 24) + 16LL))(*(_QWORD *)(v5 + 24), v66);
LABEL_70:
  v24 = 1;
LABEL_26:
  v25 = a1;
LABEL_27:
  if ( v23 )
  {
    CmpRundownUnitOfWork(v23);
    ExFreePoolWithTag(v23, 0x77554D43u);
  }
LABEL_29:
  if ( v54 )
  {
    v52 = *(unsigned int *)(v5 + 276);
    if ( (_DWORD)v52 != -1 )
      HvFreeCell(*(_QWORD *)(v5 + 24), v52);
    *(_DWORD *)(v5 + 276) = -1;
    *(_DWORD *)(v5 + 272) = 0;
    *(_QWORD *)(v5 + 280) = 0LL;
  }
  if ( v22 )
    ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(v5 + 24) + 2848LL));
  if ( v12 )
    CmpUnlockKcbStack(v64);
  if ( v24 )
    CmpUnlockRegistry();
  if ( v67[0] != v67 )
    CmpSignalDeferredPosts(v67);
  v26 = v69;
  if ( started >= 0 && a4 && v69 )
    SeAdtRegistryValueChangedAuditAlarm(v9, (_DWORD)v69, v10, (_DWORD)a2, v25, a3, (__int64)v70, 2);
  if ( v70[1] )
    CmpFreeTransientPoolWithTag(v70[1], 0x34414D43u);
  if ( v26 )
    CmpFreeTransientPoolWithTag(v26, 0x33414D43u);
  if ( v55 )
  {
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  if ( v64[3] )
    MiDeleteSubsection(v64[3]);
  return (unsigned int)started;
}
