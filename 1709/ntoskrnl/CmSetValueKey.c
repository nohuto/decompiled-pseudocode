/*
 * XREFs of CmSetValueKey @ 0x14047B690
 * Callers:
 *     NtSetValueKey @ 0x14047AFF0 (NtSetValueKey.c)
 *     CmpSyncNextBackupHive @ 0x140695A78 (CmpSyncNextBackupHive.c)
 * Callees:
 *     MiDeleteSubsection @ 0x14000DDD0 (MiDeleteSubsection.c)
 *     CmpFreeTransientPoolWithTag @ 0x14001655C (CmpFreeTransientPoolWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceSharedLite @ 0x1400800D0 (ExAcquireResourceSharedLite.c)
 *     HvpGetCellContextReinitialize @ 0x1400812C8 (HvpGetCellContextReinitialize.c)
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     CmpTransEnlistUowInKcb @ 0x140100358 (CmpTransEnlistUowInKcb.c)
 *     CmpTransEnlistUowInCmTrans @ 0x14010A3B0 (CmpTransEnlistUowInCmTrans.c)
 *     CmpSwapValueInList @ 0x1401309B8 (CmpSwapValueInList.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     CmpSignalDeferredPosts @ 0x14046FA38 (CmpSignalDeferredPosts.c)
 *     CmpIsValueTombstone @ 0x140471F84 (CmpIsValueTombstone.c)
 *     CmpRemoveValueFromList @ 0x140471FA4 (CmpRemoveValueFromList.c)
 *     CmpSetValueKeyExisting @ 0x1404737F8 (CmpSetValueKeyExisting.c)
 *     CmpFreeValue @ 0x140476A50 (CmpFreeValue.c)
 *     CmpAddValueToListEx @ 0x140476AC8 (CmpAddValueToListEx.c)
 *     HvFreeCell @ 0x1404778AC (HvFreeCell.c)
 *     CmpSetValueKeyNew @ 0x140477B34 (CmpSetValueKeyNew.c)
 *     CmpAddValueKeyNew @ 0x140477BF0 (CmpAddValueKeyNew.c)
 *     CmpTryConvertKcbLockSharedToExclusive @ 0x140477DB8 (CmpTryConvertKcbLockSharedToExclusive.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x140477E80 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpCleanUpKcbValueCache @ 0x1404789E8 (CmpCleanUpKcbValueCache.c)
 *     CmpFindNameInListWithStatus @ 0x140479488 (CmpFindNameInListWithStatus.c)
 *     CmpCompareNewValueDataAgainstKCBCache @ 0x14047AD50 (CmpCompareNewValueDataAgainstKCBCache.c)
 *     CmpIsKeyStackSymlink @ 0x14047B64C (CmpIsKeyStackSymlink.c)
 *     CmpReportNotify @ 0x14047C204 (CmpReportNotify.c)
 *     HvpMarkCellDirty @ 0x14047D0F4 (HvpMarkCellDirty.c)
 *     CmpLockRegistry @ 0x14047E6F0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x14047E950 (CmpUnlockRegistry.c)
 *     CmpLockKcbStackShared @ 0x14047E98C (CmpLockKcbStackShared.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x14047E9F0 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpUnlockKcbStack @ 0x14047EA68 (CmpUnlockKcbStack.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x140481B84 (CmpUpdateKeyNodeAccessBits.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140482380 (CmpIsKeyDeletedForKeyBody.c)
 *     RtlEqualUnicodeString @ 0x140483080 (RtlEqualUnicodeString.c)
 *     RtlIsSandboxedToken @ 0x1404C69F0 (RtlIsSandboxedToken.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x140568D78 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpLockIXLockExclusive @ 0x140569108 (CmpLockIXLockExclusive.c)
 *     CmpLockIXLockIntent @ 0x140569164 (CmpLockIXLockIntent.c)
 *     CmpRundownUnitOfWork @ 0x140569428 (CmpRundownUnitOfWork.c)
 *     CmAddLogForAction @ 0x140593D1C (CmAddLogForAction.c)
 *     CmpCloneKCBValueListForTrans @ 0x140599910 (CmpCloneKCBValueListForTrans.c)
 *     CmpAllocateUnitOfWork @ 0x14059ABD8 (CmpAllocateUnitOfWork.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x14059E850 (CmpLogTransactionAbortedWithChildName.c)
 *     CmpPromoteKey @ 0x14068AD7C (CmpPromoteKey.c)
 *     CmpSnapshotKcbStackSecurity @ 0x140693984 (CmpSnapshotKcbStackSecurity.c)
 *     CmpRollbackTransactionArray @ 0x1406961BC (CmpRollbackTransactionArray.c)
 *     CmpSnapshotTxOwnerArray @ 0x1406998A4 (CmpSnapshotTxOwnerArray.c)
 *     CmpGetValueForAudit @ 0x14069BD0C (CmpGetValueForAudit.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x140728B88 (SeAdtRegistryValueChangedAuditAlarm.c)
 */

__int64 __fastcall CmSetValueKey(
        __int64 a1,
        unsigned __int16 *a2,
        int a3,
        void *a4,
        unsigned int a5,
        __int64 a6,
        char a7)
{
  const UNICODE_STRING *v7; // r13
  ULONG_PTR v9; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v11; // rcx
  BOOLEAN v12; // r12
  __int64 v13; // rbx
  __int64 v14; // rcx
  int v15; // r8d
  int started; // esi
  char v17; // r14
  __int64 v18; // r12
  int v19; // eax
  char v20; // bl
  char v21; // r13
  void *v22; // rbx
  __int64 v24; // rcx
  __int64 v25; // r14
  __int64 v26; // rcx
  int v27; // eax
  ULONG_PTR v28; // rcx
  int v29; // esi
  unsigned int v30; // eax
  int v31; // eax
  __int64 v32; // rcx
  int v33; // r8d
  __int64 v34; // rdx
  unsigned int v35; // ebx
  __int64 v36; // rax
  _QWORD *UnitOfWork; // rax
  _QWORD *v38; // r13
  int NameInListWithStatus; // eax
  int v40; // ebx
  ULONG_PTR v41; // rcx
  unsigned int *v42; // r13
  _DWORD *v43; // rax
  __int64 v44; // r8
  unsigned int v45; // ebx
  __int64 v46; // rcx
  __int64 v47; // r8
  unsigned int v48; // ebx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // rax
  bool IsValueTombstone; // si
  __int64 v53; // rcx
  ULONG_PTR v54; // rcx
  int v55; // eax
  ULONG_PTR v56; // rdx
  void *Src; // [rsp+20h] [rbp-B1h]
  size_t Size; // [rsp+28h] [rbp-A9h]
  int v59[2]; // [rsp+30h] [rbp-A1h]
  BOOLEAN v60; // [rsp+41h] [rbp-90h]
  _BYTE v61[2]; // [rsp+42h] [rbp-8Fh] BYREF
  int v62; // [rsp+44h] [rbp-8Dh]
  char PreviousMode; // [rsp+48h] [rbp-89h]
  int v64; // [rsp+4Ch] [rbp-85h] BYREF
  unsigned int v65; // [rsp+50h] [rbp-81h] BYREF
  BOOL v66; // [rsp+54h] [rbp-7Dh]
  int v67; // [rsp+58h] [rbp-79h] BYREF
  unsigned int v68; // [rsp+5Ch] [rbp-75h] BYREF
  PVOID P; // [rsp+60h] [rbp-71h]
  PPRIVILEGE_SET v70[4]; // [rsp+68h] [rbp-69h] BYREF
  __int64 v71; // [rsp+88h] [rbp-49h] BYREF
  _BYTE v72[8]; // [rsp+90h] [rbp-41h] BYREF
  __int64 v73; // [rsp+98h] [rbp-39h] BYREF
  _BYTE v74[8]; // [rsp+A0h] [rbp-31h] BYREF
  _QWORD *v75[2]; // [rsp+A8h] [rbp-29h] BYREF
  void *v76; // [rsp+B8h] [rbp-19h] BYREF
  void *v77[10]; // [rsp+C0h] [rbp-11h] BYREF

  v7 = (const UNICODE_STRING *)a2;
  v75[1] = v75;
  v75[0] = v75;
  memset(v70, 0, sizeof(v70));
  P = 0LL;
  WORD1(v70[0]) = -1;
  v9 = 0LL;
  v61[0] = 0;
  v67 = 0;
  v71 = 0LL;
  HvpGetCellContextReinitialize((__int64)v74);
  HvpGetCellContextReinitialize((__int64)v72);
  v64 = -1;
  v62 = -1;
  memset(v77, 0, 0x20uLL);
  v76 = 0LL;
  v66 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  while ( 1 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v60 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    v12 = v60;
    if ( !v60 )
    {
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
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
LABEL_145:
      v20 = 1;
      v17 = 0;
      v21 = 0;
      goto LABEL_23;
    }
    started = CmpStartKcbStackForTopLayerKcb(v70, v9);
    if ( started < 0 )
      goto LABEL_145;
    if ( *(_QWORD *)(a1 + 56) || *(_QWORD *)(a1 + 64) )
    {
      CmpLockKcbStackTopExclusiveRestShared((__int64)v70);
      v17 = 1;
    }
    else
    {
      CmpLockKcbStackShared(v70);
      v17 = 0;
    }
    if ( *(_QWORD *)(a1 + 56) || *(_QWORD *)(a1 + 64) )
      break;
LABEL_10:
    v18 = v71;
    while ( 1 )
    {
      if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, v18) )
      {
        if ( (*(_DWORD *)(a1 + 48) & 1) != 0 )
          started = -1073740763;
        else
          started = -1073741444;
        v17 = 1;
        v21 = 0;
        v20 = 1;
        goto LABEL_22;
      }
      if ( *(_BYTE *)(v9 + 57) == 1 )
        goto LABEL_118;
      if ( !v18 )
        break;
      UnitOfWork = (_QWORD *)CmpAllocateUnitOfWork(v14);
      P = UnitOfWork;
      v38 = UnitOfWork;
      if ( !UnitOfWork )
      {
        v12 = v60;
        v17 = 1;
        v20 = 1;
        started = -1073741670;
        v21 = 0;
        goto LABEL_25;
      }
      CmpTransEnlistUowInKcb(UnitOfWork, v9);
      started = CmpTransEnlistUowInCmTrans(v38, v18);
      if ( started < 0 )
        goto LABEL_119;
      if ( !(unsigned __int8)CmpLockIXLockIntent(v9 + 240, v38)
        || !(unsigned __int8)CmpLockIXLockExclusive(v9 + 256, v38, 1LL) )
      {
        v17 = 1;
        started = -1072103423;
        v20 = 1;
        v21 = 0;
        goto LABEL_22;
      }
      ExAcquireResourceSharedLite(*(PERESOURCE *)(*(_QWORD *)(v9 + 24) + 2848LL), 1u);
      v21 = 1;
      if ( !(unsigned __int8)CmpCloneKCBValueListForTrans(v9, v18, v61) )
      {
        v17 = 1;
        started = -1073741670;
        v20 = 1;
        goto LABEL_22;
      }
      ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(v9 + 24) + 2848LL));
      v7 = (const UNICODE_STRING *)a2;
LABEL_16:
      if ( CmpIsKeyStackSymlink((__int64)v70)
        && (a3 != 6
         || (a5 & 1) != 0
         || a5 > 0xFFFF
         || !v7
         || !RtlEqualUnicodeString(&CmSymbolicLinkValueName, v7, 1u)
         || (unsigned __int8)RtlIsSandboxedToken(0LL)) )
      {
LABEL_118:
        started = -1073741790;
        goto LABEL_119;
      }
      if ( *(_DWORD *)(v9 + 32) == -1 )
      {
        CmpUnlockKcbStack(v70);
        LOBYTE(v44) = 1;
        v17 = 0;
        started = CmpPromoteKey(v70, 0LL, v44);
        if ( started < 0 )
        {
          v21 = 0;
          goto LABEL_66;
        }
        v17 = 1;
      }
      else
      {
        if ( v17 )
          goto LABEL_48;
        v19 = CmpCompareNewValueDataAgainstKCBCache(v9, (__int64)v7, a3, a4, a5);
        if ( v19 != 1 )
        {
          v17 = 1;
          if ( !v19 )
          {
            started = 0;
            v20 = 1;
            v21 = 0;
LABEL_22:
            v12 = v60;
            goto LABEL_23;
          }
          if ( *(struct _KTHREAD **)(v9 + 48) == KeGetCurrentThread() || CmpTryConvertKcbLockSharedToExclusive(v9) )
          {
            v18 = v71;
LABEL_48:
            v24 = *(_QWORD *)(v9 + 24);
            ++*(_QWORD *)(v9 + 296);
            ExAcquireResourceSharedLite(*(PERESOURCE *)(v24 + 2848), 1u);
            v21 = 1;
            if ( !v18 && !(unsigned __int8)HvpMarkCellDirty(*(_QWORD *)(v9 + 24), *(unsigned int *)(v9 + 32)) )
            {
              v17 = 1;
              started = -1073741443;
              v20 = 1;
              goto LABEL_22;
            }
            v25 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _BYTE *))(*(_QWORD *)(v9 + 24) + 8LL))(
                    *(_QWORD *)(v9 + 24),
                    *(unsigned int *)(v9 + 32),
                    v74);
            CmpUpdateKeyNodeAccessBits(*(_QWORD *)(v9 + 24), v25, *(unsigned int *)(v9 + 32));
            v26 = *(_QWORD *)(v9 + 24);
            if ( v18 )
            {
              NameInListWithStatus = CmpFindNameInListWithStatus(
                                       v26,
                                       (unsigned int *)(v9 + 272),
                                       (__int64)a2,
                                       0,
                                       (__int64)&v65,
                                       (__int64)&v64);
              v14 = 0x80000000LL;
              started = NameInListWithStatus;
              if ( (int)(NameInListWithStatus + 0x80000000) >= 0 )
                goto LABEL_68;
            }
            else
            {
              v27 = CmpFindNameInListWithStatus(
                      v26,
                      (unsigned int *)(v25 + 36),
                      (__int64)a2,
                      0,
                      (__int64)&v65,
                      (__int64)&v64);
              v14 = 0x80000000LL;
              started = v27;
              if ( (int)(v27 + 0x80000000) < 0 )
                goto LABEL_52;
LABEL_68:
              if ( started != -1073741772 )
              {
LABEL_135:
                v35 = v62;
                goto LABEL_63;
              }
            }
LABEL_52:
            if ( a7 )
            {
              started = CmpSnapshotKcbStackSecurity(v70, v18, 859917635LL, &v76, (_DWORD)Src);
              if ( started < 0 )
                goto LABEL_135;
              if ( v64 == -1 )
              {
                v66 = 0;
              }
              else
              {
                v51 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _BYTE *))(*(_QWORD *)(v9 + 24) + 8LL))(
                        *(_QWORD *)(v9 + 24),
                        (unsigned int)v64,
                        v72);
                IsValueTombstone = CmpIsValueTombstone(*(_QWORD *)(v9 + 24), v51);
                v66 = !IsValueTombstone;
                (*(void (__fastcall **)(__int64, _BYTE *))(v53 + 16))(v53, v72);
                if ( !IsValueTombstone )
                {
                  started = CmpGetValueForAudit(*(_QWORD *)(v9 + 24), (unsigned int)v64, v77, 876694851LL);
                  if ( started < 0 )
                    goto LABEL_135;
                }
              }
            }
            v28 = *(_QWORD *)(v9 + 24);
            v29 = *(_DWORD *)(v9 + 32) >> 31;
            v67 = v29;
            if ( !v18 )
            {
              if ( v64 == -1 )
              {
                v59[0] = a5;
                started = CmpSetValueKeyNew(v28, v25, (__int64)a2, v65, a3, (__int64)a4, *(size_t *)v59, v29);
              }
              else
              {
                v36 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _BYTE *))(v28 + 8))(v28, (unsigned int)v64, v72);
                LODWORD(Size) = a5;
                started = CmpSetValueKeyExisting(*(_QWORD *)(v9 + 24), (unsigned int)v64, v36, a3, a4, Size, v29);
                (*(void (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)(v9 + 24) + 16LL))(*(_QWORD *)(v9 + 24), v72);
              }
              if ( started < 0 )
                goto LABEL_135;
              v30 = *a2;
              if ( *(_DWORD *)(v25 + 60) < v30 )
              {
                *(_DWORD *)(v25 + 60) = v30;
                *(_WORD *)(v9 + 170) = *a2;
              }
              if ( *(_DWORD *)(v25 + 64) < a5 )
              {
                *(_DWORD *)(v25 + 64) = a5;
                *(_DWORD *)(v9 + 172) = a5;
              }
              *(_QWORD *)(v25 + 4) = v13;
              *(_QWORD *)(v9 + 160) = v13;
              CmpCleanUpKcbValueCache(v9);
              v31 = *(_DWORD *)(v25 + 36);
              *(_QWORD *)(v9 + 96) = *(unsigned int *)(v25 + 40);
              v32 = *(_QWORD *)(v9 + 24);
              *(_DWORD *)(v9 + 88) = v31;
              ExReleaseResourceLite(*(PERESOURCE *)(v32 + 2848));
              goto LABEL_62;
            }
            LODWORD(Src) = a5;
            v62 = CmpAddValueKeyNew(v28, a2, a3, a4, (size_t)Src, 1);
            v35 = v62;
            if ( v62 == -1 )
            {
              started = -1073741670;
            }
            else
            {
              v40 = v64;
              v41 = *(_QWORD *)(v9 + 24);
              if ( v64 == -1 )
              {
                v65 = *(_DWORD *)(v9 + 272);
                started = CmpAddValueToListEx(v41, v62, v65, 1, (unsigned int *)(v9 + 272), 1);
                if ( started < 0 )
                  goto LABEL_135;
                v29 = v67;
                v42 = (unsigned int *)(v9 + 272);
              }
              else
              {
                v42 = (unsigned int *)(v9 + 272);
                CmpSwapValueInList(v41, v62, v65, v9 + 272);
              }
              ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(v9 + 24) + 2848LL));
              v43 = P;
              if ( v40 == -1 )
              {
                *((_DWORD *)P + 17) = 4;
              }
              else
              {
                *((_DWORD *)P + 17) = 5;
                v43[22] = v40;
              }
              v43[23] = v62;
              v43[18] = v29;
              started = CmAddLogForAction(v43);
              if ( started < 0 )
              {
                if ( v25 )
                {
                  (*(void (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)(v9 + 24) + 16LL))(*(_QWORD *)(v9 + 24), v74);
                  v25 = 0LL;
                }
                ExAcquireResourceSharedLite(*(PERESOURCE *)(*(_QWORD *)(v9 + 24) + 2848LL), 1u);
                v54 = *(_QWORD *)(v9 + 24);
                if ( v40 == -1 )
                  CmpRemoveValueFromList(v54, v65, v42);
                else
                  CmpSwapValueInList(v54, v40, v65, (__int64)v42);
                ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(v9 + 24) + 2848LL));
                v21 = 0;
                goto LABEL_135;
              }
LABEL_62:
              v33 = *(_DWORD *)(v9 + 32);
              v34 = *(_QWORD *)(v9 + 24);
              v35 = -1;
              P = 0LL;
              v61[0] = 0;
              CmpReportNotify(v9, v34, v33, v18, 4, (__int64)v75);
              started = 0;
              v21 = 0;
            }
LABEL_63:
            if ( v25 )
              (*(void (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)(v9 + 24) + 16LL))(*(_QWORD *)(v9 + 24), v74);
            v17 = 1;
            if ( v35 != -1 )
            {
              CmpFreeValue(*(_QWORD *)(v9 + 24), v35);
              v17 = 1;
              v20 = 1;
              goto LABEL_22;
            }
LABEL_66:
            v20 = 1;
            goto LABEL_22;
          }
          CmpUnlockKcbStack(v70);
          CmpLockKcbStackTopExclusiveRestShared((__int64)v70);
          goto LABEL_10;
        }
        CmpUnlockKcbStack(v70);
        CmpLockKcbStackTopExclusiveRestShared((__int64)v70);
      }
    }
    if ( *(int *)(v9 + 240) >= 0 )
    {
      if ( *(_DWORD *)(v9 + 256) )
      {
        started = CmpSnapshotTxOwnerArray(v9 + 256, &v68, &v73);
        if ( started >= 0 )
        {
          v45 = v68;
          CmpLogTransactionAbortedWithChildName(v9, 0LL, 1LL);
          CmpUnlockKcbStack(v70);
          v17 = 0;
          if ( v70[3] )
            MiDeleteSubsection(v70[3]);
          memset(v70, 0, sizeof(v70));
          WORD1(v70[0]) = -1;
          CmpUnlockRegistry(v46);
          started = CmpRollbackTransactionArray(v45, v73, v47, &v67);
          if ( started >= 0 )
            goto LABEL_112;
LABEL_117:
          v21 = 0;
          v20 = 0;
          goto LABEL_22;
        }
LABEL_119:
        v17 = 1;
        v21 = 0;
        v20 = 1;
        goto LABEL_22;
      }
      goto LABEL_16;
    }
    started = CmpSnapshotTxOwnerArray(v9 + 240, &v68, &v73);
    if ( started < 0 )
      goto LABEL_119;
    v48 = v68;
    CmpLogTransactionAbortedWithChildName(v9, 0LL, 1LL);
    CmpUnlockKcbStack(v70);
    v17 = 0;
    if ( v70[3] )
      MiDeleteSubsection(v70[3]);
    memset(v70, 0, sizeof(v70));
    WORD1(v70[0]) = -1;
    CmpUnlockRegistry(v49);
    started = CmpRollbackTransactionArray(v48, v73, v50, &v67);
    if ( started < 0 )
      goto LABEL_117;
LABEL_112:
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, 0LL) )
  {
    v17 = 1;
    v21 = 0;
    v55 = -1073740763;
    v20 = 1;
    if ( (*(_BYTE *)(a1 + 48) & 1) == 0 )
      v55 = -1073741444;
    started = v55;
  }
  else
  {
    started = CmpTransSearchAddTransFromKeyBody(a1, &v71);
    if ( started >= 0 )
    {
      v14 = *(unsigned int *)(*(_QWORD *)(v9 + 24) + 144LL);
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
  if ( v61[0] )
  {
    v56 = *(unsigned int *)(v9 + 276);
    if ( (_DWORD)v56 != -1 )
      HvFreeCell(*(_QWORD *)(v9 + 24), v56);
    *(_DWORD *)(v9 + 276) = -1;
    *(_DWORD *)(v9 + 272) = 0;
    *(_QWORD *)(v9 + 280) = 0LL;
  }
  if ( v21 )
    ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(v9 + 24) + 2848LL));
  if ( v17 )
    CmpUnlockKcbStack(v70);
  if ( v20 )
    CmpUnlockRegistry(v14);
  if ( v75[0] != v75 )
    CmpSignalDeferredPosts(v75);
  v22 = v76;
  if ( started >= 0 && a7 && v76 )
  {
    v77[2] = (void *)__PAIR64__(a5, a3);
    v77[3] = a4;
    SeAdtRegistryValueChangedAuditAlarm(v14, (_DWORD)v76, v15, (_DWORD)a2, a1, a6, (__int64)v77, v66);
  }
  if ( v77[1] )
    CmpFreeTransientPoolWithTag(v77[1], 0x34414D43u);
  if ( v22 )
    CmpFreeTransientPoolWithTag(v22, 0x33414D43u);
  if ( v12 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  if ( v70[3] )
    MiDeleteSubsection(v70[3]);
  return (unsigned int)started;
}
