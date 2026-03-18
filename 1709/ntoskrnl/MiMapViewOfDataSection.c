/*
 * XREFs of MiMapViewOfDataSection @ 0x1404CEDF0
 * Callers:
 *     MiMapViewOfSection @ 0x1404CFC50 (MiMapViewOfSection.c)
 * Callees:
 *     MiReferenceVad @ 0x14003D48C (MiReferenceVad.c)
 *     MiLockVad @ 0x14003D4A0 (MiLockVad.c)
 *     MiUnlockAndDereferenceVad @ 0x14003D4E0 (MiUnlockAndDereferenceVad.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140084290 (ObfReferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     MiCheckPurgeAndUpMapCount @ 0x14009F9C0 (MiCheckPurgeAndUpMapCount.c)
 *     MiGetWsAndInsertVad @ 0x14009FAE0 (MiGetWsAndInsertVad.c)
 *     LOCK_ADDRESS_SPACE @ 0x1400A0BBC (LOCK_ADDRESS_SPACE.c)
 *     MiAddViewsForSection @ 0x1400A0BF0 (MiAddViewsForSection.c)
 *     MiGetControlAreaPtes @ 0x1400A1550 (MiGetControlAreaPtes.c)
 *     MiComputeContiguousSubsectionPte @ 0x1400A1AE0 (MiComputeContiguousSubsectionPte.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x1400A20E0 (UNLOCK_ADDRESS_SPACE.c)
 *     MiLocateSubsectionNode @ 0x1400A2890 (MiLocateSubsectionNode.c)
 *     MiGetCommittedPages @ 0x1400A2BFC (MiGetCommittedPages.c)
 *     MiRemoveViewsFromSectionWithPfn @ 0x1400A4E10 (MiRemoveViewsFromSectionWithPfn.c)
 *     MiIsProcessCfgEnabled @ 0x1400A53F4 (MiIsProcessCfgEnabled.c)
 *     MiCheckForConflictingVadExistence @ 0x1400A5420 (MiCheckForConflictingVadExistence.c)
 *     MiUnlockVad @ 0x1400A5788 (MiUnlockVad.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x1400A5A80 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     MiLocatePagefileSubsection @ 0x1400B6DE0 (MiLocatePagefileSubsection.c)
 *     MiDereferenceControlArea @ 0x140131C80 (MiDereferenceControlArea.c)
 *     memset @ 0x140192F40 (memset.c)
 *     MiDereferenceExtendInfo @ 0x14021EE9C (MiDereferenceExtendInfo.c)
 *     MiDecrementLargeSubsections @ 0x140222780 (MiDecrementLargeSubsections.c)
 *     MiIncrementLargeSubsections @ 0x140223008 (MiIncrementLargeSubsections.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     MiChargeSegmentCommit @ 0x140460540 (MiChargeSegmentCommit.c)
 *     MiUnmapVad @ 0x140499B30 (MiUnmapVad.c)
 *     MiInsertVadCharges @ 0x1404D0090 (MiInsertVadCharges.c)
 *     MiSelectUserAddress @ 0x1404D0540 (MiSelectUserAddress.c)
 *     MiInsertSharedCommitNode @ 0x1404D0A10 (MiInsertSharedCommitNode.c)
 *     MiRemoveSharedCommitNode @ 0x1404D0D00 (MiRemoveSharedCommitNode.c)
 *     MiCommitVadCfgBits @ 0x1404D1EE4 (MiCommitVadCfgBits.c)
 *     MiAddSecureEntry @ 0x1404D3274 (MiAddSecureEntry.c)
 *     MiSecureVad @ 0x1404D52C0 (MiSecureVad.c)
 *     MiLogMapFileEvent @ 0x1406DEFF0 (MiLogMapFileEvent.c)
 */

__int64 __fastcall MiMapViewOfDataSection(
        __int64 a1,
        __int64 a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4,
        __int64 *a5,
        __int64 a6,
        int a7,
        int a8,
        __int64 a9,
        __int64 a10,
        int a11,
        int a12,
        __int64 a13,
        __int64 *a14)
{
  int v14; // ebp
  __int64 v15; // r11
  unsigned __int64 *v16; // r13
  unsigned __int64 v18; // r9
  __int64 v19; // rdx
  unsigned __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rdi
  unsigned __int64 v23; // r12
  bool v24; // bl
  __int64 SubsectionNode; // r9
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // r12
  int inserted; // ebx
  __int64 v30; // r12
  PVOID PoolWithTag; // rax
  volatile LONG **v32; // r8
  unsigned int v33; // ecx
  __int64 v34; // rbx
  void *v35; // rbx
  struct _KTHREAD *v36; // rbx
  __int64 *v37; // r14
  unsigned __int64 v38; // r13
  unsigned __int64 v39; // r12
  unsigned __int64 v40; // r14
  __int64 *v41; // rbx
  unsigned __int64 v42; // r14
  unsigned __int64 v43; // rsi
  _DWORD *v44; // rdx
  unsigned int v45; // ecx
  unsigned int v46; // r8d
  int v47; // r9d
  int v48; // eax
  int v49; // esi
  int v50; // eax
  int v51; // r14d
  unsigned int v52; // eax
  int v53; // ecx
  char v54; // dl
  char v55; // si
  __int64 v56; // r12
  char v57; // r15
  unsigned __int64 v59; // rdx
  int v60; // esi
  void *v61; // rcx
  unsigned __int64 v62; // rdx
  _DWORD *v63; // r13
  _DWORD *v64; // rax
  __int64 v65; // rcx
  unsigned __int64 v66; // rax
  volatile LONG **v67; // rax
  struct _KTHREAD *CurrentThread; // [rsp+50h] [rbp-C8h]
  __int64 *BugCheckParameter2; // [rsp+58h] [rbp-C0h]
  unsigned __int64 v70; // [rsp+60h] [rbp-B8h] BYREF
  int v71; // [rsp+68h] [rbp-B0h]
  int v72; // [rsp+6Ch] [rbp-ACh]
  unsigned __int64 v73; // [rsp+70h] [rbp-A8h]
  unsigned __int64 ControlAreaPtes; // [rsp+78h] [rbp-A0h] BYREF
  __int64 v75; // [rsp+80h] [rbp-98h]
  int v76; // [rsp+88h] [rbp-90h]
  __int64 v77; // [rsp+90h] [rbp-88h]
  __int64 v78; // [rsp+98h] [rbp-80h]
  __int64 *v79; // [rsp+A0h] [rbp-78h]
  PVOID P; // [rsp+A8h] [rbp-70h]
  unsigned __int64 v81; // [rsp+B0h] [rbp-68h] BYREF
  unsigned __int64 v82; // [rsp+B8h] [rbp-60h]
  __int64 v83[3]; // [rsp+C0h] [rbp-58h] BYREF
  int v84; // [rsp+120h] [rbp+8h]

  v14 = 0;
  v15 = *(_QWORD *)a1;
  v72 = 0;
  v16 = a4;
  v78 = 0LL;
  v77 = v15;
  if ( (a11 & 0x7Fu) > (unsigned __int16)KeNumberNodes )
    return 3221225719LL;
  v76 = a11 & 0x2000;
  if ( (a11 & 0x2000) != 0 && !*(_QWORD *)(a1 + 64) )
    return 3221225719LL;
  v84 = a11 & 0x20000000;
  if ( (a11 & 0x20000000) != 0 )
  {
    if ( (a11 & 0x40000000) == 0 )
    {
      v18 = 0x200000LL;
      v75 = 0x200000LL;
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
        if ( (*(_WORD *)(v15 + 12) & 0x1000) != 0 )
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
    v75 = 4096LL;
  }
  else
  {
    v18 = 0x10000LL;
    v75 = 0x10000LL;
  }
LABEL_6:
  v19 = *a5;
  if ( *a5 )
  {
    v20 = *(unsigned int *)v16 & (v18 - 1);
    if ( v19 + v20 < v20 )
      return 3221225503LL;
    *a5 = v19 + v20;
    *(_DWORD *)v16 &= ~(v18 - 1);
  }
  else
  {
    *(_DWORD *)v16 &= ~(v18 - 1);
    *a5 = *(_QWORD *)(a6 + 48) - *v16;
  }
  v21 = *a5;
  if ( *a5 > 0x7FFFFFFE0000LL - *a3
    || v21 <= 0
    || v18 >= 0x200000 && v21 % v18
    || (a11 & 0x2000) != 0 && *v16 >= 0x10000000000LL )
  {
    return 3221225503LL;
  }
  v22 = 0LL;
  CurrentThread = KeGetCurrentThread();
  P = 0LL;
  v71 = 0;
  MiCheckPurgeAndUpMapCount(a1);
  v23 = *v16 >> 12;
  v73 = (*v16 + *a5 + 4095) >> 12;
  ControlAreaPtes = MiGetControlAreaPtes(a1);
  if ( v23 >= ControlAreaPtes )
  {
    inserted = -1073741793;
    goto LABEL_110;
  }
  v24 = 0;
  if ( *(_QWORD *)(a1 + 64) )
  {
    SubsectionNode = (__int64)MiLocateSubsectionNode(a1, *v16, 0);
    BugCheckParameter2 = (__int64 *)SubsectionNode;
  }
  else
  {
    v81 = v23;
    SubsectionNode = MiLocatePagefileSubsection(a1 + 128, &v81);
    BugCheckParameter2 = (__int64 *)SubsectionNode;
    if ( a8 == 24 && !a9 )
      v24 = (*(_DWORD *)(a1 + 56) & 0x1000) != 0;
  }
  v26 = *(unsigned int *)(SubsectionNode + 36) | ((unsigned __int64)(*(_WORD *)(SubsectionNode + 32) & 0xFFC0) << 26);
  v27 = v73 - v26;
  v28 = v23 - v26;
  v82 = v28;
  v73 -= v26;
  if ( v24 )
  {
    v27 = 1LL;
    v73 = 1LL;
  }
  inserted = MiAddViewsForSection((__int64 *)SubsectionNode, v27, 8u);
  if ( inserted < 0 )
    goto LABEL_110;
  v79 = (__int64 *)(BugCheckParameter2[1] + 8 * v28);
  if ( !*(_QWORD *)(a1 + 64) && a9 && MiGetCommittedPages((_QWORD *)a1) < ControlAreaPtes )
    v78 = ((v59 & 0xFFF) != 0) + (v59 >> 12);
  LODWORD(ControlAreaPtes) = 0;
  v30 = *(_QWORD *)(a6 + 24) << 12;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x88uLL, 0x20646156u);
  v22 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
  {
    inserted = -1073741670;
LABEL_109:
    MiRemoveViewsFromSectionWithPfn(BugCheckParameter2, v73, 8u);
LABEL_110:
    MiDereferenceControlArea(a1);
    if ( P )
      ExFreePoolWithTag(P, 0);
    if ( v22 )
    {
      if ( *(__int64 *)(v22 + 120) < 0 )
        MiDereferenceExtendInfo(v22, a1);
      v61 = *(void **)(v22 + 128);
      if ( v61 )
        ObfDereferenceObject(v61);
      ExFreePoolWithTag((PVOID)v22, 0);
    }
    return (unsigned int)inserted;
  }
  memset(PoolWithTag, 0, 0x88uLL);
  v32 = (volatile LONG **)BugCheckParameter2;
  *(_QWORD *)(v22 + 80) = v79;
  v33 = *(_DWORD *)(v22 + 64) & 0xFBFFFFFF | ((a7 == 1) << 26);
  *(_QWORD *)(v22 + 16) = -2LL;
  *(_DWORD *)(v22 + 64) = v33;
  *(_QWORD *)(v22 + 72) = BugCheckParameter2;
  *(_DWORD *)(v22 + 48) = *(_DWORD *)(v22 + 48) & 0xFFFFC007 | (8 * (a8 & 0x1F | (32 * (a11 & 0x3F))));
  if ( (a11 & 0x7F) != 0 )
    *(_BYTE *)(*(_QWORD *)(a2 + 1296) + 232LL) = 1;
  if ( *(_QWORD *)(a1 + 64) && (a11 & 0x20002000) == 0 )
    *(_DWORD *)(v22 + 64) |= 0x2000000u;
  *(_QWORD *)(v22 + 40) = 0LL;
  *(_DWORD *)(v22 + 64) ^= (*(_DWORD *)(v22 + 64) ^ ((__int64)*v16 >> 16)) & 0xFFFFFF;
  v34 = *(_QWORD *)(a6 + 40);
  if ( (v34 & 3) != 0 )
  {
    v35 = (void *)(v34 & 0xFFFFFFFFFFFFFFFCuLL);
    ObfReferenceObject(v35);
    v32 = (volatile LONG **)BugCheckParameter2;
  }
  else
  {
    v35 = 0LL;
  }
  *(_QWORD *)(v22 + 128) = v35;
  if ( v84 && *(_QWORD *)(a1 + 64) )
  {
    if ( (unsigned int)MiIncrementLargeSubsections(v32, v73) > 1 )
    {
      inserted = -1073741280;
      goto LABEL_109;
    }
    v72 = 1;
  }
  v36 = CurrentThread;
  LOCK_ADDRESS_SPACE((__int64)CurrentThread, a2);
  if ( (*(_DWORD *)(a2 + 772) & 0x20) != 0 )
  {
    inserted = -1073741558;
LABEL_172:
    v37 = a5;
    goto LABEL_105;
  }
  if ( *a3 )
  {
    v38 = *a3 & ~(v75 - 1);
  }
  else
  {
    if ( !v30 )
    {
      v37 = a5;
      inserted = MiSelectUserAddress(a11, a10, *a5, v75, 0LL, a8, 0, (__int64)&ControlAreaPtes, (__int64)&v70);
      if ( inserted >= 0 )
      {
        v38 = v70;
        v36 = CurrentThread;
        v39 = (*a5 + v70 - 1) | 0xFFF;
        goto LABEL_33;
      }
LABEL_105:
      UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, a2);
      if ( v71 == 1 )
        MiRemoveSharedCommitNode(a1, a2, 0LL);
      if ( v72 )
      {
        v67 = (volatile LONG **)MiLocateSubsectionNode(a1, *v16 - 1 + *v37, 0);
        MiDecrementLargeSubsections((volatile LONG **)BugCheckParameter2, v67);
      }
      goto LABEL_109;
    }
    v38 = v30 + *v16;
  }
  v70 = v38;
  if ( v38 < 0x10000 && !*(_QWORD *)(a2 + 1808) )
  {
    inserted = -1073741583;
    goto LABEL_171;
  }
  v37 = a5;
  v39 = (v38 + *a5 - 1) | 0xFFF;
  if ( MiCheckForConflictingVadExistence() )
  {
    v16 = a4;
    inserted = -1073741800;
    goto LABEL_105;
  }
LABEL_33:
  v40 = v38 >> 12;
  *(_BYTE *)(v22 + 32) = v38 >> 44;
  *(_DWORD *)(v22 + 24) = v38 >> 12;
  *(_DWORD *)(v22 + 28) = v39 >> 12;
  *(_BYTE *)(v22 + 33) = v39 >> 44;
  if ( v76 )
  {
    --v36->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140388110, 0LL);
    v63 = *(_DWORD **)(v77 + 32);
    if ( v63 )
    {
      ++v63[2];
    }
    else
    {
      v64 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x10uLL, 0x78436D4Du);
      v63 = v64;
      if ( !v64 )
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140388110, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&qword_140388110);
        KeAbPostRelease((ULONG_PTR)&qword_140388110);
        KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
        inserted = -1073741670;
        goto LABEL_171;
      }
      v65 = v77;
      v64[2] = 1;
      *(_QWORD *)v64 = _InterlockedCompareExchange64((volatile signed __int64 *)(v65 + 24), -1LL, -1LL);
      *(_QWORD *)(v65 + 32) = v64;
    }
    v66 = *(_QWORD *)(a6 + 48);
    if ( *(_QWORD *)v63 < v66 )
      *(_QWORD *)v63 = v66;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140388110, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140388110);
    KeAbPostRelease((ULONG_PTR)&qword_140388110);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    *(_QWORD *)(v22 + 120) = v63;
    v38 = v70;
  }
  if ( (a8 & 5) == 5 )
  {
    v62 = (*(unsigned int *)(v22 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v22 + 33) << 32))
        - (*(unsigned int *)(v22 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v22 + 32) << 32))
        + 1;
    *(_DWORD *)(v22 + 52) ^= ((*(_DWORD *)(v22 + 28) - *(_DWORD *)(v22 + 24) + 1) ^ *(_DWORD *)(v22 + 52)) & 0x7FFFFFFF;
    *(_BYTE *)(v22 + 34) = v62 >> 31;
  }
  v41 = BugCheckParameter2;
  *(_QWORD *)(v22 + 88) = MiComputeContiguousSubsectionPte((__int64)BugCheckParameter2, v82 + (v39 >> 12) - v40);
  if ( (a11 & 0x400000) != 0 || (*(_DWORD *)(a6 + 56) & 0x4000) != 0 )
  {
    P = (PVOID)MiAddSecureEntry(v22, v38, v39, 0x80000000, 0);
    if ( !P )
    {
      inserted = -1073741670;
      goto LABEL_171;
    }
  }
  if ( v84 )
  {
    *(_DWORD *)(v22 + 48) |= 7u;
    *(_DWORD *)(v22 + 64) |= 0x1000000u;
  }
  if ( !*(_QWORD *)(a1 + 64) )
  {
    inserted = MiInsertSharedCommitNode(a1, a2, 0LL);
    if ( inserted < 0 )
      goto LABEL_171;
    v41 = BugCheckParameter2;
    v71 = 1;
  }
  if ( v78 && !(unsigned int)MiChargeSegmentCommit(v41, v79, v78) )
  {
    inserted = -1073741523;
    goto LABEL_171;
  }
  inserted = MiInsertVadCharges(v22, a2);
  if ( inserted < 0 )
  {
LABEL_171:
    v16 = a4;
    goto LABEL_172;
  }
  if ( !*(_QWORD *)(a1 + 64) && *(int *)(a1 + 56) < 0 )
  {
    *(_DWORD *)(v22 + 48) |= 0x100000u;
    ++*(_QWORD *)(*(_QWORD *)(a2 + 1296) + 264LL);
  }
  MiGetWsAndInsertVad(v22);
  if ( !*(_QWORD *)(a1 + 64) && !*(_QWORD *)(v77 + 56) )
    *(_QWORD *)(v77 + 56) = v38;
  if ( (_DWORD)ControlAreaPtes == 1 )
  {
    v42 = v40 >> 4;
    v43 = v39 >> 16;
    v44 = *(_DWORD **)&KeGetCurrentThread()->ApcState.Process[1].IdealGlobalNode;
    v45 = 8 * (v44[14] - qword_140388950);
    if ( (unsigned int)(v39 >> 16) >= v45 )
    {
      v46 = v45 + v44[12];
      if ( (unsigned int)v42 < v46 )
      {
        v47 = 0;
        if ( (unsigned int)v42 < v45 )
        {
          LODWORD(v42) = 8 * (v44[14] - qword_140388950);
          v47 = 1;
        }
        if ( (unsigned int)v43 >= v46 )
        {
          LODWORD(v43) = v46 - 1;
          v47 = 1;
        }
        v48 = v43;
        v49 = v43 - v45;
        v50 = v48 - v42;
        v51 = v42 - v45;
        v52 = v50 + 1;
        if ( v52 == 1 && !v47 || v51 == v44[16] )
        {
          v53 = v49 + 1;
          if ( v44[18] < (unsigned int)(v49 + 1) )
          {
            v44[18] = v53;
            if ( v44[17] < v52 )
              v44[17] = v52;
          }
          v44[16] = v53;
        }
        else if ( v47 != 1 )
        {
          v44[17] = v52;
          v44[18] = v49 + 1;
        }
      }
    }
    v38 = v70;
  }
  v54 = a8;
  *a5 = v39 - v38 + 1;
  if ( ((a8 - 4) & 0xFFFFFFFD) == 0 && *(_QWORD *)(a1 + 64) )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 92));
    v38 = v70;
  }
  if ( (PerfGlobalGroupMask & 0x8000) != 0 )
  {
    MiLogMapFileEvent(v22, 1061LL);
    v54 = a8;
  }
  if ( a14 )
    MiReferenceVad(v22);
  v55 = 0;
  if ( (v54 & 2) == 0 || !MiIsProcessCfgEnabled() )
  {
    v56 = a2;
    v57 = 1;
    goto LABEL_72;
  }
  MiLockVad((__int64)CurrentThread, v22);
  v56 = a2;
  UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, a2);
  v57 = 0;
  v55 = 1;
  v14 = MiCommitVadCfgBits(v22, 0LL, a13);
  if ( v14 >= 0 )
  {
LABEL_72:
    if ( !a14 )
    {
      if ( v55 == 1 )
        MiUnlockVad((__int64)CurrentThread, v22);
      if ( v57 == 1 )
        UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, v56);
      goto LABEL_77;
    }
    if ( v55 != 1 )
      MiLockVad((__int64)CurrentThread, v22);
    if ( v57 == 1 )
      UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, v56);
    if ( (unsigned int)(a12 - 1) <= 1 || a12 == -2147483647 || a12 == 4 )
    {
      v60 = MiSecureVad(v22, v38, *a5, a12, (__int64)v83);
      if ( v60 >= 0 )
      {
        MiUnlockAndDereferenceVad((char *)v22);
        *a14 = v56 ^ qword_1403884F0 ^ v83[0];
LABEL_77:
        *a3 = v38;
        return (unsigned int)v14;
      }
    }
    else
    {
      v60 = -1073741755;
    }
    MiUnmapVad(v22, 0);
    return (unsigned int)v60;
  }
  if ( !a14 )
    MiReferenceVad(v22);
  MiUnmapVad(v22, 0);
  return (unsigned int)v14;
}
