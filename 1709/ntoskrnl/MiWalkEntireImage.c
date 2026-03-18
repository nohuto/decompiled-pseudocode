/*
 * XREFs of MiWalkEntireImage @ 0x140039480
 * Callers:
 *     MiValidateSectionCreate @ 0x1404F6218 (MiValidateSectionCreate.c)
 *     MiRelocateImage @ 0x1404F8070 (MiRelocateImage.c)
 *     MiUnloadSystemImage @ 0x140515B1C (MiUnloadSystemImage.c)
 *     MiSwitchBaseAddress @ 0x140585340 (MiSwitchBaseAddress.c)
 * Callees:
 *     MiObtainProtoReference @ 0x140027120 (MiObtainProtoReference.c)
 *     MiGetEffectivePagePriorityThread @ 0x140028114 (MiGetEffectivePagePriorityThread.c)
 *     MiInitializePageColorBase @ 0x14002A810 (MiInitializePageColorBase.c)
 *     MiStartingOffset @ 0x14002C570 (MiStartingOffset.c)
 *     MiUnlockProtoPoolPage @ 0x140030AF0 (MiUnlockProtoPoolPage.c)
 *     MiLockProtoPoolPage @ 0x140030E90 (MiLockProtoPoolPage.c)
 *     MiDeleteTransitionPte @ 0x1400317D0 (MiDeleteTransitionPte.c)
 *     MiCaptureDirtyBitToPfn @ 0x140032400 (MiCaptureDirtyBitToPfn.c)
 *     MiReturnCommit @ 0x140036530 (MiReturnCommit.c)
 *     MiChargeCommit @ 0x14003AB20 (MiChargeCommit.c)
 *     MmAccessFault @ 0x140040CF0 (MmAccessFault.c)
 *     MiUnlinkPageFromList @ 0x14004B0F0 (MiUnlinkPageFromList.c)
 *     MiPfnReferenceCountIsZero @ 0x14004D4F0 (MiPfnReferenceCountIsZero.c)
 *     MiInsertAndUnlockStandbyPages @ 0x140051C80 (MiInsertAndUnlockStandbyPages.c)
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     MiIsPfnCommitNotCharged @ 0x140078050 (MiIsPfnCommitNotCharged.c)
 *     MiIsPfnFileOnly @ 0x140078F10 (MiIsPfnFileOnly.c)
 *     KeDelayExecutionThread @ 0x1400818C0 (KeDelayExecutionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     MiChargePartitionResidentAvailable @ 0x1400C0428 (MiChargePartitionResidentAvailable.c)
 *     MiReleasePageFileInfo @ 0x1400C0554 (MiReleasePageFileInfo.c)
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 *     MiWriteValidPteVolatile @ 0x1400E9F50 (MiWriteValidPteVolatile.c)
 *     MiGetPagingFileOffset @ 0x14010C6B8 (MiGetPagingFileOffset.c)
 *     MiDecayPfnFullyInitialized @ 0x140115284 (MiDecayPfnFullyInitialized.c)
 *     MiCreateDecayPfn @ 0x140115CFC (MiCreateDecayPfn.c)
 *     MiWaitForCollidedFaultComplete @ 0x140125424 (MiWaitForCollidedFaultComplete.c)
 *     MiIsPfnSystemCharged @ 0x14012C56C (MiIsPfnSystemCharged.c)
 *     MiSyncCommitSignals @ 0x14014FEC8 (MiSyncCommitSignals.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiInvalidPteConforms @ 0x14017C70C (MiInvalidPteConforms.c)
 *     MiBadRefCount @ 0x14017CA3C (MiBadRefCount.c)
 *     MiDriverPageIsDangling @ 0x140218FE4 (MiDriverPageIsDangling.c)
 *     MiSplitDirectMapPage @ 0x140223AD4 (MiSplitDirectMapPage.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x14022A1D0 (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 *     MiDiscardTransitionPte @ 0x14022AE0C (MiDiscardTransitionPte.c)
 *     MiGetSharedProtos @ 0x14022DECC (MiGetSharedProtos.c)
 *     MiRelocateImagePfn @ 0x140495F60 (MiRelocateImagePfn.c)
 *     MiPrefetchControlArea @ 0x1404F605C (MiPrefetchControlArea.c)
 *     MiValidateImagePfn @ 0x140509814 (MiValidateImagePfn.c)
 *     MiGetNextDirectFixupProto @ 0x1406EA8CC (MiGetNextDirectFixupProto.c)
 *     MiPageHasRelocations @ 0x1406EA8F8 (MiPageHasRelocations.c)
 */

__int64 __fastcall MiWalkEntireImage(__int64 *a1, __int64 a2, char a3, unsigned int a4)
{
  unsigned int v4; // edx
  char v5; // r14
  __int64 v6; // r8
  unsigned int v7; // r11d
  __int64 *v8; // r15
  __int64 NextDirectFixupProto; // rax
  unsigned __int64 v10; // rbx
  __int64 v11; // rax
  __int64 *v12; // rcx
  struct _KTHREAD *CurrentThread; // rdx
  unsigned int v14; // edi
  bool v15; // zf
  __int64 v16; // r13
  __int64 v17; // r9
  unsigned __int64 v18; // r12
  __int64 v19; // rsi
  __int64 SharedProtos; // rax
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // r9
  unsigned __int64 CurrentPrcb; // rdx
  unsigned __int64 v24; // rax
  __int64 v25; // rcx
  ULONG_PTR v26; // r10
  __int64 *v27; // rdi
  __int64 PteShadow; // rbx
  unsigned __int64 v29; // rax
  unsigned __int8 CurrentIrql; // si
  ULONG_PTR v31; // r11
  __int64 v32; // rax
  __int64 v33; // rcx
  __int16 v34; // ax
  bool v35; // bl
  ULONG_PTR *v36; // rdi
  signed __int32 v37; // eax
  signed __int32 v38; // ett
  unsigned __int64 v39; // rcx
  _QWORD *v40; // rbx
  char v41; // al
  __int64 v42; // rax
  __int64 v43; // rbx
  unsigned __int64 v44; // rax
  int v45; // eax
  ULONG_PTR v46; // rdi
  __int64 v47; // rax
  __int64 v48; // rax
  unsigned int EffectivePagePriorityThread; // eax
  int v50; // edx
  unsigned int v51; // r8d
  __int64 v52; // r9
  __int64 v53; // rax
  __int64 v54; // r14
  int v55; // ebx
  unsigned int v56; // r15d
  char v57; // al
  unsigned __int64 v58; // r10
  __int16 v59; // ax
  __int64 v60; // rcx
  char v61; // si
  int IsPfnCommitNotCharged; // eax
  char v63; // r11
  __int64 v64; // r10
  ULONG_PTR *v65; // rbx
  struct _KPRCB *v66; // rdx
  signed __int32 CachedResidentAvailable; // eax
  signed __int32 v68; // ett
  int v69; // r10d
  unsigned __int64 v70; // rdx
  unsigned __int64 v71; // rbx
  __int64 v72; // rax
  int v73; // esi
  char v74; // al
  int v75; // ecx
  __int64 v76; // rbx
  signed __int32 v77; // eax
  unsigned __int64 v78; // rcx
  int v79; // ebx
  __int64 v80; // rax
  char v81; // si
  int v82; // eax
  __int64 v83; // rbx
  unsigned __int8 v84; // r12
  __int64 v85; // r14
  __int64 v86; // rdi
  __int64 v87; // rax
  unsigned __int64 v88; // rcx
  __int16 v89; // cx
  __int16 v90; // cx
  unsigned __int64 v91; // r11
  __int64 v92; // rsi
  __int64 v93; // rax
  int v94; // r15d
  unsigned __int64 v95; // rcx
  char v96; // al
  int v97; // r10d
  __int64 v98; // rdi
  signed __int64 v99; // rax
  signed __int64 v100; // rtt
  unsigned __int64 v101; // rcx
  unsigned __int64 v102; // rcx
  unsigned __int64 v103; // rdx
  signed __int32 v104; // eax
  __int64 v105; // rax
  __int64 v106; // rbx
  __int64 v107; // rax
  unsigned __int64 v108; // rcx
  int v109; // eax
  __int64 v110; // rbx
  int v112; // [rsp+20h] [rbp-E0h]
  unsigned __int8 v113[4]; // [rsp+40h] [rbp-C0h] BYREF
  int v114; // [rsp+44h] [rbp-BCh]
  char i; // [rsp+48h] [rbp-B8h]
  int v116; // [rsp+4Ch] [rbp-B4h]
  __int64 v117; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v118; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v119; // [rsp+60h] [rbp-A0h]
  __int64 v120; // [rsp+68h] [rbp-98h] BYREF
  int v121; // [rsp+70h] [rbp-90h]
  unsigned __int64 v122; // [rsp+78h] [rbp-88h]
  __int64 v123; // [rsp+80h] [rbp-80h]
  int v124; // [rsp+88h] [rbp-78h]
  int v125; // [rsp+8Ch] [rbp-74h]
  __int64 v126; // [rsp+90h] [rbp-70h] BYREF
  __int64 *v127; // [rsp+98h] [rbp-68h]
  unsigned __int64 v128; // [rsp+A0h] [rbp-60h]
  ULONG_PTR BugCheckParameter2; // [rsp+A8h] [rbp-58h]
  int v130; // [rsp+B0h] [rbp-50h] BYREF
  int v131; // [rsp+B4h] [rbp-4Ch] BYREF
  int v132; // [rsp+B8h] [rbp-48h] BYREF
  int v133; // [rsp+BCh] [rbp-44h] BYREF
  int v134; // [rsp+C0h] [rbp-40h] BYREF
  int v135; // [rsp+C4h] [rbp-3Ch]
  int v136; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v137; // [rsp+D0h] [rbp-30h]
  unsigned __int64 v138; // [rsp+D8h] [rbp-28h]
  __int64 v139; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v140; // [rsp+E8h] [rbp-18h] BYREF
  unsigned __int64 v141; // [rsp+F0h] [rbp-10h]
  __int64 v142; // [rsp+F8h] [rbp-8h]
  __int64 v143; // [rsp+100h] [rbp+0h]
  struct _KTHREAD *v144; // [rsp+108h] [rbp+8h]
  _KPROCESS *Process; // [rsp+118h] [rbp+18h]
  __int64 *v146; // [rsp+120h] [rbp+20h]
  _BYTE v147[88]; // [rsp+128h] [rbp+28h] BYREF

  v4 = *((_DWORD *)a1 + 14);
  v5 = a3;
  v6 = *a1;
  v7 = a4;
  v143 = *a1;
  v8 = a1;
  if ( (v4 & 0x40000000) == 0 || (v5 & 8) != 0 )
    v116 = (v4 >> 11) & 1;
  else
    v116 = 1;
  v135 = v5 & 8;
  if ( (v5 & 8) != 0 )
  {
    MiInitializePageColorBase(
      *(_QWORD *)(qword_140388AF0 + 8LL * (*((_WORD *)a1 + 30) & 0x3FF)) + 6280LL,
      (v4 >> 20) & 0x3F,
      (__int64)v147);
    NextDirectFixupProto = MiGetNextDirectFixupProto(v8, 0LL);
    v10 = *(_QWORD *)(NextDirectFixupProto + 8) | 0x8000000000000000uLL;
    v118 = v10;
    v11 = MiGetNextDirectFixupProto(v8, NextDirectFixupProto);
    v6 = v143;
    v128 = v11;
  }
  else
  {
    v10 = 0LL;
    v128 = 0LL;
    v118 = 0LL;
  }
  v12 = v8 + 16;
  CurrentThread = KeGetCurrentThread();
  v14 = 0;
  v15 = (v8[7] & 0x4000000) == 0;
  v16 = 0LL;
  v17 = v8[17];
  Process = CurrentThread->ApcState.Process;
  v127 = v8 + 16;
  v123 = v17;
  v113[0] = 17;
  v114 = 0;
  v125 = 0;
  BugCheckParameter2 = 0LL;
  v144 = CurrentThread;
  if ( !v15 )
  {
    v125 = 1;
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockSharedEx(v6 + 40, 0LL);
    v17 = v123;
    v12 = v8 + 16;
    goto LABEL_10;
  }
  while ( 2 )
  {
    v18 = v12[1];
    v146 = (__int64 *)v12[2];
    v19 = (__int64)(v18 - v17) >> 3;
    v15 = (*((_BYTE *)v12 + 34) & 2) == 0;
    v122 = v18;
    v117 = v19;
    if ( !v15 )
    {
      if ( (v5 & 1) != 0 )
        goto LABEL_350;
      if ( (v8[7] & 0x4000000) != 0 )
      {
        if ( !v12[3] )
          goto LABEL_350;
        SharedProtos = MiGetSharedProtos(v8, v7, v12);
        if ( !SharedProtos )
          goto LABEL_349;
        v18 = *(_QWORD *)(SharedProtos + 32);
        v12 = v127;
        v122 = v18;
      }
    }
    v119 = MiStartingOffset(v12, v18, a4);
    CurrentPrcb = v119;
    v24 = v18 + 8LL * *((unsigned int *)v127 + 11);
    v138 = v24;
    if ( v10 )
    {
      if ( v10 >= v24 )
        goto LABEL_349;
      v122 = v10;
      v25 = v10 - v18;
      v18 = v10;
      v25 >>= 3;
      v19 = (unsigned int)(v25 + v19);
      CurrentPrcb = (v25 << 12) + v119;
      v117 = v19;
      v119 = CurrentPrcb;
    }
    v26 = 0LL;
    v141 = 0LL;
    if ( v18 >= v24 )
      goto LABEL_347;
    while ( 2 )
    {
      if ( (v18 & 0xFFF) != 0 )
      {
        if ( v16 )
          goto LABEL_95;
      }
      else if ( v16 )
      {
        MiUnlockProtoPoolPage(v16, v113[0]);
        v26 = 0LL;
      }
      if ( v116 == 1 )
      {
        v16 = MiLockProtoPoolPage(v18, v113);
        goto LABEL_94;
      }
      v27 = (__int64 *)(((v18 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      while ( 1 )
      {
        while ( 1 )
        {
          do
          {
            while ( 1 )
            {
              PteShadow = *v27;
              if ( (unsigned __int64)v27 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v27 <= 0xFFFFF6FB7DBED7F8uLL )
                PteShadow = MiReadPteShadow(v27, *v27);
              v139 = PteShadow;
              if ( (PteShadow & 1) != 0 )
                break;
              if ( (PteShadow & 0x400) != 0 || (PteShadow & 0x800) == 0 )
                goto LABEL_340;
              if ( (unsigned int)MiInvalidPteConforms(PteShadow, CurrentPrcb, v21, v22) )
              {
                v29 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v139);
                goto LABEL_39;
              }
            }
            if ( (PteShadow & 0x200) != 0 )
              goto LABEL_340;
            v29 = MI_GET_PAGE_FRAME_FROM_PTE(&v139);
LABEL_39:
            v22 = v29;
          }
          while ( v29 > qword_1403885E0
               || MmPhysicalMemoryBlock && (*(_QWORD *)(48 * v29 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) == 0 );
          v16 = 48 * v29 - 0x58000000000LL;
          CurrentIrql = KeGetCurrentIrql();
          v31 = 2LL;
          __writecr8(2uLL);
          v130 = v26;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
          {
            do
            {
              do
                KeYieldProcessorEx(&v130);
              while ( *(__int64 *)(v16 + 24) < 0 );
            }
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) );
            v26 = 0LL;
            v31 = 2LL;
          }
          v32 = *v27;
          v113[0] = CurrentIrql;
          CurrentPrcb = 0xFFFFF6FB7DBED000uLL;
          if ( (unsigned __int64)v27 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v27 <= 0xFFFFF6FB7DBED7F8uLL )
            v32 = MiReadPteShadow(v27, v32);
          if ( v32 == PteShadow )
            break;
          _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          __writecr8(CurrentIrql);
        }
        if ( (v32 & 1) != 0 )
          break;
        if ( (*(_BYTE *)(v16 + 34) & 7u) < 6 )
          goto LABEL_339;
        _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(CurrentIrql);
        MmAccessFault(v31, v18);
        v26 = 0LL;
      }
      CurrentPrcb = 0x3FFFFFFFFFFFFFFFLL;
      v33 = *(_QWORD *)(v16 + 24) & 0x3FFFFFFFFFFFFFFFLL;
      if ( v33 == 1 )
      {
LABEL_339:
        _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(CurrentIrql);
LABEL_340:
        v113[0] = 17;
        v16 = v26;
LABEL_341:
        if ( v116 == 1 )
        {
          MmAccessFault(2uLL, v18);
          LODWORD(v19) = v117;
          v26 = 0LL;
          v14 = v114;
          goto LABEL_345;
        }
        v14 = v114;
        v108 = (unsigned __int64)(4096 - (unsigned int)(v18 & 0xFFF)) >> 3;
        v119 += v108 << 12;
        v19 = (unsigned int)(v108 + v117);
        v18 += 8 * v108;
        goto LABEL_344;
      }
      CurrentPrcb = *(_QWORD *)(v16 + 40);
      if ( (CurrentPrcb & 0x10000000000000LL) != 0 )
        goto LABEL_79;
      v34 = *(_WORD *)(v16 + 32);
      if ( !v34 )
        goto LABEL_63;
      if ( v34 != 1 )
      {
        if ( v34 == 2 && v33 )
        {
LABEL_62:
          if ( (*(_BYTE *)(v16 + 34) & 8) != 0 )
            goto LABEL_63;
        }
        goto LABEL_79;
      }
      if ( !v33 )
        goto LABEL_62;
LABEL_63:
      v35 = 0;
      if ( (CurrentPrcb & 0x200000000000000LL) != 0 && (*(_DWORD *)(v16 + 16) & 0x400LL) != 0 )
      {
        v35 = 1;
      }
      else
      {
        v21 = 0xFFFFF68000000000uLL;
        v22 = 0x8000000000000000uLL;
        v39 = *(_QWORD *)(v16 + 8) | 0x8000000000000000uLL;
        if ( v39 <= 0xFFFFF6BFFFFFFF78uLL && v39 >= 0xFFFFF68000000000uLL )
          v35 = (*(_BYTE *)(v16 + 35) & 0x20) != 0;
      }
      v36 = *(ULONG_PTR **)(qword_140388AF0 + 8 * ((CurrentPrcb >> 40) & 0x3FF));
      if ( !v35 || (unsigned int)MiChargeCommit(v36, 1LL, 4LL) )
      {
        if ( v36 == &MiSystemPartition )
        {
          CurrentPrcb = (unsigned __int64)KeGetCurrentPrcb();
          v37 = *(_DWORD *)(CurrentPrcb + 24604);
          while ( v37 )
          {
            if ( v37 == -1 )
              break;
            v38 = v37;
            v37 = _InterlockedCompareExchange((volatile signed __int32 *)(CurrentPrcb + 24604), v37 - 1, v37);
            if ( v38 == v37 )
              goto LABEL_79;
          }
        }
        if ( !(unsigned int)MiChargePartitionResidentAvailable(v36) )
        {
          if ( v35 )
            MiReturnCommit((__int64)v36, 1uLL);
          goto LABEL_80;
        }
LABEL_79:
        ++*(_WORD *)(v16 + 32);
      }
LABEL_80:
      v40 = (_QWORD *)(*(_QWORD *)(v16 + 8) | 0x8000000000000000uLL);
      if ( (*(_BYTE *)(v16 + 34) & 0x20) != 0 )
      {
        do
        {
          _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( CurrentIrql != 17 )
            __writecr8(CurrentIrql);
          v41 = *(_BYTE *)(v16 + 34);
          v131 = 0;
          for ( i = v41; (i & 0x20) != 0; i = *(_BYTE *)(v16 + 34) )
            KeYieldProcessorEx(&v131);
          MiLockPageInline(v16);
        }
        while ( (*(_BYTE *)(v16 + 34) & 0x20) != 0 );
        v8 = a1;
        v5 = a3;
      }
      *(_BYTE *)(v16 + 34) |= 0x20u;
      if ( (*(_QWORD *)(v16 + 24) & 0x4000000000000000LL) == 0 )
      {
        v42 = *v40;
        if ( (unsigned __int64)v40 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v40 <= 0xFFFFF6FB7DBED7F8uLL )
          LOBYTE(v42) = MiReadPteShadow(v40, *v40);
        if ( (v42 & 0x20) == 0 )
          MiWriteValidPteVolatile(v40, 1LL);
      }
      _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      LODWORD(v19) = v117;
LABEL_94:
      v26 = 0LL;
      if ( !v16 )
        goto LABEL_341;
LABEL_95:
      CurrentPrcb = 0xFFFFF6FB7DBED000uLL;
      while ( 1 )
      {
        v43 = *(_QWORD *)v18;
        if ( v18 >= 0xFFFFF6FB7DBED000uLL && v18 <= 0xFFFFF6FB7DBED7F8uLL )
        {
          v43 = MiReadPteShadow(v18, *(_QWORD *)v18);
          CurrentPrcb = 0xFFFFF6FB7DBED000uLL;
        }
        v140 = v43;
        if ( (v43 & 1) != 0 )
        {
          v44 = MI_GET_PAGE_FRAME_FROM_PTE(&v140);
          goto LABEL_105;
        }
        if ( (v43 & 0x400) != 0 || (v43 & 0x800) == 0 )
          break;
        v45 = MiInvalidPteConforms(v43, 0xFFFFF6FB7DBED000uLL, v21, v22);
        CurrentPrcb = 0xFFFFF6FB7DBED000uLL;
        if ( !v45 )
          continue;
        v44 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v140);
LABEL_105:
        v22 = v44;
        CurrentPrcb = 0xFFFFF6FB7DBED000uLL;
        if ( v44 <= qword_1403885E0
          && (!MmPhysicalMemoryBlock || (*(_QWORD *)(48 * v44 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) != 0) )
        {
          v46 = 48 * v44 - 0x58000000000LL;
          v132 = v26;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v46 + 24), 0x3FuLL) )
          {
            do
            {
              do
                KeYieldProcessorEx(&v132);
              while ( *(__int64 *)(v46 + 24) < 0 );
            }
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v46 + 24), 0x3FuLL) );
            v26 = 0LL;
          }
          v47 = *(_QWORD *)v18;
          CurrentPrcb = 0xFFFFF6FB7DBED000uLL;
          if ( v18 >= 0xFFFFF6FB7DBED000uLL && v18 <= 0xFFFFF6FB7DBED7F8uLL )
          {
            v47 = MiReadPteShadow(v18, *(_QWORD *)v18);
            CurrentPrcb = 0xFFFFF6FB7DBED000uLL;
          }
          if ( v47 == v43 )
            goto LABEL_118;
          _InterlockedAnd64((volatile signed __int64 *)(v46 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
      }
      v46 = v26;
LABEL_118:
      v120 = v46;
      if ( !v46 )
      {
        if ( v116 )
        {
          v48 = *(_QWORD *)v18;
          if ( v18 >= 0xFFFFF6FB7DBED000uLL && v18 <= 0xFFFFF6FB7DBED7F8uLL )
            v48 = MiReadPteShadow(v18, *(_QWORD *)v18);
          v126 = v48;
          if ( (v48 & 0x400) == 0 )
          {
            if ( (unsigned int)MiGetPagingFileOffset(&v126) )
            {
              MiUnlockProtoPoolPage(v16, v113[0]);
              v16 = 0LL;
              if ( (v5 & 2) == 0 || (unsigned int)MiPageHasRelocations(v8, (unsigned int)v19) )
              {
                EffectivePagePriorityThread = MiGetEffectivePagePriorityThread((__int64)v144);
                if ( EffectivePagePriorityThread > 5 )
                  EffectivePagePriorityThread = 5;
                if ( v18 == v141 )
                {
                  v51 = 4096;
                }
                else
                {
                  v141 = v18;
                  v51 = (unsigned int)((__int64)(v138 - v18) >> 3) << 12;
                }
                if ( (int)MiPrefetchControlArea((_DWORD)v8, v50, v51, EffectivePagePriorityThread, 2, a4) < 0 )
                  KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
                v26 = 0LL;
                v14 = 0;
                v114 = 0;
LABEL_345:
                v10 = v118;
LABEL_346:
                v5 = a3;
                if ( v18 >= v138 )
                {
LABEL_347:
                  if ( v16 )
                  {
                    MiUnlockProtoPoolPage(v16, v113[0]);
                    v16 = 0LL;
                  }
                  goto LABEL_349;
                }
                continue;
              }
            }
          }
        }
LABEL_145:
        v14 = v114;
LABEL_146:
        v119 += 4096LL;
        v18 += 8LL;
        v19 = (unsigned int)(v19 + 1);
        v26 = 0LL;
LABEL_344:
        v122 = v18;
        v117 = v19;
        goto LABEL_345;
      }
      break;
    }
    v52 = *(_QWORD *)v18;
    if ( v18 >= 0xFFFFF6FB7DBED000uLL && v18 <= 0xFFFFF6FB7DBED7F8uLL )
      v52 = MiReadPteShadow(v18, *(_QWORD *)v18);
    v126 = v52;
    if ( (v52 & 1) != 0 )
      v53 = MI_GET_PAGE_FRAME_FROM_PTE(&v126);
    else
      v53 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v126);
    v54 = v53;
    v137 = v53;
    if ( (a3 & 4) != 0 )
    {
      if ( (unsigned int)MiIsPfnSystemCharged(v46) )
      {
        MiDriverPageIsDangling();
        *(_BYTE *)(v46 + 35) &= ~0x20u;
      }
      goto LABEL_144;
    }
    if ( (a3 & 1) != 0 && ((*(_QWORD *)(v46 + 40) >> 54) & 7) == 3
      || (v55 = v116, (*(_DWORD *)(v46 + 16) & 0x400LL) == 0) && !v116 )
    {
LABEL_144:
      _InterlockedAnd64((volatile signed __int64 *)(v46 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      goto LABEL_145;
    }
    if ( !v22 && (*(_BYTE *)(v46 + 34) & 0x20) != 0 )
    {
      if ( (a3 & 2) == 0 || (v8[7] & 2) != 0 )
      {
        v133 = 1;
        MiObtainProtoReference(v16, 1);
        MiWaitForCollidedFaultComplete(v46, v16, 0, 0, 17, v113[0], (__int64)&v133);
        v26 = 0LL;
        v16 = 0LL;
        v114 = 0;
        v14 = 0;
        goto LABEL_345;
      }
      MiDeleteTransitionPte((ULONG_PTR *)v18, v46, 0x11u, 1);
      goto LABEL_145;
    }
    v56 = 8;
    v124 = 8;
    if ( !v22 )
    {
      v57 = *(_BYTE *)(v46 + 35);
      if ( (v57 & 8) != 0 )
      {
        v56 = v57 & 7;
        v124 = v56;
      }
      if ( !(unsigned int)MiUnlinkPageFromList(v46) )
      {
        MiDiscardTransitionPte(v46);
        _InterlockedAnd64((volatile signed __int64 *)(v46 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v8 = a1;
        v14 = v114;
        if ( v55 == 1 )
        {
          v26 = 0LL;
          goto LABEL_345;
        }
        goto LABEL_146;
      }
      *(_QWORD *)(v46 + 24) &= 0xC000000000000000uLL;
    }
    v58 = *(_QWORD *)(v46 + 40);
    if ( (v58 & 0x10000000000000LL) != 0 )
      goto LABEL_187;
    v59 = *(_WORD *)(v46 + 32);
    v60 = *(_QWORD *)(v46 + 24) & 0x3FFFFFFFFFFFFFFFLL;
    if ( !v59 )
      goto LABEL_172;
    if ( v59 != 1 )
    {
      if ( v59 == 2 && v60 )
      {
LABEL_171:
        if ( (*(_BYTE *)(v46 + 34) & 8) != 0 )
          goto LABEL_172;
      }
      goto LABEL_187;
    }
    if ( !v60 )
      goto LABEL_171;
LABEL_172:
    if ( (v58 & 0x200000000000000LL) != 0 && (*(_DWORD *)(v46 + 16) & 0x400LL) != 0 )
    {
      v61 = 1;
    }
    else
    {
      IsPfnCommitNotCharged = MiIsPfnCommitNotCharged(v46, 0x3FFFFFFFFFFFFFFFLL);
      v61 = v63;
      if ( IsPfnCommitNotCharged )
        v61 = 1;
    }
    v64 = (v58 >> 40) & 0x3FF;
    v65 = *(ULONG_PTR **)(qword_140388AF0 + 8 * v64);
    if ( !v61 || (unsigned int)MiChargeCommit(*(_QWORD *)(qword_140388AF0 + 8 * v64), 1LL, 4LL) )
    {
      if ( v65 == &MiSystemPartition )
      {
        v66 = KeGetCurrentPrcb();
        CachedResidentAvailable = v66->CachedResidentAvailable;
        while ( CachedResidentAvailable )
        {
          if ( CachedResidentAvailable == -1 )
            break;
          v68 = CachedResidentAvailable;
          CachedResidentAvailable = _InterlockedCompareExchange(
                                      (volatile signed __int32 *)&v66->CachedResidentAvailable,
                                      CachedResidentAvailable - 1,
                                      CachedResidentAvailable);
          if ( v68 == CachedResidentAvailable )
            goto LABEL_187;
        }
      }
      if ( !(unsigned int)MiChargePartitionResidentAvailable(v65) )
      {
        if ( v61 )
          MiReturnCommit((__int64)v65, 1uLL);
        goto LABEL_188;
      }
LABEL_187:
      ++*(_WORD *)(v46 + 32);
    }
LABEL_188:
    _InterlockedAnd64((volatile signed __int64 *)(v46 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v69 = 0;
    v134 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v134);
        while ( *(__int64 *)(v16 + 24) < 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) );
      v69 = 0;
    }
    *(_BYTE *)(v16 + 34) &= ~0x20u;
    v70 = *(unsigned __int16 *)(v16 + 32);
    if ( !(_WORD)v70 )
      MiBadRefCount(v16, v70);
    v15 = (_WORD)v70 == 1;
    LOWORD(v70) = v70 - 1;
    *(_WORD *)(v16 + 32) = v70;
    if ( v15 && (unsigned int)MiIsPfnFileOnly(v16) )
      goto LABEL_233;
    v71 = *(_QWORD *)(v16 + 40);
    v22 = (*(_QWORD *)(v16 + 24) >> 62) & 1LL;
    if ( (v71 & 0x10000000000000LL) == 0 )
    {
      v72 = *(_QWORD *)(v16 + 24) & 0x3FFFFFFFFFFFFFFFLL;
      if ( !(_WORD)v70 )
      {
        v73 = 1;
        goto LABEL_205;
      }
      if ( (_WORD)v70 != 1 )
      {
        if ( (_WORD)v70 == 2 && v72 )
        {
LABEL_202:
          if ( (*(_BYTE *)(v16 + 34) & 8) != 0 )
            goto LABEL_203;
        }
        goto LABEL_234;
      }
      if ( !v72 )
        goto LABEL_202;
LABEL_203:
      v73 = v69;
LABEL_205:
      v21 = 0xFFFFF6BFFFFFFF78uLL;
      v70 = *(_QWORD *)(v16 + 8) | 0x8000000000000000uLL;
      if ( v70 > 0xFFFFF6BFFFFFFF78uLL || v70 < 0xFFFFF68000000000uLL )
      {
        v74 = *(_BYTE *)(v16 + 35);
        if ( (v74 & 0x20) != 0 )
        {
          *(_BYTE *)(v16 + 35) = v74 & 0xDF;
          goto LABEL_232;
        }
      }
      v75 = v69;
      if ( (v71 & 0x200000000000000LL) != 0 && (*(_DWORD *)(v16 + 16) & 0x400LL) != 0 )
      {
        v75 = 1;
      }
      else if ( v70 <= 0xFFFFF6BFFFFFFF78uLL && v70 >= 0xFFFFF68000000000uLL && (*(_BYTE *)(v16 + 35) & 0x20) != 0 )
      {
        v75 = 1;
      }
      else if ( v73 == 1 && (_DWORD)v22 )
      {
        v75 = 1;
      }
      v76 = *(_QWORD *)(qword_140388AF0 + 8 * ((v71 >> 40) & 0x3FF));
      if ( v75 == 1 )
        MiReturnCommit(v76, 1uLL);
      if ( (ULONG_PTR *)v76 != &MiSystemPartition )
      {
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v76 + 6016), 1uLL);
        goto LABEL_232;
      }
      v21 = (unsigned __int64)KeGetCurrentPrcb();
      v22 = 1LL;
      v70 = *(int *)(v21 + 24604);
      if ( (_DWORD)v70 != -1 )
      {
        if ( v70 + 1 <= 0x100 )
        {
          while ( 1 )
          {
            v77 = _InterlockedCompareExchange((volatile signed __int32 *)(v21 + 24604), v70 + 1, v70);
            v15 = (_DWORD)v70 == v77;
            v70 = v77;
            if ( v15 )
              break;
            if ( v77 == -1 || (unsigned __int64)(v77 + 1LL) > 0x100 )
              goto LABEL_227;
          }
LABEL_232:
          if ( v73 )
LABEL_233:
            MiPfnReferenceCountIsZero(v16, (v16 + 0x58000000000LL) / 48);
          goto LABEL_234;
        }
LABEL_227:
        if ( (int)v70 > 192
          && (_DWORD)v70 == _InterlockedCompareExchange((volatile signed __int32 *)(v21 + 24604), 192, v70) )
        {
          v22 = (int)v70 - 192 + 1LL;
        }
      }
      v22 = _InterlockedExchangeAdd64(&qword_14038B840, v22);
      goto LABEL_232;
    }
LABEL_234:
    if ( v113[0] == 17 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    else
    {
      _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v113[0]);
    }
    v78 = *(_QWORD *)(v46 + 40);
    v16 = 0LL;
    if ( (*(_QWORD *)(v46 + 24) & 0x4000000000000000LL) != 0 )
    {
      if ( (v78 & 0x10000000000000LL) == 0 )
        goto LABEL_239;
LABEL_245:
      v79 = 1;
    }
    else
    {
      if ( (v78 & 0x10000000000000LL) != 0 )
        goto LABEL_245;
LABEL_239:
      v79 = 0;
    }
    v121 = v79;
    if ( !v135 )
    {
      v81 = a3;
      if ( (a3 & 2) != 0 )
      {
        if ( (MiFlags & 0x4000) != 0 && (*((_DWORD *)a1 + 23) & 0xC0000) != 0 && ((v78 >> 54) & 7) == 3 )
        {
          v114 = 0;
          goto LABEL_254;
        }
        v112 = 0;
        v82 = MiRelocateImagePfn(a1, a2, (unsigned int)v117, v54);
      }
      else
      {
        v82 = MiValidateImagePfn(
                (_DWORD)a1,
                v119,
                (_DWORD)Process,
                v117,
                v112,
                (*((unsigned __int16 *)v127 + 16) >> 1) & 0x1F,
                v54);
      }
      v114 = v82;
      goto LABEL_254;
    }
    if ( (unsigned int)MiPageHasRelocations(a1, (unsigned int)v117) )
    {
      v80 = MiSplitDirectMapPage(v127, v147, v54);
      v137 = v80;
      *(_QWORD *)v46 ^= (*(_QWORD *)v46 ^ (v128 >> 3)) & 0xFFFFFFFFFFELL;
      v120 = 48 * v80 - 0x58000000000LL;
    }
    v81 = a3;
LABEL_254:
    if ( v56 != 8 && !BugCheckParameter2 && !v79 )
      BugCheckParameter2 = MiCreateDecayPfn(v56);
    v142 = 0LL;
    v83 = 0LL;
    v84 = KeGetCurrentIrql();
    __writecr8(2uLL);
    v85 = v120;
    v136 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v85 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v136);
      while ( *(__int64 *)(v85 + 24) < 0 );
    }
    v86 = v120;
    v113[0] = v84;
    if ( (v81 & 2) != 0 )
    {
      v87 = *(_QWORD *)(v120 + 16);
      v88 = v120 + 16;
      v70 = 0xFFFFF6FB7DBED000uLL;
      if ( (unsigned __int64)(v120 + 16) >= 0xFFFFF6FB7DBED000uLL )
      {
        v70 = 0xFFFFF6FB7DBED7F8uLL;
        if ( v88 <= 0xFFFFF6FB7DBED7F8uLL )
          v87 = MiReadPteShadow(v88, *(_QWORD *)(v120 + 16));
      }
      v126 = v87;
      if ( (v87 & 0x400) == 0 )
      {
        v83 = MiCaptureDirtyBitToPfn(v86);
        v142 = *(_QWORD *)(qword_140388AF0 + 8 * ((*(_QWORD *)(v86 + 40) >> 40) & 0x3FFLL));
      }
    }
    v89 = *(_WORD *)(v86 + 32);
    if ( !v89 )
      MiBadRefCount(v86, v70);
    CurrentPrcb = 0x10000000000000LL;
    v15 = v89 == 1;
    v90 = v89 - 1;
    *(_WORD *)(v86 + 32) = v90;
    if ( v15 && (*(_QWORD *)(v86 + 40) & 0x10000000000000LL) != 0 )
    {
LABEL_321:
      if ( !v121
        || v56 == 8
        || (*(_BYTE *)(v86 + 34) & 0x10) != 0
        || (*(_QWORD *)(v85 + 24) & 0x4000000000000000LL) != 0 )
      {
        MiPfnReferenceCountIsZero(v86, v137);
        goto LABEL_327;
      }
      MiInsertAndUnlockStandbyPages(BugCheckParameter2, &v120, 1LL, v84);
      v113[0] = 17;
    }
    else
    {
      v91 = *(_QWORD *)(v86 + 40);
      v92 = (*(_QWORD *)(v85 + 24) >> 62) & 1LL;
      if ( (v91 & 0x10000000000000LL) == 0 )
      {
        CurrentPrcb = 0x3FFFFFFFFFFFFFFFLL;
        v93 = *(_QWORD *)(v85 + 24) & 0x3FFFFFFFFFFFFFFFLL;
        if ( !v90 )
        {
          CurrentPrcb = 0LL;
          v94 = 1;
          goto LABEL_280;
        }
        if ( v90 == 1 )
        {
          if ( !v93 )
            goto LABEL_277;
LABEL_278:
          CurrentPrcb = 0LL;
          v94 = 0;
LABEL_280:
          v21 = 0xFFFFF68000000000uLL;
          v22 = 0x8000000000000000uLL;
          v95 = *(_QWORD *)(v86 + 8) | 0x8000000000000000uLL;
          if ( v95 > 0xFFFFF6BFFFFFFF78uLL || v95 < 0xFFFFF68000000000uLL )
          {
            v96 = *(_BYTE *)(v86 + 35);
            if ( (v96 & 0x20) != 0 )
            {
              *(_BYTE *)(v86 + 35) = v96 & 0xDF;
              goto LABEL_319;
            }
          }
          if ( (v91 & 0x200000000000000LL) != 0 && (*(_DWORD *)(v86 + 16) & 0x400LL) != 0 )
          {
            v97 = 1;
          }
          else if ( (unsigned int)MiIsPfnCommitNotCharged(v86, 0LL) )
          {
            v97 = 1;
          }
          else if ( v94 == 1 && (_DWORD)v92 )
          {
            v97 = 1;
          }
          v98 = *(_QWORD *)(qword_140388AF0 + 8 * ((v91 >> 40) & 0x3FF));
          if ( v97 == 1 )
          {
            v99 = *(_QWORD *)(v98 + 5120);
            v21 = 1LL;
            if ( v99 )
            {
              while ( 1 )
              {
                CurrentPrcb = 1LL;
                v100 = v99;
                v99 = _InterlockedCompareExchange64((volatile signed __int64 *)(v98 + 5120), v99 - 1, v99);
                if ( v100 == v99 )
                  break;
                if ( !v99 )
                  goto LABEL_298;
              }
              v21 = 0LL;
            }
            else
            {
LABEL_298:
              if ( (ULONG_PTR *)v98 == &MiSystemPartition
                && (v22 = (unsigned __int64)KeGetCurrentPrcb(),
                    _m_prefetchw((const void *)(v22 + 24600)),
                    CurrentPrcb = *(unsigned int *)(v22 + 24600),
                    CurrentPrcb + 1 <= 0x100) )
              {
                while ( 1 )
                {
                  v101 = _InterlockedCompareExchange(
                           (volatile signed __int32 *)(v22 + 24600),
                           CurrentPrcb + 1,
                           CurrentPrcb);
                  if ( v101 == CurrentPrcb )
                    break;
                  CurrentPrcb = v101;
                  if ( v101 + 1 > 0x100 )
                    goto LABEL_302;
                }
              }
              else
              {
LABEL_302:
                v102 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v98 + 6320), 0xFFFFFFFFFFFFFFFFuLL);
                v103 = *(_QWORD *)(v98 + 5088);
                if ( v102 >= v103 && v102 - 1 < v103
                  || (CurrentPrcb = *(_QWORD *)(v98 + 5080), v102 - 1 < CurrentPrcb) && v102 >= CurrentPrcb )
                {
                  MiSyncCommitSignals(v98, 0LL, 1LL, v22);
                }
              }
            }
          }
          if ( (ULONG_PTR *)v98 == &MiSystemPartition )
          {
            v21 = (unsigned __int64)KeGetCurrentPrcb();
            v22 = 1LL;
            CurrentPrcb = *(int *)(v21 + 24604);
            if ( (_DWORD)CurrentPrcb != -1 )
            {
              if ( CurrentPrcb + 1 <= 0x100 )
              {
                do
                {
                  v104 = _InterlockedCompareExchange(
                           (volatile signed __int32 *)(v21 + 24604),
                           CurrentPrcb + 1,
                           CurrentPrcb);
                  v15 = (_DWORD)CurrentPrcb == v104;
                  CurrentPrcb = v104;
                  if ( v15 )
                    goto LABEL_318;
                }
                while ( v104 != -1 && (unsigned __int64)(v104 + 1LL) <= 0x100 );
              }
              if ( (int)CurrentPrcb > 192
                && (_DWORD)CurrentPrcb == _InterlockedCompareExchange(
                                            (volatile signed __int32 *)(v21 + 24604),
                                            192,
                                            CurrentPrcb) )
              {
                v22 = (int)CurrentPrcb - 192 + 1LL;
              }
            }
            v22 = _InterlockedExchangeAdd64(&qword_14038B840, v22);
          }
          else
          {
            _InterlockedExchangeAdd64((volatile signed __int64 *)(v98 + 6016), 1uLL);
          }
LABEL_318:
          v86 = v120;
LABEL_319:
          if ( v94 )
          {
            v56 = v124;
            goto LABEL_321;
          }
        }
        else if ( v90 == 2 && v93 )
        {
LABEL_277:
          if ( (*(_BYTE *)(v86 + 34) & 8) != 0 )
            goto LABEL_278;
        }
      }
LABEL_327:
      if ( v84 != 17 )
        _InterlockedAnd64((volatile signed __int64 *)(v85 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    if ( v83 )
      MiReleasePageFileInfo(v142, v83, 1LL);
    if ( v113[0] != 17 )
    {
      __writecr8(v113[0]);
      v113[0] = 17;
    }
    v14 = v114;
    if ( v114 < 0 )
    {
      v109 = 58;
      if ( v114 == -1073741670 )
        v109 = 36;
      dword_1403882F8 = v109;
    }
    else
    {
      if ( !v118 )
      {
        v18 = v122;
        LODWORD(v19) = v117;
        v8 = a1;
        goto LABEL_146;
      }
      if ( v128 )
      {
        v8 = a1;
        v105 = MiGetNextDirectFixupProto(a1, v128);
        v106 = *(_QWORD *)(CurrentPrcb + 8);
        v128 = v105;
        v10 = v106 | 0x8000000000000000uLL;
        v118 = v10;
        if ( v10 < v138 )
        {
          v18 = v10;
          v107 = (__int64)(v10 - v122) >> 3;
          LODWORD(v19) = v107 + v117;
          v122 = v10;
          v119 += v107 << 12;
          v26 = 0LL;
          v117 = (unsigned int)(v107 + v117);
          goto LABEL_346;
        }
LABEL_349:
        v17 = v123;
LABEL_350:
        v127 = v146;
        v12 = v146;
        if ( v146 )
        {
          v5 = a3;
LABEL_10:
          v7 = a4;
          continue;
        }
      }
    }
    break;
  }
  if ( BugCheckParameter2 )
    MiDecayPfnFullyInitialized(BugCheckParameter2);
  if ( v125 )
  {
    v110 = v143;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v143 + 40), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v110 + 40);
    KeAbPostRelease(v110 + 40);
    KiLeaveGuardedRegionUnsafe(v144);
  }
  return v14;
}
