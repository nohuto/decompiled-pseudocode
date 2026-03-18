/*
 * XREFs of CmSetValueKey @ 0x14048F4F0
 * Callers:
 *     NtSetValueKey @ 0x14048EDA0 (NtSetValueKey.c)
 *     CmpSyncNextBackupHive @ 0x14066B40C (CmpSyncNextBackupHive.c)
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
 *     CmpSwapValueInList @ 0x14013648C (CmpSwapValueInList.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     CmAddLogForAction @ 0x14042C988 (CmAddLogForAction.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x14042DC14 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpAllocateUnitOfWork @ 0x1404589B0 (CmpAllocateUnitOfWork.c)
 *     CmpCloneKCBValueListForTrans @ 0x14045B8F4 (CmpCloneKCBValueListForTrans.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x14045E258 (CmpLogTransactionAbortedWithChildName.c)
 *     RtlIsSandboxedToken @ 0x1404767C0 (RtlIsSandboxedToken.c)
 *     HvFreeCell @ 0x14048C8DC (HvFreeCell.c)
 *     CmpReportNotify @ 0x14048CFF4 (CmpReportNotify.c)
 *     CmpIsKeyStackSymlink @ 0x14048FCAC (CmpIsKeyStackSymlink.c)
 *     CmpCompareNewValueDataAgainstKCBCache @ 0x14048FD04 (CmpCompareNewValueDataAgainstKCBCache.c)
 *     CmpFindNameInListWithStatus @ 0x1404905C4 (CmpFindNameInListWithStatus.c)
 *     CmpCleanUpKcbValueCache @ 0x140491380 (CmpCleanUpKcbValueCache.c)
 *     CmpTryConvertKcbLockSharedToExclusive @ 0x140491788 (CmpTryConvertKcbLockSharedToExclusive.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x1404917CC (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpSetValueKeyNew @ 0x140491818 (CmpSetValueKeyNew.c)
 *     CmpAddValueKeyNew @ 0x1404918D4 (CmpAddValueKeyNew.c)
 *     CmpSignalDeferredPosts @ 0x1404CE014 (CmpSignalDeferredPosts.c)
 *     CmpLockIXLockExclusive @ 0x1404CE168 (CmpLockIXLockExclusive.c)
 *     CmpLockIXLockIntent @ 0x1404CE1C4 (CmpLockIXLockIntent.c)
 *     CmpRundownUnitOfWork @ 0x1404CE510 (CmpRundownUnitOfWork.c)
 *     CmpRemoveValueFromList @ 0x1404CF298 (CmpRemoveValueFromList.c)
 *     CmpIsValueTombstone @ 0x1404CF370 (CmpIsValueTombstone.c)
 *     CmpFreeValue @ 0x1404D154C (CmpFreeValue.c)
 *     CmpSetValueKeyExisting @ 0x1404D19D0 (CmpSetValueKeyExisting.c)
 *     CmpAddValueToListEx @ 0x1404D3280 (CmpAddValueToListEx.c)
 *     RtlEqualUnicodeString @ 0x1404F7D80 (RtlEqualUnicodeString.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1404FC480 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpLockRegistry @ 0x1404FF6F0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x1404FF92C (CmpUnlockRegistry.c)
 *     CmpLockKcbStackShared @ 0x1404FF968 (CmpLockKcbStackShared.c)
 *     CmpUnlockKcbStack @ 0x1404FF9E0 (CmpUnlockKcbStack.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x140500654 (CmpUpdateKeyNodeAccessBits.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140501430 (CmpIsKeyDeletedForKeyBody.c)
 *     HvpMarkCellDirty @ 0x14051559C (HvpMarkCellDirty.c)
 *     CmpPromoteKey @ 0x140661A80 (CmpPromoteKey.c)
 *     CmpSnapshotKcbStackSecurity @ 0x14066894C (CmpSnapshotKcbStackSecurity.c)
 *     CmpRollbackTransactionArray @ 0x14066BB50 (CmpRollbackTransactionArray.c)
 *     CmpGetValueForAudit @ 0x140671210 (CmpGetValueForAudit.c)
 *     CmpSnapshotTxOwnerArray @ 0x14067355C (CmpSnapshotTxOwnerArray.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x1406F1108 (SeAdtRegistryValueChangedAuditAlarm.c)
 */

__int64 __fastcall CmSetValueKey(
        __int64 a1,
        const UNICODE_STRING *a2,
        unsigned int a3,
        void *a4,
        unsigned int a5,
        __int64 a6,
        char a7)
{
  const UNICODE_STRING *v7; // r15
  ULONG_PTR v9; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v11; // rcx
  BOOLEAN v12; // r12
  __int64 v13; // rbx
  int v14; // ecx
  int v15; // r8d
  int started; // esi
  char v17; // r13
  __int64 v18; // r12
  int v19; // eax
  char v20; // bl
  char v21; // r15
  PVOID v22; // rbx
  __int64 v24; // r15
  __int64 v25; // rcx
  int NameInListWithStatus; // eax
  unsigned int v27; // r13d
  ULONG_PTR v28; // rcx
  int v29; // esi
  unsigned int Length; // eax
  int v31; // eax
  __int64 v32; // rcx
  unsigned int v33; // r8d
  __int64 v34; // rdx
  unsigned int v35; // ebx
  _QWORD *UnitOfWork; // rax
  _QWORD *v37; // r15
  int v38; // eax
  ULONG_PTR v39; // rcx
  ULONG v40; // edx
  _DWORD *v41; // rax
  __int64 v42; // r8
  __int64 v43; // r9
  unsigned int v44; // ebx
  __int64 v45; // r8
  __int64 v46; // r9
  unsigned int v47; // ebx
  __int64 v48; // r8
  __int64 v49; // rax
  char IsValueTombstone; // si
  __int64 v51; // rcx
  ULONG_PTR v52; // rcx
  ULONG_PTR v53; // rdx
  size_t Size; // [rsp+20h] [rbp-B1h]
  size_t v55; // [rsp+28h] [rbp-A9h]
  BOOLEAN v56; // [rsp+41h] [rbp-90h]
  KPROCESSOR_MODE PreviousMode; // [rsp+42h] [rbp-8Fh]
  char v58; // [rsp+42h] [rbp-8Fh]
  char v59; // [rsp+43h] [rbp-8Eh] BYREF
  int v60; // [rsp+44h] [rbp-8Dh]
  unsigned int v61; // [rsp+48h] [rbp-89h] BYREF
  unsigned int v62; // [rsp+4Ch] [rbp-85h] BYREF
  BOOL v63; // [rsp+50h] [rbp-81h]
  int v64; // [rsp+54h] [rbp-7Dh] BYREF
  unsigned int v65; // [rsp+58h] [rbp-79h] BYREF
  PVOID P; // [rsp+60h] [rbp-71h]
  PPRIVILEGE_SET v67[4]; // [rsp+68h] [rbp-69h] BYREF
  __int64 v68; // [rsp+88h] [rbp-49h] BYREF
  _BYTE v69[8]; // [rsp+90h] [rbp-41h] BYREF
  __int64 v70; // [rsp+98h] [rbp-39h] BYREF
  _BYTE v71[8]; // [rsp+A0h] [rbp-31h] BYREF
  _QWORD v72[2]; // [rsp+A8h] [rbp-29h] BYREF
  PVOID v73; // [rsp+B8h] [rbp-19h] BYREF
  PVOID v74[10]; // [rsp+C0h] [rbp-11h] BYREF

  v7 = a2;
  v72[1] = v72;
  v72[0] = v72;
  memset(v67, 0, sizeof(v67));
  P = 0LL;
  WORD1(v67[0]) = -1;
  v9 = 0LL;
  v59 = 0;
  v64 = 0;
  v68 = 0LL;
  HvpGetCellContextReinitialize((__int64)v71);
  HvpGetCellContextReinitialize((__int64)v69);
  v62 = -1;
  v60 = -1;
  memset(v74, 0, 0x20uLL);
  v73 = 0LL;
  v63 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  while ( 1 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v56 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    v12 = v56;
    if ( !v56 )
    {
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      v20 = 0;
      v17 = 0;
      v21 = 0;
      started = -1073741431;
      goto LABEL_23;
    }
    v13 = MEMORY[0xFFFFF78000000014];
    CmpLockRegistry(v11);
    v9 = *(_QWORD *)(a1 + 8);
    if ( (*(_DWORD *)(*(_QWORD *)(v9 + 24) + 144LL) & 0x100000) != 0 )
    {
      started = -1073741790;
LABEL_147:
      v20 = 1;
      v17 = 0;
      v21 = 0;
      goto LABEL_23;
    }
    started = CmpStartKcbStackForTopLayerKcb(v67, v9);
    if ( started < 0 )
      goto LABEL_147;
    if ( *(_QWORD *)(a1 + 56) || *(_QWORD *)(a1 + 64) )
    {
      CmpLockKcbStackTopExclusiveRestShared(v67);
      v17 = 1;
    }
    else
    {
      CmpLockKcbStackShared(v67);
      v17 = 0;
    }
    if ( *(_QWORD *)(a1 + 56) || *(_QWORD *)(a1 + 64) )
      break;
LABEL_10:
    v18 = v68;
    while ( 1 )
    {
      if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, v18) )
      {
        v17 = 1;
        v21 = 0;
        started = -1073740763;
        v20 = 1;
        if ( (*(_BYTE *)(a1 + 48) & 1) == 0 )
          started = -1073741444;
        goto LABEL_22;
      }
      if ( *(_BYTE *)(v9 + 57) == 1 )
        goto LABEL_117;
      if ( !v18 )
        break;
      UnitOfWork = CmpAllocateUnitOfWork();
      P = UnitOfWork;
      v37 = UnitOfWork;
      if ( !UnitOfWork )
      {
        v12 = v56;
        v17 = 1;
        v20 = 1;
        started = -1073741670;
        v21 = 0;
        goto LABEL_25;
      }
      CmpTransEnlistUowInKcb(UnitOfWork, v9);
      started = CmpTransEnlistUowInCmTrans(v37, v18);
      if ( started < 0 )
        goto LABEL_118;
      if ( !(unsigned __int8)CmpLockIXLockIntent(v9 + 240, v37)
        || !(unsigned __int8)CmpLockIXLockExclusive(v9 + 256, v37, 1LL) )
      {
        v17 = 1;
        started = -1072103423;
        v20 = 1;
        v21 = 0;
        goto LABEL_22;
      }
      ExAcquireResourceSharedLite(*(PERESOURCE *)(*(_QWORD *)(v9 + 24) + 2848LL), 1u);
      v21 = 1;
      if ( !CmpCloneKCBValueListForTrans(v9, v18, &v59) )
      {
        v17 = 1;
        started = -1073741670;
        v20 = 1;
        goto LABEL_22;
      }
      ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(v9 + 24) + 2848LL));
      v7 = a2;
LABEL_16:
      if ( (unsigned __int8)CmpIsKeyStackSymlink(v67)
        && (a3 != 6
         || (a5 & 1) != 0
         || a5 > 0xFFFF
         || !v7
         || !RtlEqualUnicodeString(&CmSymbolicLinkValueName, v7, 1u)
         || RtlIsSandboxedToken(0LL, PreviousMode)) )
      {
LABEL_117:
        started = -1073741790;
        goto LABEL_118;
      }
      if ( *(_DWORD *)(v9 + 32) == -1 )
      {
        CmpUnlockKcbStack(v67);
        LOBYTE(v42) = 1;
        v17 = 0;
        started = CmpPromoteKey(v67, 0LL, v42);
        if ( started < 0 )
        {
          v21 = 0;
          goto LABEL_69;
        }
        v17 = 1;
      }
      else
      {
        if ( v17 )
          goto LABEL_48;
        v19 = CmpCompareNewValueDataAgainstKCBCache(v9, v7, a3, a4, a5);
        if ( v19 != 1 )
        {
          v17 = 1;
          if ( !v19 )
          {
            started = 0;
            v20 = 1;
            v21 = 0;
LABEL_22:
            v12 = v56;
            goto LABEL_23;
          }
          if ( *(struct _KTHREAD **)(v9 + 48) == KeGetCurrentThread()
            || (unsigned __int8)CmpTryConvertKcbLockSharedToExclusive(v9) )
          {
            v18 = v68;
LABEL_48:
            ExAcquireResourceSharedLite(*(PERESOURCE *)(*(_QWORD *)(v9 + 24) + 2848LL), 1u);
            v21 = 1;
            v58 = 1;
            if ( !v18 && !(unsigned __int8)HvpMarkCellDirty(*(_QWORD *)(v9 + 24), *(unsigned int *)(v9 + 32)) )
            {
              v17 = 1;
              started = -1073741443;
              v20 = 1;
              goto LABEL_22;
            }
            v24 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _BYTE *))(*(_QWORD *)(v9 + 24) + 8LL))(
                    *(_QWORD *)(v9 + 24),
                    *(unsigned int *)(v9 + 32),
                    v71);
            CmpUpdateKeyNodeAccessBits(*(_QWORD *)(v9 + 24), v24, *(unsigned int *)(v9 + 32));
            v25 = *(_QWORD *)(v9 + 24);
            if ( v18 )
            {
              NameInListWithStatus = CmpFindNameInListWithStatus(
                                       v25,
                                       (int)v9 + 272,
                                       (_DWORD)a2,
                                       0,
                                       (__int64)&v61,
                                       (__int64)&v62);
              started = NameInListWithStatus;
              if ( NameInListWithStatus != -1073741772 )
                goto LABEL_70;
            }
            else
            {
              NameInListWithStatus = CmpFindNameInListWithStatus(
                                       v25,
                                       (int)v24 + 36,
                                       (_DWORD)a2,
                                       0,
                                       (__int64)&v61,
                                       (__int64)&v62);
              started = NameInListWithStatus;
              if ( NameInListWithStatus == -1073741772 )
                goto LABEL_52;
LABEL_70:
              v17 = 1;
              if ( NameInListWithStatus < 0 )
              {
LABEL_135:
                v35 = v60;
LABEL_64:
                if ( v24 )
                  (*(void (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)(v9 + 24) + 16LL))(*(_QWORD *)(v9 + 24), v71);
                if ( v35 != -1 )
                  CmpFreeValue(*(_QWORD *)(v9 + 24), v35);
                v21 = v58;
LABEL_69:
                v20 = 1;
                goto LABEL_22;
              }
            }
LABEL_52:
            if ( a7 )
            {
              started = CmpSnapshotKcbStackSecurity(v67, v18, 859917635LL, &v73);
              v17 = 1;
              if ( started < 0 )
                goto LABEL_135;
              v27 = v62;
              if ( v62 == -1 )
              {
                v63 = 0;
              }
              else
              {
                v49 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _BYTE *))(*(_QWORD *)(v9 + 24) + 8LL))(
                        *(_QWORD *)(v9 + 24),
                        v62,
                        v69);
                IsValueTombstone = CmpIsValueTombstone(*(_QWORD *)(v9 + 24), v49);
                v63 = IsValueTombstone == 0;
                (*(void (__fastcall **)(__int64, _BYTE *))(v51 + 16))(v51, v69);
                if ( !IsValueTombstone )
                {
                  started = CmpGetValueForAudit(*(_QWORD *)(v9 + 24), v27, v74, 876694851LL);
                  v17 = 1;
                  if ( started < 0 )
                    goto LABEL_135;
                  v27 = v62;
                }
              }
            }
            else
            {
              v27 = v62;
            }
            v28 = *(_QWORD *)(v9 + 24);
            v29 = *(_DWORD *)(v9 + 32) >> 31;
            v64 = v29;
            if ( v18 )
            {
              LODWORD(Size) = a5;
              v38 = CmpAddValueKeyNew(v28, Size, 1);
              v60 = v38;
              v35 = v38;
              if ( v38 == -1 )
              {
                started = -1073741670;
                v17 = 1;
                goto LABEL_64;
              }
              v39 = *(_QWORD *)(v9 + 24);
              if ( v27 == -1 )
              {
                v61 = *(_DWORD *)(v9 + 272);
                started = CmpAddValueToListEx(v39, v9 + 272, 1);
                v17 = 1;
                if ( started < 0 )
                  goto LABEL_135;
                v29 = v64;
                v27 = v62;
              }
              else
              {
                CmpSwapValueInList(v39, v38, v61, v9 + 272);
              }
              ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(v9 + 24) + 2848LL));
              v41 = P;
              if ( v27 == -1 )
              {
                *((_DWORD *)P + 17) = 4;
              }
              else
              {
                *((_DWORD *)P + 17) = 5;
                v41[22] = v27;
              }
              v41[23] = v60;
              v41[18] = v29;
              started = CmAddLogForAction((__int64)v41, v40);
              if ( started < 0 )
              {
                if ( v24 )
                {
                  (*(void (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)(v9 + 24) + 16LL))(*(_QWORD *)(v9 + 24), v71);
                  v24 = 0LL;
                }
                ExAcquireResourceSharedLite(*(PERESOURCE *)(*(_QWORD *)(v9 + 24) + 2848LL), 1u);
                v52 = *(_QWORD *)(v9 + 24);
                if ( v27 == -1 )
                  CmpRemoveValueFromList(v52);
                else
                  CmpSwapValueInList(v52, v27, v61, v9 + 272);
                ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(v9 + 24) + 2848LL));
                v17 = 1;
                v58 = 0;
                goto LABEL_135;
              }
            }
            else
            {
              if ( v27 == -1 )
              {
                started = CmpSetValueKeyNew(v28, a3, (__int64)a4, a5, v29);
              }
              else
              {
                (*(void (__fastcall **)(ULONG_PTR, _QWORD, _BYTE *))(v28 + 8))(v28, v27, v69);
                LODWORD(v55) = a5;
                started = CmpSetValueKeyExisting(*(_QWORD *)(v9 + 24), a4, v55, v29);
                (*(void (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)(v9 + 24) + 16LL))(*(_QWORD *)(v9 + 24), v69);
              }
              v17 = 1;
              if ( started < 0 )
                goto LABEL_135;
              Length = a2->Length;
              if ( *(_DWORD *)(v24 + 60) < Length )
              {
                *(_DWORD *)(v24 + 60) = Length;
                *(_WORD *)(v9 + 170) = a2->Length;
              }
              if ( *(_DWORD *)(v24 + 64) < a5 )
              {
                *(_DWORD *)(v24 + 64) = a5;
                *(_DWORD *)(v9 + 172) = a5;
              }
              *(_QWORD *)(v24 + 4) = v13;
              *(_QWORD *)(v9 + 160) = v13;
              CmpCleanUpKcbValueCache(v9);
              v31 = *(_DWORD *)(v24 + 36);
              *(_QWORD *)(v9 + 96) = *(unsigned int *)(v24 + 40);
              v32 = *(_QWORD *)(v9 + 24);
              *(_DWORD *)(v9 + 88) = v31;
              ExReleaseResourceLite(*(PERESOURCE *)(v32 + 2848));
            }
            v33 = *(_DWORD *)(v9 + 32);
            v34 = *(_QWORD *)(v9 + 24);
            v35 = -1;
            P = 0LL;
            v59 = 0;
            CmpReportNotify(v9, v34, v33, v18, 4, (__int64)v72);
            started = 0;
            v17 = 1;
            v58 = 0;
            goto LABEL_64;
          }
          CmpUnlockKcbStack(v67);
          CmpLockKcbStackTopExclusiveRestShared(v67);
          goto LABEL_10;
        }
        CmpUnlockKcbStack(v67);
        CmpLockKcbStackTopExclusiveRestShared(v67);
      }
    }
    if ( *(int *)(v9 + 240) >= 0 )
    {
      if ( *(_DWORD *)(v9 + 256) )
      {
        started = CmpSnapshotTxOwnerArray(v9 + 256, &v65, &v70);
        if ( started >= 0 )
        {
          v44 = v65;
          CmpLogTransactionAbortedWithChildName(v9, 0LL, 1u, v43, v65);
          CmpUnlockKcbStack(v67);
          v17 = 0;
          if ( v67[3] )
            MiDeleteSubsection(v67[3]);
          memset(v67, 0, sizeof(v67));
          WORD1(v67[0]) = -1;
          CmpUnlockRegistry();
          started = CmpRollbackTransactionArray(v44, v70, v45, &v64);
          if ( started >= 0 )
            goto LABEL_111;
LABEL_116:
          v21 = 0;
          v20 = 0;
          goto LABEL_22;
        }
LABEL_118:
        v17 = 1;
        v21 = 0;
        v20 = 1;
        goto LABEL_22;
      }
      goto LABEL_16;
    }
    started = CmpSnapshotTxOwnerArray(v9 + 240, &v65, &v70);
    if ( started < 0 )
      goto LABEL_118;
    v47 = v65;
    CmpLogTransactionAbortedWithChildName(v9, 0LL, 1u, v46, v65);
    CmpUnlockKcbStack(v67);
    v17 = 0;
    if ( v67[3] )
      MiDeleteSubsection(v67[3]);
    memset(v67, 0, sizeof(v67));
    WORD1(v67[0]) = -1;
    CmpUnlockRegistry();
    started = CmpRollbackTransactionArray(v47, v70, v48, &v64);
    if ( started < 0 )
      goto LABEL_116;
LABEL_111:
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, 0LL) )
  {
    v17 = 1;
    v21 = 0;
    started = -1073740763;
    v20 = 1;
    if ( (*(_BYTE *)(a1 + 48) & 1) == 0 )
      started = -1073741444;
  }
  else
  {
    started = CmpTransSearchAddTransFromKeyBody(a1, &v68);
    if ( started >= 0 )
    {
      v14 = *(_DWORD *)(*(_QWORD *)(v9 + 24) + 144LL);
      if ( (v14 & 2) == 0 )
        goto LABEL_10;
      started = -1072103423;
    }
    v17 = 1;
    v21 = 0;
    v20 = 1;
  }
LABEL_23:
  if ( P )
  {
    CmpRundownUnitOfWork((ULONG_PTR)P);
    ExFreePoolWithTag(P, 0x77554D43u);
  }
LABEL_25:
  if ( v59 )
  {
    v53 = *(unsigned int *)(v9 + 276);
    if ( (_DWORD)v53 != -1 )
      HvFreeCell(*(_QWORD *)(v9 + 24), v53);
    *(_DWORD *)(v9 + 276) = -1;
    *(_DWORD *)(v9 + 272) = 0;
    *(_QWORD *)(v9 + 280) = 0LL;
  }
  if ( v21 )
    ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(v9 + 24) + 2848LL));
  if ( v17 )
    CmpUnlockKcbStack(v67);
  if ( v20 )
    CmpUnlockRegistry();
  if ( (_QWORD *)v72[0] != v72 )
    CmpSignalDeferredPosts(v72);
  v22 = v73;
  if ( started >= 0 && a7 && v73 )
  {
    v74[2] = (PVOID)__PAIR64__(a5, a3);
    v74[3] = a4;
    SeAdtRegistryValueChangedAuditAlarm(v14, (_DWORD)v73, v15, (_DWORD)a2, a1, a6, (__int64)v74, v63);
  }
  if ( v74[1] )
    CmpFreeTransientPoolWithTag(v74[1], 0x34414D43u);
  if ( v22 )
    CmpFreeTransientPoolWithTag(v22, 0x33414D43u);
  if ( v12 )
  {
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  if ( v67[3] )
    MiDeleteSubsection(v67[3]);
  return (unsigned int)started;
}
