/*
 * XREFs of CmDeleteValueKey @ 0x140474FC8
 * Callers:
 *     NtDeleteValueKey @ 0x140474B2C (NtDeleteValueKey.c)
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
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     CmpSignalDeferredPosts @ 0x14046FA38 (CmpSignalDeferredPosts.c)
 *     CmpIsValueTombstone @ 0x140471F84 (CmpIsValueTombstone.c)
 *     CmpRemoveValueFromList @ 0x140471FA4 (CmpRemoveValueFromList.c)
 *     CmpMarkValueDataDirty @ 0x140473AF8 (CmpMarkValueDataDirty.c)
 *     CmpFreeValueData @ 0x14047692C (CmpFreeValueData.c)
 *     CmpFreeValue @ 0x140476A50 (CmpFreeValue.c)
 *     HvFreeCell @ 0x1404778AC (HvFreeCell.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x140477E80 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpCleanUpKcbValueCache @ 0x1404789E8 (CmpCleanUpKcbValueCache.c)
 *     CmpFindNameInListWithStatus @ 0x140479488 (CmpFindNameInListWithStatus.c)
 *     CmpReportNotify @ 0x14047C204 (CmpReportNotify.c)
 *     HvpMarkCellDirty @ 0x14047D0F4 (HvpMarkCellDirty.c)
 *     CmpLockRegistry @ 0x14047E6F0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x14047E950 (CmpUnlockRegistry.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x14047E9F0 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpUnlockKcbStack @ 0x14047EA68 (CmpUnlockKcbStack.c)
 *     CmpGetKcbAtLayerHeight @ 0x140481B64 (CmpGetKcbAtLayerHeight.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x140481B84 (CmpUpdateKeyNodeAccessBits.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140482380 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x140568D78 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpLockIXLockExclusive @ 0x140569108 (CmpLockIXLockExclusive.c)
 *     CmpLockIXLockIntent @ 0x140569164 (CmpLockIXLockIntent.c)
 *     CmpRundownUnitOfWork @ 0x140569428 (CmpRundownUnitOfWork.c)
 *     CmAddLogForAction @ 0x140593D1C (CmAddLogForAction.c)
 *     CmpCloneKCBValueListForTrans @ 0x140599910 (CmpCloneKCBValueListForTrans.c)
 *     CmpAllocateUnitOfWork @ 0x14059ABD8 (CmpAllocateUnitOfWork.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x14059E850 (CmpLogTransactionAbortedWithChildName.c)
 *     CmpPromoteKey @ 0x14068AD7C (CmpPromoteKey.c)
 *     CmpSetValueKeyTombstone @ 0x14068EFD0 (CmpSetValueKeyTombstone.c)
 *     CmpSnapshotKcbStackSecurity @ 0x140693984 (CmpSnapshotKcbStackSecurity.c)
 *     CmpRollbackTransactionArray @ 0x1406961BC (CmpRollbackTransactionArray.c)
 *     CmpSnapshotTxOwnerArray @ 0x1406998A4 (CmpSnapshotTxOwnerArray.c)
 *     CmpGetValueForAudit @ 0x14069BD0C (CmpGetValueForAudit.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x140728B88 (SeAdtRegistryValueChangedAuditAlarm.c)
 */

__int64 __fastcall CmDeleteValueKey(__int64 a1, _WORD *a2, __int64 a3, char a4)
{
  __int64 v4; // r13
  char v5; // r12
  ULONG_PTR v6; // rsi
  __int64 v7; // r14
  char v8; // r15
  struct _KTHREAD *CurrentThread; // rax
  __int64 v10; // rbx
  __int64 v11; // rcx
  int v12; // r8d
  int started; // edi
  unsigned int v14; // r12d
  __int64 v15; // r13
  __int64 v16; // rcx
  __int16 v17; // r15
  __int64 KcbAtLayerHeight; // rax
  __int64 v19; // rdx
  int v20; // eax
  bool v21; // zf
  char v22; // r14
  void *v23; // rbx
  void *v24; // rbx
  int NameInListWithStatus; // eax
  __int64 v27; // r13
  __int64 v28; // rcx
  __int64 v29; // rdi
  __int64 v30; // rax
  __int64 v31; // r8
  __int64 v32; // rcx
  __int64 v33; // r15
  ULONG_PTR v34; // rcx
  ULONG_PTR v35; // rdx
  __int64 v36; // rdi
  int v37; // eax
  int v38; // r8d
  __int64 v39; // rdx
  _QWORD *UnitOfWork; // rax
  _QWORD *v41; // r14
  __int64 v42; // rcx
  __int64 v43; // r8
  unsigned int v44; // ebx
  __int64 v45; // rcx
  __int64 v46; // r8
  char v47; // al
  unsigned int v48; // eax
  ULONG_PTR v49; // rdx
  unsigned int v50; // [rsp+28h] [rbp-E0h]
  PVOID P; // [rsp+50h] [rbp-B8h]
  char v52; // [rsp+58h] [rbp-B0h] BYREF
  BOOLEAN v53; // [rsp+59h] [rbp-AFh]
  int v54; // [rsp+5Ch] [rbp-ACh] BYREF
  __int64 v55; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v56; // [rsp+68h] [rbp-A0h]
  unsigned int v57; // [rsp+70h] [rbp-98h] BYREF
  int v58; // [rsp+78h] [rbp-90h] BYREF
  int v59; // [rsp+80h] [rbp-88h] BYREF
  __int64 v60; // [rsp+88h] [rbp-80h] BYREF
  PPRIVILEGE_SET v61[4]; // [rsp+90h] [rbp-78h] BYREF
  __int64 v62; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v63; // [rsp+B8h] [rbp-50h]
  char v64[8]; // [rsp+C0h] [rbp-48h] BYREF
  _QWORD *v65[2]; // [rsp+C8h] [rbp-40h] BYREF
  char v66[8]; // [rsp+D8h] [rbp-30h] BYREF
  void *v67; // [rsp+E0h] [rbp-28h] BYREF
  void *v68[12]; // [rsp+E8h] [rbp-20h] BYREF

  v4 = a1;
  v65[1] = v65;
  v65[0] = v65;
  memset(v61, 0, sizeof(v61));
  v5 = 0;
  P = 0LL;
  WORD1(v61[0]) = -1;
  v6 = 0LL;
  v52 = 0;
  v59 = 0;
  v60 = 0LL;
  v63 = 0LL;
  HvpGetCellContextReinitialize((__int64)v64);
  HvpGetCellContextReinitialize((__int64)v66);
  v56 = 0LL;
  v7 = 0LL;
  HvpGetCellContextReinitialize((__int64)&v58);
  v54 = -1;
  LODWORD(v55) = -1;
  memset(v68, 0, 0x20uLL);
  v67 = 0LL;
LABEL_2:
  v8 = 1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v53 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( !v53 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    started = -1073741431;
    v8 = 0;
LABEL_99:
    v22 = 0;
    v23 = P;
    goto LABEL_29;
  }
  v10 = MEMORY[0xFFFFF78000000014];
  CmpLockRegistry();
  v6 = *(_QWORD *)(v4 + 8);
  if ( (*(_DWORD *)(*(_QWORD *)(v6 + 24) + 144LL) & 0x100000) != 0 )
  {
    started = -1073741790;
LABEL_102:
    v8 = 0;
LABEL_103:
    v22 = 0;
    goto LABEL_27;
  }
  started = CmpStartKcbStackForTopLayerKcb(v61, v6);
  if ( started < 0 )
    goto LABEL_102;
  CmpLockKcbStackTopExclusiveRestShared(v61);
  if ( *(_QWORD *)(v4 + 56) || *(_QWORD *)(v4 + 64) )
  {
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(v4, 0LL) )
    {
      started = (*(_BYTE *)(v4 + 48) & 1) != 0 ? -1073740763 : -1073741444;
      goto LABEL_130;
    }
    started = CmpTransSearchAddTransFromKeyBody(v4, &v60);
    if ( started < 0 )
      goto LABEL_130;
    v11 = *(unsigned int *)(*(_QWORD *)(v6 + 24) + 144LL);
    if ( (v11 & 2) != 0 )
    {
      started = -1072103423;
LABEL_130:
      v23 = P;
      v22 = 0;
      v5 = 1;
      goto LABEL_29;
    }
  }
  v14 = v54;
  while ( 1 )
  {
    v15 = v60;
    v8 = 0;
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, v60) )
    {
      v11 = 1LL;
      v22 = 0;
      v8 = 1;
      started = (*(_BYTE *)(a1 + 48) & 1) != 0 ? -1073740763 : -1073741444;
      goto LABEL_27;
    }
    if ( v15 )
      break;
    v11 = v6 + 240;
    if ( *(int *)(v6 + 240) < 0 || (v11 = v6 + 256, *(_DWORD *)(v6 + 256)) )
    {
      started = CmpSnapshotTxOwnerArray(v11, &v57, &v62);
      if ( started < 0 )
        goto LABEL_25;
      v44 = v57;
      v50 = v57;
      CmpLogTransactionAbortedWithChildName(v6, 0LL, 1LL);
      CmpUnlockKcbStack(v61);
      if ( v61[3] )
        MiDeleteSubsection(v61[3]);
      memset(v61, 0, sizeof(v61));
      WORD1(v61[0]) = -1;
      CmpUnlockRegistry(v45);
      v5 = 0;
      started = CmpRollbackTransactionArray(v44, v62, v46, &v59);
      if ( started < 0 )
        goto LABEL_99;
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      v4 = a1;
      v5 = 0;
      goto LABEL_2;
    }
LABEL_12:
    v17 = *(_WORD *)(v6 + 58);
    if ( v17 >= 0 )
    {
      while ( 1 )
      {
        KcbAtLayerHeight = CmpGetKcbAtLayerHeight(v61, (unsigned __int16)v17);
        v7 = KcbAtLayerHeight;
        if ( *(_WORD *)(KcbAtLayerHeight + 58) && *(_BYTE *)(KcbAtLayerHeight + 57) == 1 )
        {
LABEL_21:
          v7 = v56;
LABEL_22:
          v14 = v54;
          break;
        }
        v19 = *(unsigned int *)(KcbAtLayerHeight + 32);
        if ( (_DWORD)v19 != -1 )
        {
          if ( v15 && *(_QWORD *)(KcbAtLayerHeight + 280) == v15 )
          {
            NameInListWithStatus = CmpFindNameInListWithStatus(
                                     *(_QWORD *)(KcbAtLayerHeight + 24),
                                     (int)KcbAtLayerHeight + 272,
                                     (_DWORD)a2,
                                     0,
                                     (__int64)&v55,
                                     (__int64)&v54);
            started = NameInListWithStatus;
            if ( NameInListWithStatus >= 0 )
            {
LABEL_52:
              v56 = v7;
              goto LABEL_22;
            }
            v21 = NameInListWithStatus == -1073741772;
          }
          else
          {
            v20 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(*(_QWORD *)(KcbAtLayerHeight + 24) + 8LL))(
                    *(_QWORD *)(KcbAtLayerHeight + 24),
                    v19,
                    v66);
            started = CmpFindNameInListWithStatus(
                        *(_QWORD *)(v7 + 24),
                        v20 + 36,
                        (_DWORD)a2,
                        0,
                        (__int64)&v55,
                        (__int64)&v54);
            (*(void (__fastcall **)(_QWORD, char *))(*(_QWORD *)(v7 + 24) + 16LL))(*(_QWORD *)(v7 + 24), v66);
            if ( started >= 0 )
              goto LABEL_52;
            v21 = started == -1073741772;
          }
          if ( !v21 )
          {
            v8 = 1;
            goto LABEL_103;
          }
          if ( *(_WORD *)(v7 + 58) && *(_BYTE *)(v7 + 57) )
            goto LABEL_21;
        }
        if ( --v17 < 0 )
          goto LABEL_21;
      }
    }
    if ( v14 == -1 )
    {
      started = -1073741772;
LABEL_25:
      v8 = 1;
      goto LABEL_26;
    }
    v27 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(*(_QWORD *)(v7 + 24) + 8LL))(
            *(_QWORD *)(v7 + 24),
            v14,
            &v58);
    v8 = 0;
    if ( CmpIsValueTombstone(*(_QWORD *)(v7 + 24), v27) )
    {
      started = -1073741772;
      v22 = 0;
LABEL_123:
      v23 = P;
LABEL_68:
      if ( v27 )
        (*(void (__fastcall **)(_QWORD, int *))(*(_QWORD *)(v56 + 24) + 16LL))(*(_QWORD *)(v56 + 24), &v58);
LABEL_70:
      v8 = 1;
      if ( v63 )
        (*(void (__fastcall **)(_QWORD, char *))(*(_QWORD *)(v6 + 24) + 16LL))(*(_QWORD *)(v6 + 24), v64);
      goto LABEL_28;
    }
    (*(void (__fastcall **)(__int64, int *))(v11 + 16))(v11, &v58);
    v27 = 0LL;
    if ( *(_DWORD *)(v6 + 32) != -1 )
    {
      v28 = *(_QWORD *)(v6 + 24);
      ++*(_QWORD *)(v6 + 296);
      ExAcquireResourceSharedLite(*(PERESOURCE *)(v28 + 2848), 1u);
      v22 = 1;
      v29 = v60;
      if ( !v60 && !(unsigned __int8)HvpMarkCellDirty(*(_QWORD *)(v6 + 24), *(unsigned int *)(v6 + 32)) )
      {
        started = -1073741443;
        goto LABEL_106;
      }
      v30 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(*(_QWORD *)(v6 + 24) + 8LL))(
              *(_QWORD *)(v6 + 24),
              *(unsigned int *)(v6 + 32),
              v64);
      v31 = *(unsigned int *)(v6 + 32);
      v32 = *(_QWORD *)(v6 + 24);
      v33 = v30;
      v63 = v30;
      CmpUpdateKeyNodeAccessBits(v32, v30, v31);
      if ( a4 )
      {
        started = CmpSnapshotKcbStackSecurity(v61, v29, 843140419LL, &v67, v50);
        if ( started >= 0 )
        {
          started = CmpGetValueForAudit(*(_QWORD *)(v56 + 24), v14, v68, 826363203LL);
          if ( started >= 0 )
          {
            v29 = v60;
            goto LABEL_58;
          }
        }
        goto LABEL_111;
      }
LABEL_58:
      v34 = *(_QWORD *)(v6 + 24);
      if ( v29 )
      {
        (*(void (__fastcall **)(ULONG_PTR, char *))(v34 + 16))(v34, v64);
        v42 = *(_QWORD *)(v6 + 24);
        v63 = 0LL;
        ExReleaseResourceLite(*(PERESOURCE *)(v42 + 2848));
        v22 = 0;
        v23 = P;
        *((_DWORD *)P + 17) = 6;
        *((_DWORD *)P + 22) = v14;
        started = CmAddLogForAction(P);
        v8 = 1;
        if ( started < 0 )
          goto LABEL_28;
        ExAcquireResourceSharedLite(*(PERESOURCE *)(*(_QWORD *)(v6 + 24) + 2848LL), 1u);
        CmpRemoveValueFromList(*(_QWORD *)(v6 + 24), v55, (unsigned int *)(v6 + 272));
      }
      else
      {
        v35 = *(unsigned int *)(v6 + 32);
        if ( !*(_WORD *)(v6 + 58) )
        {
          if ( (unsigned __int8)HvpMarkCellDirty(v34, v35)
            && (unsigned __int8)HvpMarkCellDirty(*(_QWORD *)(v6 + 24), *(unsigned int *)(v33 + 40))
            && (unsigned __int8)HvpMarkCellDirty(*(_QWORD *)(v6 + 24), v14) )
          {
            v36 = v56;
            v27 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(*(_QWORD *)(v56 + 24) + 8LL))(
                    *(_QWORD *)(v56 + 24),
                    v14,
                    &v58);
            if ( CmpMarkValueDataDirty(*(_QWORD *)(v36 + 24), v27) )
            {
              (*(void (__fastcall **)(_QWORD, int *))(*(_QWORD *)(v36 + 24) + 16LL))(*(_QWORD *)(v36 + 24), &v58);
              v27 = 0LL;
              CmpRemoveValueFromList(*(_QWORD *)(v6 + 24), v55, (unsigned int *)(v33 + 36));
              CmpFreeValue(*(_QWORD *)(v6 + 24), v14);
              *(_QWORD *)(v33 + 4) = v10;
              *(_QWORD *)(v6 + 160) = v10;
              if ( !*(_DWORD *)(v33 + 36) )
              {
                *(_DWORD *)(v33 + 60) = 0;
                *(_WORD *)(v6 + 170) = 0;
                *(_DWORD *)(v33 + 64) = 0;
                *(_DWORD *)(v6 + 172) = 0;
              }
              goto LABEL_66;
            }
LABEL_112:
            started = -1073741443;
            goto LABEL_123;
          }
          goto LABEL_110;
        }
        v47 = HvpMarkCellDirty(v34, v35);
        if ( v6 == v56 )
        {
          if ( v47 && (unsigned __int8)HvpMarkCellDirty(*(_QWORD *)(v6 + 24), v14) )
          {
            v27 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(*(_QWORD *)(v6 + 24) + 8LL))(
                    *(_QWORD *)(v6 + 24),
                    v14,
                    &v58);
            if ( CmpMarkValueDataDirty(*(_QWORD *)(v6 + 24), v27) )
            {
              CmpFreeValueData(*(_QWORD *)(v6 + 24), *(unsigned int *)(v27 + 8));
              *(_DWORD *)(v27 + 8) = -1;
              *(_WORD *)(v27 + 16) |= 2u;
              *(_DWORD *)(v27 + 12) = 0;
              *(_DWORD *)(v27 + 4) = 0;
              *(_QWORD *)(v33 + 4) = v10;
              *(_QWORD *)(v6 + 160) = v10;
              goto LABEL_66;
            }
            goto LABEL_112;
          }
LABEL_110:
          started = -1073741443;
LABEL_111:
          v23 = P;
          goto LABEL_70;
        }
        if ( !v47 )
          goto LABEL_110;
        started = CmpSetValueKeyTombstone(
                    *(_QWORD *)(v6 + 24),
                    v33,
                    (_DWORD)a2,
                    *(_DWORD *)(v33 + 36),
                    *(_DWORD *)(v6 + 32) >> 31);
        if ( started < 0 )
          goto LABEL_111;
        *(_QWORD *)(v33 + 4) = v10;
        *(_QWORD *)(v6 + 160) = v10;
        v48 = (unsigned __int16)*a2;
        if ( *(_DWORD *)(v33 + 60) < v48 )
        {
          *(_DWORD *)(v33 + 60) = v48;
          *(_WORD *)(v6 + 170) = *a2;
        }
LABEL_66:
        CmpCleanUpKcbValueCache(v6);
        v37 = *(_DWORD *)(v33 + 36);
        *(_QWORD *)(v6 + 96) = *(unsigned int *)(v33 + 40);
        *(_DWORD *)(v6 + 88) = v37;
      }
      ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(v6 + 24) + 2848LL));
      v38 = *(_DWORD *)(v6 + 32);
      v39 = *(_QWORD *)(v6 + 24);
      v22 = 0;
      v23 = 0LL;
      v52 = 0;
      CmpReportNotify(v6, v39, v38, v60, 4, (__int64)v65);
      started = 0;
      goto LABEL_68;
    }
    CmpUnlockKcbStack(v61);
    LOBYTE(v43) = 1;
    started = CmpPromoteKey(v61, 0LL, v43);
    if ( started < 0 )
      goto LABEL_26;
  }
  UnitOfWork = (_QWORD *)CmpAllocateUnitOfWork(v16);
  P = UnitOfWork;
  v41 = UnitOfWork;
  if ( !UnitOfWork )
  {
    v5 = 1;
    started = -1073741670;
    v22 = 0;
    v8 = 1;
    goto LABEL_31;
  }
  CmpTransEnlistUowInKcb(UnitOfWork, v6);
  started = CmpTransEnlistUowInCmTrans(v41, v15);
  if ( started < 0 )
    goto LABEL_126;
  if ( !(unsigned __int8)CmpLockIXLockIntent(v6 + 240, v41) )
  {
    started = -1072103423;
LABEL_126:
    v8 = 1;
LABEL_26:
    v22 = 0;
    goto LABEL_27;
  }
  if ( !(unsigned __int8)CmpLockIXLockExclusive(v6 + 256, v41, 1LL) )
  {
    started = -1072103423;
    goto LABEL_25;
  }
  ExAcquireResourceSharedLite(*(PERESOURCE *)(*(_QWORD *)(v6 + 24) + 2848LL), 1u);
  v22 = 1;
  if ( (unsigned __int8)CmpCloneKCBValueListForTrans(v6, v15, &v52) )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(v6 + 24) + 2848LL));
    v7 = v56;
    goto LABEL_12;
  }
  started = -1073741670;
LABEL_106:
  v8 = 1;
LABEL_27:
  v23 = P;
LABEL_28:
  v5 = 1;
LABEL_29:
  if ( v23 )
  {
    CmpRundownUnitOfWork((ULONG_PTR)v23);
    ExFreePoolWithTag(v23, 0x77554D43u);
  }
LABEL_31:
  if ( v52 )
  {
    v49 = *(unsigned int *)(v6 + 276);
    if ( (_DWORD)v49 != -1 )
      HvFreeCell(*(_QWORD *)(v6 + 24), v49);
    *(_DWORD *)(v6 + 276) = -1;
    *(_DWORD *)(v6 + 272) = 0;
    *(_QWORD *)(v6 + 280) = 0LL;
  }
  if ( v22 )
    ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(v6 + 24) + 2848LL));
  if ( v8 )
    CmpUnlockKcbStack(v61);
  if ( v5 )
    CmpUnlockRegistry(v11);
  if ( v65[0] != v65 )
    CmpSignalDeferredPosts(v65);
  v24 = v67;
  if ( started >= 0 && a4 && v67 )
    SeAdtRegistryValueChangedAuditAlarm(v11, (_DWORD)v67, v12, (_DWORD)a2, a1, a3, (__int64)v68, 2);
  if ( v68[1] )
    CmpFreeTransientPoolWithTag(v68[1], 0x34414D43u);
  if ( v24 )
    CmpFreeTransientPoolWithTag(v24, 0x33414D43u);
  if ( v53 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  if ( v61[3] )
    MiDeleteSubsection(v61[3]);
  return (unsigned int)started;
}
