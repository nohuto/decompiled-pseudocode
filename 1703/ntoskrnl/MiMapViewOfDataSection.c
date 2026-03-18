/*
 * XREFs of MiMapViewOfDataSection @ 0x140512AC0
 * Callers:
 *     MiMapViewOfSection @ 0x1405198A0 (MiMapViewOfSection.c)
 * Callees:
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x140022EC0 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     MiUnlockVad @ 0x1400403D0 (MiUnlockVad.c)
 *     MiIsProcessCfgEnabled @ 0x14006341C (MiIsProcessCfgEnabled.c)
 *     MiCheckForConflictingVadExistence @ 0x140064450 (MiCheckForConflictingVadExistence.c)
 *     MiGetCommittedPages @ 0x140098EC8 (MiGetCommittedPages.c)
 *     MiLocatePagefileSubsection @ 0x140099578 (MiLocatePagefileSubsection.c)
 *     LOCK_ADDRESS_SPACE @ 0x1400998FC (LOCK_ADDRESS_SPACE.c)
 *     MiAddViewsForSection @ 0x140099930 (MiAddViewsForSection.c)
 *     MiGetControlAreaPtes @ 0x14009A280 (MiGetControlAreaPtes.c)
 *     MiCheckPurgeAndUpMapCount @ 0x14009A340 (MiCheckPurgeAndUpMapCount.c)
 *     MiGetWsAndInsertVad @ 0x14009A420 (MiGetWsAndInsertVad.c)
 *     MiComputeContiguousSubsectionPte @ 0x14009ACA0 (MiComputeContiguousSubsectionPte.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x14009B6E0 (UNLOCK_ADDRESS_SPACE.c)
 *     MiLocateSubsectionNode @ 0x1400A7F30 (MiLocateSubsectionNode.c)
 *     MiRemoveViewsFromSectionWithPfn @ 0x1400A8BD8 (MiRemoveViewsFromSectionWithPfn.c)
 *     MiReferenceVad @ 0x1400CE328 (MiReferenceVad.c)
 *     MiLockVad @ 0x1400CE340 (MiLockVad.c)
 *     MiUnlockAndDereferenceVad @ 0x1400CE4E0 (MiUnlockAndDereferenceVad.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1400EEA40 (ObfReferenceObject.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     MiDereferenceExtendInfo @ 0x14013109C (MiDereferenceExtendInfo.c)
 *     MiDereferenceControlArea @ 0x14013645C (MiDereferenceControlArea.c)
 *     memset @ 0x140192D80 (memset.c)
 *     MiDecrementLargeSubsections @ 0x1402184D4 (MiDecrementLargeSubsections.c)
 *     MiIncrementLargeSubsections @ 0x140218D2C (MiIncrementLargeSubsections.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     MiFindEmptyAddressRangeDown @ 0x140435DF0 (MiFindEmptyAddressRangeDown.c)
 *     MiUnmapVad @ 0x14047B5C0 (MiUnmapVad.c)
 *     MiCommitVadCfgBits @ 0x14049B12C (MiCommitVadCfgBits.c)
 *     MiSecureVad @ 0x140511F10 (MiSecureVad.c)
 *     MiInsertSharedCommitNode @ 0x140512070 (MiInsertSharedCommitNode.c)
 *     MiRemoveSharedCommitNode @ 0x140512380 (MiRemoveSharedCommitNode.c)
 *     MiAddSecureEntry @ 0x1405127E0 (MiAddSecureEntry.c)
 *     MiInsertVadCharges @ 0x1405136C0 (MiInsertVadCharges.c)
 *     MiFindEmptyAddressRange @ 0x140513B70 (MiFindEmptyAddressRange.c)
 *     MiChargeSegmentCommit @ 0x14054A0F0 (MiChargeSegmentCommit.c)
 *     MiLogMapFileEvent @ 0x1406B3024 (MiLogMapFileEvent.c)
 */

__int64 __fastcall MiMapViewOfDataSection(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4,
        __int64 *a5,
        __int64 a6,
        int a7,
        int a8,
        unsigned __int64 a9,
        __int64 a10,
        int a11,
        int a12,
        unsigned __int8 *a13,
        _QWORD *a14)
{
  __int64 v14; // r11
  __int64 v17; // r14
  unsigned __int64 v18; // r8
  __int64 v19; // rdx
  unsigned __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 *v22; // r13
  unsigned __int64 v23; // r12
  unsigned __int64 v24; // r12
  bool v25; // r15
  volatile signed __int32 **SubsectionNode; // r9
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // r12
  int inserted; // r15d
  __int64 v31; // r12
  __int64 v32; // r15
  PVOID PoolWithTag; // rax
  int v34; // eax
  __int64 *v35; // r12
  unsigned __int64 *v36; // rbp
  __int64 v37; // rbx
  void *v38; // rbx
  unsigned __int64 v39; // rbx
  unsigned __int64 v40; // rdx
  _KPROCESS *Process; // rbp
  __int64 v42; // r12
  __int64 v43; // r14
  int v44; // ebx
  int v45; // eax
  unsigned __int64 v46; // r12
  unsigned __int64 v47; // rbp
  unsigned __int64 v48; // rsi
  bool v49; // zf
  unsigned __int64 v50; // rsi
  unsigned __int64 v51; // rdi
  _DWORD *v52; // rdx
  unsigned int v53; // eax
  unsigned int v54; // r8d
  int v55; // r9d
  int v56; // ecx
  int v57; // edi
  int v58; // ecx
  int v59; // esi
  unsigned int v60; // ecx
  int v61; // eax
  char v62; // dl
  char v63; // si
  __int64 v64; // rbp
  char v65; // r14
  int v66; // edi
  struct _KTHREAD *v67; // rbx
  struct _KTHREAD *v69; // rsi
  int v70; // esi
  __int64 *v71; // rdi
  void *v72; // rcx
  unsigned __int64 v73; // rdx
  struct _KTHREAD *v74; // r12
  _DWORD *v75; // r15
  _DWORD *v76; // rax
  __int64 v77; // rcx
  unsigned __int64 v78; // rax
  volatile LONG **v79; // rax
  __int64 v80; // [rsp+40h] [rbp-E8h]
  unsigned __int64 v81; // [rsp+48h] [rbp-E0h] BYREF
  int v82; // [rsp+50h] [rbp-D8h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+58h] [rbp-D0h]
  int v84; // [rsp+60h] [rbp-C8h]
  int v85; // [rsp+64h] [rbp-C4h]
  int v86; // [rsp+68h] [rbp-C0h]
  int v87; // [rsp+6Ch] [rbp-BCh]
  __int64 v88; // [rsp+70h] [rbp-B8h]
  __int64 v89; // [rsp+78h] [rbp-B0h]
  unsigned __int64 ControlAreaPtes; // [rsp+80h] [rbp-A8h]
  int v91; // [rsp+88h] [rbp-A0h]
  __int64 v92; // [rsp+90h] [rbp-98h]
  unsigned __int64 v93; // [rsp+98h] [rbp-90h]
  PVOID P; // [rsp+A0h] [rbp-88h]
  unsigned __int64 v95; // [rsp+A8h] [rbp-80h] BYREF
  PVOID v96; // [rsp+B8h] [rbp-70h]
  unsigned __int64 v97; // [rsp+C0h] [rbp-68h]
  __int64 v98; // [rsp+C8h] [rbp-60h]
  __int64 v99[3]; // [rsp+D0h] [rbp-58h] BYREF

  v14 = *(_QWORD *)a1;
  v87 = 0;
  v93 = 0LL;
  v92 = v14;
  v17 = a1;
  if ( (a11 & 0x7Fu) > (unsigned __int16)KeNumberNodes )
    return 3221225719LL;
  v91 = a11 & 0x2000;
  if ( (a11 & 0x2000) != 0 && !*(_QWORD *)(a1 + 64) )
    return 3221225719LL;
  v85 = a11 & 0x20000000;
  if ( (a11 & 0x20000000) != 0 )
  {
    if ( (a11 & 0x40000000) == 0 )
    {
      v18 = 0x200000LL;
      v88 = 0x200000LL;
      if ( (a11 & 0x2000) == 0 )
      {
        if ( a8 == 24 || (a8 & 0xFFFFFFF8) == 0x10 || (a8 & 5) == 5 )
          return 3221225720LL;
        if ( *(_QWORD *)(a1 + 64) )
        {
          if ( (*(_DWORD *)(a1 + 56) & 0x40000000) == 0 )
            return 3221225719LL;
          goto LABEL_6;
        }
        if ( (*(_WORD *)(v14 + 12) & 0x1000) != 0 )
          goto LABEL_6;
      }
    }
    return 3221225719LL;
  }
  if ( (a11 & 0x40000000) != 0 )
  {
    if ( (a11 & 0x2000) != 0 || !*(_QWORD *)(a2 + 1808) && !*a3 )
      return 3221225713LL;
    v18 = 4096LL;
    v88 = 4096LL;
  }
  else
  {
    v18 = 0x10000LL;
    v88 = 0x10000LL;
  }
LABEL_6:
  v19 = *a5;
  if ( *a5 )
  {
    v20 = *(unsigned int *)a4 & (v18 - 1);
    if ( v19 + v20 < v20 )
      return 3221225503LL;
    *a5 = v19 + v20;
    *(_DWORD *)a4 &= ~(v18 - 1);
  }
  else
  {
    *(_DWORD *)a4 &= ~(v18 - 1);
    *a5 = *(_QWORD *)(a6 + 48) - *a4;
  }
  v21 = *a5;
  if ( *a5 > 0x7FFFFFFE0000LL - *a3
    || v21 <= 0
    || v18 >= 0x200000 && v21 % v18
    || (a11 & 0x2000) != 0 && *a4 >= 0x10000000000LL )
  {
    return 3221225503LL;
  }
  v22 = 0LL;
  CurrentThread = KeGetCurrentThread();
  P = 0LL;
  v86 = 0;
  MiCheckPurgeAndUpMapCount(v17);
  v23 = *a4;
  v89 = (*a4 + *a5 + 4095) >> 12;
  v24 = v23 >> 12;
  ControlAreaPtes = MiGetControlAreaPtes(v17);
  if ( v24 >= ControlAreaPtes )
  {
    inserted = -1073741793;
    goto LABEL_123;
  }
  v25 = 0;
  if ( *(_QWORD *)(v17 + 64) )
  {
    SubsectionNode = (volatile signed __int32 **)MiLocateSubsectionNode(v17, *a4, 0);
    v80 = (__int64)SubsectionNode;
  }
  else
  {
    v95 = v24;
    v80 = MiLocatePagefileSubsection(v17 + 128, &v95);
    SubsectionNode = (volatile signed __int32 **)v80;
    if ( !a9 && a8 == 24 )
      v25 = (*(_DWORD *)(v17 + 56) & 0x1000) != 0;
  }
  v27 = *((unsigned int *)SubsectionNode + 9) | ((unsigned __int64)((_WORD)SubsectionNode[4] & 0xFFC0) << 26);
  v28 = v89 - v27;
  v29 = v24 - v27;
  v89 -= v27;
  if ( v25 )
  {
    v28 = 1LL;
    v89 = 1LL;
  }
  v97 = v29;
  inserted = MiAddViewsForSection(SubsectionNode, v28, 8);
  if ( inserted < 0 )
    goto LABEL_123;
  v31 = *(_QWORD *)(v80 + 8) + 8 * v29;
  v98 = v31;
  if ( !*(_QWORD *)(v17 + 64) && a9 && MiGetCommittedPages((_QWORD *)v17) < ControlAreaPtes )
    v93 = ((a9 & 0xFFF) != 0) + (a9 >> 12);
  v82 = 0;
  v32 = *(_QWORD *)(a6 + 24) << 12;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x88uLL, 0x20646156u);
  v96 = PoolWithTag;
  v22 = (__int64 *)PoolWithTag;
  if ( !PoolWithTag )
  {
    v35 = (__int64 *)v80;
    inserted = -1073741670;
LABEL_122:
    MiRemoveViewsFromSectionWithPfn(v35, v89, 8u);
LABEL_123:
    MiDereferenceControlArea(v17);
    if ( P )
      ExFreePoolWithTag(P, 0);
    if ( v22 )
    {
      if ( v22[15] < 0 )
        MiDereferenceExtendInfo((__int64)v22, v17);
      v72 = (void *)v22[16];
      if ( v72 )
        ObfDereferenceObject(v72);
      ExFreePoolWithTag(v22, 0);
    }
    return (unsigned int)inserted;
  }
  memset(PoolWithTag, 0, 0x88uLL);
  v34 = *((_DWORD *)v22 + 16);
  v22[10] = v31;
  v35 = (__int64 *)v80;
  v22[2] = -2LL;
  *((_DWORD *)v22 + 16) = v34 & 0xFBFFFFFF | ((a7 == 1) << 26);
  v22[9] = v80;
  *((_DWORD *)v22 + 12) = v22[6] & 0xFFFFC007 | (8 * (a8 & 0x1F | (32 * (a11 & 0x3F))));
  if ( (a11 & 0x7F) != 0 )
    *(_BYTE *)(*(_QWORD *)(a2 + 1296) + 232LL) = 1;
  if ( *(_QWORD *)(v17 + 64) && (a11 & 0x20002000) == 0 )
    *((_DWORD *)v22 + 16) |= 0x2000000u;
  v36 = a4;
  v22[5] = 0LL;
  *((_DWORD *)v22 + 16) ^= (*((_DWORD *)v22 + 16) ^ ((__int64)*a4 >> 16)) & 0xFFFFFF;
  v37 = *(_QWORD *)(a6 + 40);
  if ( (v37 & 3) != 0 )
  {
    v38 = (void *)(v37 & 0xFFFFFFFFFFFFFFFCuLL);
    ObfReferenceObject(v38);
  }
  else
  {
    v38 = 0LL;
  }
  v22[16] = (__int64)v38;
  if ( v85 && *(_QWORD *)(v17 + 64) )
  {
    if ( (unsigned int)MiIncrementLargeSubsections((volatile LONG **)v80, v89) > 1 )
    {
      inserted = -1073741280;
      goto LABEL_122;
    }
    v87 = 1;
  }
  v39 = a2;
  LOCK_ADDRESS_SPACE((__int64)CurrentThread, a2);
  if ( (*(_DWORD *)(a2 + 772) & 0x20) != 0 )
  {
    inserted = -1073741558;
    goto LABEL_192;
  }
  if ( *a3 )
  {
    v46 = *a3 & ~(v88 - 1);
    goto LABEL_115;
  }
  if ( v32 )
  {
    v46 = v32 + *a4;
LABEL_115:
    v81 = v46;
    if ( v46 < 0x10000 && !*(_QWORD *)(a2 + 1808) )
    {
      inserted = -1073741583;
LABEL_190:
      v35 = (__int64 *)v80;
      goto LABEL_191;
    }
    v71 = a5;
    v47 = (v46 + *a5 - 1) | 0xFFF;
    if ( MiCheckForConflictingVadExistence() )
    {
      v36 = a4;
      inserted = -1073741800;
      v35 = (__int64 *)v80;
      v39 = a2;
LABEL_118:
      UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, v39);
      if ( v86 == 1 )
        MiRemoveSharedCommitNode(v17, v39, 0);
      if ( v87 )
      {
        v79 = (volatile LONG **)MiLocateSubsectionNode(v17, *v36 - 1 + *v71, 0);
        MiDecrementLargeSubsections((volatile LONG **)v35, v79);
      }
      goto LABEL_122;
    }
    goto LABEL_45;
  }
  v84 = 0;
  v82 = 0;
  v40 = *a5;
  v81 = 0LL;
  ControlAreaPtes = 0x7FFFFFFDFFFFLL;
  if ( a10 )
  {
    ControlAreaPtes = 0xFFFFFFFFFFFFFFFFuLL >> a10;
    if ( 0xFFFFFFFFFFFFFFFFuLL >> a10 > 0x7FFFFFFDFFFFLL )
      ControlAreaPtes = 0x7FFFFFFDFFFFLL;
  }
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( (a11 & 0x20400000) != 541065216 && (a11 & 0x20000000) != 0 && v40 >= 0x40000000 )
  {
    v42 = 0x40000000LL;
    v84 = 1;
  }
  else
  {
    v42 = v88;
  }
  v43 = ControlAreaPtes;
  v44 = v40;
  while ( 1 )
  {
    v45 = (a11 & 0x100000) != 0 || (Process[1].DirectoryTableBase & 0x20000000000000LL) != 0
        ? MiFindEmptyAddressRangeDown((int)Process + 1576, v44, v42, v43, a8, (__int64)&v81)
        : MiFindEmptyAddressRange(v44, v42, v43, a8, 0, (__int64)&v81, (__int64)&v82);
    inserted = v45;
    if ( v45 >= 0 || v84 != 1 )
      break;
    v84 = 0;
    v42 = 0x200000LL;
  }
  v17 = a1;
  v22 = (__int64 *)v96;
  if ( v42 != 0x10000 )
    v82 = 0;
  if ( v45 < 0 )
    goto LABEL_189;
  v46 = v81;
  v47 = (*a5 + v81 - 1) | 0xFFF;
LABEL_45:
  v48 = v46 >> 12;
  *((_BYTE *)v22 + 32) = v46 >> 44;
  v49 = v91 == 0;
  *((_DWORD *)v22 + 6) = v46 >> 12;
  *((_DWORD *)v22 + 7) = v47 >> 12;
  *((_BYTE *)v22 + 33) = v47 >> 44;
  if ( v49 )
    goto LABEL_46;
  v74 = CurrentThread;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&BugCheckParameter2, 0LL);
  v75 = *(_DWORD **)(v92 + 32);
  if ( v75 )
  {
    ++v75[2];
    goto LABEL_141;
  }
  v76 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x10uLL, 0x78436D4Du);
  v75 = v76;
  if ( !v76 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&BugCheckParameter2);
    KeAbPostRelease((ULONG_PTR)&BugCheckParameter2);
    KiLeaveGuardedRegionUnsafe((__int64)v74);
    inserted = -1073741670;
LABEL_189:
    v36 = a4;
    goto LABEL_190;
  }
  v77 = v92;
  v76[2] = 1;
  *(_QWORD *)v76 = _InterlockedCompareExchange64((volatile signed __int64 *)(v77 + 24), -1LL, -1LL);
  *(_QWORD *)(v77 + 32) = v76;
LABEL_141:
  v78 = *(_QWORD *)(a6 + 48);
  if ( *(_QWORD *)v75 < v78 )
    *(_QWORD *)v75 = v78;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&BugCheckParameter2);
  KeAbPostRelease((ULONG_PTR)&BugCheckParameter2);
  KiLeaveGuardedRegionUnsafe((__int64)v74);
  v46 = v81;
  v22[15] = (__int64)v75;
LABEL_46:
  if ( (a8 & 5) == 5 )
  {
    v73 = (*((unsigned int *)v22 + 7) | ((unsigned __int64)*((unsigned __int8 *)v22 + 33) << 32))
        - (*((unsigned int *)v22 + 6) | ((unsigned __int64)*((unsigned __int8 *)v22 + 32) << 32))
        + 1;
    *((_DWORD *)v22 + 13) ^= (*((_DWORD *)v22 + 13) ^ (*((_DWORD *)v22 + 7) - *((_DWORD *)v22 + 6) + 1)) & 0x7FFFFFFF;
    *((_BYTE *)v22 + 34) = v73 >> 31;
  }
  v22[11] = MiComputeContiguousSubsectionPte(v80, v97 + (v47 >> 12) - v48);
  if ( (a11 & 0x400000) != 0 || (*(_DWORD *)(a6 + 56) & 0x4000) != 0 )
  {
    P = MiAddSecureEntry((__int64)v22, v46, v47, 0x80000000, 0);
    if ( !P )
    {
      inserted = -1073741670;
      goto LABEL_193;
    }
  }
  if ( v85 )
  {
    *((_DWORD *)v22 + 12) |= 7u;
    *((_DWORD *)v22 + 16) |= 0x1000000u;
  }
  if ( !*(_QWORD *)(v17 + 64) )
  {
    inserted = MiInsertSharedCommitNode((_QWORD *)v17, a2, 0);
    if ( inserted < 0 )
    {
LABEL_193:
      v36 = a4;
      v35 = (__int64 *)v80;
      goto LABEL_191;
    }
    v86 = 1;
  }
  if ( v93 && !(unsigned int)MiChargeSegmentCommit(v80, v98, v93) )
  {
    v36 = a4;
    inserted = -1073741523;
    v35 = (__int64 *)v80;
LABEL_191:
    v39 = a2;
    goto LABEL_192;
  }
  v39 = a2;
  inserted = MiInsertVadCharges(v22, a2);
  if ( inserted < 0 )
  {
    v36 = a4;
    v35 = (__int64 *)v80;
LABEL_192:
    v71 = a5;
    goto LABEL_118;
  }
  if ( !*(_QWORD *)(v17 + 64) && *(_DWORD *)(v17 + 56) >= 0x80000000 )
  {
    *((_DWORD *)v22 + 12) |= 0x100000u;
    ++*(_QWORD *)(*(_QWORD *)(a2 + 1296) + 264LL);
  }
  MiGetWsAndInsertVad((__int64)v22);
  if ( !*(_QWORD *)(v17 + 64) && !*(_QWORD *)(v92 + 56) )
    *(_QWORD *)(v92 + 56) = v46;
  if ( v82 == 1 )
  {
    v50 = v48 >> 4;
    v51 = v47 >> 16;
    v52 = *(_DWORD **)&KeGetCurrentThread()->ApcState.Process[1].IdealGlobalNode;
    v53 = 8 * (v52[14] - qword_14036C5C8);
    if ( (unsigned int)(v47 >> 16) >= v53 )
    {
      v54 = v53 + v52[12];
      if ( (unsigned int)v50 < v54 )
      {
        v55 = 0;
        if ( (unsigned int)v50 < v53 )
        {
          LODWORD(v50) = 8 * (v52[14] - qword_14036C5C8);
          v55 = 1;
        }
        if ( (unsigned int)v51 >= v54 )
        {
          LODWORD(v51) = v54 - 1;
          v55 = 1;
        }
        v56 = v51;
        v57 = v51 - v53;
        v58 = v56 - v50;
        v59 = v50 - v53;
        v60 = v58 + 1;
        if ( v60 == 1 && !v55 || v59 == v52[16] )
        {
          v61 = v57 + 1;
          if ( v52[18] < (unsigned int)(v57 + 1) )
          {
            v52[18] = v61;
            if ( v52[17] < v60 )
              v52[17] = v60;
          }
          v52[16] = v61;
        }
        else if ( v55 != 1 )
        {
          v52[17] = v60;
          v52[18] = v57 + 1;
        }
      }
    }
    v46 = v81;
  }
  v62 = a8;
  *a5 = v47 - v46 + 1;
  if ( ((a8 - 4) & 0xFFFFFFFD) == 0 && *(_QWORD *)(v17 + 64) )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v17 + 92));
    v46 = v81;
  }
  if ( (PerfGlobalGroupMask & 0x8000) != 0 )
  {
    MiLogMapFileEvent(v22, 1061LL);
    v62 = a8;
  }
  if ( a14 )
    MiReferenceVad((__int64)v22);
  v63 = 0;
  if ( (v62 & 2) == 0 || !MiIsProcessCfgEnabled() )
  {
    v64 = a2;
    v65 = 1;
    v66 = 0;
    goto LABEL_84;
  }
  MiLockVad((__int64)CurrentThread, (__int64)v22);
  v64 = a2;
  UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, a2);
  v65 = 0;
  v63 = 1;
  v66 = MiCommitVadCfgBits((__int64)v22, 0LL, a13);
  if ( v66 >= 0 )
  {
LABEL_84:
    if ( !a14 )
    {
      v67 = CurrentThread;
      if ( v63 == 1 )
        MiUnlockVad((__int64)CurrentThread, (__int64)v22);
      if ( v65 == 1 )
        UNLOCK_ADDRESS_SPACE((__int64)v67, v64);
      goto LABEL_89;
    }
    v49 = v63 == 1;
    v69 = CurrentThread;
    if ( !v49 )
      MiLockVad((__int64)CurrentThread, (__int64)v22);
    if ( v65 == 1 )
      UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)v69, v64);
    if ( (unsigned int)(a12 - 1) <= 1 || a12 == -2147483647 || a12 == 4 )
    {
      v70 = MiSecureVad((ULONG_PTR)v22, v46, *a5, a12, v99);
      if ( v70 >= 0 )
      {
        MiUnlockAndDereferenceVad((char *)v22);
        *a14 = v99[0];
LABEL_89:
        *a3 = v46;
        return (unsigned int)v66;
      }
    }
    else
    {
      v70 = -1073741755;
    }
    MiUnmapVad((__int64)v22, 0);
    return (unsigned int)v70;
  }
  if ( !a14 )
    MiReferenceVad((__int64)v22);
  MiUnmapVad((__int64)v22, 0);
  return (unsigned int)v66;
}
