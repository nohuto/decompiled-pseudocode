/*
 * XREFs of MiWalkEntireImage @ 0x140030B50
 * Callers:
 *     MiSwitchBaseAddress @ 0x1404F1E74 (MiSwitchBaseAddress.c)
 *     MiValidateSectionCreate @ 0x14053BB84 (MiValidateSectionCreate.c)
 *     MiRelocateImage @ 0x14053C470 (MiRelocateImage.c)
 *     MiUnloadSystemImage @ 0x1405BCA9C (MiUnloadSystemImage.c)
 * Callees:
 *     MiReturnCommit @ 0x14000A1A0 (MiReturnCommit.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MmAccessFault @ 0x14001B320 (MmAccessFault.c)
 *     MiInsertAndUnlockStandbyPages @ 0x14002E460 (MiInsertAndUnlockStandbyPages.c)
 *     MiPfnReferenceCountIsZero @ 0x1400309A0 (MiPfnReferenceCountIsZero.c)
 *     MiUnlockProtoPoolPage @ 0x140030A70 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageCharge @ 0x140031840 (MiRemoveLockedPageCharge.c)
 *     MiCheckProtoPtePageState @ 0x140031B60 (MiCheckProtoPtePageState.c)
 *     MiAreChargesNeededToLockPage @ 0x140031FE0 (MiAreChargesNeededToLockPage.c)
 *     MiIsPfnCommitNotCharged @ 0x140032060 (MiIsPfnCommitNotCharged.c)
 *     MiLockProtoPoolPage @ 0x1400320B0 (MiLockProtoPoolPage.c)
 *     MiFillPteHierarchy @ 0x14003E540 (MiFillPteHierarchy.c)
 *     MiDecayPfnFullyInitialized @ 0x14004DA54 (MiDecayPfnFullyInitialized.c)
 *     MiCreateDecayPfn @ 0x14004DB30 (MiCreateDecayPfn.c)
 *     MiDeleteTransitionPte @ 0x140052AA8 (MiDeleteTransitionPte.c)
 *     MiGetEffectivePagePriorityThread @ 0x14005605C (MiGetEffectivePagePriorityThread.c)
 *     MiInitializePageColorBase @ 0x140057920 (MiInitializePageColorBase.c)
 *     MiObtainProtoReference @ 0x140057FC0 (MiObtainProtoReference.c)
 *     MiPteHasShadow @ 0x140062834 (MiPteHasShadow.c)
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     MiWaitForCollidedFaultComplete @ 0x14007C9F8 (MiWaitForCollidedFaultComplete.c)
 *     MiReleasePageFileInfo @ 0x1400D6FBC (MiReleasePageFileInfo.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     KeDelayExecutionThread @ 0x140104BA0 (KeDelayExecutionThread.c)
 *     MiChargeCommit @ 0x140119760 (MiChargeCommit.c)
 *     MiUnlinkPageFromList @ 0x14011AAD0 (MiUnlinkPageFromList.c)
 *     MiCaptureDirtyBitToPfn @ 0x140124940 (MiCaptureDirtyBitToPfn.c)
 *     MiStartingOffset @ 0x140129FF0 (MiStartingOffset.c)
 *     MiChargePartitionResidentAvailable @ 0x140134FF4 (MiChargePartitionResidentAvailable.c)
 *     MiIsPfnInline @ 0x140136FF0 (MiIsPfnInline.c)
 *     MiGetPagingFileOffset @ 0x14013C69C (MiGetPagingFileOffset.c)
 *     MiDiscardTransitionPte @ 0x140154D68 (MiDiscardTransitionPte.c)
 *     MiIsPfnSystemCharged @ 0x1401630BC (MiIsPfnSystemCharged.c)
 *     MiInvalidPteConforms @ 0x1401A6560 (MiInvalidPteConforms.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     MiDriverPageIsDangling @ 0x140255CBC (MiDriverPageIsDangling.c)
 *     MiSplitDirectMapPage @ 0x14025E808 (MiSplitDirectMapPage.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x140264B7C (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 *     MiGetSharedProtos @ 0x140268088 (MiGetSharedProtos.c)
 *     MiRelocateImagePfn @ 0x1404AFB00 (MiRelocateImagePfn.c)
 *     MiPrefetchControlArea @ 0x14053E190 (MiPrefetchControlArea.c)
 *     MiValidateImagePfn @ 0x1405BA580 (MiValidateImagePfn.c)
 *     MiGetNextDirectFixupProto @ 0x140754668 (MiGetNextDirectFixupProto.c)
 *     MiPageHasRelocations @ 0x140754694 (MiPageHasRelocations.c)
 */

__int64 __fastcall MiWalkEntireImage(ULONG_PTR a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v4; // rdx
  char v5; // r11
  __int64 v6; // r8
  ULONG_PTR v7; // r12
  __int64 v8; // r9
  __int64 NextDirectFixupProto; // rax
  unsigned __int64 v10; // r13
  __int64 v11; // rax
  ULONG_PTR v12; // rbx
  __int64 v13; // rcx
  unsigned int v14; // r14d
  ULONG_PTR v15; // r15
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v17; // rdi
  __int64 v18; // rsi
  bool v19; // zf
  __int64 SharedProtos; // rax
  __int64 v21; // rbx
  unsigned __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  unsigned __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rcx
  ULONG_PTR v28; // r10
  unsigned __int64 v29; // r9
  __int64 v30; // r9
  int v31; // r10d
  ULONG_PTR v32; // rbx
  __int64 v33; // rax
  unsigned int EffectivePagePriorityThread; // eax
  int v35; // edx
  unsigned int v36; // r8d
  __int64 v37; // r9
  unsigned __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rdx
  unsigned __int64 v41; // r14
  char v42; // cl
  unsigned int v43; // r13d
  struct _KPRCB *CurrentPrcb; // rdx
  __int64 v45; // r8
  __int64 v46; // r9
  unsigned __int64 v47; // r10
  char v48; // si
  int v49; // r12d
  int IsPfnCommitNotCharged; // eax
  char v51; // r11
  __int64 v52; // r10
  ULONG_PTR *v53; // rdi
  signed __int32 CachedResidentAvailable; // eax
  signed __int32 v55; // ett
  unsigned __int64 v56; // r8
  __int64 v57; // r9
  unsigned __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rdx
  __int64 v61; // rax
  char v62; // si
  int v63; // eax
  __int64 v64; // r15
  __int64 v65; // rbx
  unsigned __int8 CurrentIrql; // r14
  ULONG_PTR v67; // rdi
  ULONG_PTR v68; // rsi
  unsigned __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // r13
  __int64 v73; // rax
  int v74; // eax
  __int64 v75; // rbx
  int v77; // [rsp+20h] [rbp-E0h]
  unsigned __int8 v78[4]; // [rsp+40h] [rbp-C0h] BYREF
  int v79; // [rsp+44h] [rbp-BCh]
  int v80; // [rsp+48h] [rbp-B8h]
  __int64 v81; // [rsp+50h] [rbp-B0h]
  ULONG_PTR v82; // [rsp+58h] [rbp-A8h]
  __int64 v83; // [rsp+60h] [rbp-A0h]
  ULONG_PTR v84; // [rsp+68h] [rbp-98h] BYREF
  int v85; // [rsp+70h] [rbp-90h]
  ULONG_PTR v86; // [rsp+78h] [rbp-88h]
  __int64 v87; // [rsp+80h] [rbp-80h]
  int v88; // [rsp+88h] [rbp-78h]
  __int64 v89; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v90; // [rsp+98h] [rbp-68h]
  unsigned __int64 v91; // [rsp+A0h] [rbp-60h]
  ULONG_PTR v92; // [rsp+A8h] [rbp-58h]
  PSLIST_ENTRY ListEntry; // [rsp+B0h] [rbp-50h]
  int v94; // [rsp+B8h] [rbp-48h] BYREF
  int v95; // [rsp+BCh] [rbp-44h] BYREF
  int v96; // [rsp+C0h] [rbp-40h] BYREF
  int v97; // [rsp+C4h] [rbp-3Ch] BYREF
  __int64 v98; // [rsp+C8h] [rbp-38h] BYREF
  ULONG_PTR v99; // [rsp+D0h] [rbp-30h]
  unsigned __int64 v100; // [rsp+D8h] [rbp-28h]
  ULONG_PTR v101; // [rsp+E0h] [rbp-20h]
  __int64 v102; // [rsp+E8h] [rbp-18h]
  struct _KTHREAD *v103; // [rsp+F0h] [rbp-10h]
  _KPROCESS *Process; // [rsp+F8h] [rbp-8h]
  ULONG_PTR v105; // [rsp+100h] [rbp+0h]
  _BYTE v106[24]; // [rsp+108h] [rbp+8h] BYREF
  _QWORD v107[24]; // [rsp+120h] [rbp+20h] BYREF

  v4 = *(unsigned int *)(a1 + 56);
  v5 = a3;
  v6 = *(_QWORD *)a1;
  v102 = *(_QWORD *)a1;
  v7 = a1;
  v85 = v5 & 8;
  v8 = 1LL;
  if ( (v4 & 0x40000000) == 0 || (v5 & 8) != 0 )
  {
    v85 = v5 & 8;
    if ( (v4 & 0x800) != 0 )
    {
      v80 = 1;
    }
    else
    {
      v80 = 0;
      v85 = v5 & 8;
    }
  }
  else
  {
    v80 = 1;
  }
  if ( (v5 & 8) != 0 )
  {
    MiInitializePageColorBase(
      *(_QWORD *)(qword_1403CBD88 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF)) + 7360LL,
      ((unsigned int)v4 >> 20) & 0x3F,
      v106);
    NextDirectFixupProto = MiGetNextDirectFixupProto(v7, 0LL);
    v10 = *(_QWORD *)(NextDirectFixupProto + 8) | 0x8000000000000000uLL;
    v90 = v10;
    v11 = MiGetNextDirectFixupProto(v7, NextDirectFixupProto);
    v4 = *(unsigned int *)(v7 + 56);
    v8 = 1LL;
    v6 = v102;
    v91 = v11;
  }
  else
  {
    v10 = 0LL;
    v90 = 0LL;
    v91 = 0LL;
  }
  v12 = v7 + 128;
  v13 = *(_QWORD *)(v7 + 136);
  v14 = 0;
  v92 = v7 + 128;
  v15 = 0LL;
  v87 = v13;
  Process = KeGetCurrentThread()->ApcState.Process;
  CurrentThread = KeGetCurrentThread();
  v103 = CurrentThread;
  v78[0] = 17;
  v79 = 0;
  v82 = 0LL;
  v88 = 0;
  ListEntry = 0LL;
  if ( (v4 & 0x4000000) != 0 )
  {
    v88 = 1;
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockSharedEx(v6 + 40, 0LL);
    v5 = a3;
    v13 = v87;
  }
  do
  {
    v17 = *(_QWORD *)(v12 + 8);
    v105 = *(_QWORD *)(v12 + 16);
    v18 = (__int64)(v17 - v13) >> 3;
    v19 = (*(_BYTE *)(v12 + 34) & 2) == 0;
    v86 = v17;
    v83 = v18;
    if ( !v19 )
    {
      if ( (v5 & 1) != 0 )
        goto LABEL_87;
      if ( (*(_DWORD *)(v7 + 56) & 0x4000000) != 0 )
      {
        if ( !*(_QWORD *)(v12 + 24) )
          goto LABEL_87;
        SharedProtos = MiGetSharedProtos(v7, a4, v12);
        if ( !SharedProtos )
          goto LABEL_86;
        v17 = *(_QWORD *)(SharedProtos + 72);
        v86 = v17;
      }
    }
    v81 = MiStartingOffset(v12, v17, a4);
    v21 = v81;
    v22 = v17 + 8LL * *(unsigned int *)(v92 + 44);
    v100 = v22;
    if ( v10 )
    {
      if ( v10 >= v22 )
        goto LABEL_86;
      v86 = v10;
      v23 = v10 - v17;
      v17 = v10;
      v23 >>= 3;
      v18 = (unsigned int)(v23 + v18);
      v21 = (v23 << 12) + v81;
      v83 = v18;
      v81 = v21;
    }
    v101 = 0LL;
    if ( v17 >= v22 )
      goto LABEL_84;
    do
    {
      if ( (v17 & 0xFFF) != 0 )
      {
        if ( v15 )
          goto LABEL_34;
      }
      else if ( v15 )
      {
        MiUnlockProtoPoolPage(v15, v78[0], v6, v8);
      }
      if ( v80 == 1 )
        v24 = MiLockProtoPoolPage(v17, v78);
      else
        v24 = MiCheckProtoPtePageState(v17);
      v82 = v24;
      v15 = v24;
      if ( !v24 )
      {
        if ( v80 == 1 )
        {
          MmAccessFault(2uLL, v17, 0, 0LL);
          continue;
        }
        v25 = (unsigned __int64)(4096 - (unsigned int)(v17 & 0xFFF)) >> 3;
        v21 += v25 << 12;
        v18 = (unsigned int)(v25 + v18);
        v17 += 8 * v25;
        goto LABEL_81;
      }
      while ( 1 )
      {
LABEL_34:
        while ( 1 )
        {
          v26 = MI_READ_PTE_LOCK_FREE(v17);
          v98 = v26;
          if ( (v26 & 1) == 0 )
            break;
          v29 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v98) >> 12) & 0xFFFFFFFFFLL;
LABEL_40:
          if ( (unsigned int)MiIsPfnInline(v29) )
          {
            v32 = 48 * v30 - 0x58000000000LL;
            v94 = v31;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v32 + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v94);
              while ( *(__int64 *)(v32 + 24) < 0 );
            }
            v33 = MI_READ_PTE_LOCK_FREE(v17);
            if ( v33 == v98 )
              goto LABEL_47;
            _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          }
        }
        if ( (v26 & 0x400) != 0 || (v26 & 0x800) == 0 )
          break;
        if ( (unsigned int)MiInvalidPteConforms(v26) )
        {
          v29 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v98);
          goto LABEL_40;
        }
      }
      v32 = v28;
LABEL_47:
      v84 = v32;
      if ( v32 )
      {
        v37 = *(_QWORD *)v17;
        if ( v17 >= 0xFFFFF6FB7DBED000uLL
          && v17 <= 0xFFFFF6FB7DBED7F8uLL
          && (unsigned int)MiPteHasShadow(v27, v4, v6, v37)
          && (v37 & 1) != 0
          && ((v37 & 0x20) == 0 || (v37 & 0x42) == 0) )
        {
          v38 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
          if ( v38 )
          {
            v39 = *(_QWORD *)(v38 + 8 * ((v17 >> 3) & 0x1FF));
            v40 = v37 | 0x20;
            if ( (v39 & 0x20) == 0 )
              v40 = v37;
            v37 = v40;
            if ( (v39 & 0x42) != 0 )
              v37 = v40 | 0x42;
          }
        }
        v89 = v37;
        if ( (v37 & 1) != 0 )
          v41 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v89) >> 12) & 0xFFFFFFFFFLL;
        else
          v41 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v89);
        v4 = a3;
        v99 = v41;
        if ( (a3 & 4) != 0 )
        {
          if ( (unsigned int)MiIsPfnSystemCharged(v32) )
          {
            MiDriverPageIsDangling();
            *(_BYTE *)(v32 + 35) &= ~0x20u;
          }
LABEL_78:
          _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_79:
          v14 = v79;
LABEL_80:
          v17 += 8LL;
          v15 = v82;
          v18 = (unsigned int)(v18 + 1);
          v21 = v81 + 4096;
LABEL_81:
          v86 = v17;
          goto LABEL_82;
        }
        if ( (a3 & 1) != 0 && ((*(_QWORD *)(v32 + 40) >> 54) & 7) == 3 )
          goto LABEL_78;
        if ( (*(_DWORD *)(v32 + 16) & 0x400LL) == 0 && !v80 )
          goto LABEL_78;
        v42 = *(_BYTE *)(v32 + 35);
        if ( (v42 & 0x10) != 0 )
          goto LABEL_78;
        if ( !v8 && (*(_BYTE *)(v32 + 34) & 0x20) != 0 )
        {
          if ( (a3 & 2) == 0 || (*(_DWORD *)(v7 + 56) & 2) != 0 )
          {
            memset(v107, 0, 0x78uLL);
            MiFillPteHierarchy(0LL, &v107[3]);
            memset(v107, 0, 24);
            LOBYTE(v107[10]) = 0;
            v95 = 1;
            MiObtainProtoReference(v15, 1LL);
            MiWaitForCollidedFaultComplete((unsigned int)v107, v32, v15, v78[0], (__int64)&v95);
            v21 = v81;
            v15 = 0LL;
            v82 = 0LL;
            v14 = 0;
            v79 = 0;
            continue;
          }
          MiDeleteTransitionPte(v17);
          goto LABEL_79;
        }
        v43 = 8;
        if ( !v8 )
        {
          if ( (v42 & 8) != 0 )
            v43 = v42 & 7;
          if ( !(unsigned int)MiUnlinkPageFromList(v32) )
          {
            MiDiscardTransitionPte(v32);
            _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v10 = v90;
            if ( v80 == 1 )
            {
              v14 = v79;
              v21 = v81;
              continue;
            }
            goto LABEL_79;
          }
          *(_QWORD *)(v32 + 24) &= 0xC000000000000000uLL;
        }
        if ( !(unsigned int)MiAreChargesNeededToLockPage(v32) )
          goto LABEL_123;
        v47 = *(_QWORD *)(v32 + 40);
        if ( (v47 & 0x200000000000000LL) != 0 && (*(_DWORD *)(v32 + 16) & 0x400LL) != 0 )
        {
          v48 = 1;
          v49 = 1;
        }
        else
        {
          IsPfnCommitNotCharged = MiIsPfnCommitNotCharged(v32, CurrentPrcb);
          v48 = v51;
          v49 = 1;
          if ( IsPfnCommitNotCharged )
            v48 = 1;
        }
        v52 = (v47 >> 40) & 0x3FF;
        v53 = *(ULONG_PTR **)(qword_1403CBD88 + 8 * v52);
        if ( !v48 || (unsigned int)MiChargeCommit(*(_QWORD *)(qword_1403CBD88 + 8 * v52), 1LL, 4LL, v46) )
        {
          if ( v53 == &MiSystemPartition )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
            while ( CachedResidentAvailable )
            {
              if ( CachedResidentAvailable == -1 )
                break;
              v55 = CachedResidentAvailable;
              CachedResidentAvailable = _InterlockedCompareExchange(
                                          (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                          CachedResidentAvailable - 1,
                                          CachedResidentAvailable);
              if ( v55 == CachedResidentAvailable )
                goto LABEL_123;
            }
          }
          if ( !(unsigned int)MiChargePartitionResidentAvailable(v53, 1LL, 0xFFFFFFFFLL, v46) )
          {
            if ( v48 )
              MiReturnCommit((__int64)v53, 1uLL);
            goto LABEL_124;
          }
LABEL_123:
          ++*(_WORD *)(v32 + 32);
          v49 = 1;
        }
LABEL_124:
        _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v96 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v96);
          while ( *(__int64 *)(v15 + 24) < 0 );
        }
        *(_BYTE *)(v15 + 34) &= ~0x20u;
        if ( (unsigned int)MiRemoveLockedPageCharge(v15, CurrentPrcb, v45, v46) )
          MiPfnReferenceCountIsZero(v15, (__int64)(v15 + 0x58000000000LL) / 48);
        _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v78[0] != 17 )
          __writecr8(v78[0]);
        v58 = *(_QWORD *)(v32 + 40);
        v82 = 0LL;
        if ( ((v58 >> 52) & 1) == 0 )
          v49 = 0;
        v59 = a1;
        if ( !v85 )
        {
          v62 = a3;
          if ( (a3 & 2) != 0 )
          {
            if ( (MiFlags & 0x4000) != 0 && (*(_DWORD *)(a1 + 92) & 0xC0000) != 0 )
            {
              v60 = v58 >> 54;
              LOBYTE(v60) = v60 & 7;
              if ( (_BYTE)v60 == 3 )
              {
                v79 = 0;
                goto LABEL_145;
              }
            }
            v63 = MiRelocateImagePfn(a1, 0LL);
          }
          else
          {
            v63 = MiValidateImagePfn(
                    a1,
                    v81,
                    (_DWORD)Process,
                    v83,
                    v77,
                    (*(unsigned __int16 *)(v92 + 32) >> 1) & 0x1F,
                    v41);
          }
          v79 = v63;
          goto LABEL_145;
        }
        if ( (unsigned int)MiPageHasRelocations(a1, (unsigned int)v83) )
        {
          v61 = MiSplitDirectMapPage(v92, v106, v41);
          v99 = v61;
          v60 = 0xFFFFFFFFFFELL;
          *(_QWORD *)v32 ^= (*(_QWORD *)v32 ^ (v91 >> 3)) & 0xFFFFFFFFFFELL;
          v59 = 48 * v61 - 0x58000000000LL;
          v84 = v59;
        }
        v62 = a3;
LABEL_145:
        if ( v43 != 8 && !ListEntry && !v49 )
          ListEntry = (PSLIST_ENTRY)MiCreateDecayPfn(v43);
        v64 = 0LL;
        v65 = 0LL;
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        v97 = 0;
        v67 = v84;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v67 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v97);
          while ( *(__int64 *)(v67 + 24) < 0 );
        }
        v19 = (v62 & 2) == 0;
        v78[0] = CurrentIrql;
        v68 = v84;
        if ( !v19 )
        {
          v60 = *(_QWORD *)(v84 + 16);
          v56 = v84 + 16;
          if ( v84 + 16 >= 0xFFFFF6FB7DBED000uLL
            && v56 <= 0xFFFFF6FB7DBED7F8uLL
            && (unsigned int)MiPteHasShadow(v59, v60, v56, v57)
            && (v60 & 1) != 0
            && ((v60 & 0x20) == 0 || (v60 & 0x42) == 0) )
          {
            v69 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
            if ( v69 )
            {
              v70 = *(_QWORD *)(v69 + 8 * ((v56 >> 3) & 0x1FF));
              v56 = v60 | 0x20;
              if ( (v70 & 0x20) == 0 )
                v56 = v60;
              v60 = v56;
              if ( (v70 & 0x42) != 0 )
                v60 = v56 | 0x42;
            }
            v68 = v84;
          }
          v89 = v60;
          if ( (v60 & 0x400) == 0 )
          {
            v65 = MiCaptureDirtyBitToPfn(v68);
            v64 = *(_QWORD *)(qword_1403CBD88 + 8 * ((*(_QWORD *)(v68 + 40) >> 40) & 0x3FFLL));
          }
        }
        if ( (unsigned int)MiRemoveLockedPageCharge(v68, v60, v56, v57) )
        {
          if ( v49
            && v43 != 8
            && (*(_BYTE *)(v68 + 34) & 0x10) == 0
            && (*(_QWORD *)(v67 + 24) & 0x4000000000000000LL) == 0 )
          {
            MiInsertAndUnlockStandbyPages((__int64)ListEntry, &v84, 1u, CurrentIrql);
            v78[0] = 17;
LABEL_176:
            if ( v65 )
              MiReleasePageFileInfo(v64, v65, 1LL);
            if ( v78[0] != 17 )
            {
              __writecr8(v78[0]);
              v78[0] = 17;
            }
            v14 = v79;
            if ( v79 < 0 )
            {
              v74 = 58;
              if ( v79 == -1073741670 )
                v74 = 36;
              dword_1403CB498 = v74;
              goto LABEL_189;
            }
            v10 = v90;
            if ( v90 )
            {
              v6 = v91;
              if ( !v91 )
                goto LABEL_189;
              v7 = a1;
              v71 = MiGetNextDirectFixupProto(a1, v91);
              v72 = *(_QWORD *)(v4 + 8);
              v15 = v82;
              v91 = v71;
              v10 = v72 | 0x8000000000000000uLL;
              v90 = v10;
              if ( v10 >= v100 )
                goto LABEL_86;
              v17 = v10;
              v73 = (__int64)(v10 - v86) >> 3;
              v18 = (unsigned int)(v73 + v83);
              v86 = v10;
              v21 = (v73 << 12) + v81;
LABEL_82:
              v83 = v18;
              v81 = v21;
              continue;
            }
            v17 = v86;
            LODWORD(v18) = v83;
            v7 = a1;
            goto LABEL_80;
          }
          MiPfnReferenceCountIsZero(v68, v99);
        }
        if ( CurrentIrql != 17 )
          _InterlockedAnd64((volatile signed __int64 *)(v67 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        goto LABEL_176;
      }
      if ( !v80 )
        goto LABEL_80;
      v89 = MI_READ_PTE_LOCK_FREE(v17);
      if ( (v89 & 0x400) != 0 )
        goto LABEL_80;
      if ( !(unsigned int)MiGetPagingFileOffset(&v89) )
        goto LABEL_80;
      MiUnlockProtoPoolPage(v15, v78[0], v6, v8);
      v82 = 0LL;
      if ( (a3 & 2) != 0 && !(unsigned int)MiPageHasRelocations(v7, (unsigned int)v18) )
        goto LABEL_80;
      EffectivePagePriorityThread = MiGetEffectivePagePriorityThread(v103, (unsigned int)((_DWORD)v18 << 12));
      if ( EffectivePagePriorityThread > 5 )
        EffectivePagePriorityThread = 5;
      if ( v17 == v101 )
      {
        v36 = 4096;
      }
      else
      {
        v101 = v17;
        v36 = (unsigned int)((__int64)(v100 - v17) >> 3) << 12;
      }
      if ( (int)MiPrefetchControlArea(v7, v35, v36, EffectivePagePriorityThread, 2, a4) < 0 )
        KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
      v21 = v81;
      v14 = 0;
      v79 = 0;
      v15 = 0LL;
    }
    while ( v17 < v100 );
LABEL_84:
    if ( v15 )
    {
      MiUnlockProtoPoolPage(v15, v78[0], v6, v8);
      v15 = 0LL;
      v82 = 0LL;
    }
LABEL_86:
    v5 = a3;
    v13 = v87;
LABEL_87:
    v92 = v105;
    v12 = v105;
  }
  while ( v105 );
LABEL_189:
  if ( ListEntry )
    MiDecayPfnFullyInitialized(ListEntry);
  if ( v88 )
  {
    v75 = v102;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v102 + 40), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v75 + 40, v4, v6, v8);
    KeAbPostRelease(v75 + 40);
    KiLeaveGuardedRegionUnsafe(v103);
  }
  return v14;
}
