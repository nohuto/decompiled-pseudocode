/*
 * XREFs of MiMapViewOfDataSection @ 0x140594470
 * Callers:
 *     MiMapViewOfSection @ 0x140593F20 (MiMapViewOfSection.c)
 * Callees:
 *     MiIsProcessCfgEnabled @ 0x14003E8C4 (MiIsProcessCfgEnabled.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x14003ECB0 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     MiRemoveViewsFromSectionWithPfn @ 0x140048408 (MiRemoveViewsFromSectionWithPfn.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     MiDereferenceExtendInfo @ 0x1400CF1C0 (MiDereferenceExtendInfo.c)
 *     MiLocateSubsectionNode @ 0x1400E48D0 (MiLocateSubsectionNode.c)
 *     LOCK_ADDRESS_SPACE @ 0x1400E5518 (LOCK_ADDRESS_SPACE.c)
 *     MiAddViewsForSection @ 0x1400E5550 (MiAddViewsForSection.c)
 *     MiGetControlAreaPtes @ 0x1400E5F38 (MiGetControlAreaPtes.c)
 *     MiCheckPurgeAndUpMapCount @ 0x1400E5FE0 (MiCheckPurgeAndUpMapCount.c)
 *     MiGetWsAndInsertVad @ 0x1400E6090 (MiGetWsAndInsertVad.c)
 *     MiComputeContiguousSubsectionPte @ 0x1400E6330 (MiComputeContiguousSubsectionPte.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x1400E6714 (UNLOCK_ADDRESS_SPACE.c)
 *     MiUnlockVad @ 0x1400E6930 (MiUnlockVad.c)
 *     MiLocatePagefileSubsection @ 0x1400E6B80 (MiLocatePagefileSubsection.c)
 *     MiGetCommittedPages @ 0x1400E7A14 (MiGetCommittedPages.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1401038E0 (ObfReferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     MiUnlockAndDereferenceVad @ 0x140117340 (MiUnlockAndDereferenceVad.c)
 *     MiLockVad @ 0x1401175F0 (MiLockVad.c)
 *     MiReferenceVad @ 0x140117620 (MiReferenceVad.c)
 *     MiDereferenceControlArea @ 0x1401404A0 (MiDereferenceControlArea.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     MiDecrementLargeSubsections @ 0x14025D3E0 (MiDecrementLargeSubsections.c)
 *     MiIncrementLargeSubsections @ 0x14025DC18 (MiIncrementLargeSubsections.c)
 *     MiFindPlaceholderVadToReplace @ 0x14026842C (MiFindPlaceholderVadToReplace.c)
 *     MiUnlockAndDereferenceNestedVad @ 0x14026B5D8 (MiUnlockAndDereferenceNestedVad.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     MiInsertVadCharges @ 0x1404AEFA0 (MiInsertVadCharges.c)
 *     MiCommitVadCfgBits @ 0x1404B5948 (MiCommitVadCfgBits.c)
 *     MiIsVaRangeAvailable @ 0x1404B5D80 (MiIsVaRangeAvailable.c)
 *     MiUnmapVad @ 0x1404D72FC (MiUnmapVad.c)
 *     MiChargeSegmentCommit @ 0x1404D7760 (MiChargeSegmentCommit.c)
 *     MiFindEmptyAddressRangeDown @ 0x140555570 (MiFindEmptyAddressRangeDown.c)
 *     MiSecureVad @ 0x14055728C (MiSecureVad.c)
 *     MiFreePlaceholderStorage @ 0x140584AB8 (MiFreePlaceholderStorage.c)
 *     MiAddSecureEntry @ 0x140593490 (MiAddSecureEntry.c)
 *     MiAdvanceVadHint @ 0x140594F50 (MiAdvanceVadHint.c)
 *     MiFindEmptyAddressRange @ 0x140594FE0 (MiFindEmptyAddressRange.c)
 *     MiInsertSharedCommitNode @ 0x140595350 (MiInsertSharedCommitNode.c)
 *     MiRemoveSharedCommitNode @ 0x140595640 (MiRemoveSharedCommitNode.c)
 *     MiLogMapFileEvent @ 0x140749E78 (MiLogMapFileEvent.c)
 *     MiCreatePlaceholderStorage @ 0x140755004 (MiCreatePlaceholderStorage.c)
 *     MiFinishPlaceholderVadReplacement @ 0x1407550B8 (MiFinishPlaceholderVadReplacement.c)
 *     MiPreparePlaceholderVadReplacement @ 0x14075517C (MiPreparePlaceholderVadReplacement.c)
 */

__int64 __fastcall MiMapViewOfDataSection(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4,
        __int64 a5,
        int a6,
        int a7,
        unsigned __int64 a8,
        __int64 a9)
{
  __int64 v9; // r8
  __int64 v10; // rdi
  __int64 v12; // r9
  __int64 v13; // r15
  int v14; // ecx
  int v15; // eax
  unsigned __int64 v16; // rax
  __int64 *v17; // r14
  unsigned __int64 v18; // r13
  unsigned __int64 ControlAreaPtes; // r12
  bool v20; // si
  ULONG_PTR SubsectionNode; // r9
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // r13
  int inserted; // esi
  ULONG_PTR v26; // rsi
  __int64 *v27; // r13
  __int64 v28; // r12
  PVOID PoolWithTag; // rax
  int v30; // eax
  unsigned int v31; // ecx
  struct _KPROCESS *v32; // r13
  __int64 v33; // rsi
  int v34; // ebx
  unsigned __int64 v35; // rsi
  unsigned __int64 v36; // rax
  __int64 v37; // r8
  __int64 v38; // r9
  unsigned __int64 v39; // r9
  unsigned int v40; // ecx
  __int64 v41; // r8
  unsigned __int64 v42; // r10
  _KPROCESS *Process; // r13
  unsigned __int64 v44; // r11
  int v45; // ebx
  unsigned __int64 v46; // rdx
  _RTL_BITMAP *v47; // r12
  __int64 v48; // r15
  int v49; // ebx
  unsigned __int64 v50; // rdi
  int v51; // eax
  bool v52; // zf
  unsigned __int64 v53; // rsi
  unsigned __int64 v54; // r12
  unsigned __int64 v55; // r13
  __int64 v56; // r10
  __int64 v57; // rcx
  __int64 v58; // rdx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // r15
  PVOID v62; // r13
  __int64 v63; // r8
  __int64 v64; // r9
  unsigned __int64 v66; // rbx
  __int64 v67; // rdx
  __int64 v68; // r8
  __int64 v69; // r9
  int v70; // r9d
  int v71; // eax
  unsigned __int64 v72; // rdx
  __int64 v73; // rcx
  void *v74; // rcx
  __int64 v75; // rdx
  __int64 v76; // r8
  __int64 v77; // r9
  _DWORD *v78; // rsi
  _DWORD *v79; // rax
  __int64 v80; // rcx
  unsigned __int64 v81; // rax
  struct _KTHREAD *v82; // r12
  int v83; // eax
  volatile LONG **v84; // rax
  PVOID v85; // rbx
  volatile signed __int64 *v86; // rdi
  int PlaceholderStorage; // [rsp+50h] [rbp-B0h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+58h] [rbp-A8h]
  struct _KPROCESS *v89; // [rsp+60h] [rbp-A0h]
  __int64 v90; // [rsp+68h] [rbp-98h] BYREF
  int v91; // [rsp+70h] [rbp-90h]
  ULONG_PTR BugCheckParameter2; // [rsp+78h] [rbp-88h]
  PVOID PlaceholderVadToReplace; // [rsp+80h] [rbp-80h]
  int v94; // [rsp+88h] [rbp-78h] BYREF
  int v95; // [rsp+8Ch] [rbp-74h]
  int v96; // [rsp+90h] [rbp-70h]
  unsigned __int64 v97; // [rsp+98h] [rbp-68h]
  __int64 v98; // [rsp+A0h] [rbp-60h]
  __int64 v99; // [rsp+A8h] [rbp-58h]
  _RTL_BITMAP *v100; // [rsp+B0h] [rbp-50h]
  __int64 v101; // [rsp+B8h] [rbp-48h]
  __int64 v102; // [rsp+C0h] [rbp-40h]
  PVOID P; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v104; // [rsp+D0h] [rbp-30h] BYREF
  unsigned __int64 v105; // [rsp+E0h] [rbp-20h]
  unsigned __int64 v106; // [rsp+E8h] [rbp-18h]
  PVOID v107; // [rsp+F0h] [rbp-10h]
  unsigned __int64 v108; // [rsp+F8h] [rbp-8h]
  __int64 *v109; // [rsp+100h] [rbp+0h]
  __int64 v110; // [rsp+108h] [rbp+8h] BYREF
  ULONG_PTR v111; // [rsp+110h] [rbp+10h]
  unsigned __int64 v113; // [rsp+170h] [rbp+70h]
  __int64 v115; // [rsp+178h] [rbp+78h]

  v9 = *(_QWORD *)(a2 + 80);
  v10 = a2;
  v96 = 0;
  v89 = (struct _KPROCESS *)v9;
  v12 = *a1;
  v13 = (__int64)a1;
  v14 = *(_DWORD *)(a2 + 40);
  v102 = 0LL;
  v99 = v12;
  if ( (v14 & 0x2000) != 0 && !*(_QWORD *)(v13 + 64) )
    return 3221225485LL;
  v15 = v14 & 0x40000000;
  if ( (v14 & 0x20000000) != 0 )
  {
    if ( !v15 && (v14 & 0x2000) == 0 && a7 != 24 && (a7 & 0xFFFFFFF8) != 0x10 && (a7 & 5) != 5 )
    {
      if ( !*(_QWORD *)(v13 + 64) )
      {
        if ( (*(_WORD *)(v12 + 12) & 0x1000) == 0 )
          return 3221225485LL;
        goto LABEL_4;
      }
      if ( (*(_DWORD *)(v13 + 56) & 0x40000000) != 0 )
        goto LABEL_4;
    }
    return 3221225485LL;
  }
  if ( !v15 )
    goto LABEL_4;
  if ( (v14 & 0x2000) != 0 )
    return 3221225485LL;
  if ( !*(_QWORD *)(v9 + 1808) && (*(_DWORD *)(a2 + 64) & 1) == 0 )
    return 3221225485LL;
LABEL_4:
  v16 = *(_QWORD *)(a2 + 16);
  if ( (v16 < 0x200000 || ((v16 - 1) & *(_QWORD *)(a2 + 32)) == 0) && ((v14 & 0x2000) == 0 || *a4 < 0x10000000000LL) )
  {
    CurrentThread = KeGetCurrentThread();
    v17 = 0LL;
    v98 = *(_QWORD *)(v9 + 1296) + 48LL;
    PlaceholderVadToReplace = 0LL;
    P = 0LL;
    v95 = 0;
    MiCheckPurgeAndUpMapCount(v13);
    v18 = *a4 >> 12;
    v97 = (*a4 + *(_QWORD *)(v10 + 24)) >> 12;
    ControlAreaPtes = MiGetControlAreaPtes(v13);
    if ( v18 >= ControlAreaPtes )
    {
      inserted = -1073741793;
      goto LABEL_104;
    }
    v20 = 0;
    if ( *(_QWORD *)(v13 + 64) )
    {
      SubsectionNode = (ULONG_PTR)MiLocateSubsectionNode(v13, *a4, 0);
      BugCheckParameter2 = SubsectionNode;
    }
    else
    {
      v104 = v18;
      BugCheckParameter2 = MiLocatePagefileSubsection(v13 + 128, &v104);
      SubsectionNode = BugCheckParameter2;
      if ( !a8 && a7 == 24 )
        v20 = (*(_DWORD *)(v13 + 56) & 0x1000) != 0;
    }
    v22 = *(unsigned int *)(SubsectionNode + 36) | ((unsigned __int64)(*(_WORD *)(SubsectionNode + 32) & 0xFFC0) << 26);
    v23 = v97 - v22;
    v24 = v18 - v22;
    v108 = v24;
    v97 -= v22;
    if ( v20 )
    {
      v23 = 1LL;
      v97 = 1LL;
    }
    PlaceholderStorage = MiAddViewsForSection((__int64 *)SubsectionNode, v23, 8u);
    inserted = PlaceholderStorage;
    if ( PlaceholderStorage < 0 )
      goto LABEL_104;
    v26 = BugCheckParameter2;
    v27 = (__int64 *)(*(_QWORD *)(BugCheckParameter2 + 8) + 8 * v24);
    v109 = v27;
    if ( !*(_QWORD *)(v13 + 64) && a8 && MiGetCommittedPages((_QWORD *)v13) < ControlAreaPtes )
      v102 = ((a8 & 0xFFF) != 0) + (a8 >> 12);
    v100 = 0LL;
    v28 = *(_QWORD *)(a5 + 24) << 12;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x88uLL, 0x20646156u);
    v107 = PoolWithTag;
    v17 = (__int64 *)PoolWithTag;
    if ( !PoolWithTag )
    {
      inserted = -1073741670;
LABEL_103:
      MiRemoveViewsFromSectionWithPfn((__int64 *)BugCheckParameter2);
LABEL_104:
      MiDereferenceControlArea(v13);
      if ( v17 )
      {
        if ( v17[15] < 0 )
          MiDereferenceExtendInfo((__int64)v17, v13);
        v74 = (void *)v17[16];
        if ( v74 )
          ObfDereferenceObject(v74);
        MiFreePlaceholderStorage((__int64)v17);
        ExFreePoolWithTag(v17, 0);
      }
      if ( P )
        ExFreePoolWithTag(P, 0);
      return (unsigned int)inserted;
    }
    memset(PoolWithTag, 0, 0x88uLL);
    v30 = 0;
    v31 = v17[8] & 0xFBFFFFFF;
    v17[10] = (__int64)v27;
    v32 = v89;
    if ( a6 == 1 )
      v30 = 0x4000000;
    v17[2] = -2LL;
    v17[9] = v26;
    *((_DWORD *)v17 + 16) = v30 | v31;
    *((_DWORD *)v17 + 12) ^= (*((_DWORD *)v17 + 12) ^ (8 * a7)) & 0xF8;
    *((_DWORD *)v17 + 12) ^= ((unsigned __int16)*((_DWORD *)v17 + 12) ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(v10 + 48) << 8)) & 0x3F00;
    if ( *(_DWORD *)(v10 + 48) )
      *(_BYTE *)(*(_QWORD *)&v32[1].IdealGlobalNode + 320LL) = 1;
    if ( *(_QWORD *)(v13 + 64) && (*(_DWORD *)(v10 + 40) & 0x20002000) == 0 )
      *((_DWORD *)v17 + 16) |= 0x2000000u;
    v17[5] = 0LL;
    v111 = (ULONG_PTR)(v17 + 5);
    *((_DWORD *)v17 + 16) = ((__int64)*a4 >> 16) & 0xFFFFFF | v17[8] & 0xFF000000;
    if ( (*(_DWORD *)(v10 + 52) & 0x4000000) != 0 )
    {
      PlaceholderStorage = MiCreatePlaceholderStorage(v17);
      inserted = PlaceholderStorage;
      if ( PlaceholderStorage < 0 )
        goto LABEL_103;
    }
    v33 = *(_QWORD *)(a5 + 40);
    v34 = v33 & 3;
    if ( (v33 & 3) != 0 )
      ObfReferenceObject((PVOID)(v33 & 0xFFFFFFFFFFFFFFFCuLL));
    v35 = v33 & 0xFFFFFFFFFFFFFFFCuLL;
    v36 = 0LL;
    if ( v34 )
      v36 = v35;
    v17[16] = v36;
    if ( (*(_DWORD *)(v10 + 40) & 0x20000000) != 0 && *(_QWORD *)(v13 + 64) )
    {
      if ( (unsigned int)MiIncrementLargeSubsections((volatile LONG **)BugCheckParameter2, v97) > 1 )
      {
        inserted = -1073741280;
        goto LABEL_103;
      }
      v96 = 1;
    }
    LOCK_ADDRESS_SPACE((__int64)CurrentThread, (__int64)v32);
    if ( (v32[1].DirectoryTableBase & 0x2000000000LL) != 0 )
    {
      inserted = -1073741558;
    }
    else
    {
      if ( (*(_DWORD *)(v10 + 64) & 1) != 0 )
      {
        v53 = *a3;
      }
      else
      {
        if ( !v28 )
        {
          v39 = *(_QWORD *)(v10 + 8);
          v40 = 0;
          v41 = *(_QWORD *)(v10 + 16);
          v42 = *(_QWORD *)(v10 + 24);
          Process = KeGetCurrentThread()->ApcState.Process;
          v44 = *(_QWORD *)v10;
          v45 = *(_DWORD *)(v10 + 40);
          v101 = v41;
          v46 = Process[1].ActiveProcessors.Bitmap[18];
          v105 = v42;
          v106 = v44;
          v91 = 0;
          v94 = 0;
          v100 = 0LL;
          v90 = 0LL;
          if ( v39 > v46 - 1 && v46 <= 0x100000000LL )
            v40 = 2;
          v47 = (_RTL_BITMAP *)(56LL * v40 + *(_QWORD *)&Process[1].IdealGlobalNode + 48LL);
          if ( (v45 & 0x20400000) != 541065216 && (v45 & 0x20000000) != 0 && v42 >= 0x40000000 && v41 == 0x200000 )
          {
            v91 = 1;
            v101 = 0x40000000LL;
          }
          v48 = v101;
          v49 = v45 & 0x100000;
          v50 = v39;
          while ( 1 )
          {
            v51 = v49 || (Process[1].DirectoryTableBase & 0x20000000000000LL) != 0
                ? MiFindEmptyAddressRangeDown((__int64)v47, v42, v48, 0, v44, v50, a7, (__int64)&v90)
                : MiFindEmptyAddressRange(v47, v44, v50, a7, (__int64)&v90, (__int64)&v94);
            inserted = v51;
            if ( v51 >= 0 || v91 != 1 )
              break;
            v42 = v105;
            v48 = 0x200000LL;
            v44 = v106;
            v91 = 0;
          }
          v10 = a2;
          v52 = v48 == 0x10000;
          v13 = (__int64)a1;
          v17 = (__int64 *)v107;
          if ( v52 && v94 == 1 )
            v100 = v47;
          PlaceholderStorage = v51;
          if ( v51 < 0 )
            goto LABEL_171;
          v53 = v90;
          v115 = v90;
          v113 = *(_QWORD *)(v10 + 24) + v90 - 1;
LABEL_43:
          v54 = v53 >> 12;
          v55 = v113 >> 12;
          *((_BYTE *)v17 + 32) = v53 >> 44;
          *((_BYTE *)v17 + 33) = v113 >> 12 >> 32;
          *((_DWORD *)v17 + 6) = v53 >> 12;
          *((_DWORD *)v17 + 7) = v113 >> 12;
          if ( (*(_DWORD *)(v10 + 40) & 0x2000) != 0 )
          {
            --CurrentThread->SpecialApcDisable;
            ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1403CB290, 0LL);
            v78 = *(_DWORD **)(v99 + 32);
            if ( v78 )
            {
              ++v78[2];
            }
            else
            {
              v79 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x10uLL, 0x78436D4Du);
              v78 = v79;
              if ( !v79 )
              {
                if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1403CB290, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                  ExfTryToWakePushLock((volatile signed __int64 *)&qword_1403CB290, v75, v76, v77);
                KeAbPostRelease((ULONG_PTR)&qword_1403CB290);
                v82 = CurrentThread;
                KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
                inserted = -1073741670;
                goto LABEL_169;
              }
              v80 = v99;
              v79[2] = 1;
              *(_QWORD *)v79 = _InterlockedCompareExchange64((volatile signed __int64 *)(v80 + 24), -1LL, -1LL);
              *(_QWORD *)(v80 + 32) = v79;
            }
            v81 = *(_QWORD *)(a5 + 48);
            if ( *(_QWORD *)v78 < v81 )
              *(_QWORD *)v78 = v81;
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1403CB290, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)&qword_1403CB290, v75, v76, v77);
            KeAbPostRelease((ULONG_PTR)&qword_1403CB290);
            KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
            v17[15] = (__int64)v78;
            v53 = v90;
            v115 = v90;
          }
          if ( (a7 & 5) == 5 )
          {
            v72 = (*((unsigned int *)v17 + 7) | ((unsigned __int64)*((unsigned __int8 *)v17 + 33) << 32))
                - (*((unsigned int *)v17 + 6) | ((unsigned __int64)*((unsigned __int8 *)v17 + 32) << 32))
                + 1;
            *((_DWORD *)v17 + 13) ^= (*((_DWORD *)v17 + 13) ^ (*((_DWORD *)v17 + 7) - *((_DWORD *)v17 + 6) + 1)) & 0x7FFFFFFF;
            *((_BYTE *)v17 + 34) = v72 >> 31;
          }
          v17[11] = MiComputeContiguousSubsectionPte(BugCheckParameter2, v108 + v55 - v54);
          if ( (*(_DWORD *)(v10 + 40) & 0x400000) != 0 || (*(_DWORD *)(a5 + 56) & 0x4000) != 0 )
          {
            P = MiAddSecureEntry((__int64)v17, v53, v56, 0x80000000, 0);
            if ( !P )
            {
              inserted = -1073741670;
              goto LABEL_168;
            }
          }
          if ( (*(_DWORD *)(v10 + 40) & 0x20000000) != 0 )
          {
            v83 = *((_DWORD *)v17 + 16);
            *((_DWORD *)v17 + 12) |= 7u;
            *((_DWORD *)v17 + 16) = v83 | 0x1000000;
            v115 = v90;
          }
          if ( !*(_QWORD *)(v13 + 64) )
          {
            inserted = MiInsertSharedCommitNode(v13, v89, 0LL);
            if ( inserted < 0 )
              goto LABEL_168;
            v95 = 1;
          }
          if ( v102 && !(unsigned int)MiChargeSegmentCommit((__int64 *)BugCheckParameter2, v109, v102) )
          {
            inserted = -1073741523;
            goto LABEL_168;
          }
          PlaceholderStorage = MiInsertVadCharges((__int64)v17, v89);
          inserted = PlaceholderStorage;
          if ( PlaceholderStorage >= 0 )
          {
            v57 = v98;
            if ( !*(_QWORD *)(v13 + 64) && *(int *)(v13 + 56) < 0 )
            {
              *((_DWORD *)v17 + 12) |= 0x20000u;
              ++*(_QWORD *)(v57 + 320);
            }
            if ( PlaceholderVadToReplace )
            {
              MiPreparePlaceholderVadReplacement(PlaceholderVadToReplace, v89, v57);
              ExAcquirePushLockExclusiveEx((ULONG_PTR)(v17 + 5), 0LL);
            }
            else
            {
              MiLockVad((__int64)CurrentThread, (__int64)v17);
            }
            MiGetWsAndInsertVad((__int64)v17);
            if ( !*(_QWORD *)(v13 + 64) && !*(_QWORD *)(v99 + 56) )
              *(_QWORD *)(v99 + 56) = v115;
            if ( v100 )
              MiAdvanceVadHint(v54, v55);
            if ( ((a7 - 4) & 0xFFFFFFFD) == 0 && *(_QWORD *)(v13 + 64) )
            {
              _InterlockedIncrement((volatile signed __int32 *)(v13 + 92));
              v61 = v90;
            }
            else
            {
              v61 = v115;
            }
            if ( (PerfGlobalGroupMask[0] & 0x8000) != 0 )
              MiLogMapFileEvent(v17, 1061LL);
            inserted = 0;
            PlaceholderStorage = 0;
            if ( ((a7 & 2) == 0 || !MiIsProcessCfgEnabled()) && !*(_QWORD *)(v10 + 72) )
            {
              v62 = PlaceholderVadToReplace;
              if ( !PlaceholderVadToReplace )
              {
                MiUnlockVad((__int64)CurrentThread, (__int64)v17, v59, v60);
                UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, (__int64)v89, v63, v64);
LABEL_74:
                *a3 = v61;
                return (unsigned int)inserted;
              }
              v86 = (volatile signed __int64 *)v111;
              if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v111, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock(v86, v58, v59, v60);
              KeAbPostRelease((ULONG_PTR)v86);
              UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, (__int64)v89);
              inserted = PlaceholderStorage;
              v61 = v90;
              goto LABEL_182;
            }
            v66 = (unsigned __int64)v89;
            UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, (__int64)v89);
            MiReferenceVad((__int64)v17);
            if ( (a7 & 2) != 0 && MiIsProcessCfgEnabled() )
            {
              inserted = MiCommitVadCfgBits((__int64)v17, 0LL, a9);
              if ( inserted < 0 )
              {
LABEL_176:
                v85 = PlaceholderVadToReplace;
                MiUnmapVad((__int64)v17, (__int64)PlaceholderVadToReplace, 0);
                if ( v85 )
                  MiFinishPlaceholderVadReplacement(v85);
                return (unsigned int)inserted;
              }
            }
            if ( *(_QWORD *)(v10 + 72) )
            {
              v70 = *(_DWORD *)(v10 + 68);
              if ( (unsigned int)(v70 - 1) > 1 && v70 != -2147483647 && v70 != 4 )
              {
                v71 = -1073741755;
                goto LABEL_175;
              }
              v71 = MiSecureVad((ULONG_PTR)v17, v61, *(_QWORD *)(v10 + 24), v70, 0, &v110);
              if ( v71 < 0 )
              {
LABEL_175:
                inserted = v71;
                goto LABEL_176;
              }
              **(_QWORD **)(v10 + 72) = v66 ^ qword_1403CB688 ^ v110;
            }
            v62 = PlaceholderVadToReplace;
            if ( !PlaceholderVadToReplace )
            {
              MiUnlockAndDereferenceVad(v17, v67, v68, v69);
              goto LABEL_74;
            }
            MiUnlockAndDereferenceNestedVad(v17);
LABEL_182:
            MiFinishPlaceholderVadReplacement(v62);
            goto LABEL_74;
          }
LABEL_168:
          v82 = CurrentThread;
LABEL_169:
          if ( PlaceholderVadToReplace )
            MiUnlockVad((__int64)v82, (__int64)PlaceholderVadToReplace, v37, v38);
LABEL_171:
          v32 = v89;
          goto LABEL_99;
        }
        v53 = v28 + *a4;
      }
      v115 = v53;
      v73 = v53 + *(_QWORD *)(v10 + 24) - 1LL;
      v90 = v53;
      v113 = v73;
      if ( (*(_DWORD *)(v10 + 52) & 0x4000000) != 0 )
      {
        PlaceholderVadToReplace = (PVOID)MiFindPlaceholderVadToReplace(
                                           v53,
                                           v73,
                                           *(_BYTE *)(v10 + 96),
                                           &PlaceholderStorage);
        if ( PlaceholderVadToReplace )
          goto LABEL_43;
        inserted = PlaceholderStorage;
      }
      else
      {
        if ( MiIsVaRangeAvailable((__int64)v32, v53, v73 - v53 + 1, *(_QWORD *)v10, *(_QWORD *)(v10 + 8)) )
          goto LABEL_43;
        inserted = -1073741800;
      }
    }
LABEL_99:
    UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, (__int64)v32, v37, v38);
    if ( v95 == 1 )
      MiRemoveSharedCommitNode(v13, v32, 0LL);
    if ( v96 )
    {
      v84 = (volatile LONG **)MiLocateSubsectionNode(v13, *(_QWORD *)(v10 + 32) + *a4 - 1, 0);
      MiDecrementLargeSubsections((volatile LONG **)BugCheckParameter2, v84);
    }
    goto LABEL_103;
  }
  return 3221225503LL;
}
