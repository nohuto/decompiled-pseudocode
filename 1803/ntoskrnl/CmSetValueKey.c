/*
 * XREFs of CmSetValueKey @ 0x1404A4924
 * Callers:
 *     NtSetValueKey @ 0x1404A3E60 (NtSetValueKey.c)
 *     CmpSyncNextBackupHive @ 0x1406F9524 (CmpSyncNextBackupHive.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140002440 (CmSiFreeMemory.c)
 *     CmpTransEnlistUowInCmTrans @ 0x14000709C (CmpTransEnlistUowInCmTrans.c)
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     CmpFreeTransientPoolWithTag @ 0x140009034 (CmpFreeTransientPoolWithTag.c)
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     CmpTransEnlistUowInKcb @ 0x14007C9A4 (CmpTransEnlistUowInKcb.c)
 *     CmpSwapValueInList @ 0x1400A21C8 (CmpSwapValueInList.c)
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
 *     CmpSetValueKeyExisting @ 0x1404A0DA0 (CmpSetValueKeyExisting.c)
 *     CmpTryConvertKcbLockSharedToExclusive @ 0x1404A3370 (CmpTryConvertKcbLockSharedToExclusive.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x1404A339C (CmpUpdateKeyNodeAccessBits.c)
 *     CmpFindNameInListWithStatus @ 0x1404A38E0 (CmpFindNameInListWithStatus.c)
 *     CmpCompareNewValueDataAgainstKCBCache @ 0x1404A3C14 (CmpCompareNewValueDataAgainstKCBCache.c)
 *     CmpIsKeyStackSymlink @ 0x1404A5108 (CmpIsKeyStackSymlink.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1404A5BC8 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpLockRegistry @ 0x1404A71E0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x1404A8188 (CmpUnlockRegistry.c)
 *     CmpLockKcbStackShared @ 0x1404A8434 (CmpLockKcbStackShared.c)
 *     CmpUnlockKcbStack @ 0x1404A8B74 (CmpUnlockKcbStack.c)
 *     CmpCleanUpKcbValueCache @ 0x1404A99D4 (CmpCleanUpKcbValueCache.c)
 *     CmpAttachToRegistryProcess @ 0x1404AC4D0 (CmpAttachToRegistryProcess.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1404AECB0 (CmpIsKeyDeletedForKeyBody.c)
 *     RtlEqualUnicodeString @ 0x1404C91A0 (RtlEqualUnicodeString.c)
 *     RtlIsSandboxedToken @ 0x1404DD0B0 (RtlIsSandboxedToken.c)
 *     CmpSignalDeferredPosts @ 0x1404E21B4 (CmpSignalDeferredPosts.c)
 *     CmpReportNotifyForKcbStack @ 0x1404E25D4 (CmpReportNotifyForKcbStack.c)
 *     HvpMarkCellDirty @ 0x1404E3EC4 (HvpMarkCellDirty.c)
 *     CmpAddValueToListEx @ 0x140514E5C (CmpAddValueToListEx.c)
 *     CmpFreeValue @ 0x1405154A4 (CmpFreeValue.c)
 *     CmpSetValueKeyNew @ 0x1405155F8 (CmpSetValueKeyNew.c)
 *     CmpAddValueKeyNew @ 0x1405156B4 (CmpAddValueKeyNew.c)
 *     HvFreeCell @ 0x14051584C (HvFreeCell.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x14054BFC8 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmAddLogForAction @ 0x140576A18 (CmAddLogForAction.c)
 *     CmpAllocateUnitOfWork @ 0x14057D8F0 (CmpAllocateUnitOfWork.c)
 *     CmpCloneKCBValueListForTrans @ 0x14057F71C (CmpCloneKCBValueListForTrans.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x140583DF4 (CmpLogTransactionAbortedWithChildName.c)
 *     CmpPromoteKey @ 0x1406EF198 (CmpPromoteKey.c)
 *     CmpSnapshotKcbStackSecurity @ 0x1406F6844 (CmpSnapshotKcbStackSecurity.c)
 *     CmpRollbackTransactionArray @ 0x1406F9C2C (CmpRollbackTransactionArray.c)
 *     CmpSnapshotTxOwnerArray @ 0x1406FD100 (CmpSnapshotTxOwnerArray.c)
 *     CmpGetValueForAudit @ 0x140700954 (CmpGetValueForAudit.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x14078CF24 (SeAdtRegistryValueChangedAuditAlarm.c)
 */

__int64 __fastcall CmSetValueKey(
        _QWORD *a1,
        const UNICODE_STRING *a2,
        int a3,
        void *a4,
        unsigned int a5,
        __int64 a6,
        char a7)
{
  _QWORD *v7; // r15
  ULONG_PTR v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rbx
  int started; // edi
  char v12; // r14
  __int64 v13; // r12
  __int64 v14; // rdx
  __int64 v15; // r8
  ULONG_PTR v16; // rcx
  PCUNICODE_STRING v17; // rdi
  int v18; // eax
  char v19; // r15
  _QWORD *v20; // r13
  __int64 v21; // r12
  int v22; // ecx
  int v23; // r8d
  void *v24; // rbx
  __int64 v26; // rcx
  __int64 v27; // r14
  unsigned int *v28; // rdx
  int NameInListWithStatus; // eax
  unsigned int v30; // r13d
  ULONG_PTR v31; // rcx
  int v32; // edi
  unsigned int v33; // r12d
  PCUNICODE_STRING v34; // rcx
  unsigned int Length; // eax
  __int64 v36; // rcx
  __int64 v37; // rbx
  unsigned int v38; // ebx
  __int64 v39; // rax
  _QWORD *UnitOfWork; // rax
  __int64 v41; // rdi
  __int64 v42; // rcx
  __int64 v43; // rbx
  int v44; // ebx
  int v45; // eax
  BOOLEAN v46; // al
  __int64 v47; // r8
  unsigned int v48; // ebx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // rax
  bool IsValueTombstone; // di
  __int64 v53; // rcx
  ULONG_PTR v54; // rcx
  __int64 v55; // rbx
  ULONG_PTR v56; // rdx
  __int64 v57; // rbx
  void *Src; // [rsp+20h] [rbp-E0h]
  size_t Size; // [rsp+28h] [rbp-D8h]
  char v60; // [rsp+40h] [rbp-C0h]
  _DWORD *P; // [rsp+48h] [rbp-B8h]
  _BYTE v62[8]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v63; // [rsp+58h] [rbp-A8h]
  int v64; // [rsp+60h] [rbp-A0h]
  char PreviousMode; // [rsp+64h] [rbp-9Ch]
  unsigned int v66; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v67[12]; // [rsp+6Ch] [rbp-94h]
  int v68; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v69; // [rsp+7Ch] [rbp-84h] BYREF
  __int64 v70; // [rsp+80h] [rbp-80h] BYREF
  __int64 v71; // [rsp+88h] [rbp-78h] BYREF
  PCUNICODE_STRING String2; // [rsp+90h] [rbp-70h]
  int v73; // [rsp+98h] [rbp-68h] BYREF
  __int64 v74; // [rsp+A0h] [rbp-60h] BYREF
  void *v75; // [rsp+A8h] [rbp-58h]
  PPRIVILEGE_SET v76[4]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v77; // [rsp+D0h] [rbp-30h] BYREF
  int v78; // [rsp+D8h] [rbp-28h]
  _QWORD v79[2]; // [rsp+E0h] [rbp-20h] BYREF
  void *v80; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v81; // [rsp+F8h] [rbp-8h]
  void *v82[4]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v83[48]; // [rsp+120h] [rbp+20h] BYREF

  v7 = a1;
  v81 = a6;
  *(_DWORD *)v67 = a3;
  v79[1] = v79;
  String2 = a2;
  v63 = (__int64)a1;
  v79[0] = v79;
  v75 = a4;
  memset(v76, 0, sizeof(v76));
  v68 = -1;
  WORD1(v76[0]) = -1;
  v64 = -1;
  v74 = 0xFFFFFFFFLL;
  v8 = 0LL;
  v70 = 0xFFFFFFFFLL;
  P = 0LL;
  v62[0] = 0;
  v73 = 0;
  v71 = 0LL;
  memset(v82, 0, sizeof(v82));
  v80 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  CmpAttachToRegistryProcess(v83);
  v9 = a5;
  *(_QWORD *)&v67[4] = a5;
  do
  {
    if ( (CmpShutdownRundown & 1) != 0 )
    {
      started = -1073741431;
      v60 = 0;
      goto LABEL_143;
    }
    v10 = MEMORY[0xFFFFF78000000014];
    CmpLockRegistry(v9);
    v8 = v7[1];
    v60 = 1;
    if ( (*(_DWORD *)(*(_QWORD *)(v8 + 24) + 160LL) & 0x100000) != 0 )
    {
      started = -1073741790;
LABEL_143:
      v12 = 0;
      break;
    }
    started = CmpStartKcbStackForTopLayerKcb(v76, v8);
    if ( started < 0 )
      goto LABEL_143;
    if ( v7[7] || v7[8] )
    {
      v12 = 1;
      CmpLockKcbStackTopExclusiveRestShared((__int64)v76);
    }
    else
    {
      v12 = 0;
      CmpLockKcbStackShared(v76);
    }
    if ( v7[7] || v7[8] )
    {
      if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(v7, 0LL) )
      {
        v19 = 0;
LABEL_140:
        v21 = v63;
        v12 = 1;
        v20 = P;
        started = (*(_BYTE *)(v63 + 48) & 1) != 0 ? -1073740763 : -1073741444;
        goto LABEL_26;
      }
      started = CmpTransSearchAddTransFromKeyBody(v7, &v71);
      if ( started < 0 )
        goto LABEL_114;
      v9 = *(unsigned int *)(*(_QWORD *)(v8 + 24) + 160LL);
      if ( (v9 & 2) != 0 )
      {
        started = -1072103423;
LABEL_114:
        v12 = 1;
        break;
      }
    }
LABEL_10:
    v13 = v71;
    while ( 1 )
    {
      if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(v7, v13) )
      {
        v19 = 0;
        goto LABEL_140;
      }
      if ( *(_BYTE *)(v8 + 57) == 1 )
        goto LABEL_102;
      if ( v13 )
      {
        UnitOfWork = (_QWORD *)CmpAllocateUnitOfWork(v9, v14, v15);
        v19 = 0;
        P = UnitOfWork;
        v20 = UnitOfWork;
        if ( !UnitOfWork )
        {
          v21 = v63;
          started = -1073741670;
          v12 = 1;
          goto LABEL_28;
        }
        CmpTransEnlistUowInKcb(UnitOfWork, v8);
        started = CmpTransEnlistUowInCmTrans(v20, v13);
        if ( started < 0 )
          goto LABEL_136;
        if ( !CmpLockIXLockIntent((unsigned int *)(v8 + 240), (__int64)v20) || !CmpLockIXLockExclusive(v8 + 256, v20, 1) )
        {
          started = -1072103423;
          goto LABEL_136;
        }
        ExAcquirePushLockSharedEx(*(_QWORD *)(v8 + 24) + 72LL, 0LL);
        v19 = 1;
        if ( !(unsigned __int8)CmpCloneKCBValueListForTrans(v8, v13, v62) )
        {
          started = -1073741670;
LABEL_136:
          v12 = 1;
          goto LABEL_25;
        }
        v41 = *(_QWORD *)(v8 + 24);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v41 + 72), 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v41 + 72));
        KeAbPostRelease(v41 + 72);
        v13 = v71;
        v7 = (_QWORD *)v63;
        goto LABEL_16;
      }
      v16 = v8 + 240;
      if ( *(int *)(v8 + 240) < 0 )
        break;
      v16 = v8 + 256;
      if ( *(_DWORD *)(v8 + 256) )
        break;
LABEL_16:
      if ( (unsigned __int8)CmpIsKeyStackSymlink(v76) )
      {
        if ( *(_DWORD *)v67 != 6
          || (v9 = *(unsigned int *)&v67[4], (v67[4] & 1) != 0)
          || *(_DWORD *)&v67[4] > 0xFFFFu
          || (v17 = String2) == 0LL
          || (v46 = RtlEqualUnicodeString(&CmSymbolicLinkValueName, String2, 1u), v9 = 0LL, !v46)
          || (unsigned __int8)RtlIsSandboxedToken(0LL) )
        {
LABEL_102:
          started = -1073741790;
          v12 = 1;
LABEL_115:
          v19 = 0;
          goto LABEL_24;
        }
      }
      else
      {
        v17 = String2;
      }
      if ( *(_DWORD *)(v8 + 32) == -1 )
      {
        CmpUnlockKcbStack(v76);
        LOBYTE(v47) = 1;
        v12 = 0;
        started = CmpPromoteKey(v76, 0LL, v47);
        if ( started < 0 )
          goto LABEL_115;
        v12 = 1;
      }
      else
      {
        if ( v12 )
          goto LABEL_48;
        v18 = CmpCompareNewValueDataAgainstKCBCache(v8, (__int64)v17, *(int *)v67, v75, *(int *)&v67[4]);
        if ( v18 != 1 )
        {
          v12 = 1;
          if ( !v18 )
          {
            started = 0;
            goto LABEL_23;
          }
          if ( *(struct _KTHREAD **)(v8 + 48) != KeGetCurrentThread() && !CmpTryConvertKcbLockSharedToExclusive(v8) )
          {
            CmpUnlockKcbStack(v76);
            CmpLockKcbStackTopExclusiveRestShared((__int64)v76);
            goto LABEL_10;
          }
          v13 = v71;
LABEL_48:
          v26 = *(_QWORD *)(v8 + 24);
          ++*(_QWORD *)(v8 + 296);
          ExAcquirePushLockSharedEx(v26 + 72, 0LL);
          v19 = 1;
          if ( !v13 && !(unsigned __int8)HvpMarkCellDirty(*(_QWORD *)(v8 + 24), *(unsigned int *)(v8 + 32)) )
          {
            started = -1073741443;
            v12 = 1;
            goto LABEL_24;
          }
          v27 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(v8 + 24) + 8LL))(
                  *(_QWORD *)(v8 + 24),
                  *(unsigned int *)(v8 + 32),
                  &v74);
          CmpUpdateKeyNodeAccessBits(*(_QWORD *)(v8 + 24), v27, *(_DWORD *)(v8 + 32));
          v28 = (unsigned int *)(v8 + 272);
          if ( !v13 )
            v28 = (unsigned int *)(v27 + 36);
          NameInListWithStatus = CmpFindNameInListWithStatus(
                                   *(_QWORD *)(v8 + 24),
                                   v28,
                                   (__int64)v17,
                                   0,
                                   (__int64)&v66,
                                   (__int64)&v68);
          v9 = 0x80000000LL;
          started = NameInListWithStatus;
          if ( (int)(NameInListWithStatus + 0x80000000) < 0 || NameInListWithStatus == -1073741772 )
          {
            v30 = v68;
            if ( a7 )
            {
              started = CmpSnapshotKcbStackSecurity(v76, v13, 859917635LL, &v80);
              if ( started < 0 )
                goto LABEL_132;
              if ( v30 == -1 )
              {
                *(_DWORD *)&v67[8] = 0;
              }
              else
              {
                v51 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(v8 + 24) + 8LL))(
                        *(_QWORD *)(v8 + 24),
                        v30,
                        &v70);
                IsValueTombstone = CmpIsValueTombstone(*(_QWORD *)(v8 + 24), v51);
                *(_DWORD *)&v67[8] = !IsValueTombstone;
                (*(void (__fastcall **)(__int64, __int64 *))(v53 + 16))(v53, &v70);
                if ( !IsValueTombstone )
                {
                  started = CmpGetValueForAudit(*(_QWORD *)(v8 + 24), v30, v82, 876694851LL);
                  if ( started < 0 )
                    goto LABEL_132;
                }
              }
            }
            v31 = *(_QWORD *)(v8 + 24);
            v32 = *(_DWORD *)(v8 + 32) >> 31;
            v78 = v32;
            if ( v13 )
            {
              LODWORD(Src) = *(_DWORD *)&v67[4];
              v38 = CmpAddValueKeyNew(v31, (size_t)Src, 1);
              v64 = v38;
              if ( v38 == -1 )
              {
                started = -1073741670;
                goto LABEL_133;
              }
              v42 = *(_QWORD *)(v8 + 24);
              if ( v30 == -1 )
              {
                v66 = *(_DWORD *)(v8 + 272);
                started = CmpAddValueToListEx(v42, v38, v66, 1, v8 + 272, 1);
                if ( started < 0 )
                  goto LABEL_133;
                v32 = v78;
              }
              else
              {
                CmpSwapValueInList(v42, v38, v66, v8 + 272);
              }
              v43 = *(_QWORD *)(v8 + 24);
              v19 = 0;
              if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v43 + 72), 0LL, 17LL) != 17 )
                ExfReleasePushLockShared((signed __int64 *)(v43 + 72));
              KeAbPostRelease(v43 + 72);
              v44 = v68;
              v20 = P;
              if ( v68 == -1 )
              {
                v45 = 4;
              }
              else
              {
                P[22] = v68;
                v45 = 5;
              }
              P[17] = v45;
              P[23] = v64;
              P[18] = v32;
              started = CmAddLogForAction(P);
              if ( started < 0 )
              {
                if ( v27 )
                {
                  (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v8 + 24) + 16LL))(*(_QWORD *)(v8 + 24), &v74);
                  v27 = 0LL;
                }
                ExAcquirePushLockSharedEx(*(_QWORD *)(v8 + 24) + 72LL, 0LL);
                v54 = *(_QWORD *)(v8 + 24);
                if ( v44 == -1 )
                  CmpRemoveValueFromList(v54, v66, (unsigned int *)(v8 + 272));
                else
                  CmpSwapValueInList(v54, v44, v66, v8 + 272);
                v55 = *(_QWORD *)(v8 + 24);
                if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v55 + 72), 0LL, 17LL) != 17 )
                  ExfReleasePushLockShared((signed __int64 *)(v55 + 72));
                KeAbPostRelease(v55 + 72);
                v38 = v64;
                goto LABEL_66;
              }
            }
            else
            {
              if ( v30 == -1 )
              {
                v33 = *(_DWORD *)&v67[4];
                started = CmpSetValueKeyNew(
                            v31,
                            v27,
                            (_DWORD)String2,
                            v66,
                            *(_DWORD *)v67,
                            (__int64)v75,
                            *(_DWORD *)&v67[4],
                            v32);
              }
              else
              {
                v39 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(v31 + 8))(v31, v30, &v70);
                v33 = *(_DWORD *)&v67[4];
                LODWORD(Size) = *(_DWORD *)&v67[4];
                started = CmpSetValueKeyExisting(*(_QWORD *)(v8 + 24), v30, v39, *(int *)v67, v75, Size, v32);
                (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v8 + 24) + 16LL))(*(_QWORD *)(v8 + 24), &v70);
              }
              if ( started < 0 )
                goto LABEL_132;
              v34 = String2;
              Length = String2->Length;
              if ( *(_DWORD *)(v27 + 60) < Length )
              {
                *(_DWORD *)(v27 + 60) = Length;
                *(_WORD *)(v8 + 170) = v34->Length;
              }
              if ( *(_DWORD *)(v27 + 64) < v33 )
              {
                *(_DWORD *)(v27 + 64) = v33;
                *(_DWORD *)(v8 + 172) = v33;
              }
              *(_QWORD *)(v27 + 4) = v10;
              *(_QWORD *)(v8 + 160) = v10;
              CmpCleanUpKcbValueCache(v8);
              v19 = 0;
              v36 = *(unsigned int *)(v27 + 40);
              v37 = *(_QWORD *)(v8 + 24);
              *(_DWORD *)(v8 + 88) = *(_DWORD *)(v27 + 36);
              *(_QWORD *)(v8 + 96) = v36;
              if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v37 + 72), 0LL, 17LL) != 17 )
                ExfReleasePushLockShared((signed __int64 *)(v37 + 72));
              KeAbPostRelease(v37 + 72);
            }
            v38 = -1;
            v62[0] = 0;
            v20 = 0LL;
            CmpReportNotifyForKcbStack(v76, v71, 4LL, v79);
            started = 0;
          }
          else
          {
LABEL_132:
            v38 = v64;
LABEL_133:
            v20 = P;
          }
LABEL_66:
          if ( v27 )
            (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v8 + 24) + 16LL))(*(_QWORD *)(v8 + 24), &v74);
          v12 = 1;
          if ( v38 != -1 )
          {
            CmpFreeValue(*(_QWORD *)(v8 + 24), v38);
            v12 = 1;
          }
          goto LABEL_25;
        }
        CmpUnlockKcbStack(v76);
        CmpLockKcbStackTopExclusiveRestShared((__int64)v76);
      }
    }
    started = CmpSnapshotTxOwnerArray(v16, &v69, &v77);
    if ( started < 0 )
      goto LABEL_114;
    v48 = v69;
    CmpLogTransactionAbortedWithChildName(v8, 0LL, 1LL);
    CmpUnlockKcbStack(v76);
    v12 = 0;
    if ( v76[3] )
      CmSiFreeMemory(v76[3]);
    memset(v76, 0, sizeof(v76));
    WORD1(v76[0]) = -1;
    CmpUnlockRegistry(v49);
    v60 = 0;
    started = CmpRollbackTransactionArray(v48, v77, v50, &v73);
  }
  while ( started >= 0 );
LABEL_23:
  v19 = 0;
LABEL_24:
  v20 = P;
LABEL_25:
  v21 = v63;
LABEL_26:
  if ( v20 )
  {
    CmpRundownUnitOfWork(v20);
    ExFreePoolWithTag(v20, 0x77554D43u);
  }
LABEL_28:
  if ( v62[0] )
  {
    v56 = *(unsigned int *)(v8 + 276);
    if ( (_DWORD)v56 != -1 )
      HvFreeCell(*(_QWORD *)(v8 + 24), v56);
    *(_DWORD *)(v8 + 276) = -1;
    *(_DWORD *)(v8 + 272) = 0;
    *(_QWORD *)(v8 + 280) = 0LL;
  }
  if ( v19 )
  {
    v57 = *(_QWORD *)(v8 + 24);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v57 + 72), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v57 + 72));
    KeAbPostRelease(v57 + 72);
  }
  if ( v12 )
    CmpUnlockKcbStack(v76);
  if ( v60 )
    CmpUnlockRegistry(v9);
  if ( (_QWORD *)v79[0] != v79 )
    CmpSignalDeferredPosts(v79);
  KiUnstackDetachProcess((__int64)v83, 0LL);
  v24 = v80;
  if ( started >= 0 && a7 && v80 )
  {
    v82[2] = *(void **)v67;
    v82[3] = v75;
    SeAdtRegistryValueChangedAuditAlarm(
      v22,
      (_DWORD)v80,
      v23,
      (_DWORD)String2,
      v21,
      v81,
      (__int64)v82,
      *(_DWORD *)&v67[8]);
  }
  if ( v82[1] )
    CmpFreeTransientPoolWithTag(v82[1], 0x34414D43u);
  if ( v24 )
    CmpFreeTransientPoolWithTag(v24, 0x33414D43u);
  if ( v76[3] )
    CmSiFreeMemory(v76[3]);
  return (unsigned int)started;
}
