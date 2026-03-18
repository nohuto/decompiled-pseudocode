/*
 * XREFs of MiWalkEntireImage @ 0x1400C9D50
 * Callers:
 *     MiValidateSectionCreate @ 0x140422CC0 (MiValidateSectionCreate.c)
 *     MiSwitchBaseAddress @ 0x1404499D4 (MiSwitchBaseAddress.c)
 *     MiRelocateImage @ 0x140495140 (MiRelocateImage.c)
 *     MiUnloadSystemImage @ 0x1404B29B4 (MiUnloadSystemImage.c)
 * Callees:
 *     MiChargePartitionResidentAvailable @ 0x14000D798 (MiChargePartitionResidentAvailable.c)
 *     MiDecayPfnFullyInitialized @ 0x140016720 (MiDecayPfnFullyInitialized.c)
 *     MiCreateDecayPfn @ 0x14001B2A0 (MiCreateDecayPfn.c)
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     MiGetPagingFileOffset @ 0x14007720C (MiGetPagingFileOffset.c)
 *     MiDeleteTransitionPte @ 0x14007A23C (MiDeleteTransitionPte.c)
 *     MiLockProtoPoolPage @ 0x1400A1530 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x1400A3920 (MiUnlockProtoPoolPage.c)
 *     MiReleasePageFileInfo @ 0x1400ABFD4 (MiReleasePageFileInfo.c)
 *     MiIsPfnInline @ 0x1400B54F0 (MiIsPfnInline.c)
 *     MmAccessFault @ 0x1400BDCD0 (MmAccessFault.c)
 *     MiUnlinkPageFromList @ 0x1400C3100 (MiUnlinkPageFromList.c)
 *     MiInsertAndUnlockStandbyPages @ 0x1400C4D40 (MiInsertAndUnlockStandbyPages.c)
 *     MiPfnReferenceCountIsZero @ 0x1400C9020 (MiPfnReferenceCountIsZero.c)
 *     MiIsPfnFileOnly @ 0x1400CB1E0 (MiIsPfnFileOnly.c)
 *     MiAreChargesNeededToLockPage @ 0x1400CB220 (MiAreChargesNeededToLockPage.c)
 *     MiIsPfnCommitNotCharged @ 0x1400CCF10 (MiIsPfnCommitNotCharged.c)
 *     MiStartingOffset @ 0x1400CDBF0 (MiStartingOffset.c)
 *     MiReturnCommit @ 0x1400CE240 (MiReturnCommit.c)
 *     MiChargeCommit @ 0x1400D0C60 (MiChargeCommit.c)
 *     KeDelayExecutionThread @ 0x1400EE150 (KeDelayExecutionThread.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     MiWriteValidPteVolatile @ 0x1400FDBE0 (MiWriteValidPteVolatile.c)
 *     MiGetEffectivePagePriorityThread @ 0x1400FE040 (MiGetEffectivePagePriorityThread.c)
 *     MiCaptureDirtyBitToPfn @ 0x140100BFC (MiCaptureDirtyBitToPfn.c)
 *     MiInitializePageColorBase @ 0x1401069F0 (MiInitializePageColorBase.c)
 *     MiObtainProtoReference @ 0x140109844 (MiObtainProtoReference.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 *     MiWaitForCollidedFaultComplete @ 0x1401180BC (MiWaitForCollidedFaultComplete.c)
 *     MiDiscardTransitionPte @ 0x14013B9CC (MiDiscardTransitionPte.c)
 *     MiIsPfnSystemCharged @ 0x140147870 (MiIsPfnSystemCharged.c)
 *     MiSyncCommitSignals @ 0x140159D20 (MiSyncCommitSignals.c)
 *     MiInvalidPteConforms @ 0x14017CEB0 (MiInvalidPteConforms.c)
 *     MiBadRefCount @ 0x14017D194 (MiBadRefCount.c)
 *     MiDriverPageIsDangling @ 0x140211754 (MiDriverPageIsDangling.c)
 *     MiSplitDirectMapPage @ 0x1402191C4 (MiSplitDirectMapPage.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x14021EE14 (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetSharedProtos @ 0x140221220 (MiGetSharedProtos.c)
 *     MiValidateImagePfn @ 0x1404234F4 (MiValidateImagePfn.c)
 *     MiPrefetchControlArea @ 0x140423A90 (MiPrefetchControlArea.c)
 *     MiRelocateImagePfn @ 0x140518C20 (MiRelocateImagePfn.c)
 *     MiGetNextDirectFixupProto @ 0x1406BDA50 (MiGetNextDirectFixupProto.c)
 *     MiPageHasRelocations @ 0x1406BDA6C (MiPageHasRelocations.c)
 */

__int64 __fastcall MiWalkEntireImage(__int64 *a1, __int64 a2, char a3, unsigned int a4)
{
  unsigned int v4; // edx
  unsigned int v5; // r11d
  __int64 v6; // r9
  char v7; // r12
  __int64 *v8; // rsi
  __int64 NextDirectFixupProto; // rax
  unsigned __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 *v13; // rcx
  struct _KTHREAD *CurrentThread; // rdx
  unsigned int v15; // r15d
  bool v16; // zf
  __int64 v17; // r14
  __int64 v18; // r8
  unsigned __int64 v19; // rdi
  __int64 v20; // r13
  __int64 SharedProtos; // rax
  unsigned __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rbx
  __int64 v25; // rax
  __int64 v26; // r10
  unsigned __int64 v27; // rax
  __int64 v28; // r9
  int v29; // r10d
  unsigned __int8 CurrentIrql; // si
  __int64 v31; // rax
  ULONG_PTR v32; // r11
  __int64 v33; // rcx
  unsigned __int64 v34; // rdx
  __int16 v35; // ax
  bool v36; // bl
  ULONG_PTR *v37; // rdi
  struct _KPRCB *CurrentPrcb; // rdx
  signed __int32 CachedResidentAvailable; // eax
  signed __int32 v40; // ett
  unsigned __int64 v41; // rcx
  unsigned __int64 v42; // rbx
  char v43; // al
  __int64 v44; // rax
  ULONG_PTR v45; // r10
  unsigned __int64 v46; // rax
  __int64 v47; // r9
  int v48; // r10d
  ULONG_PTR v49; // rbx
  __int64 v50; // rax
  __int64 v51; // r8
  __int64 v52; // r9
  unsigned int EffectivePagePriorityThread; // eax
  int v54; // edx
  unsigned int v55; // r8d
  __int64 v56; // rax
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // r15
  unsigned int v60; // r12d
  char v61; // al
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  unsigned __int64 v65; // r10
  char v66; // si
  int IsPfnCommitNotCharged; // eax
  char v68; // r11
  __int64 v69; // r10
  ULONG_PTR *v70; // rdi
  struct _KPRCB *v71; // rdx
  signed __int32 v72; // eax
  signed __int32 v73; // ett
  int v74; // edi
  __int64 v75; // rdx
  __int16 v76; // dx
  struct _KPRCB *v77; // r8
  unsigned __int64 v78; // r9
  __int64 v79; // rax
  int v80; // esi
  unsigned __int64 v81; // rdx
  int v82; // ecx
  unsigned __int64 v83; // rdi
  __int64 v84; // rdi
  __int64 v85; // rdx
  signed __int32 v86; // eax
  unsigned __int64 v87; // rcx
  __int64 v88; // rax
  char v89; // si
  int v90; // eax
  unsigned __int64 v91; // rbx
  unsigned __int8 v92; // r13
  __int64 v93; // r15
  __int64 v94; // rdi
  __int64 v95; // rdx
  __int16 v96; // dx
  __int64 v97; // rsi
  __int64 v98; // rax
  int v99; // r12d
  unsigned __int64 v100; // rcx
  unsigned __int64 v101; // r11
  int v102; // r10d
  __int64 v103; // rdi
  signed __int64 v104; // rax
  signed __int64 v105; // rtt
  struct _KPRCB *v106; // r9
  __int64 CachedCommit; // rdx
  __int64 v108; // rcx
  unsigned __int64 v109; // rcx
  unsigned __int64 v110; // rdx
  unsigned __int64 v111; // rdx
  struct _KPRCB *v112; // r8
  unsigned __int64 v113; // r9
  __int64 v114; // rdx
  signed __int32 v115; // eax
  __int64 v116; // rax
  __int64 v117; // rdx
  __int64 v118; // rbx
  __int64 v119; // rax
  unsigned __int64 v120; // rcx
  int v121; // eax
  __int64 v122; // rbx
  int v124; // [rsp+20h] [rbp-E0h]
  unsigned __int8 v125; // [rsp+40h] [rbp-C0h] BYREF
  char i; // [rsp+41h] [rbp-BFh]
  int v127; // [rsp+44h] [rbp-BCh]
  int v128; // [rsp+48h] [rbp-B8h]
  int v129; // [rsp+4Ch] [rbp-B4h]
  __int64 v130; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v131; // [rsp+58h] [rbp-A8h]
  __int64 v132; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v133; // [rsp+68h] [rbp-98h]
  ULONG_PTR v134; // [rsp+70h] [rbp-90h] BYREF
  __int64 v135; // [rsp+78h] [rbp-88h]
  int v136; // [rsp+80h] [rbp-80h]
  int v137; // [rsp+84h] [rbp-7Ch]
  __int64 v138; // [rsp+88h] [rbp-78h] BYREF
  __int64 *v139; // [rsp+90h] [rbp-70h]
  __int64 v140; // [rsp+98h] [rbp-68h]
  PSLIST_ENTRY ListEntry; // [rsp+A0h] [rbp-60h]
  int v142; // [rsp+A8h] [rbp-58h] BYREF
  int v143; // [rsp+ACh] [rbp-54h] BYREF
  int v144; // [rsp+B0h] [rbp-50h] BYREF
  int v145; // [rsp+B4h] [rbp-4Ch] BYREF
  int v146; // [rsp+B8h] [rbp-48h] BYREF
  int v147; // [rsp+BCh] [rbp-44h]
  int v148; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v149; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v150; // [rsp+D0h] [rbp-30h] BYREF
  ULONG_PTR v151; // [rsp+D8h] [rbp-28h]
  unsigned __int64 v152; // [rsp+E0h] [rbp-20h]
  unsigned __int64 v153; // [rsp+E8h] [rbp-18h]
  struct _KEVENT *v154; // [rsp+F0h] [rbp-10h]
  __int64 v155; // [rsp+F8h] [rbp-8h]
  struct _KTHREAD *v156; // [rsp+100h] [rbp+0h]
  _KPROCESS *Process; // [rsp+108h] [rbp+8h]
  __int64 *v158; // [rsp+110h] [rbp+10h]
  _BYTE v159[88]; // [rsp+118h] [rbp+18h] BYREF

  v4 = *((_DWORD *)a1 + 14);
  v5 = a4;
  v6 = *a1;
  v7 = a3;
  v155 = *a1;
  v8 = a1;
  if ( (v4 & 0x40000000) == 0 || (a3 & 8) != 0 )
    v128 = (v4 >> 11) & 1;
  else
    v128 = 1;
  v147 = a3 & 8;
  if ( (a3 & 8) != 0 )
  {
    MiInitializePageColorBase(
      *(_QWORD *)(qword_14036C8F8 + 8LL * (*((_WORD *)a1 + 30) & 0x3FF)) + 6088LL,
      (v4 >> 20) & 0x3F,
      v159);
    NextDirectFixupProto = MiGetNextDirectFixupProto(v8, 0LL);
    v10 = *(_QWORD *)(NextDirectFixupProto + 8) | 0x8000000000000000uLL;
    v131 = v10;
    v12 = MiGetNextDirectFixupProto(v11, NextDirectFixupProto);
    v6 = v155;
    v140 = v12;
  }
  else
  {
    v10 = 0LL;
    v140 = 0LL;
    v131 = 0LL;
  }
  v13 = v8 + 16;
  CurrentThread = KeGetCurrentThread();
  v15 = 0;
  v16 = (v8[7] & 0x4000000) == 0;
  v17 = 0LL;
  v18 = v8[17];
  Process = CurrentThread->ApcState.Process;
  v139 = v8 + 16;
  v135 = v18;
  v125 = 17;
  v127 = 0;
  v137 = 0;
  ListEntry = 0LL;
  v156 = CurrentThread;
  if ( !v16 )
  {
    v137 = 1;
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockSharedEx(v6 + 40, 0LL);
    v18 = v135;
    v13 = v8 + 16;
    goto LABEL_10;
  }
  while ( 2 )
  {
    v19 = v13[1];
    v158 = (__int64 *)v13[2];
    v20 = (__int64)(v19 - v18) >> 3;
    v16 = (*((_BYTE *)v13 + 34) & 2) == 0;
    v133 = v19;
    v130 = v20;
    if ( !v16 )
    {
      if ( (v7 & 1) != 0 )
        goto LABEL_317;
      if ( (v8[7] & 0x4000000) != 0 )
      {
        if ( !v13[3] )
          goto LABEL_317;
        SharedProtos = MiGetSharedProtos(v8, v5, v13);
        if ( !SharedProtos )
          goto LABEL_316;
        v19 = *(_QWORD *)(SharedProtos + 32);
        v13 = v139;
        v133 = v19;
      }
    }
    v132 = MiStartingOffset(v13, v19, a4);
    v22 = v19 + 8LL * *((unsigned int *)v139 + 11);
    v152 = v22;
    if ( v10 )
    {
      if ( v10 >= v22 )
        goto LABEL_316;
      v133 = v10;
      v23 = v10 - v19;
      v19 = v10;
      v23 >>= 3;
      v20 = (unsigned int)(v23 + v20);
      v130 = v20;
      v132 += v23 << 12;
    }
    v153 = 0LL;
    if ( v19 >= v22 )
      goto LABEL_314;
    while ( 2 )
    {
      if ( (v19 & 0xFFF) != 0 )
      {
        if ( v17 )
          goto LABEL_84;
      }
      else if ( v17 )
      {
        MiUnlockProtoPoolPage(v17, v125);
      }
      if ( v128 == 1 )
      {
        v17 = MiLockProtoPoolPage(v19, &v125);
        goto LABEL_83;
      }
      v24 = ((v19 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      while ( 1 )
      {
        while ( 1 )
        {
          do
          {
            while ( 1 )
            {
              v25 = MI_READ_PTE_LOCK_FREE(v24);
              v149 = v25;
              if ( (v25 & 1) != 0 )
                break;
              if ( (v25 & 0x400) != 0 || (v25 & 0x800) == 0 )
                goto LABEL_306;
              if ( (unsigned int)MiInvalidPteConforms(v25) )
              {
                v27 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v149);
                goto LABEL_36;
              }
            }
            if ( (v25 & 0x200) != 0 )
              goto LABEL_306;
            v27 = MI_GET_PAGE_FRAME_FROM_PTE(&v149);
LABEL_36:
            ;
          }
          while ( !MiIsPfnInline(v27) );
          v17 = 48 * v28 - 0x58000000000LL;
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          v142 = v29;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) )
          {
            do
            {
              do
                KeYieldProcessorEx(&v142);
              while ( (*(_QWORD *)(v17 + 24) & 0x8000000000000000uLL) != 0 );
            }
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) );
            v15 = v127;
          }
          v125 = CurrentIrql;
          v31 = MI_READ_PTE_LOCK_FREE(v24);
          if ( v31 == v149 )
            break;
          _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          __writecr8(CurrentIrql);
        }
        if ( (v31 & 1) != 0 )
          break;
        if ( (*(_BYTE *)(v17 + 34) & 7u) < 6 )
          goto LABEL_305;
        _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(CurrentIrql);
        MmAccessFault(v32, v19, 0, 0LL);
      }
      v33 = *(_QWORD *)(v17 + 24) & 0x3FFFFFFFFFFFFFFFLL;
      if ( v33 == 1 )
      {
LABEL_305:
        _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(CurrentIrql);
LABEL_306:
        v125 = 17;
        v17 = v26;
LABEL_307:
        if ( v128 != 1 )
        {
          v120 = (unsigned __int64)(4096 - (unsigned int)(v19 & 0xFFF)) >> 3;
          v132 += v120 << 12;
          v20 = (unsigned int)(v120 + v20);
          v19 += 8 * v120;
          goto LABEL_310;
        }
        MmAccessFault(2uLL, v19, 0, 0LL);
LABEL_311:
        v8 = a1;
        goto LABEL_312;
      }
      v34 = *(_QWORD *)(v17 + 40);
      if ( (v34 & 0x10000000000000LL) != 0 )
        goto LABEL_71;
      v35 = *(_WORD *)(v17 + 32);
      if ( !v35 )
        goto LABEL_55;
      if ( v35 != 1 )
      {
        if ( v35 == 2 && v33 )
        {
LABEL_54:
          if ( (*(_BYTE *)(v17 + 34) & 8) != 0 )
            goto LABEL_55;
        }
        goto LABEL_71;
      }
      if ( !v33 )
        goto LABEL_54;
LABEL_55:
      v36 = 0;
      if ( (v34 & 0x200000000000000LL) != 0 && (*(_DWORD *)(v17 + 16) & 0x400LL) != 0 )
      {
        v36 = 1;
      }
      else
      {
        v41 = *(_QWORD *)(v17 + 8) | 0x8000000000000000uLL;
        if ( v41 <= 0xFFFFF6BFFFFFFF78uLL && v41 >= 0xFFFFF68000000000uLL )
          v36 = ((*(unsigned __int8 *)(v17 + 35) >> 5) & 1) != 0;
      }
      v37 = *(ULONG_PTR **)(qword_14036C8F8 + 8 * ((v34 >> 40) & 0x3FF));
      if ( !v36 || (unsigned int)MiChargeCommit(v37, 1LL, 4LL) )
      {
        if ( v37 == &MiSystemPartition )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
          while ( CachedResidentAvailable )
          {
            if ( CachedResidentAvailable == -1 )
              break;
            v40 = CachedResidentAvailable;
            CachedResidentAvailable = _InterlockedCompareExchange(
                                        (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                        CachedResidentAvailable - 1,
                                        CachedResidentAvailable);
            if ( v40 == CachedResidentAvailable )
              goto LABEL_71;
          }
        }
        if ( !(unsigned int)MiChargePartitionResidentAvailable((__int64)v37, 1uLL, 0xFFFFFFFFLL) )
        {
          if ( v36 )
            MiReturnCommit(v37, 1LL);
          goto LABEL_72;
        }
LABEL_71:
        ++*(_WORD *)(v17 + 32);
      }
LABEL_72:
      v42 = *(_QWORD *)(v17 + 8) | 0x8000000000000000uLL;
      if ( (*(_BYTE *)(v17 + 34) & 0x20) != 0 )
      {
        do
        {
          _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( CurrentIrql != 17 )
            __writecr8(CurrentIrql);
          v43 = *(_BYTE *)(v17 + 34);
          v143 = 0;
          for ( i = v43; (i & 0x20) != 0; i = *(_BYTE *)(v17 + 34) )
            KeYieldProcessorEx(&v143);
          MiLockPageInline(v17);
        }
        while ( (*(_BYTE *)(v17 + 34) & 0x20) != 0 );
        LODWORD(v20) = v130;
      }
      *(_BYTE *)(v17 + 34) |= 0x20u;
      if ( (*(_QWORD *)(v17 + 24) & 0x4000000000000000LL) == 0 && (MI_READ_PTE_LOCK_FREE(v42) & 0x20) == 0 )
        MiWriteValidPteVolatile(v42, 1LL);
      _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v19 = v133;
      v8 = a1;
LABEL_83:
      if ( !v17 )
        goto LABEL_307;
LABEL_84:
      while ( 2 )
      {
        while ( 2 )
        {
          v44 = MI_READ_PTE_LOCK_FREE(v19);
          v150 = v44;
          if ( (v44 & 1) != 0 )
          {
            v46 = MI_GET_PAGE_FRAME_FROM_PTE(&v150);
LABEL_90:
            if ( MiIsPfnInline(v46) )
            {
              v49 = 48 * v47 - 0x58000000000LL;
              v144 = v48;
              if ( _interlockedbittestandset64((volatile signed __int32 *)(v49 + 24), 0x3FuLL) )
              {
                do
                {
                  do
                    KeYieldProcessorEx(&v144);
                  while ( (*(_QWORD *)(v49 + 24) & 0x8000000000000000uLL) != 0 );
                }
                while ( _interlockedbittestandset64((volatile signed __int32 *)(v49 + 24), 0x3FuLL) );
                LODWORD(v20) = v130;
              }
              v50 = MI_READ_PTE_LOCK_FREE(v19);
              if ( v50 == v150 )
                goto LABEL_98;
              _InterlockedAnd64((volatile signed __int64 *)(v49 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            }
            continue;
          }
          break;
        }
        if ( (v44 & 0x400) == 0 && (v44 & 0x800) != 0 )
        {
          if ( !(unsigned int)MiInvalidPteConforms(v44) )
            continue;
          v46 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v150);
          goto LABEL_90;
        }
        break;
      }
      v49 = v45;
LABEL_98:
      v134 = v49;
      if ( !v49 )
      {
        if ( v128 )
        {
          v138 = MI_READ_PTE_LOCK_FREE(v19);
          if ( (v138 & 0x400) == 0 )
          {
            if ( (unsigned int)MiGetPagingFileOffset((__int64)&v138) )
            {
              MiUnlockProtoPoolPage(v17, v125);
              v17 = 0LL;
              if ( (v7 & 2) == 0 || (unsigned int)MiPageHasRelocations(v8, (unsigned int)v20) )
              {
                EffectivePagePriorityThread = MiGetEffectivePagePriorityThread(
                                                v156,
                                                (unsigned int)((_DWORD)v20 << 12),
                                                v51,
                                                v52);
                if ( EffectivePagePriorityThread > 5 )
                  EffectivePagePriorityThread = 5;
                if ( v19 == v153 )
                {
                  v55 = 4096;
                }
                else
                {
                  v153 = v19;
                  v55 = (unsigned int)((__int64)(v152 - v19) >> 3) << 12;
                }
                if ( (int)MiPrefetchControlArea((_DWORD)v8, v54, v55, EffectivePagePriorityThread, 2, a4) < 0 )
                  KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
                v15 = 0;
                v127 = 0;
LABEL_312:
                v10 = v131;
LABEL_313:
                v7 = a3;
                if ( v19 >= v152 )
                {
LABEL_314:
                  if ( v17 )
                  {
                    MiUnlockProtoPoolPage(v17, v125);
                    v17 = 0LL;
                  }
                  goto LABEL_316;
                }
                continue;
              }
            }
          }
        }
LABEL_120:
        v132 += 4096LL;
        v19 += 8LL;
        v20 = (unsigned int)(v20 + 1);
LABEL_310:
        v133 = v19;
        v130 = v20;
        goto LABEL_311;
      }
      break;
    }
    v138 = MI_READ_PTE_LOCK_FREE(v19);
    if ( (v138 & 1) != 0 )
      v56 = MI_GET_PAGE_FRAME_FROM_PTE(&v138);
    else
      v56 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v138);
    v151 = v56;
    v59 = v56;
    if ( (v7 & 4) != 0 )
    {
      if ( (unsigned int)MiIsPfnSystemCharged(v49) )
      {
        MiDriverPageIsDangling();
        *(_BYTE *)(v49 + 35) &= ~0x20u;
      }
LABEL_118:
      _InterlockedAnd64((volatile signed __int64 *)(v49 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_119:
      v15 = v127;
      goto LABEL_120;
    }
    if ( (v7 & 1) != 0 && ((*(_QWORD *)(v49 + 40) >> 54) & 7) == 3 || (*(_DWORD *)(v49 + 16) & 0x400LL) == 0 && !v128 )
      goto LABEL_118;
    if ( !v58 && (*(_BYTE *)(v49 + 34) & 0x20) != 0 )
    {
      if ( (v7 & 2) == 0 || (v8[7] & 2) != 0 )
      {
        v145 = 1;
        MiObtainProtoReference(v17, 1LL);
        MiWaitForCollidedFaultComplete(v49, v17, 0, 0, 17, v125, (__int64)&v145);
        v17 = 0LL;
        v127 = 0;
        v15 = 0;
        goto LABEL_312;
      }
      LOBYTE(v57) = 17;
      MiDeleteTransitionPte((__int64 *)v19, v49, v57, 1LL);
      goto LABEL_119;
    }
    v60 = 8;
    v136 = 8;
    if ( !v58 )
    {
      v61 = *(_BYTE *)(v49 + 35);
      if ( (v61 & 8) != 0 )
      {
        v60 = v61 & 7;
        v136 = v60;
      }
      if ( !MiUnlinkPageFromList(v49, 0) )
      {
        MiDiscardTransitionPte(v49);
        _InterlockedAnd64((volatile signed __int64 *)(v49 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v128 == 1 )
        {
          v15 = v127;
          goto LABEL_312;
        }
        goto LABEL_119;
      }
      *(_QWORD *)(v49 + 24) &= 0xC000000000000000uLL;
    }
    if ( !(unsigned int)MiAreChargesNeededToLockPage(v49) )
      goto LABEL_154;
    v65 = *(_QWORD *)(v49 + 40);
    if ( (v65 & 0x200000000000000LL) != 0 && (*(_DWORD *)(v49 + 16) & 0x400LL) != 0 )
    {
      v66 = 1;
    }
    else
    {
      IsPfnCommitNotCharged = MiIsPfnCommitNotCharged(v62);
      v66 = v68;
      if ( IsPfnCommitNotCharged )
        v66 = 1;
    }
    v69 = (v65 >> 40) & 0x3FF;
    v70 = *(ULONG_PTR **)(qword_14036C8F8 + 8 * v69);
    if ( !v66 || (unsigned int)MiChargeCommit(*(_QWORD *)(qword_14036C8F8 + 8 * v69), 1LL, 4LL) )
    {
      if ( v70 == &MiSystemPartition )
      {
        v71 = KeGetCurrentPrcb();
        v72 = v71->CachedResidentAvailable;
        while ( v72 )
        {
          if ( v72 == -1 )
            break;
          v73 = v72;
          v72 = _InterlockedCompareExchange((volatile signed __int32 *)&v71->CachedResidentAvailable, v72 - 1, v72);
          if ( v73 == v72 )
            goto LABEL_154;
        }
      }
      if ( !(unsigned int)MiChargePartitionResidentAvailable((__int64)v70, 1uLL, 0xFFFFFFFFLL) )
      {
        if ( v66 )
          MiReturnCommit(v70, 1LL);
        goto LABEL_155;
      }
LABEL_154:
      ++*(_WORD *)(v49 + 32);
    }
LABEL_155:
    _InterlockedAnd64((volatile signed __int64 *)(v49 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v74 = 0;
    v146 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v146);
        while ( (*(_QWORD *)(v17 + 24) & 0x8000000000000000uLL) != 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) );
      LODWORD(v20) = v130;
    }
    v75 = *(unsigned __int16 *)(v17 + 32);
    *(_BYTE *)(v17 + 34) &= ~0x20u;
    if ( !(_WORD)v75 )
      MiBadRefCount(v17, v75, v63, v64);
    *(_WORD *)(v17 + 32) = v75 - 1;
    if ( (_WORD)v75 == 1 && (unsigned int)MiIsPfnFileOnly(v17) )
      goto LABEL_201;
    if ( !(unsigned int)MiIsPfnFileOnly(v17) )
    {
      v78 = *(_QWORD *)(v17 + 24);
      v79 = v78 & 0x3FFFFFFFFFFFFFFFLL;
      if ( !v76 )
      {
        v80 = 1;
        goto LABEL_172;
      }
      if ( v76 == 1 )
      {
        if ( !v79 )
          goto LABEL_169;
LABEL_170:
        v80 = 0;
LABEL_172:
        v77 = (struct _KPRCB *)0xFFFFF6BFFFFFFF78LL;
        v81 = *(_QWORD *)(v17 + 8) | 0x8000000000000000uLL;
        if ( (v81 > 0xFFFFF6BFFFFFFF78uLL || v81 < 0xFFFFF68000000000uLL)
          && ((*(unsigned __int8 *)(v17 + 35) >> 5) & 1) != 0 )
        {
          *(_BYTE *)(v17 + 35) &= ~0x20u;
          goto LABEL_200;
        }
        v82 = 0;
        v83 = *(_QWORD *)(v17 + 40);
        if ( (v83 & 0x200000000000000LL) != 0 && (*(_DWORD *)(v17 + 16) & 0x400LL) != 0 )
        {
          v82 = 1;
        }
        else if ( v81 <= 0xFFFFF6BFFFFFFF78uLL
               && v81 >= 0xFFFFF68000000000uLL
               && ((*(unsigned __int8 *)(v17 + 35) >> 5) & 1) != 0 )
        {
          v82 = 1;
        }
        else if ( v80 == 1 )
        {
          v78 >>= 62;
          if ( (v78 & 1) != 0 )
            v82 = 1;
        }
        v84 = *(_QWORD *)(qword_14036C8F8 + 8 * ((v83 >> 40) & 0x3FF));
        if ( v82 == 1 )
          MiReturnCommit(v84, 1LL);
        if ( (ULONG_PTR *)v84 == &MiSystemPartition )
        {
          v77 = KeGetCurrentPrcb();
          v78 = 1LL;
          v85 = (int)v77->CachedResidentAvailable;
          if ( (_DWORD)v85 != -1 )
          {
            if ( (unsigned __int64)(v85 + 1) <= 0x100 )
            {
              do
              {
                v86 = _InterlockedCompareExchange(
                        (volatile signed __int32 *)&v77->CachedResidentAvailable,
                        v85 + 1,
                        v85);
                v16 = (_DWORD)v85 == v86;
                LODWORD(v85) = v86;
                if ( v16 )
                  goto LABEL_199;
              }
              while ( v86 != -1 && (unsigned __int64)(v86 + 1LL) <= 0x100 );
            }
            if ( (int)v85 > 192
              && (_DWORD)v85 == _InterlockedCompareExchange(
                                  (volatile signed __int32 *)&v77->CachedResidentAvailable,
                                  192,
                                  v85) )
            {
              v78 = (int)v85 - 192 + 1LL;
            }
          }
          v78 = _InterlockedExchangeAdd64(&qword_1403818C0, v78);
        }
        else
        {
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v84 + 5824), 1uLL);
        }
LABEL_199:
        v74 = 0;
LABEL_200:
        if ( v80 )
LABEL_201:
          MiPfnReferenceCountIsZero(v17, (v17 + 0x58000000000LL) / 48);
      }
      else if ( v76 == 2 && v79 )
      {
LABEL_169:
        if ( (*(_BYTE *)(v17 + 34) & 8) != 0 )
          goto LABEL_170;
      }
    }
    if ( v125 == 17 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    else
    {
      _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v125);
    }
    v17 = 0LL;
    v87 = *(_QWORD *)(v49 + 40);
    if ( (*(_QWORD *)(v49 + 24) & 0x4000000000000000LL) == 0 )
    {
      if ( (v87 & 0x10000000000000LL) == 0 )
        goto LABEL_210;
      goto LABEL_209;
    }
    if ( (v87 & 0x10000000000000LL) != 0 )
LABEL_209:
      v74 = 1;
LABEL_210:
    v129 = v74;
    if ( !v147 )
    {
      v89 = a3;
      if ( (a3 & 2) != 0 )
      {
        if ( (MiFlags & 0x4000) != 0 && (*((_DWORD *)a1 + 23) & 0xC0000) != 0 && ((v87 >> 54) & 7) == 3 )
        {
          v127 = 0;
          goto LABEL_222;
        }
        v124 = 0;
        v90 = MiRelocateImagePfn(a1, a2, (unsigned int)v20, v59);
      }
      else
      {
        v90 = MiValidateImagePfn(
                (_DWORD)a1,
                v132,
                (_DWORD)Process,
                v20,
                v124,
                (*((unsigned __int16 *)v139 + 16) >> 1) & 0x1F,
                v59);
      }
      v127 = v90;
      goto LABEL_222;
    }
    if ( (unsigned int)MiPageHasRelocations(a1, (unsigned int)v20) )
    {
      v88 = MiSplitDirectMapPage(v139, v159, v59);
      v151 = v88;
      *(_QWORD *)v49 = v140;
      v134 = 48 * v88 - 0x58000000000LL;
    }
    v89 = a3;
LABEL_222:
    if ( v60 != 8 && !ListEntry && !v74 )
      ListEntry = MiCreateDecayPfn(v60);
    v154 = 0LL;
    v91 = 0LL;
    v92 = KeGetCurrentIrql();
    __writecr8(2uLL);
    v148 = 0;
    v93 = v134;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v134 + 24), 0x3FuLL) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v148);
        while ( (*(_QWORD *)(v93 + 24) & 0x8000000000000000uLL) != 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v93 + 24), 0x3FuLL) );
      v89 = a3;
    }
    v94 = v134;
    v125 = v92;
    if ( (v89 & 2) != 0 )
    {
      v138 = MI_READ_PTE_LOCK_FREE(v134 + 16);
      if ( (v138 & 0x400) == 0 )
      {
        v91 = MiCaptureDirtyBitToPfn(v94);
        v154 = *(struct _KEVENT **)(qword_14036C8F8 + 8 * ((*(_QWORD *)(v94 + 40) >> 40) & 0x3FFLL));
      }
    }
    v95 = *(unsigned __int16 *)(v94 + 32);
    if ( !(_WORD)v95 )
      MiBadRefCount(v94, v95, v77, v78);
    *(_WORD *)(v94 + 32) = v95 - 1;
    if ( (_WORD)v95 == 1 && (*(_QWORD *)(v94 + 40) & 0x10000000000000LL) != 0 )
    {
LABEL_287:
      if ( !v129
        || v60 == 8
        || (*(_BYTE *)(v94 + 34) & 0x10) != 0
        || (*(_QWORD *)(v93 + 24) & 0x4000000000000000LL) != 0 )
      {
        MiPfnReferenceCountIsZero(v94, v151);
        goto LABEL_293;
      }
      MiInsertAndUnlockStandbyPages((__int64)ListEntry, (__int64 *)&v134, 1u, v92);
      v125 = 17;
    }
    else
    {
      if ( !(unsigned int)MiIsPfnFileOnly(v94) )
      {
        v97 = *(_QWORD *)(v93 + 24);
        v98 = v97 & 0x3FFFFFFFFFFFFFFFLL;
        if ( !v96 )
        {
          v99 = 1;
          goto LABEL_246;
        }
        if ( v96 == 1 )
        {
          if ( !v98 )
            goto LABEL_243;
LABEL_244:
          v99 = 0;
LABEL_246:
          v100 = *(_QWORD *)(v94 + 8) | 0x8000000000000000uLL;
          if ( (v100 > 0xFFFFF6BFFFFFFF78uLL || v100 < 0xFFFFF68000000000uLL)
            && ((*(unsigned __int8 *)(v94 + 35) >> 5) & 1) != 0 )
          {
            *(_BYTE *)(v94 + 35) &= ~0x20u;
            goto LABEL_285;
          }
          v101 = *(_QWORD *)(v94 + 40);
          if ( (v101 & 0x200000000000000LL) != 0 && (*(_DWORD *)(v94 + 16) & 0x400LL) != 0 )
          {
            v102 = 1;
          }
          else if ( (unsigned int)MiIsPfnCommitNotCharged(v94) )
          {
            v102 = 1;
          }
          else if ( v99 == 1 && (v97 & 0x4000000000000000LL) != 0 )
          {
            v102 = 1;
          }
          v103 = *(_QWORD *)(qword_14036C8F8 + 8 * ((v101 >> 40) & 0x3FF));
          if ( v102 == 1 )
          {
            v104 = *(_QWORD *)(v103 + 4992);
            if ( v104 )
            {
              while ( 1 )
              {
                v105 = v104;
                v104 = _InterlockedCompareExchange64((volatile signed __int64 *)(v103 + 4992), v104 - 1, v104);
                if ( v105 == v104 )
                  break;
                if ( !v104 )
                  goto LABEL_264;
              }
            }
            else
            {
LABEL_264:
              if ( (ULONG_PTR *)v103 == &MiSystemPartition
                && (v106 = KeGetCurrentPrcb(),
                    _m_prefetchw((const void *)&v106->CachedCommit),
                    CachedCommit = v106->CachedCommit,
                    (unsigned __int64)(CachedCommit + 1) <= 0x100) )
              {
                while ( 1 )
                {
                  v108 = _InterlockedCompareExchange(
                           (volatile signed __int32 *)&v106->CachedCommit,
                           CachedCommit + 1,
                           CachedCommit);
                  if ( v108 == CachedCommit )
                    break;
                  CachedCommit = v108;
                  if ( (unsigned __int64)(v108 + 1) > 0x100 )
                    goto LABEL_268;
                }
              }
              else
              {
LABEL_268:
                v109 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v103 + 6128), 0xFFFFFFFFFFFFFFFFuLL);
                v110 = *(_QWORD *)(v103 + 4960);
                if ( v109 >= v110 && v109 - 1 < v110
                  || (v111 = *(_QWORD *)(v103 + 4952), v109 - 1 < v111) && v109 >= v111 )
                {
                  MiSyncCommitSignals(v103, 0LL);
                }
              }
            }
          }
          if ( (ULONG_PTR *)v103 == &MiSystemPartition )
          {
            v112 = KeGetCurrentPrcb();
            v113 = 1LL;
            v114 = (int)v112->CachedResidentAvailable;
            if ( (_DWORD)v114 != -1 )
            {
              if ( (unsigned __int64)(v114 + 1) <= 0x100 )
              {
                do
                {
                  v115 = _InterlockedCompareExchange(
                           (volatile signed __int32 *)&v112->CachedResidentAvailable,
                           v114 + 1,
                           v114);
                  v16 = (_DWORD)v114 == v115;
                  LODWORD(v114) = v115;
                  if ( v16 )
                    goto LABEL_284;
                }
                while ( v115 != -1 && (unsigned __int64)(v115 + 1LL) <= 0x100 );
              }
              if ( (int)v114 > 192
                && (_DWORD)v114 == _InterlockedCompareExchange(
                                     (volatile signed __int32 *)&v112->CachedResidentAvailable,
                                     192,
                                     v114) )
              {
                v113 = (int)v114 - 192 + 1LL;
              }
            }
            _InterlockedExchangeAdd64(&qword_1403818C0, v113);
          }
          else
          {
            _InterlockedExchangeAdd64((volatile signed __int64 *)(v103 + 5824), 1uLL);
          }
LABEL_284:
          v94 = v134;
LABEL_285:
          if ( v99 )
          {
            v60 = v136;
            goto LABEL_287;
          }
        }
        else if ( v96 == 2 && v98 )
        {
LABEL_243:
          if ( (*(_BYTE *)(v94 + 34) & 8) != 0 )
            goto LABEL_244;
        }
      }
LABEL_293:
      if ( v92 != 17 )
        _InterlockedAnd64((volatile signed __int64 *)(v93 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    if ( v91 )
      MiReleasePageFileInfo(v154, v91, 1);
    if ( v125 != 17 )
    {
      __writecr8(v125);
      v125 = 17;
    }
    v15 = v127;
    if ( v127 < 0 )
    {
      v121 = 58;
      if ( v127 == -1073741670 )
        v121 = 36;
      dword_14036BFD8 = v121;
    }
    else
    {
      if ( !v131 )
      {
        v19 = v133;
        LODWORD(v20) = v130;
        goto LABEL_120;
      }
      if ( v140 )
      {
        v8 = a1;
        v116 = MiGetNextDirectFixupProto(a1, v140);
        v118 = *(_QWORD *)(v117 + 8);
        v140 = v116;
        v10 = v118 | 0x8000000000000000uLL;
        v131 = v10;
        if ( v10 < v152 )
        {
          v19 = v10;
          v119 = (__int64)(v10 - v133) >> 3;
          LODWORD(v20) = v119 + v130;
          v133 = v10;
          v130 = (unsigned int)(v119 + v130);
          v132 += v119 << 12;
          goto LABEL_313;
        }
LABEL_316:
        v18 = v135;
LABEL_317:
        v139 = v158;
        v13 = v158;
        if ( v158 )
        {
          v7 = a3;
LABEL_10:
          v5 = a4;
          continue;
        }
      }
    }
    break;
  }
  if ( ListEntry )
    MiDecayPfnFullyInitialized(ListEntry);
  if ( v137 )
  {
    v122 = v155;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v155 + 40), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v122 + 40);
    KeAbPostRelease(v122 + 40);
    KiLeaveGuardedRegionUnsafe(v156);
  }
  return v15;
}
