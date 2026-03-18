/*
 * XREFs of CmRestoreKey @ 0x14069C888
 * Callers:
 *     NtRestoreKey @ 0x1406889E0 (NtRestoreKey.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceSharedLite @ 0x1400800D0 (ExAcquireResourceSharedLite.c)
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     CmpSearchForOpenSubKeys @ 0x14046E954 (CmpSearchForOpenSubKeys.c)
 *     CmpSignalDeferredPosts @ 0x14046FA38 (CmpSignalDeferredPosts.c)
 *     CmpInitializeHive @ 0x140470188 (CmpInitializeHive.c)
 *     CmpFreeKeyByCell @ 0x140475940 (CmpFreeKeyByCell.c)
 *     CmpAssignSecurityToKcb @ 0x1404765F8 (CmpAssignSecurityToKcb.c)
 *     CmpCleanUpSubKeyInfo @ 0x140476784 (CmpCleanUpSubKeyInfo.c)
 *     HvReallocateCell @ 0x140476BE4 (HvReallocateCell.c)
 *     CmpCleanUpKcbValueCache @ 0x1404789E8 (CmpCleanUpKcbValueCache.c)
 *     CmpReportNotify @ 0x14047C204 (CmpReportNotify.c)
 *     HvpMarkCellDirty @ 0x14047D0F4 (HvpMarkCellDirty.c)
 *     CmpUnlockRegistry @ 0x14047E950 (CmpUnlockRegistry.c)
 *     CmpUnlockKcb @ 0x14047F670 (CmpUnlockKcb.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140482380 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpLockRegistryFreezeAware @ 0x1404E3B7C (CmpLockRegistryFreezeAware.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x14059E850 (CmpLogTransactionAbortedWithChildName.c)
 *     CmpCopySyncTree @ 0x1405A4F80 (CmpCopySyncTree.c)
 *     CmpCopyKeyPartial @ 0x1405A5AF4 (CmpCopyKeyPartial.c)
 *     CmpDeleteTree @ 0x1405A6A90 (CmpDeleteTree.c)
 *     CmpTraceHiveRestoreStart @ 0x14068A470 (CmpTraceHiveRestoreStart.c)
 *     CmpTraceHiveRestoreStop @ 0x14068A584 (CmpTraceHiveRestoreStop.c)
 *     CmpCheckKeyAccess @ 0x140692EC8 (CmpCheckKeyAccess.c)
 *     CmpDoAccessCheckOnSubtree @ 0x1406933CC (CmpDoAccessCheckOnSubtree.c)
 *     CmpRollbackTransactionArray @ 0x1406961BC (CmpRollbackTransactionArray.c)
 *     CmpLogUnsupportedOperation @ 0x140697FF0 (CmpLogUnsupportedOperation.c)
 *     CmpSnapshotTxOwnerArray @ 0x1406998A4 (CmpSnapshotTxOwnerArray.c)
 *     CmpDestroyTemporaryHive @ 0x14069DC04 (CmpDestroyTemporaryHive.c)
 *     CmpLoadHiveVolatile @ 0x14069DCAC (CmpLoadHiveVolatile.c)
 *     CmpRefreshHive @ 0x14069E158 (CmpRefreshHive.c)
 */

__int64 __fastcall CmRestoreKey(_QWORD *a1, void *a2, int a3, KPROCESSOR_MODE a4)
{
  __int64 v7; // r15
  ULONG_PTR v8; // r14
  ULONG_PTR v9; // rsi
  int v10; // edi
  int HiveVolatile; // eax
  unsigned int v12; // ebx
  _QWORD *v13; // r12
  __int64 v14; // rax
  unsigned int v15; // ecx
  __int64 v16; // rax
  __int64 v17; // rdx
  unsigned int v18; // edi
  unsigned int v19; // eax
  __int64 v20; // rbx
  char v21; // r12
  struct _KTHREAD *CurrentThread; // rax
  __int64 v23; // r9
  __int64 v24; // r8
  __int64 v25; // rax
  __int64 v26; // r9
  __int64 v27; // r8
  unsigned int v28; // r13d
  bool v29; // zf
  unsigned int v30; // r12d
  __int64 v31; // rax
  __int64 v32; // rax
  _DWORD *v33; // rdx
  __int64 v34; // rax
  unsigned int v35; // ebx
  void (__fastcall *v36)(ULONG_PTR, _DWORD *); // rax
  int v37; // eax
  unsigned int *v38; // r12
  _WORD *v39; // rbx
  char v40; // al
  __int64 v41; // r8
  unsigned int v42; // edx
  __int64 v43; // rax
  _DWORD *v44; // rcx
  _DWORD *v45; // rcx
  __int64 v46; // rbx
  unsigned int v47; // ecx
  __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rax
  __int64 v51; // rbx
  __int64 v52; // rcx
  int v53; // eax
  __int64 v54; // rcx
  unsigned int v55; // r14d
  char v57; // [rsp+28h] [rbp-D8h]
  ULONG_PTR v58; // [rsp+30h] [rbp-D0h]
  char v59; // [rsp+60h] [rbp-A0h]
  unsigned int v61; // [rsp+64h] [rbp-9Ch]
  unsigned int v62; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v63; // [rsp+6Ch] [rbp-94h]
  __int64 v64; // [rsp+70h] [rbp-90h] BYREF
  void **v65; // [rsp+78h] [rbp-88h] BYREF
  _DWORD v66[2]; // [rsp+80h] [rbp-80h] BYREF
  unsigned int BugCheckParameter3; // [rsp+88h] [rbp-78h]
  unsigned int BugCheckParameter3_4; // [rsp+8Ch] [rbp-74h]
  _DWORD v69[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v70; // [rsp+98h] [rbp-68h] BYREF
  _DWORD v71[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v72; // [rsp+A8h] [rbp-58h] BYREF
  PVOID P; // [rsp+B0h] [rbp-50h] BYREF
  unsigned int v74; // [rsp+B8h] [rbp-48h]
  unsigned int v75; // [rsp+BCh] [rbp-44h] BYREF
  _DWORD v76[2]; // [rsp+C0h] [rbp-40h] BYREF
  _DWORD v77[2]; // [rsp+C8h] [rbp-38h] BYREF
  _WORD *v78; // [rsp+D0h] [rbp-30h]
  _QWORD *v79[2]; // [rsp+D8h] [rbp-28h] BYREF
  _QWORD v80[5]; // [rsp+E8h] [rbp-18h] BYREF
  _BYTE v81[352]; // [rsp+110h] [rbp+10h] BYREF

  BugCheckParameter3_4 = a3;
  v78 = 0LL;
  v77[1] = 0;
  v77[0] = -1;
  v72 = 0xFFFFFFFFLL;
  v66[0] = -1;
  v69[0] = -1;
  v71[0] = -1;
  v7 = 0LL;
  v70 = 0LL;
  v66[1] = 0;
  v69[1] = 0;
  P = 0LL;
  v71[1] = 0;
  memset(v81, 0, sizeof(v81));
  v8 = a1[1];
  v62 = 0;
  v59 = 0;
  v9 = *(_QWORD *)(v8 + 24);
  if ( (*(_DWORD *)(v9 + 144) & 0x100000) != 0 )
  {
    v10 = -1073741790;
    goto LABEL_126;
  }
  CmpTraceHiveRestoreStart(a2, a3);
  if ( (a3 & 0xFFFFFFFD) != 0 && (a3 & 2) != 0 )
  {
    v10 = -1073741811;
    goto LABEL_126;
  }
  if ( a1[7] || a1[8] )
  {
    v10 = -1073741811;
    goto LABEL_118;
  }
  if ( (a3 & 1) != 0 )
  {
    HiveVolatile = CmpLoadHiveVolatile(a1, a2);
LABEL_9:
    v10 = HiveVolatile;
    goto LABEL_126;
  }
  if ( (a3 & 2) != 0 )
  {
    HiveVolatile = CmpRefreshHive(a1);
    goto LABEL_9;
  }
  v79[1] = v79;
  v79[0] = v79;
  memset(v80, 0, 0x20uLL);
  v80[0] = a2;
  v10 = CmpInitializeHive((ULONG_PTR *)&P, 2u, 0, 0, 0LL, (__int64)v80, 0LL, 16777217, 0LL, 0LL, 0LL, (__int64)v81);
  if ( v10 < 0 )
    goto LABEL_126;
  CmpLockRegistryFreezeAware(0);
  ExAcquirePushLockSharedEx(v8 + 40, 0LL);
  _InterlockedIncrement((volatile signed __int32 *)(v8 + 48));
  v12 = *(_DWORD *)(v8 + 32);
  v13 = P;
  v61 = v12;
  if ( *(_WORD *)(v8 + 58) )
  {
    CmpLogUnsupportedOperation(0x11u);
    v10 = -1073741822;
LABEL_116:
    CmpUnlockKcb(v8);
    CmpUnlockRegistry();
    CmpDestroyTemporaryHive(v13);
    goto LABEL_120;
  }
  if ( CmpIsKeyDeletedForKeyBody((__int64)a1, 0LL) )
  {
    v10 = -1073741535;
    goto LABEL_116;
  }
  if ( *(_BYTE *)(v8 + 57) == 1 || (PVOID)v9 == CmpMasterHive )
  {
    v10 = -1073741790;
    goto LABEL_116;
  }
  if ( *(_BYTE *)(v9 + 4112) == 1 )
  {
    v10 = -1073741431;
    goto LABEL_116;
  }
  ExAcquireResourceSharedLite(*(PERESOURCE *)(v9 + 2848), 1u);
  v14 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v9 + 8))(v9, v12, v66);
  v7 = v14;
  if ( !v14
    || ((*(_BYTE *)(v14 + 2) & 4) == 0 ? (v15 = *(_DWORD *)(v14 + 16)) : (v15 = -1),
        v16 = v13[8],
        LODWORD(v58) = v12 >> 31,
        v74 = v12 >> 31,
        v17 = *(unsigned int *)(v16 + 36),
        v63 = v15,
        v18 = CmpCopyKeyPartial((__int64)v13, v17, v9, v15, 6, v57, v58),
        v18 == -1) )
  {
LABEL_115:
    ExReleaseResourceLite(*(PERESOURCE *)(v9 + 2848));
    v10 = -1073741670;
    goto LABEL_116;
  }
  v19 = HvReallocateCell(v9, v18, (unsigned int)*(unsigned __int16 *)(v7 + 72) + 76, 1, &v70, &v72);
  BugCheckParameter3 = v19;
  if ( v19 == -1
    || ((v20 = v70,
         v18 = v19,
         memmove((void *)(v70 + 76), (const void *)(v7 + 76), *(unsigned __int16 *)(v7 + 72)),
         *(_WORD *)(v20 + 72) = *(_WORD *)(v7 + 72),
         (*(_BYTE *)(v7 + 2) & 0x20) == 0)
      ? (*(_WORD *)(v70 + 2) &= ~0x20u)
      : (*(_WORD *)(v20 + 2) |= 0x20u),
        !CmpCopySyncTree((int)v13, *(_DWORD *)(v13[8] + 36LL), v9, v18, 2, 0)) )
  {
    if ( CmpDeleteTree(v9, v18) )
      CmpFreeKeyByCell(v9, v18, 0);
    goto LABEL_115;
  }
  ExReleaseResourceLite(*(PERESOURCE *)(v9 + 2848));
  CmpUnlockKcb(v8);
  CmpUnlockRegistry();
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v9 + 16))(v9, v66);
  v7 = 0LL;
  (*(void (__fastcall **)(ULONG_PTR, __int64 *))(v9 + 16))(v9, &v72);
  v70 = 0LL;
  CmpLockRegistryFreezeAware(1);
  v21 = BugCheckParameter3_4;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v59 )
      {
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      }
      CurrentThread = KeGetCurrentThread();
      v59 = 0;
      --CurrentThread->KernelApcDisable;
      if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
      {
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
LABEL_109:
        v10 = -1073741431;
        goto LABEL_110;
      }
      v59 = 1;
      if ( CmpIsKeyDeletedForKeyBody((__int64)a1, 0LL) )
        goto LABEL_58;
      if ( v61 != *(_DWORD *)(v8 + 32) )
      {
        v10 = -1073741444;
        goto LABEL_110;
      }
      if ( (*(_DWORD *)(v8 + 4) & 0x40000) != 0 )
      {
        v10 = -1073740763;
        goto LABEL_110;
      }
      if ( *(_BYTE *)(v9 + 4112) == 1 )
        goto LABEL_109;
      if ( v63 != -1 )
      {
        v10 = CmpCheckKeyAccess(v9, v63, a4, 4u, 1);
        if ( v10 < 0 )
          goto LABEL_110;
      }
      v10 = CmpCheckKeyAccess(v9, v61, a4, 0x10000u, 1);
      if ( v10 < 0 )
        goto LABEL_110;
      HIDWORD(v64) = 0;
      v65 = 0LL;
      if ( (!*(_DWORD *)(v8 + 240) || (int)CmpSnapshotTxOwnerArray(v8 + 240, (unsigned int *)&v64 + 1, &v65) < 0)
        && (!*(_DWORD *)(v8 + 256) || (int)CmpSnapshotTxOwnerArray(v8 + 256, (unsigned int *)&v64 + 1, &v65) < 0) )
      {
        break;
      }
      CmpLogTransactionAbortedWithChildName(v8, 0LL, 7u, v23, HIDWORD(v64));
      CmpUnlockRegistry();
      v10 = CmpRollbackTransactionArray(HIDWORD(v64), v65, v24, &v62);
      CmpLockRegistryFreezeAware(1);
      if ( v10 < 0 )
        goto LABEL_110;
    }
    v10 = CmpDoAccessCheckOnSubtree(v9, v61, a4, 0x10000u, 2u);
    if ( v10 < 0 )
      goto LABEL_110;
    v64 = 0LL;
    v65 = 0LL;
    if ( (v21 & 8) != 0 )
    {
      v25 = *(_QWORD *)(v8 + 184);
      if ( v25 )
      {
        if ( *(_QWORD *)(v25 + 32) != v25 + 32 )
        {
          CmpLogUnsupportedOperation(4u);
LABEL_58:
          v10 = -1073741535;
LABEL_110:
          v55 = BugCheckParameter3;
          if ( CmpDeleteTree(v9, BugCheckParameter3) )
            CmpFreeKeyByCell(v9, v55, 0);
          CmpUnlockRegistry();
          CmpDestroyTemporaryHive(P);
          goto LABEL_118;
        }
      }
    }
    if ( !(unsigned int)CmpSearchForOpenSubKeys(v8, (v21 & 8) != 0, (__int64)&v64) )
      break;
    if ( (_DWORD)v64 != -1073741267 )
      goto LABEL_58;
    CmpLogTransactionAbortedWithChildName(v8, 0LL, 7u, v26, HIDWORD(v64));
    CmpUnlockRegistry();
    v10 = CmpRollbackTransactionArray(HIDWORD(v64), v65, v27, &v62);
    CmpLockRegistryFreezeAware(1);
    if ( v10 < 0 )
      goto LABEL_110;
  }
  if ( *(_DWORD *)v8 != 1 && (v21 & 8) == 0 )
  {
    v10 = -1073741535;
    goto LABEL_110;
  }
  v28 = BugCheckParameter3;
  if ( !HvpMarkCellDirty(v9, BugCheckParameter3, 0) )
  {
    v10 = -1073741443;
    goto LABEL_110;
  }
  v70 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(v9 + 8))(v9, v61, &v72);
  if ( !v70 )
  {
LABEL_65:
    v10 = -1073741670;
    goto LABEL_110;
  }
  v29 = (*(_BYTE *)(v70 + 2) & 4) == 0;
  v30 = *(_DWORD *)(v70 + 16);
  BugCheckParameter3_4 = v30;
  if ( !v29 )
  {
    v31 = (*((__int64 (__fastcall **)(PVOID, _QWORD, _DWORD *))CmpMasterHive + 1))(CmpMasterHive, v30, v69);
    if ( !v31
      || (*(_DWORD *)(v31 + 28) = v28,
          (*((void (__fastcall **)(PVOID, _DWORD *))CmpMasterHive + 2))(CmpMasterHive, v69),
          v32 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v9 + 8))(v9, v28, v66),
          (v7 = v32) == 0) )
    {
LABEL_68:
      v10 = -1073741670;
      goto LABEL_110;
    }
    *(_DWORD *)(v32 + 16) = v30;
    v33 = v66;
    *(_DWORD *)(*(_QWORD *)(v9 + 64) + 36LL) = v28;
    goto LABEL_95;
  }
  if ( !HvpMarkCellDirty(v9, v30, 0) )
  {
LABEL_72:
    v10 = -1073741443;
    goto LABEL_110;
  }
  v34 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v9 + 8))(v9, v30, v69);
  if ( !v34 )
    goto LABEL_65;
  v35 = *(_DWORD *)(v34 + 4LL * v74 + 28);
  v36 = *(void (__fastcall **)(ULONG_PTR, _DWORD *))(v9 + 16);
  v75 = v35;
  v36(v9, v69);
  v78 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v9 + 8))(v9, v35, v77);
  if ( !v78 )
    goto LABEL_65;
  if ( *v78 == 26994 )
  {
    v37 = (unsigned __int16)v78[1];
    v38 = (unsigned int *)(v78 + 2);
  }
  else
  {
    v37 = 1;
    v38 = &v75;
  }
  v63 = 0;
  v62 = v37;
  if ( v37 )
  {
    while ( 1 )
    {
      v39 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v9 + 8))(v9, *v38, v71);
      if ( !v39 )
        goto LABEL_68;
      v40 = HvpMarkCellDirty(v9, *v38, 0);
      v41 = 0LL;
      if ( !v40 )
        break;
      v42 = (unsigned __int16)v39[1];
      v43 = 0LL;
      if ( ((*v39 - 26220) & 0xFDFF) != 0 )
      {
        if ( v39[1] )
        {
          v41 = v61;
          v44 = v39 + 2;
          while ( *v44 != v61 )
          {
            v43 = (unsigned int)(v43 + 1);
            ++v44;
            if ( (unsigned int)v43 >= v42 )
              goto LABEL_91;
          }
          *(_DWORD *)&v39[2 * v43 + 2] = v28;
LABEL_98:
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v9 + 16))(v9, v71);
          goto LABEL_92;
        }
      }
      else if ( v39[1] )
      {
        v41 = v61;
        v45 = v39 + 2;
        while ( *v45 != v61 )
        {
          v43 = (unsigned int)(v43 + 1);
          v45 += 2;
          if ( (unsigned int)v43 >= v42 )
            goto LABEL_91;
        }
        *(_DWORD *)&v39[4 * v43 + 2] = v28;
        goto LABEL_98;
      }
LABEL_91:
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *, __int64))(v9 + 16))(v9, v71, v41);
      ++v38;
      if ( ++v63 >= v62 )
        goto LABEL_92;
    }
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *, _QWORD))(v9 + 16))(v9, v71, 0LL);
    goto LABEL_72;
  }
LABEL_92:
  v46 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v9 + 8))(v9, BugCheckParameter3_4, v69);
  v47 = *(unsigned __int16 *)((*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v9 + 8))(v9, v28, v66) + 74);
  if ( *(_DWORD *)(v46 + 56) < v47 )
    *(_DWORD *)(v46 + 56) = v47;
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v9 + 16))(v9, v66);
  v33 = v69;
LABEL_95:
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v9 + 16))(v9, v33);
  *(_DWORD *)(v8 + 32) = v28;
  CmpCleanUpKcbValueCache(v8);
  v48 = *(_QWORD *)(v8 + 24);
  v76[0] = -1;
  v49 = *(unsigned int *)(v8 + 32);
  v76[1] = 0;
  v50 = (*(__int64 (__fastcall **)(__int64, __int64, _DWORD *))(v48 + 8))(v48, v49, v76);
  v51 = v50;
  if ( !v50 )
  {
    v10 = -1073741670;
    v7 = 0LL;
    goto LABEL_110;
  }
  v52 = *(unsigned int *)(v50 + 40);
  v53 = *(_DWORD *)(v50 + 36);
  *(_QWORD *)(v8 + 96) = v52;
  *(_DWORD *)(v8 + 88) = v53;
  *(_WORD *)(v8 + 178) = *(_WORD *)(v51 + 2);
  CmpAssignSecurityToKcb(v8, *(unsigned int *)(v51 + 44), 0LL, 0, 0);
  CmpCleanUpSubKeyInfo(v8);
  ++*(_QWORD *)(v8 + 296);
  *(_QWORD *)(v8 + 160) = *(_QWORD *)(v51 + 4);
  *(_WORD *)(v8 + 168) = *(_WORD *)(v51 + 52);
  *(_WORD *)(v8 + 170) = *(_WORD *)(v51 + 60);
  *(_DWORD *)(v8 + 172) = *(_DWORD *)(v51 + 64);
  *(_DWORD *)(v8 + 176) ^= (*(_DWORD *)(v8 + 176) ^ *(unsigned __int16 *)(v51 + 54)) & 0xF;
  *(_DWORD *)(v8 + 176) ^= ((unsigned __int8)*(_DWORD *)(v8 + 176) ^ (unsigned __int8)*(_WORD *)(v51 + 54)) & 0xF0;
  v54 = *(_QWORD *)(v8 + 24);
  *(_BYTE *)(v8 + 177) = *(_BYTE *)(v51 + 55);
  (*(void (__fastcall **)(__int64, _DWORD *))(v54 + 16))(v54, v76);
  *(_WORD *)(v8 + 4) = 64;
  if ( CmpDeleteTree(v9, v61) )
    CmpFreeKeyByCell(v9, v61, 0);
  CmpReportNotify(v8, *(_QWORD *)(v8 + 24), *(_DWORD *)(v8 + 32), 0LL, 1, (__int64)v79);
  if ( !BYTE5(NlsMbCodePageTag) )
  {
    CmpGlobalQuotaAllowed = CmpGlobalQuota;
    BYTE5(NlsMbCodePageTag) = 1;
  }
  CmpUnlockRegistry();
  CmpDestroyTemporaryHive(P);
  CmpSignalDeferredPosts(v79);
  v7 = 0LL;
LABEL_118:
  if ( v78 )
  {
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v9 + 16))(v9, v77);
LABEL_120:
    if ( v7 )
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v9 + 16))(v9, v66);
  }
  if ( v70 )
    (*(void (__fastcall **)(ULONG_PTR, __int64 *))(v9 + 16))(v9, &v72);
  if ( v59 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
LABEL_126:
  CmpTraceHiveRestoreStop(v10);
  return (unsigned int)v10;
}
