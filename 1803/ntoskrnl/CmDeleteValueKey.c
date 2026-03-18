/*
 * XREFs of CmDeleteValueKey @ 0x14049B18C
 * Callers:
 *     NtDeleteValueKey @ 0x14049ACA0 (NtDeleteValueKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140002440 (CmSiFreeMemory.c)
 *     CmpTransEnlistUowInCmTrans @ 0x14000709C (CmpTransEnlistUowInCmTrans.c)
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     CmpFreeTransientPoolWithTag @ 0x140009034 (CmpFreeTransientPoolWithTag.c)
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     CmpTransEnlistUowInKcb @ 0x14007C9A4 (CmpTransEnlistUowInKcb.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     CmpIsValueTombstone @ 0x1404983A0 (CmpIsValueTombstone.c)
 *     CmpRemoveValueFromList @ 0x1404983C0 (CmpRemoveValueFromList.c)
 *     CmpLockIXLockExclusive @ 0x1404984A8 (CmpLockIXLockExclusive.c)
 *     CmpLockIXLockIntent @ 0x140498504 (CmpLockIXLockIntent.c)
 *     CmpRundownUnitOfWork @ 0x14049896C (CmpRundownUnitOfWork.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x14049C254 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpMarkValueDataDirty @ 0x1404A1098 (CmpMarkValueDataDirty.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x1404A339C (CmpUpdateKeyNodeAccessBits.c)
 *     CmpFindNameInListWithStatus @ 0x1404A38E0 (CmpFindNameInListWithStatus.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1404A5BC8 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpLockRegistry @ 0x1404A71E0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x1404A8188 (CmpUnlockRegistry.c)
 *     CmpUnlockKcbStack @ 0x1404A8B74 (CmpUnlockKcbStack.c)
 *     CmpGetKcbAtLayerHeight @ 0x1404A8BB8 (CmpGetKcbAtLayerHeight.c)
 *     CmpCleanUpKcbValueCache @ 0x1404A99D4 (CmpCleanUpKcbValueCache.c)
 *     CmpAttachToRegistryProcess @ 0x1404AC4D0 (CmpAttachToRegistryProcess.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1404AECB0 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpSignalDeferredPosts @ 0x1404E21B4 (CmpSignalDeferredPosts.c)
 *     CmpReportNotifyForKcbStack @ 0x1404E25D4 (CmpReportNotifyForKcbStack.c)
 *     HvpMarkCellDirty @ 0x1404E3EC4 (HvpMarkCellDirty.c)
 *     CmpFreeValue @ 0x1405154A4 (CmpFreeValue.c)
 *     HvFreeCell @ 0x14051584C (HvFreeCell.c)
 *     CmpFreeValueData @ 0x140516980 (CmpFreeValueData.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x14054BFC8 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmAddLogForAction @ 0x140576A18 (CmAddLogForAction.c)
 *     CmpAllocateUnitOfWork @ 0x14057D8F0 (CmpAllocateUnitOfWork.c)
 *     CmpCloneKCBValueListForTrans @ 0x14057F71C (CmpCloneKCBValueListForTrans.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x140583DF4 (CmpLogTransactionAbortedWithChildName.c)
 *     CmpPromoteKey @ 0x1406EF198 (CmpPromoteKey.c)
 *     CmpSetValueKeyTombstone @ 0x1406F31B8 (CmpSetValueKeyTombstone.c)
 *     CmpSnapshotKcbStackSecurity @ 0x1406F6844 (CmpSnapshotKcbStackSecurity.c)
 *     CmpRollbackTransactionArray @ 0x1406F9C2C (CmpRollbackTransactionArray.c)
 *     CmpSnapshotTxOwnerArray @ 0x1406FD100 (CmpSnapshotTxOwnerArray.c)
 *     CmpGetValueForAudit @ 0x140700954 (CmpGetValueForAudit.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x14078CF24 (SeAdtRegistryValueChangedAuditAlarm.c)
 */

__int64 __fastcall CmDeleteValueKey(__int64 a1, _WORD *a2, __int64 a3, char a4)
{
  __int64 v4; // r13
  char v5; // r14
  ULONG_PTR v6; // rsi
  __int64 v7; // rbx
  int started; // edi
  char v9; // r15
  unsigned int v10; // r12d
  __int64 v11; // r15
  ULONG_PTR v12; // rcx
  __int16 v13; // r13
  __int64 KcbAtLayerHeight; // rax
  __int64 v15; // r14
  __int64 v16; // rdx
  int v17; // eax
  bool v18; // zf
  __int64 v19; // rdi
  _QWORD *v20; // rbx
  char v21; // r12
  int v22; // ecx
  int v23; // r8d
  void *v24; // rbx
  int NameInListWithStatus; // eax
  __int64 v27; // r13
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // r8
  __int64 v32; // rcx
  __int64 v33; // r15
  ULONG_PTR v34; // rcx
  ULONG_PTR v35; // rdx
  int v36; // eax
  __int64 v37; // rbx
  _QWORD *UnitOfWork; // rax
  _QWORD *v39; // r14
  __int64 v40; // rdi
  __int64 v41; // rbx
  int v42; // eax
  __int64 v43; // r8
  int v44; // eax
  unsigned int v45; // ebx
  __int64 v46; // r8
  char v47; // al
  _WORD *v48; // r12
  unsigned int v49; // eax
  ULONG_PTR v50; // rdx
  __int64 v51; // rbx
  _QWORD *P; // [rsp+48h] [rbp-B8h]
  char v53; // [rsp+50h] [rbp-B0h] BYREF
  char v54; // [rsp+51h] [rbp-AFh]
  ULONG_PTR BugCheckParameter3; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v56; // [rsp+60h] [rbp-A0h]
  __int64 v57; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v58; // [rsp+70h] [rbp-90h] BYREF
  __int64 v59; // [rsp+78h] [rbp-88h]
  __int64 v60; // [rsp+80h] [rbp-80h] BYREF
  int v61; // [rsp+88h] [rbp-78h] BYREF
  __int64 v62; // [rsp+90h] [rbp-70h] BYREF
  __int64 v63; // [rsp+98h] [rbp-68h] BYREF
  _WORD *v64; // [rsp+A0h] [rbp-60h]
  PPRIVILEGE_SET v65[4]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v66; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v67; // [rsp+D0h] [rbp-30h]
  _QWORD v68[2]; // [rsp+E0h] [rbp-20h] BYREF
  void *v69; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v70; // [rsp+F8h] [rbp-8h]
  void *v71[4]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v72[48]; // [rsp+120h] [rbp+20h] BYREF

  v70 = a3;
  v68[1] = v68;
  v4 = a1;
  v64 = a2;
  v56 = a1;
  v68[0] = v68;
  v54 = a4;
  memset(v65, 0, sizeof(v65));
  v5 = 0;
  BugCheckParameter3 = -1LL;
  WORD1(v65[0]) = -1;
  P = 0LL;
  v6 = 0LL;
  v62 = 0xFFFFFFFFLL;
  v63 = 0xFFFFFFFFLL;
  v57 = 0xFFFFFFFFLL;
  v53 = 0;
  v61 = 0;
  v60 = 0LL;
  v67 = 0LL;
  v59 = 0LL;
  memset(v71, 0, sizeof(v71));
  v69 = 0LL;
  CmpAttachToRegistryProcess(v72);
LABEL_2:
  if ( (CmpShutdownRundown & 1) != 0 )
  {
    started = -1073741431;
    v21 = 0;
    v9 = 0;
LABEL_107:
    v20 = P;
    goto LABEL_28;
  }
  v7 = MEMORY[0xFFFFF78000000014];
  CmpLockRegistry();
  v6 = *(_QWORD *)(v4 + 8);
  if ( (*(_DWORD *)(*(_QWORD *)(v6 + 24) + 160LL) & 0x100000) != 0 )
  {
    started = -1073741790;
LABEL_104:
    v9 = 0;
    goto LABEL_105;
  }
  started = CmpStartKcbStackForTopLayerKcb(v65, v6);
  if ( started < 0 )
    goto LABEL_104;
  CmpLockKcbStackTopExclusiveRestShared(v65);
  v9 = 1;
  if ( *(_QWORD *)(v4 + 56) || *(_QWORD *)(v4 + 64) )
  {
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(v4, 0LL) )
      goto LABEL_130;
    started = CmpTransSearchAddTransFromKeyBody(v4, &v60);
    if ( started < 0 )
      goto LABEL_105;
    if ( (*(_DWORD *)(*(_QWORD *)(v6 + 24) + 160LL) & 2) != 0 )
    {
      started = -1072103423;
      goto LABEL_105;
    }
  }
  v10 = BugCheckParameter3;
  while ( 1 )
  {
    v11 = v60;
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(v4, v60) )
    {
      v9 = 1;
LABEL_130:
      started = (*(_BYTE *)(v4 + 48) & 1) != 0 ? -1073740763 : -1073741444;
      goto LABEL_105;
    }
    if ( v11 )
      break;
    v12 = v6 + 240;
    if ( *(int *)(v6 + 240) < 0 || (v12 = v6 + 256, *(_DWORD *)(v6 + 256)) )
    {
      started = CmpSnapshotTxOwnerArray(v12, &v58, &v66);
      if ( started < 0 )
        goto LABEL_102;
      v45 = v58;
      CmpLogTransactionAbortedWithChildName(v6, 0LL, 1LL);
      CmpUnlockKcbStack(v65);
      v9 = 0;
      if ( v65[3] )
        CmSiFreeMemory(v65[3]);
      memset(v65, 0, sizeof(v65));
      WORD1(v65[0]) = -1;
      CmpUnlockRegistry();
      v21 = 0;
      started = CmpRollbackTransactionArray(v45, v66, v46, &v61);
      if ( started < 0 )
        goto LABEL_107;
      goto LABEL_2;
    }
LABEL_12:
    v13 = *(_WORD *)(v6 + 58);
    if ( v13 >= 0 )
    {
      while ( 1 )
      {
        KcbAtLayerHeight = CmpGetKcbAtLayerHeight(v65, (unsigned __int16)v13);
        v15 = KcbAtLayerHeight;
        if ( *(_WORD *)(KcbAtLayerHeight + 58) && *(_BYTE *)(KcbAtLayerHeight + 57) == 1 )
        {
LABEL_21:
          v10 = BugCheckParameter3;
          v5 = 0;
          break;
        }
        v16 = *(unsigned int *)(KcbAtLayerHeight + 32);
        if ( (_DWORD)v16 != -1 )
        {
          if ( v11 && *(_QWORD *)(KcbAtLayerHeight + 280) == v11 )
          {
            NameInListWithStatus = CmpFindNameInListWithStatus(
                                     *(_QWORD *)(KcbAtLayerHeight + 24),
                                     (int)KcbAtLayerHeight + 272,
                                     (_DWORD)v64,
                                     0,
                                     (__int64)&BugCheckParameter3 + 4,
                                     (__int64)&BugCheckParameter3);
            started = NameInListWithStatus;
            if ( NameInListWithStatus >= 0 )
            {
LABEL_48:
              v10 = BugCheckParameter3;
              v19 = v15;
              v59 = v15;
              v5 = 0;
              goto LABEL_23;
            }
            v18 = NameInListWithStatus == -1073741772;
          }
          else
          {
            v17 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *))(*(_QWORD *)(KcbAtLayerHeight + 24) + 8LL))(
                    *(_QWORD *)(KcbAtLayerHeight + 24),
                    v16,
                    &v63);
            started = CmpFindNameInListWithStatus(
                        *(_QWORD *)(v15 + 24),
                        v17 + 36,
                        (_DWORD)v64,
                        0,
                        (__int64)&BugCheckParameter3 + 4,
                        (__int64)&BugCheckParameter3);
            (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v15 + 24) + 16LL))(*(_QWORD *)(v15 + 24), &v63);
            if ( started >= 0 )
              goto LABEL_48;
            v18 = started == -1073741772;
          }
          if ( !v18 )
          {
            v5 = 0;
            goto LABEL_25;
          }
          if ( *(_WORD *)(v15 + 58) && *(_BYTE *)(v15 + 57) )
            goto LABEL_21;
        }
        if ( --v13 < 0 )
          goto LABEL_21;
      }
    }
    v19 = v59;
LABEL_23:
    if ( v10 == -1 )
    {
      started = -1073741772;
      goto LABEL_25;
    }
    v27 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(v19 + 24) + 8LL))(
            *(_QWORD *)(v19 + 24),
            v10,
            &v57);
    if ( CmpIsValueTombstone(*(_QWORD *)(v19 + 24), v27) )
    {
      started = -1073741772;
      goto LABEL_126;
    }
    (*(void (__fastcall **)(__int64, __int64 *))(v28 + 16))(v28, &v57);
    v27 = 0LL;
    if ( *(_DWORD *)(v6 + 32) != -1 )
    {
      v29 = *(_QWORD *)(v6 + 24);
      ++*(_QWORD *)(v6 + 296);
      ExAcquirePushLockSharedEx(v29 + 72, 0LL);
      v5 = 1;
      if ( !v11 && !(unsigned __int8)HvpMarkCellDirty(*(_QWORD *)(v6 + 24), *(unsigned int *)(v6 + 32)) )
      {
        started = -1073741443;
LABEL_25:
        v20 = P;
        v9 = 1;
        goto LABEL_26;
      }
      v30 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(v6 + 24) + 8LL))(
              *(_QWORD *)(v6 + 24),
              *(unsigned int *)(v6 + 32),
              &v62);
      v31 = *(unsigned int *)(v6 + 32);
      v32 = *(_QWORD *)(v6 + 24);
      v33 = v30;
      v67 = v30;
      CmpUpdateKeyNodeAccessBits(v32, v30, v31);
      if ( v54 )
      {
        started = CmpSnapshotKcbStackSecurity(v65, v60, 843140419LL, &v69);
        if ( started >= 0 )
        {
          started = CmpGetValueForAudit(*(_QWORD *)(v59 + 24), v10, v71, 826363203LL);
          if ( started >= 0 )
          {
            v19 = v59;
            goto LABEL_54;
          }
        }
      }
      else
      {
LABEL_54:
        v34 = *(_QWORD *)(v6 + 24);
        if ( v60 )
        {
          (*(void (__fastcall **)(ULONG_PTR, __int64 *))(v34 + 16))(v34, &v62);
          v41 = *(_QWORD *)(v6 + 24);
          v67 = 0LL;
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v41 + 72), 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)(v41 + 72));
          KeAbPostRelease(v41 + 72);
          v20 = P;
          v5 = 0;
          v42 = BugCheckParameter3;
          *((_DWORD *)P + 17) = 6;
          *((_DWORD *)P + 22) = v42;
          started = CmAddLogForAction(P);
          v9 = 1;
          if ( started < 0 )
            goto LABEL_26;
          ExAcquirePushLockSharedEx(*(_QWORD *)(v6 + 24) + 72LL, 0LL);
          CmpRemoveValueFromList(*(_QWORD *)(v6 + 24), HIDWORD(BugCheckParameter3), (unsigned int *)(v6 + 272));
          goto LABEL_63;
        }
        v35 = *(unsigned int *)(v6 + 32);
        if ( !*(_WORD *)(v6 + 58) )
        {
          if ( (unsigned __int8)HvpMarkCellDirty(v34, v35)
            && (unsigned __int8)HvpMarkCellDirty(*(_QWORD *)(v6 + 24), *(unsigned int *)(v33 + 40))
            && (unsigned __int8)HvpMarkCellDirty(*(_QWORD *)(v6 + 24), v10) )
          {
            v27 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(v19 + 24) + 8LL))(
                    *(_QWORD *)(v19 + 24),
                    v10,
                    &v57);
            if ( (unsigned __int8)CmpMarkValueDataDirty(*(_QWORD *)(v19 + 24)) )
            {
              (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v19 + 24) + 16LL))(*(_QWORD *)(v19 + 24), &v57);
              v27 = 0LL;
              CmpRemoveValueFromList(*(_QWORD *)(v6 + 24), HIDWORD(BugCheckParameter3), (unsigned int *)(v33 + 36));
              CmpFreeValue(*(_QWORD *)(v6 + 24), v10);
              *(_QWORD *)(v33 + 4) = v7;
              *(_QWORD *)(v6 + 160) = v7;
              if ( !*(_DWORD *)(v33 + 36) )
              {
                *(_DWORD *)(v33 + 60) = 0;
                *(_WORD *)(v6 + 170) = 0;
                *(_DWORD *)(v33 + 64) = 0;
                *(_DWORD *)(v6 + 172) = 0;
              }
              goto LABEL_62;
            }
LABEL_115:
            started = -1073741443;
LABEL_126:
            v20 = P;
LABEL_66:
            if ( v27 )
              (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v59 + 24) + 16LL))(*(_QWORD *)(v59 + 24), &v57);
            goto LABEL_68;
          }
          goto LABEL_113;
        }
        v47 = HvpMarkCellDirty(v34, v35);
        if ( v6 == v19 )
        {
          if ( v47 && (unsigned __int8)HvpMarkCellDirty(*(_QWORD *)(v6 + 24), v10) )
          {
            v27 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(v6 + 24) + 8LL))(
                    *(_QWORD *)(v6 + 24),
                    v10,
                    &v57);
            if ( (unsigned __int8)CmpMarkValueDataDirty(*(_QWORD *)(v6 + 24)) )
            {
              CmpFreeValueData(*(_QWORD *)(v6 + 24), *(unsigned int *)(v27 + 8));
              *(_DWORD *)(v27 + 8) = -1;
              *(_WORD *)(v27 + 16) |= 2u;
              *(_DWORD *)(v27 + 12) = 0;
              *(_DWORD *)(v27 + 4) = 0;
              *(_QWORD *)(v33 + 4) = v7;
              *(_QWORD *)(v6 + 160) = v7;
LABEL_62:
              CmpCleanUpKcbValueCache(v6);
              v36 = *(_DWORD *)(v33 + 36);
              *(_QWORD *)(v6 + 96) = *(unsigned int *)(v33 + 40);
              *(_DWORD *)(v6 + 88) = v36;
LABEL_63:
              v37 = *(_QWORD *)(v6 + 24);
              started = 0;
              if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v37 + 72), 0LL, 17LL) != 17 )
                ExfReleasePushLockShared((signed __int64 *)(v37 + 72));
              KeAbPostRelease(v37 + 72);
              v53 = 0;
              v5 = 0;
              v20 = 0LL;
              CmpReportNotifyForKcbStack(v65, v60, 4LL, v68);
              goto LABEL_66;
            }
            goto LABEL_115;
          }
LABEL_113:
          started = -1073741443;
        }
        else
        {
          if ( !v47 )
            goto LABEL_113;
          v48 = v64;
          started = CmpSetValueKeyTombstone(
                      *(_QWORD *)(v6 + 24),
                      v33,
                      (_DWORD)v64,
                      *(_DWORD *)(v33 + 36),
                      *(_DWORD *)(v6 + 32) >> 31);
          if ( started >= 0 )
          {
            *(_QWORD *)(v33 + 4) = v7;
            *(_QWORD *)(v6 + 160) = v7;
            v49 = (unsigned __int16)*v48;
            if ( *(_DWORD *)(v33 + 60) < v49 )
            {
              *(_DWORD *)(v33 + 60) = v49;
              *(_WORD *)(v6 + 170) = *v48;
            }
            goto LABEL_62;
          }
        }
      }
      v20 = P;
LABEL_68:
      v9 = 1;
      if ( v67 )
        (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v6 + 24) + 16LL))(*(_QWORD *)(v6 + 24), &v62);
LABEL_26:
      v4 = v56;
      goto LABEL_27;
    }
    CmpUnlockKcbStack(v65);
    LOBYTE(v43) = 1;
    v9 = 0;
    v44 = CmpPromoteKey(v65, 0LL, v43);
    v4 = v56;
    started = v44;
    if ( v44 < 0 )
      goto LABEL_105;
  }
  UnitOfWork = (_QWORD *)CmpAllocateUnitOfWork();
  P = UnitOfWork;
  v39 = UnitOfWork;
  if ( !UnitOfWork )
  {
    v5 = 0;
    started = -1073741670;
    v21 = 1;
    v9 = 1;
    goto LABEL_30;
  }
  CmpTransEnlistUowInKcb(UnitOfWork, v6);
  started = CmpTransEnlistUowInCmTrans(v39, v11);
  if ( started < 0 )
    goto LABEL_101;
  if ( CmpLockIXLockIntent((unsigned int *)(v6 + 240), (__int64)v39) && CmpLockIXLockExclusive(v6 + 256, v39, 1) )
  {
    ExAcquirePushLockSharedEx(*(_QWORD *)(v6 + 24) + 72LL, 0LL);
    v5 = 1;
    if ( !(unsigned __int8)CmpCloneKCBValueListForTrans(v6, v11, &v53) )
    {
      started = -1073741670;
      goto LABEL_102;
    }
    v40 = *(_QWORD *)(v6 + 24);
    v5 = 0;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v40 + 72), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v40 + 72));
    KeAbPostRelease(v40 + 72);
    v10 = BugCheckParameter3;
    v11 = v60;
    goto LABEL_12;
  }
  started = -1072103423;
LABEL_101:
  v5 = 0;
LABEL_102:
  v9 = 1;
LABEL_105:
  v20 = P;
LABEL_27:
  v21 = 1;
LABEL_28:
  if ( v20 )
  {
    CmpRundownUnitOfWork(v20);
    ExFreePoolWithTag(v20, 0x77554D43u);
  }
LABEL_30:
  if ( v53 )
  {
    v50 = *(unsigned int *)(v6 + 276);
    if ( (_DWORD)v50 != -1 )
      HvFreeCell(*(_QWORD *)(v6 + 24), v50);
    *(_DWORD *)(v6 + 276) = -1;
    *(_DWORD *)(v6 + 272) = 0;
    *(_QWORD *)(v6 + 280) = 0LL;
  }
  if ( v5 )
  {
    v51 = *(_QWORD *)(v6 + 24);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v51 + 72), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v51 + 72));
    KeAbPostRelease(v51 + 72);
  }
  if ( v9 )
    CmpUnlockKcbStack(v65);
  if ( v21 )
    CmpUnlockRegistry();
  if ( (_QWORD *)v68[0] != v68 )
    CmpSignalDeferredPosts(v68);
  KiUnstackDetachProcess((__int64)v72, 0LL);
  v24 = v69;
  if ( started >= 0 && v54 && v69 )
    SeAdtRegistryValueChangedAuditAlarm(v22, (_DWORD)v69, v23, (_DWORD)v64, v4, v70, (__int64)v71, 2);
  if ( v71[1] )
    CmpFreeTransientPoolWithTag(v71[1], 0x34414D43u);
  if ( v24 )
    CmpFreeTransientPoolWithTag(v24, 0x33414D43u);
  if ( v65[3] )
    CmSiFreeMemory(v65[3]);
  return (unsigned int)started;
}
