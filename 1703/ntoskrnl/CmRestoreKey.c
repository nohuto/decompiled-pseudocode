/*
 * XREFs of CmRestoreKey @ 0x140671810
 * Callers:
 *     NtRestoreKey @ 0x14065FA60 (NtRestoreKey.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x14008F530 (ExAcquireResourceSharedLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     CmpInitializeHive @ 0x1404395AC (CmpInitializeHive.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x14045E258 (CmpLogTransactionAbortedWithChildName.c)
 *     CmpReportNotify @ 0x14048CFF4 (CmpReportNotify.c)
 *     CmpCleanUpKcbValueCache @ 0x140491380 (CmpCleanUpKcbValueCache.c)
 *     CmpSearchForOpenSubKeys @ 0x1404CAA50 (CmpSearchForOpenSubKeys.c)
 *     CmpSignalDeferredPosts @ 0x1404CE014 (CmpSignalDeferredPosts.c)
 *     CmpCleanUpSubKeyInfo @ 0x1404D0ED8 (CmpCleanUpSubKeyInfo.c)
 *     CmpAssignSecurityToKcb @ 0x1404D0F50 (CmpAssignSecurityToKcb.c)
 *     CmpFreeKeyByCell @ 0x1404D1394 (CmpFreeKeyByCell.c)
 *     HvReallocateCell @ 0x1404D339C (HvReallocateCell.c)
 *     CmpLockRegistryFreezeAware @ 0x1404D8558 (CmpLockRegistryFreezeAware.c)
 *     CmpUnlockRegistry @ 0x1404FF92C (CmpUnlockRegistry.c)
 *     CmpLockKcbShared @ 0x1404FF9AC (CmpLockKcbShared.c)
 *     CmpUnlockKcb @ 0x140500590 (CmpUnlockKcb.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140501430 (CmpIsKeyDeletedForKeyBody.c)
 *     HvpMarkCellDirty @ 0x14051559C (HvpMarkCellDirty.c)
 *     CmpCopyKeyPartial @ 0x140571EDC (CmpCopyKeyPartial.c)
 *     CmpCopySyncTree @ 0x14058D7BC (CmpCopySyncTree.c)
 *     CmpDeleteTree @ 0x14058E778 (CmpDeleteTree.c)
 *     CmpTraceHiveRestoreStart @ 0x14066134C (CmpTraceHiveRestoreStart.c)
 *     CmpTraceHiveRestoreStop @ 0x140661460 (CmpTraceHiveRestoreStop.c)
 *     CmpCheckKeyAccess @ 0x140668068 (CmpCheckKeyAccess.c)
 *     CmpDoAccessCheckOnSubtree @ 0x140668390 (CmpDoAccessCheckOnSubtree.c)
 *     CmpRollbackTransactionArray @ 0x14066BB50 (CmpRollbackTransactionArray.c)
 *     CmpLogUnsupportedOperation @ 0x14066DAD0 (CmpLogUnsupportedOperation.c)
 *     CmpDestroyTemporaryHive @ 0x140672B30 (CmpDestroyTemporaryHive.c)
 *     CmpLoadHiveVolatile @ 0x140672BD8 (CmpLoadHiveVolatile.c)
 *     CmpRefreshHive @ 0x14067309C (CmpRefreshHive.c)
 *     CmpSnapshotTxOwnerArray @ 0x14067355C (CmpSnapshotTxOwnerArray.c)
 */

__int64 __fastcall CmRestoreKey(_QWORD *a1, void *a2, int a3, KPROCESSOR_MODE a4)
{
  __int64 v7; // r15
  ULONG_PTR v8; // r14
  ULONG_PTR v9; // rsi
  int v10; // edi
  int HiveVolatile; // eax
  unsigned int v12; // ebx
  ULONG_PTR v13; // r12
  __int64 v14; // rax
  unsigned int v15; // ecx
  __int64 v16; // rax
  __int64 v17; // rdx
  unsigned int v18; // eax
  unsigned int v19; // edi
  unsigned int v20; // eax
  __int64 v21; // rbx
  char v22; // bl
  unsigned int v23; // r12d
  struct _KTHREAD *CurrentThread; // rax
  __int64 v25; // r9
  __int64 v26; // r8
  __int64 v27; // rax
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
  int *p_BugCheckParameter3_4; // r12
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
  __int64 v57; // [rsp+28h] [rbp-D8h]
  char v58; // [rsp+60h] [rbp-A0h]
  unsigned int v60; // [rsp+64h] [rbp-9Ch]
  unsigned int v61; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v62; // [rsp+6Ch] [rbp-94h]
  __int64 v63; // [rsp+70h] [rbp-90h] BYREF
  PVOID *v64; // [rsp+78h] [rbp-88h] BYREF
  _DWORD v65[2]; // [rsp+80h] [rbp-80h] BYREF
  unsigned int BugCheckParameter3; // [rsp+88h] [rbp-78h]
  int BugCheckParameter3_4; // [rsp+8Ch] [rbp-74h] BYREF
  _DWORD v68[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v69; // [rsp+98h] [rbp-68h] BYREF
  _DWORD v70[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v71; // [rsp+A8h] [rbp-58h] BYREF
  ULONG_PTR v72; // [rsp+B0h] [rbp-50h] BYREF
  unsigned int v73; // [rsp+B8h] [rbp-48h]
  unsigned int v74; // [rsp+BCh] [rbp-44h]
  _DWORD v75[2]; // [rsp+C0h] [rbp-40h] BYREF
  _DWORD v76[2]; // [rsp+C8h] [rbp-38h] BYREF
  _WORD *v77; // [rsp+D0h] [rbp-30h]
  _QWORD *v78[2]; // [rsp+D8h] [rbp-28h] BYREF
  _QWORD v79[5]; // [rsp+E8h] [rbp-18h] BYREF
  _BYTE v80[352]; // [rsp+110h] [rbp+10h] BYREF

  BugCheckParameter3_4 = a3;
  v77 = 0LL;
  v76[1] = 0;
  v76[0] = -1;
  v71 = 0xFFFFFFFFLL;
  v65[0] = -1;
  v68[0] = -1;
  v70[0] = -1;
  v7 = 0LL;
  v69 = 0LL;
  v65[1] = 0;
  v68[1] = 0;
  v72 = 0LL;
  v70[1] = 0;
  memset(v80, 0, sizeof(v80));
  v8 = a1[1];
  v61 = 0;
  v58 = 0;
  v9 = *(_QWORD *)(v8 + 24);
  if ( (*(_DWORD *)(v9 + 144) & 0x100000) != 0 )
  {
    v10 = -1073741790;
    goto LABEL_124;
  }
  CmpTraceHiveRestoreStart(a2, a3);
  if ( (a3 & 0xFFFFFFFD) != 0 && (a3 & 2) != 0 )
  {
    v10 = -1073741811;
    goto LABEL_124;
  }
  if ( a1[7] || a1[8] )
  {
    v10 = -1073741811;
    goto LABEL_116;
  }
  if ( (a3 & 1) != 0 )
  {
    HiveVolatile = CmpLoadHiveVolatile(a1, a2);
LABEL_9:
    v10 = HiveVolatile;
    goto LABEL_124;
  }
  if ( (a3 & 2) != 0 )
  {
    HiveVolatile = CmpRefreshHive(a1);
    goto LABEL_9;
  }
  v78[1] = v78;
  v78[0] = v78;
  memset(v79, 0, 0x20uLL);
  v79[0] = a2;
  v10 = CmpInitializeHive(&v72, 2u, 0, 0, 0LL, (__int64)v79, 0LL, 16777217, 0LL, 0LL, 0LL, (__int64)v80);
  if ( v10 < 0 )
    goto LABEL_124;
  CmpLockRegistryFreezeAware(0);
  CmpLockKcbShared(v8);
  v12 = *(_DWORD *)(v8 + 32);
  v13 = v72;
  v60 = v12;
  if ( *(_WORD *)(v8 + 58) )
  {
    CmpLogUnsupportedOperation(0x11u);
    v10 = -1073741822;
    goto LABEL_114;
  }
  if ( CmpIsKeyDeletedForKeyBody((__int64)a1, 0LL) )
  {
    v10 = -1073741535;
    goto LABEL_114;
  }
  if ( *(_BYTE *)(v8 + 57) == 1 || v9 == CmpMasterHive )
  {
    v10 = -1073741790;
    goto LABEL_114;
  }
  if ( *(_BYTE *)(v9 + 4112) == 1 )
  {
    v10 = -1073741431;
    goto LABEL_114;
  }
  ExAcquireResourceSharedLite(*(PERESOURCE *)(v9 + 2848), 1u);
  v14 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v9 + 8))(v9, v12, v65);
  v7 = v14;
  if ( !v14
    || ((*(_BYTE *)(v14 + 2) & 4) == 0 ? (v15 = *(_DWORD *)(v14 + 16)) : (v15 = -1),
        v16 = *(_QWORD *)(v13 + 64),
        v73 = v12 >> 31,
        v17 = *(unsigned int *)(v16 + 36),
        v62 = v15,
        v18 = CmpCopyKeyPartial(v13, v17, v9, v15, 6, v57, v12 >> 31),
        v19 = v18,
        v18 == -1) )
  {
LABEL_113:
    ExReleaseResourceLite(*(PERESOURCE *)(v9 + 2848));
    v10 = -1073741670;
LABEL_114:
    CmpUnlockKcb(v8);
    CmpUnlockRegistry();
    CmpDestroyTemporaryHive(v13);
LABEL_118:
    if ( v7 )
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v9 + 16))(v9, v65);
    goto LABEL_120;
  }
  v20 = HvReallocateCell(v9, v18, (unsigned int)*(unsigned __int16 *)(v7 + 72) + 76, 1, &v69, &v71);
  BugCheckParameter3 = v20;
  if ( v20 == -1
    || ((v21 = v69,
         v19 = v20,
         memmove((void *)(v69 + 76), (const void *)(v7 + 76), *(unsigned __int16 *)(v7 + 72)),
         *(_WORD *)(v21 + 72) = *(_WORD *)(v7 + 72),
         (*(_BYTE *)(v7 + 2) & 0x20) == 0)
      ? (*(_WORD *)(v69 + 2) &= ~0x20u)
      : (*(_WORD *)(v21 + 2) |= 0x20u),
        !CmpCopySyncTree(v13, *(_DWORD *)(*(_QWORD *)(v13 + 64) + 36LL), v9, v19, 2, 0)) )
  {
    if ( CmpDeleteTree(v9, v19) )
      CmpFreeKeyByCell(v9, v19, 0);
    goto LABEL_113;
  }
  ExReleaseResourceLite(*(PERESOURCE *)(v9 + 2848));
  CmpUnlockKcb(v8);
  CmpUnlockRegistry();
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v9 + 16))(v9, v65);
  v7 = 0LL;
  (*(void (__fastcall **)(ULONG_PTR, __int64 *))(v9 + 16))(v9, &v71);
  v69 = 0LL;
  CmpLockRegistryFreezeAware(1);
  v22 = BugCheckParameter3_4;
  v23 = v62;
  while ( 1 )
  {
    if ( v58 )
    {
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    }
    CurrentThread = KeGetCurrentThread();
    v58 = 0;
    --CurrentThread->KernelApcDisable;
    if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
    {
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
LABEL_107:
      v10 = -1073741431;
LABEL_108:
      v55 = BugCheckParameter3;
      if ( CmpDeleteTree(v9, BugCheckParameter3) )
        CmpFreeKeyByCell(v9, v55, 0);
      CmpUnlockRegistry();
      CmpDestroyTemporaryHive(v72);
      goto LABEL_116;
    }
    v58 = 1;
    if ( CmpIsKeyDeletedForKeyBody((__int64)a1, 0LL) )
      goto LABEL_57;
    if ( v60 != *(_DWORD *)(v8 + 32) )
    {
      v10 = -1073741444;
      goto LABEL_108;
    }
    if ( (*(_DWORD *)(v8 + 4) & 0x40000) != 0 )
    {
      v10 = -1073740763;
      goto LABEL_108;
    }
    if ( *(_BYTE *)(v9 + 4112) == 1 )
      goto LABEL_107;
    if ( v23 != -1 )
    {
      v10 = CmpCheckKeyAccess(v9, v23, a4, 4u, 1);
      if ( v10 < 0 )
        goto LABEL_108;
    }
    v10 = CmpCheckKeyAccess(v9, v60, a4, 0x10000u, 1);
    if ( v10 < 0 )
      goto LABEL_108;
    HIDWORD(v63) = 0;
    v64 = 0LL;
    if ( (!*(_DWORD *)(v8 + 240) || (int)CmpSnapshotTxOwnerArray(v8 + 240, (char *)&v63 + 4, &v64) < 0)
      && (!*(_DWORD *)(v8 + 256) || (int)CmpSnapshotTxOwnerArray(v8 + 256, (char *)&v63 + 4, &v64) < 0) )
    {
      break;
    }
LABEL_45:
    CmpLogTransactionAbortedWithChildName(v8, 0LL, 7u, v25, HIDWORD(v63));
    CmpUnlockRegistry();
    v10 = CmpRollbackTransactionArray(HIDWORD(v63), v64, v26, &v61);
    CmpLockRegistryFreezeAware(1);
    if ( v10 < 0 )
      goto LABEL_108;
  }
  v10 = CmpDoAccessCheckOnSubtree(v9, v60, a4, 0x10000u, 2u);
  if ( v10 < 0 )
    goto LABEL_108;
  v63 = 0LL;
  v64 = 0LL;
  if ( (v22 & 8) != 0 )
  {
    v27 = *(_QWORD *)(v8 + 184);
    if ( v27 )
    {
      if ( *(_QWORD *)(v27 + 32) != v27 + 32 )
      {
        CmpLogUnsupportedOperation(4u);
        goto LABEL_57;
      }
    }
  }
  if ( (unsigned int)CmpSearchForOpenSubKeys(v8, (v22 & 8) != 0, (__int64)&v63) )
  {
    if ( (_DWORD)v63 != -1073741267 )
      goto LABEL_57;
    goto LABEL_45;
  }
  if ( *(_DWORD *)v8 != 1 && (v22 & 8) == 0 )
  {
LABEL_57:
    v10 = -1073741535;
    goto LABEL_108;
  }
  v28 = BugCheckParameter3;
  if ( !HvpMarkCellDirty(v9, BugCheckParameter3, 0) )
  {
    v10 = -1073741443;
    goto LABEL_108;
  }
  v69 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(v9 + 8))(v9, v60, &v71);
  if ( !v69 )
  {
LABEL_63:
    v10 = -1073741670;
    goto LABEL_108;
  }
  v29 = (*(_BYTE *)(v69 + 2) & 4) == 0;
  v30 = *(_DWORD *)(v69 + 16);
  v74 = v30;
  if ( v29 )
  {
    if ( HvpMarkCellDirty(v9, v30, 0) )
    {
      v34 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v9 + 8))(v9, v30, v68);
      if ( !v34 )
        goto LABEL_63;
      v35 = *(_DWORD *)(v34 + 4LL * v73 + 28);
      v36 = *(void (__fastcall **)(ULONG_PTR, _DWORD *))(v9 + 16);
      BugCheckParameter3_4 = v35;
      v36(v9, v68);
      v77 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v9 + 8))(v9, v35, v76);
      if ( !v77 )
        goto LABEL_63;
      if ( *v77 == 26994 )
      {
        v37 = (unsigned __int16)v77[1];
        p_BugCheckParameter3_4 = (int *)(v77 + 2);
      }
      else
      {
        v37 = 1;
        p_BugCheckParameter3_4 = &BugCheckParameter3_4;
      }
      v62 = 0;
      v61 = v37;
      if ( !v37 )
      {
LABEL_90:
        v46 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v9 + 8))(v9, v74, v68);
        v47 = *(unsigned __int16 *)((*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v9 + 8))(v9, v28, v65) + 74);
        if ( *(_DWORD *)(v46 + 56) < v47 )
          *(_DWORD *)(v46 + 56) = v47;
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v9 + 16))(v9, v65);
        v33 = v68;
        goto LABEL_93;
      }
      while ( 1 )
      {
        v39 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v9 + 8))(
                         v9,
                         (unsigned int)*p_BugCheckParameter3_4,
                         v70);
        if ( !v39 )
          goto LABEL_66;
        v40 = HvpMarkCellDirty(v9, (unsigned int)*p_BugCheckParameter3_4, 0);
        v41 = 0LL;
        if ( !v40 )
          break;
        v42 = (unsigned __int16)v39[1];
        v43 = 0LL;
        if ( ((*v39 - 26220) & 0xFDFF) != 0 )
        {
          if ( v39[1] )
          {
            v41 = v60;
            v44 = v39 + 2;
            while ( *v44 != v60 )
            {
              v43 = (unsigned int)(v43 + 1);
              ++v44;
              if ( (unsigned int)v43 >= v42 )
                goto LABEL_89;
            }
            *(_DWORD *)&v39[2 * v43 + 2] = v28;
LABEL_96:
            (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v9 + 16))(v9, v70);
            goto LABEL_90;
          }
        }
        else if ( v39[1] )
        {
          v41 = v60;
          v45 = v39 + 2;
          while ( *v45 != v60 )
          {
            v43 = (unsigned int)(v43 + 1);
            v45 += 2;
            if ( (unsigned int)v43 >= v42 )
              goto LABEL_89;
          }
          *(_DWORD *)&v39[4 * v43 + 2] = v28;
          goto LABEL_96;
        }
LABEL_89:
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *, __int64))(v9 + 16))(v9, v70, v41);
        ++p_BugCheckParameter3_4;
        if ( ++v62 >= v61 )
          goto LABEL_90;
      }
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *, _QWORD))(v9 + 16))(v9, v70, 0LL);
    }
    v10 = -1073741443;
    goto LABEL_108;
  }
  v31 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(CmpMasterHive + 8))(CmpMasterHive, v30, v68);
  if ( !v31
    || (*(_DWORD *)(v31 + 28) = v28,
        (*(void (__fastcall **)(__int64, _DWORD *))(CmpMasterHive + 16))(CmpMasterHive, v68),
        v32 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v9 + 8))(v9, v28, v65),
        (v7 = v32) == 0) )
  {
LABEL_66:
    v10 = -1073741670;
    goto LABEL_108;
  }
  *(_DWORD *)(v32 + 16) = v30;
  v33 = v65;
  *(_DWORD *)(*(_QWORD *)(v9 + 64) + 36LL) = v28;
LABEL_93:
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v9 + 16))(v9, v33);
  *(_DWORD *)(v8 + 32) = v28;
  CmpCleanUpKcbValueCache(v8);
  v48 = *(_QWORD *)(v8 + 24);
  v75[0] = -1;
  v49 = *(unsigned int *)(v8 + 32);
  v75[1] = 0;
  v50 = (*(__int64 (__fastcall **)(__int64, __int64, _DWORD *))(v48 + 8))(v48, v49, v75);
  v51 = v50;
  if ( !v50 )
  {
    v10 = -1073741670;
    v7 = 0LL;
    goto LABEL_108;
  }
  v52 = *(unsigned int *)(v50 + 40);
  v53 = *(_DWORD *)(v50 + 36);
  *(_QWORD *)(v8 + 96) = v52;
  *(_DWORD *)(v8 + 88) = v53;
  *(_WORD *)(v8 + 178) = *(_WORD *)(v51 + 2);
  CmpAssignSecurityToKcb(v8, *(unsigned int *)(v51 + 44), 0LL, 0, 0);
  CmpCleanUpSubKeyInfo(v8);
  *(_QWORD *)(v8 + 160) = *(_QWORD *)(v51 + 4);
  *(_WORD *)(v8 + 168) = *(_WORD *)(v51 + 52);
  *(_WORD *)(v8 + 170) = *(_WORD *)(v51 + 60);
  *(_DWORD *)(v8 + 172) = *(_DWORD *)(v51 + 64);
  *(_DWORD *)(v8 + 176) ^= (*(_DWORD *)(v8 + 176) ^ *(unsigned __int16 *)(v51 + 54)) & 0xF;
  *(_DWORD *)(v8 + 176) ^= ((unsigned __int8)*(_DWORD *)(v8 + 176) ^ (unsigned __int8)*(_WORD *)(v51 + 54)) & 0xF0;
  v54 = *(_QWORD *)(v8 + 24);
  *(_BYTE *)(v8 + 177) = *(_BYTE *)(v51 + 55);
  (*(void (__fastcall **)(__int64, _DWORD *))(v54 + 16))(v54, v75);
  *(_WORD *)(v8 + 4) = 64;
  if ( CmpDeleteTree(v9, v60) )
    CmpFreeKeyByCell(v9, v60, 0);
  CmpReportNotify(v8, *(_QWORD *)(v8 + 24), *(_DWORD *)(v8 + 32), 0LL, 1, (__int64)v78);
  if ( !BYTE5(NlsMbCodePageTag) )
  {
    CmpGlobalQuotaAllowed = CmpGlobalQuota;
    BYTE5(NlsMbCodePageTag) = 1;
  }
  CmpUnlockRegistry();
  CmpDestroyTemporaryHive(v72);
  CmpSignalDeferredPosts(v78);
  v7 = 0LL;
LABEL_116:
  if ( v77 )
  {
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v9 + 16))(v9, v76);
    goto LABEL_118;
  }
LABEL_120:
  if ( v69 )
    (*(void (__fastcall **)(ULONG_PTR, __int64 *))(v9 + 16))(v9, &v71);
  if ( v58 )
  {
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
LABEL_124:
  CmpTraceHiveRestoreStop(v10);
  return (unsigned int)v10;
}
