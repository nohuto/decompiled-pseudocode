/*
 * XREFs of CmRestoreKey @ 0x140701768
 * Callers:
 *     NtRestoreKey @ 0x1406ECCC8 (NtRestoreKey.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     CmpCreateHive @ 0x140497630 (CmpCreateHive.c)
 *     CmpLockRegistryFreezeAware @ 0x14049BC3C (CmpLockRegistryFreezeAware.c)
 *     CmpUnlockRegistry @ 0x1404A8188 (CmpUnlockRegistry.c)
 *     CmpCleanUpKcbValueCache @ 0x1404A99D4 (CmpCleanUpKcbValueCache.c)
 *     CmpUnlockKcb @ 0x1404AA790 (CmpUnlockKcb.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1404AECB0 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpSignalDeferredPosts @ 0x1404E21B4 (CmpSignalDeferredPosts.c)
 *     HvpMarkCellDirty @ 0x1404E3EC4 (HvpMarkCellDirty.c)
 *     HvReallocateCell @ 0x140514F84 (HvReallocateCell.c)
 *     CmpFreeKeyByCell @ 0x1405150FC (CmpFreeKeyByCell.c)
 *     CmpCleanUpSubKeyInfo @ 0x140516B80 (CmpCleanUpSubKeyInfo.c)
 *     CmpAssignSecurityToKcb @ 0x140516C04 (CmpAssignSecurityToKcb.c)
 *     CmpCleanupRollbackPacket @ 0x14054E0A8 (CmpCleanupRollbackPacket.c)
 *     CmpDoesKeyHaveOpenSubkeys @ 0x14054E1F4 (CmpDoesKeyHaveOpenSubkeys.c)
 *     CmpReportNotify @ 0x14054F614 (CmpReportNotify.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x140583DF4 (CmpLogTransactionAbortedWithChildName.c)
 *     CmpCopyKeyPartial @ 0x1405DFB94 (CmpCopyKeyPartial.c)
 *     CmpAbortRollbackPacket @ 0x1405E9E8C (CmpAbortRollbackPacket.c)
 *     CmpTryAcquireKcbIXLocks @ 0x1406117BC (CmpTryAcquireKcbIXLocks.c)
 *     CmpPrepareForSubtreeInvalidation @ 0x140614070 (CmpPrepareForSubtreeInvalidation.c)
 *     CmpInvalidateSubtree @ 0x14061445C (CmpInvalidateSubtree.c)
 *     CmpTraceHiveRestoreStart @ 0x1406EE88C (CmpTraceHiveRestoreStart.c)
 *     CmpTraceHiveRestoreStop @ 0x1406EE9A0 (CmpTraceHiveRestoreStop.c)
 *     CmpCheckKeyAccess @ 0x1406F5DB8 (CmpCheckKeyAccess.c)
 *     CmpDoAccessCheckOnSubtree @ 0x1406F62BC (CmpDoAccessCheckOnSubtree.c)
 *     CmpDestroyHive @ 0x1406F76D8 (CmpDestroyHive.c)
 *     CmpRetryBackOff @ 0x1406F9BF4 (CmpRetryBackOff.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x1406FADDC (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmpLogUnsupportedOperation @ 0x1406FB130 (CmpLogUnsupportedOperation.c)
 *     CmpCopySyncTree @ 0x1406FD234 (CmpCopySyncTree.c)
 *     CmpLoadHiveVolatile @ 0x140702BD0 (CmpLoadHiveVolatile.c)
 *     CmpRefreshHive @ 0x14070306C (CmpRefreshHive.c)
 *     CmpDeleteTree @ 0x140703748 (CmpDeleteTree.c)
 */

__int64 __fastcall CmRestoreKey(_QWORD *a1, void *a2, int a3, KPROCESSOR_MODE a4)
{
  __int64 v7; // r15
  ULONG_PTR v8; // r14
  ULONG_PTR v9; // rsi
  int Hive; // edi
  int HiveVolatile; // eax
  unsigned int v12; // edi
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  volatile signed __int64 *v16; // rbx
  __int64 v17; // rax
  unsigned int v18; // edx
  __int64 v19; // rax
  unsigned int v20; // r12d
  unsigned int v21; // eax
  __int64 v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  char v26; // bl
  __int64 v27; // rdx
  __int64 v28; // r8
  int v29; // eax
  __int64 v30; // r9
  int v31; // r12d
  __int64 v32; // r9
  unsigned int v33; // r12d
  unsigned int v34; // r13d
  unsigned int v35; // ebx
  char v36; // al
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  unsigned int v40; // ebx
  void (__fastcall *v41)(ULONG_PTR, _DWORD *); // rax
  int v42; // eax
  unsigned int *v43; // r13
  _WORD *v44; // rbx
  char v45; // al
  __int64 v46; // r8
  unsigned int v47; // edx
  __int64 v48; // rax
  _DWORD *v49; // rcx
  _DWORD *v50; // rcx
  __int64 v51; // rbx
  unsigned int v52; // ecx
  __int64 v53; // rcx
  __int64 v54; // rdx
  __int64 v55; // rax
  __int64 v56; // rbx
  __int64 v57; // rcx
  int v58; // eax
  __int64 v59; // rcx
  unsigned int v60; // r14d
  char v62; // [rsp+28h] [rbp-D8h]
  ULONG_PTR v63; // [rsp+30h] [rbp-D0h]
  unsigned int v65; // [rsp+64h] [rbp-9Ch]
  unsigned int v66; // [rsp+68h] [rbp-98h]
  unsigned int v67; // [rsp+68h] [rbp-98h]
  int v68; // [rsp+6Ch] [rbp-94h] BYREF
  _DWORD v69[2]; // [rsp+70h] [rbp-90h] BYREF
  unsigned int BugCheckParameter3; // [rsp+78h] [rbp-88h]
  unsigned int BugCheckParameter3_4; // [rsp+7Ch] [rbp-84h]
  _DWORD v72[2]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v73; // [rsp+88h] [rbp-78h] BYREF
  __int64 v74; // [rsp+90h] [rbp-70h] BYREF
  __int64 v75; // [rsp+98h] [rbp-68h]
  _DWORD v76[2]; // [rsp+A0h] [rbp-60h] BYREF
  PVOID P; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v78; // [rsp+B0h] [rbp-50h] BYREF
  unsigned int v79; // [rsp+B8h] [rbp-48h]
  unsigned int v80; // [rsp+BCh] [rbp-44h] BYREF
  _DWORD v81[2]; // [rsp+C0h] [rbp-40h] BYREF
  _DWORD v82[2]; // [rsp+C8h] [rbp-38h] BYREF
  _WORD *v83; // [rsp+D0h] [rbp-30h]
  _QWORD v84[2]; // [rsp+D8h] [rbp-28h] BYREF
  char v85[4]; // [rsp+E8h] [rbp-18h] BYREF
  int v86; // [rsp+ECh] [rbp-14h]
  _QWORD *v87[2]; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v88[4]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v89[352]; // [rsp+120h] [rbp+20h] BYREF

  BugCheckParameter3_4 = a3;
  v83 = 0LL;
  v82[1] = 0;
  v82[0] = -1;
  v78 = 0xFFFFFFFFLL;
  v69[0] = -1;
  v72[0] = -1;
  v76[0] = -1;
  v7 = 0LL;
  v73 = 0LL;
  v69[1] = 0;
  v72[1] = 0;
  P = 0LL;
  v76[1] = 0;
  memset(v89, 0, sizeof(v89));
  v8 = a1[1];
  v74 = 0LL;
  v75 = 0LL;
  v68 = 0;
  v9 = *(_QWORD *)(v8 + 24);
  if ( (*(_DWORD *)(v9 + 160) & 0x100000) != 0 )
  {
    Hive = -1073741790;
    goto LABEL_120;
  }
  CmpTraceHiveRestoreStart(a2, a3);
  if ( (a3 & 0xFFFFFFFD) != 0 && (a3 & 2) != 0 )
  {
    Hive = -1073741811;
    goto LABEL_120;
  }
  if ( a1[7] || a1[8] )
  {
    Hive = -1073741811;
    goto LABEL_114;
  }
  if ( (a3 & 1) != 0 )
  {
    HiveVolatile = CmpLoadHiveVolatile(a1, a2);
LABEL_9:
    Hive = HiveVolatile;
    goto LABEL_120;
  }
  if ( (a3 & 2) != 0 )
  {
    HiveVolatile = CmpRefreshHive(a1);
    goto LABEL_9;
  }
  v87[1] = v87;
  v87[0] = v87;
  memset(v88, 0, sizeof(v88));
  v88[0] = a2;
  Hive = CmpCreateHive((ULONG_PTR *)&P, 2u, 0x8000u, 0, 0LL, (__int64)v88, 0LL, 16777217, 0LL, 0LL, 0LL, (__int64)v89);
  if ( Hive < 0 )
    goto LABEL_120;
  CmpLockRegistryFreezeAware(0);
  ExAcquirePushLockSharedEx(v8 + 40, 0LL);
  _InterlockedIncrement((volatile signed __int32 *)(v8 + 48));
  v12 = *(_DWORD *)(v8 + 32);
  v65 = v12;
  if ( *(_WORD *)(v8 + 58) )
  {
    CmpLogUnsupportedOperation(0x11u);
    Hive = -1073741822;
    goto LABEL_112;
  }
  if ( CmpIsKeyDeletedForKeyBody((__int64)a1, 0LL) )
  {
    Hive = -1073741535;
    goto LABEL_112;
  }
  if ( *(_BYTE *)(v8 + 57) == 1 || (PVOID)v9 == CmpMasterHive )
  {
    Hive = -1073741790;
    goto LABEL_112;
  }
  if ( *(_BYTE *)(v9 + 2936) == 1 )
  {
    Hive = -1073741431;
    goto LABEL_112;
  }
  v16 = (volatile signed __int64 *)(v9 + 72);
  ExAcquirePushLockSharedEx(v9 + 72, 0LL);
  v17 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v9 + 8))(v9, v12, v69);
  v7 = v17;
  if ( !v17
    || ((*(_BYTE *)(v17 + 2) & 4) == 0 ? (v18 = *(_DWORD *)(v17 + 16)) : (v18 = -1),
        LODWORD(v63) = v12 >> 31,
        v66 = v18,
        v19 = *((_QWORD *)P + 8),
        v79 = v12 >> 31,
        v20 = CmpCopyKeyPartial((__int64)P, *(unsigned int *)(v19 + 36), v9, v18, 6, v62, v63),
        v20 == -1) )
  {
LABEL_109:
    if ( _InterlockedCompareExchange64(v16, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v9 + 72));
    KeAbPostRelease(v9 + 72);
    Hive = -1073741670;
LABEL_112:
    CmpUnlockKcb(v8, v13, v14, v15);
    CmpUnlockRegistry();
    CmpDestroyHive((char *)P);
LABEL_116:
    if ( v7 )
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v9 + 16))(v9, v69);
    goto LABEL_118;
  }
  v21 = HvReallocateCell(v9, v20, (unsigned int)*(unsigned __int16 *)(v7 + 72) + 76, 1, &v73, &v78);
  BugCheckParameter3 = v21;
  if ( v21 == -1
    || ((v22 = v73,
         v20 = v21,
         memmove((void *)(v73 + 76), (const void *)(v7 + 76), *(unsigned __int16 *)(v7 + 72)),
         *(_WORD *)(v22 + 72) = *(_WORD *)(v7 + 72),
         (*(_BYTE *)(v7 + 2) & 0x20) == 0)
      ? (*(_WORD *)(v22 + 2) &= ~0x20u)
      : (*(_WORD *)(v22 + 2) |= 0x20u),
        !CmpCopySyncTree((int)P, *(_DWORD *)(*((_QWORD *)P + 8) + 36LL), v9, v20, 2, 0)) )
  {
    if ( (unsigned __int8)CmpDeleteTree(v9, v20) )
      CmpFreeKeyByCell(v9, v20, 0);
    goto LABEL_109;
  }
  if ( _InterlockedCompareExchange64(v16, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(v9 + 72));
  KeAbPostRelease(v9 + 72);
  CmpUnlockKcb(v8, v23, v24, v25);
  CmpUnlockRegistry();
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v9 + 16))(v9, v69);
  v7 = 0LL;
  (*(void (__fastcall **)(ULONG_PTR, __int64 *))(v9 + 16))(v9, &v78);
  v73 = 0LL;
  CmpLockRegistryFreezeAware(1);
  v26 = BugCheckParameter3_4;
  while ( 1 )
  {
    if ( (CmpShutdownRundown & 1) != 0 )
    {
LABEL_103:
      Hive = -1073741431;
      goto LABEL_104;
    }
    if ( CmpIsKeyDeletedForKeyBody((__int64)a1, 0LL) )
      goto LABEL_102;
    if ( v65 != *(_DWORD *)(v8 + 32) )
    {
      Hive = -1073741444;
      goto LABEL_104;
    }
    if ( (*(_DWORD *)(v8 + 4) & 0x40000) != 0 )
    {
      Hive = -1073740763;
      goto LABEL_104;
    }
    if ( *(_BYTE *)(v9 + 2936) == 1 )
      goto LABEL_103;
    if ( v66 != -1 )
    {
      Hive = CmpCheckKeyAccess(v9, v66, a4, 4u, 1);
      if ( Hive < 0 )
        goto LABEL_104;
    }
    Hive = CmpCheckKeyAccess(v9, v65, a4, 0x10000u, 1);
    if ( Hive < 0 )
      goto LABEL_104;
    LOBYTE(v27) = 1;
    v29 = CmpTryAcquireKcbIXLocks(v8, v27, v28, (__int64)&v74);
    Hive = v29;
    if ( v29 == -1073741267 )
    {
      CmpLogTransactionAbortedWithChildName(v8, 0LL, 7u, v30, v74);
      CmpUnlockRegistry();
      Hive = CmpAbortRollbackPacket((__int64)&v74);
      if ( Hive < 0 )
        goto LABEL_55;
      goto LABEL_45;
    }
    if ( v29 < 0 )
      goto LABEL_104;
    Hive = CmpDoAccessCheckOnSubtree(v9, v65, a4, 0x10000u, 2u);
    if ( Hive < 0 )
      goto LABEL_104;
    if ( (v26 & 8) == 0 )
      break;
    v84[0] = 0LL;
    v84[1] = &v74;
    CmpEnumerateAllHigherLayerKcbs(
      v8,
      (unsigned int (__fastcall *)(ULONG_PTR, __int64))CmpCleanUpHigherLayerKcbCachesPreCallback,
      (unsigned int (__fastcall *)(_QWORD, _QWORD))CmpPrepareToInvalidateAllHigherLayerKcbsPostCallback,
      (__int64)v84,
      1,
      1);
    Hive = HIDWORD(v84[0]);
    v31 = HIDWORD(v84[0]);
    if ( (int)(HIDWORD(v84[0]) + 0x80000000) >= 0 && HIDWORD(v84[0]) != -1073741267 )
      goto LABEL_104;
    Hive = CmpPrepareForSubtreeInvalidation(v8, (__int64)&v74);
    if ( Hive != -1073741267 )
    {
      if ( Hive < 0 )
        goto LABEL_104;
      if ( v31 != -1073741267 )
      {
        v85[0] = 0;
        v86 = 1;
        CmpEnumerateAllHigherLayerKcbs(
          v8,
          (unsigned int (__fastcall *)(ULONG_PTR, __int64))CmpCleanUpHigherLayerKcbCachesPreCallback,
          (unsigned int (__fastcall *)(_QWORD, _QWORD))CmpInvalidateAllHigherLayerKcbsPostCallback,
          (__int64)v85,
          1,
          1);
        CmpInvalidateSubtree(v8, 1u, 0LL);
        goto LABEL_59;
      }
    }
    CmpLogTransactionAbortedWithChildName(v8, 0LL, 7u, v32, v74);
    CmpUnlockRegistry();
    Hive = CmpAbortRollbackPacket((__int64)&v74);
    if ( Hive < 0 )
    {
LABEL_55:
      CmpLockRegistryFreezeAware(1);
LABEL_104:
      v60 = BugCheckParameter3;
      if ( (unsigned __int8)CmpDeleteTree(v9, BugCheckParameter3) )
        CmpFreeKeyByCell(v9, v60, 0);
      CmpUnlockRegistry();
      CmpDestroyHive((char *)P);
      goto LABEL_114;
    }
LABEL_45:
    CmpCleanupRollbackPacket((__int64)&v74);
    v74 = 0LL;
    v75 = 0LL;
    CmpRetryBackOff(&v68);
    CmpLockRegistryFreezeAware(1);
  }
  CmpEnumerateAllHigherLayerKcbs(
    v8,
    (unsigned int (__fastcall *)(ULONG_PTR, __int64))CmpCleanUpHigherLayerKcbCachesPreCallback,
    (unsigned int (__fastcall *)(_QWORD, _QWORD))CmpCleanUpHigherLayerKcbCachesPostCallback,
    0LL,
    1,
    1);
  if ( CmpDoesKeyHaveOpenSubkeys(v8) || *(_DWORD *)v8 != 1 )
  {
LABEL_102:
    Hive = -1073741535;
    goto LABEL_104;
  }
LABEL_59:
  v33 = BugCheckParameter3;
  if ( !HvpMarkCellDirty(v9, BugCheckParameter3, 0) )
    goto LABEL_60;
  v34 = v65;
  v73 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(v9 + 8))(v9, v65, &v78);
  if ( !v73 )
  {
LABEL_62:
    Hive = -1073741670;
    goto LABEL_104;
  }
  v35 = *(_DWORD *)(v73 + 16);
  v36 = *(_BYTE *)(v73 + 2);
  BugCheckParameter3_4 = v35;
  if ( (v36 & 4) == 0 )
  {
    if ( HvpMarkCellDirty(v9, v35, 0) )
    {
      v39 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v9 + 8))(v9, v35, v72);
      if ( !v39 )
        goto LABEL_62;
      v40 = *(_DWORD *)(v39 + 4LL * v79 + 28);
      v41 = *(void (__fastcall **)(ULONG_PTR, _DWORD *))(v9 + 16);
      v80 = v40;
      v41(v9, v72);
      v83 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v9 + 8))(v9, v40, v82);
      if ( !v83 )
        goto LABEL_62;
      if ( *v83 == 26994 )
      {
        v42 = (unsigned __int16)v83[1];
        v43 = (unsigned int *)(v83 + 2);
      }
      else
      {
        v42 = 1;
        v43 = &v80;
      }
      v67 = v42;
      v68 = 0;
      if ( !v42 )
      {
LABEL_87:
        v51 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v9 + 8))(v9, BugCheckParameter3_4, v72);
        v52 = *(unsigned __int16 *)((*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v9 + 8))(v9, v33, v69) + 74);
        if ( *(_DWORD *)(v51 + 56) < v52 )
          *(_DWORD *)(v51 + 56) = v52;
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v9 + 16))(v9, v69);
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v9 + 16))(v9, v72);
        v34 = v65;
        goto LABEL_90;
      }
      while ( 1 )
      {
        v44 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v9 + 8))(v9, *v43, v76);
        if ( !v44 )
          goto LABEL_62;
        v45 = HvpMarkCellDirty(v9, *v43, 0);
        v46 = 0LL;
        if ( !v45 )
          break;
        v47 = (unsigned __int16)v44[1];
        v48 = 0LL;
        if ( ((*v44 - 26220) & 0xFDFF) != 0 )
        {
          if ( v44[1] )
          {
            v46 = v65;
            v49 = v44 + 2;
            while ( *v49 != v65 )
            {
              v48 = (unsigned int)(v48 + 1);
              ++v49;
              if ( (unsigned int)v48 >= v47 )
                goto LABEL_86;
            }
            *(_DWORD *)&v44[2 * v48 + 2] = v33;
LABEL_97:
            (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v9 + 16))(v9, v76);
            goto LABEL_87;
          }
        }
        else if ( v44[1] )
        {
          v46 = v65;
          v50 = v44 + 2;
          while ( *v50 != v65 )
          {
            v48 = (unsigned int)(v48 + 1);
            v50 += 2;
            if ( (unsigned int)v48 >= v47 )
              goto LABEL_86;
          }
          *(_DWORD *)&v44[4 * v48 + 2] = v33;
          goto LABEL_97;
        }
LABEL_86:
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *, __int64))(v9 + 16))(v9, v76, v46);
        ++v43;
        if ( ++v68 >= v67 )
          goto LABEL_87;
      }
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *, _QWORD))(v9 + 16))(v9, v76, 0LL);
    }
LABEL_60:
    Hive = -1073741443;
    goto LABEL_104;
  }
  v37 = (*((__int64 (__fastcall **)(PVOID, _QWORD, _DWORD *))CmpMasterHive + 1))(CmpMasterHive, v35, v72);
  if ( !v37 )
    goto LABEL_62;
  *(_DWORD *)(v37 + 28) = v33;
  (*((void (__fastcall **)(PVOID, _DWORD *))CmpMasterHive + 2))(CmpMasterHive, v72);
  v38 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v9 + 8))(v9, v33, v69);
  v7 = v38;
  if ( !v38 )
    goto LABEL_62;
  *(_DWORD *)(v38 + 16) = v35;
  *(_DWORD *)(*(_QWORD *)(v9 + 64) + 36LL) = v33;
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v9 + 16))(v9, v69);
LABEL_90:
  *(_DWORD *)(v8 + 32) = v33;
  CmpCleanUpKcbValueCache(v8);
  v53 = *(_QWORD *)(v8 + 24);
  v81[0] = -1;
  v54 = *(unsigned int *)(v8 + 32);
  v81[1] = 0;
  v55 = (*(__int64 (__fastcall **)(__int64, __int64, _DWORD *))(v53 + 8))(v53, v54, v81);
  v7 = 0LL;
  v56 = v55;
  if ( !v55 )
    goto LABEL_62;
  v57 = *(unsigned int *)(v55 + 40);
  v58 = *(_DWORD *)(v55 + 36);
  *(_QWORD *)(v8 + 96) = v57;
  *(_DWORD *)(v8 + 88) = v58;
  *(_WORD *)(v8 + 178) = *(_WORD *)(v56 + 2);
  CmpAssignSecurityToKcb(v8, *(unsigned int *)(v56 + 44), 0LL, 0, 0);
  CmpCleanUpSubKeyInfo(v8, 1);
  ++*(_QWORD *)(v8 + 296);
  *(_QWORD *)(v8 + 160) = *(_QWORD *)(v56 + 4);
  *(_WORD *)(v8 + 168) = *(_WORD *)(v56 + 52);
  *(_WORD *)(v8 + 170) = *(_WORD *)(v56 + 60);
  *(_DWORD *)(v8 + 172) = *(_DWORD *)(v56 + 64);
  *(_DWORD *)(v8 + 176) ^= (*(_DWORD *)(v8 + 176) ^ *(unsigned __int16 *)(v56 + 54)) & 0xF;
  *(_DWORD *)(v8 + 176) ^= ((unsigned __int8)*(_DWORD *)(v8 + 176) ^ (unsigned __int8)*(_WORD *)(v56 + 54)) & 0xF0;
  v59 = *(_QWORD *)(v8 + 24);
  *(_BYTE *)(v8 + 177) = *(_BYTE *)(v56 + 55);
  (*(void (__fastcall **)(__int64, _DWORD *))(v59 + 16))(v59, v81);
  *(_WORD *)(v8 + 4) = 64;
  if ( (unsigned __int8)CmpDeleteTree(v9, v34) )
    CmpFreeKeyByCell(v9, v34, 0);
  CmpReportNotify(v8, 0, 1, (__int64)v87);
  if ( !BYTE5(NlsMbCodePageTag) )
  {
    CmpGlobalQuotaAllowed = CmpGlobalQuota;
    BYTE5(NlsMbCodePageTag) = 1;
  }
  CmpUnlockRegistry();
  CmpDestroyHive((char *)P);
  CmpSignalDeferredPosts(v87);
LABEL_114:
  if ( v83 )
  {
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v9 + 16))(v9, v82);
    goto LABEL_116;
  }
LABEL_118:
  if ( v73 )
    (*(void (__fastcall **)(ULONG_PTR, __int64 *))(v9 + 16))(v9, &v78);
LABEL_120:
  CmpCleanupRollbackPacket((__int64)&v74);
  CmpTraceHiveRestoreStop(Hive);
  return (unsigned int)Hive;
}
