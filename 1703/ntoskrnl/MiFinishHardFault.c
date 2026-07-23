/*
 * XREFs of MiFinishHardFault @ 0x1400CBC40
 * Callers:
 *     MiWaitForInPageComplete @ 0x140097510 (MiWaitForInPageComplete.c)
 * Callees:
 *     MiDecayPfnFullyInitialized @ 0x140016720 (MiDecayPfnFullyInitialized.c)
 *     MiCreateDecayPfn @ 0x14001B2A0 (MiCreateDecayPfn.c)
 *     MiImagePageOk @ 0x1400214A8 (MiImagePageOk.c)
 *     MiInvalidateCollidedIos @ 0x14003855C (MiInvalidateCollidedIos.c)
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     MiIsPteInStore @ 0x140074CBC (MiIsPteInStore.c)
 *     MiLockPageAtDpcInline @ 0x14009C240 (MiLockPageAtDpcInline.c)
 *     MmCheckCachedPageStates @ 0x14009E320 (MmCheckCachedPageStates.c)
 *     MiMakeValidPte @ 0x1400A12B0 (MiMakeValidPte.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MiReleasePageFileInfo @ 0x1400ABFD4 (MiReleasePageFileInfo.c)
 *     MiInsertAndUnlockStandbyPages @ 0x1400C4D40 (MiInsertAndUnlockStandbyPages.c)
 *     MiAreChargesNeededToLockPage @ 0x1400CB220 (MiAreChargesNeededToLockPage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1400CCB60 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiReturnResidentAvailable @ 0x1400CCD70 (MiReturnResidentAvailable.c)
 *     MiChargeForLockedPage @ 0x1400CCDF0 (MiChargeForLockedPage.c)
 *     MiIsPfnCommitNotCharged @ 0x1400CCF10 (MiIsPfnCommitNotCharged.c)
 *     MiReturnCommit @ 0x1400CE240 (MiReturnCommit.c)
 *     MiChargeCommit @ 0x1400D0C60 (MiChargeCommit.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x1400D6900 (MiPreUnlockWorkingSetExclusive.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     ObDereferenceObjectDeferDelete @ 0x1400E19E0 (ObDereferenceObjectDeferDelete.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EFC10 (KeLeaveCriticalRegionThread.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     MiCaptureDirtyBitToPfn @ 0x140100BFC (MiCaptureDirtyBitToPfn.c)
 *     MiRestoreTransitionPte @ 0x140104D70 (MiRestoreTransitionPte.c)
 *     MiFreeInPageSupportBlock @ 0x140109900 (MiFreeInPageSupportBlock.c)
 *     MiReleaseFreshPage @ 0x14010ADC8 (MiReleaseFreshPage.c)
 *     MiLockOwnedProtoPage @ 0x14010B370 (MiLockOwnedProtoPage.c)
 *     MiIsFaultPteIntact @ 0x1401182D8 (MiIsFaultPteIntact.c)
 *     MiSyncCommitSignals @ 0x140159D20 (MiSyncCommitSignals.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiBadRefCount @ 0x14017D194 (MiBadRefCount.c)
 *     MiMakeProtoReadOnly @ 0x140214A0C (MiMakeProtoReadOnly.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x14021EE14 (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeImagePageOk @ 0x140222D1C (MiMakeImagePageOk.c)
 *     MiSwapHardFaultPage @ 0x140225E74 (MiSwapHardFaultPage.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14025C828 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiFinishHardFault(unsigned int *P, unsigned __int64 *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rdi
  unsigned int *v6; // r13
  unsigned __int64 v8; // rax
  unsigned __int64 CachedCommit; // rdx
  __int64 v10; // r8
  unsigned __int64 v11; // rsi
  _QWORD *v12; // r12
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // r15
  signed int ImagePageOk; // ebp
  LONG *SharedVm; // rbx
  char v19; // al
  unsigned __int8 v20; // bl
  __int64 v21; // rcx
  int v22; // ebx
  unsigned __int8 v23; // cl
  PSLIST_ENTRY DecayPfn; // rcx
  __int64 v25; // r8
  unsigned __int64 v26; // rbx
  unsigned int v27; // r14d
  __int64 v28; // r9
  __int64 BugCheckParameter2; // rdi
  int v30; // esi
  __int16 v31; // ax
  unsigned __int8 v32; // cl
  char v33; // al
  int v34; // eax
  int v35; // eax
  __int64 v36; // rax
  __int64 v37; // rcx
  _DWORD *v38; // rsi
  __int64 v39; // rcx
  char v40; // al
  struct _KEVENT *v41; // rcx
  int v42; // eax
  __int64 v43; // rax
  int v44; // r9d
  __int64 v45; // rcx
  __int16 v46; // cx
  __int16 v47; // cx
  unsigned __int64 v48; // rsi
  __int64 v49; // rax
  int v50; // ebp
  unsigned __int64 v51; // rcx
  int v52; // r10d
  int v53; // r11d
  __int64 v54; // rsi
  signed __int64 v55; // rax
  signed __int64 v56; // rtt
  struct _KPRCB *CurrentPrcb; // r9
  unsigned __int64 v58; // rcx
  unsigned __int64 v59; // rcx
  unsigned __int64 v60; // rdx
  struct _KPRCB *v61; // r8
  unsigned __int64 v62; // r9
  signed __int32 v63; // eax
  __int64 v64; // rax
  _SLIST_ENTRY *v65; // r12
  unsigned __int8 v66; // di
  unsigned __int64 v67; // rbp
  unsigned __int64 v68; // r14
  __int64 *v69; // r13
  __int64 v70; // rax
  __int64 v71; // rsi
  unsigned __int64 v72; // rdi
  LONG *v73; // rax
  __int64 v74; // rbx
  __int64 v75; // rdx
  __int64 v76; // r8
  __int64 result; // rax
  bool v78; // zf
  char v79; // [rsp+30h] [rbp-198h]
  PSLIST_ENTRY ListEntry; // [rsp+38h] [rbp-190h]
  unsigned int v81; // [rsp+40h] [rbp-188h]
  int v82; // [rsp+44h] [rbp-184h]
  unsigned __int8 v83; // [rsp+48h] [rbp-180h]
  unsigned __int64 v84; // [rsp+50h] [rbp-178h]
  int v85; // [rsp+58h] [rbp-170h]
  int v86; // [rsp+5Ch] [rbp-16Ch]
  __int64 v87; // [rsp+60h] [rbp-168h]
  unsigned __int64 v89; // [rsp+70h] [rbp-158h]
  unsigned __int8 CurrentIrql; // [rsp+80h] [rbp-148h]
  int v92; // [rsp+88h] [rbp-140h] BYREF
  int v93[3]; // [rsp+8Ch] [rbp-13Ch] BYREF
  unsigned __int64 v94; // [rsp+98h] [rbp-130h]
  int v95[2]; // [rsp+A0h] [rbp-128h]
  __int64 *v96; // [rsp+A8h] [rbp-120h]
  unsigned __int64 ValidPte; // [rsp+B0h] [rbp-118h] BYREF
  unsigned __int64 v98; // [rsp+B8h] [rbp-110h]
  unsigned __int64 v99; // [rsp+C0h] [rbp-108h]
  unsigned int *v100; // [rsp+C8h] [rbp-100h]
  struct _KEVENT *v101; // [rsp+D0h] [rbp-F8h]
  __int64 v102; // [rsp+D8h] [rbp-F0h]
  unsigned __int64 *v103; // [rsp+E0h] [rbp-E8h]
  __int64 v104[16]; // [rsp+F0h] [rbp-D8h] BYREF
  void *retaddr; // [rsp+1C8h] [rbp+0h]

  v5 = *((_QWORD *)P + 28);
  v6 = P;
  v102 = a5;
  v86 = 0;
  v85 = 0;
  v8 = *((_QWORD *)P + 31);
  v100 = P;
  v103 = a2;
  CachedCommit = (unsigned __int64)(P + 64);
  if ( v8 )
    CachedCommit = v8;
  v10 = *((_QWORD *)P + 19);
  *(_QWORD *)v95 = v5;
  v11 = CachedCommit + 48;
  v12 = (_QWORD *)(CachedCommit + 48);
  v13 = (*(_DWORD *)(CachedCommit + 32) + *(_DWORD *)(CachedCommit + 44)) & 0xFFF;
  v14 = *(unsigned int *)(CachedCommit + 40) + 4095LL;
  v98 = CachedCommit;
  v96 = (__int64 *)(CachedCommit + 48);
  v84 = CachedCommit + 48 + 8 * ((unsigned int)((unsigned __int64)(v13 + v14) >> 12) - 1LL);
  v15 = v6[46];
  if ( (_DWORD)v15 == -1 )
    v94 = -1LL;
  else
    v94 = CachedCommit + 8 * (v15 + 6);
  v16 = *((_QWORD *)v6 + 20);
  v87 = *((_QWORD *)v6 + 30);
  v89 = *((_QWORD *)v6 + 27);
  v79 = 17;
  ImagePageOk = (*((_BYTE *)v6 + 191) & 8) != 0 ? 0xC0000434 : 0;
  v81 = ImagePageOk;
  if ( a3 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( *((char *)v6 + 191) >= 0 )
    {
      if ( (*(_BYTE *)(a3 + 192) & 7) != 0 )
        KiLeaveGuardedRegionUnsafe(v10);
      else
        KeLeaveCriticalRegionThread(v10);
    }
    SharedVm = MiGetSharedVm(a3);
    ExAcquireSpinLockExclusive(SharedVm);
    v19 = CurrentIrql;
    SharedVm[1] = 0;
  }
  else
  {
    v19 = 17;
    CurrentIrql = 17;
  }
  if ( v16 )
  {
    if ( v19 == 17 )
    {
      v20 = MiLockPageInline(v16);
      v79 = v20;
    }
    else
    {
      v20 = 17;
      MiLockPageAtDpcInline(v16);
    }
    if ( !(unsigned int)MiAreChargesNeededToLockPage(v16) || (unsigned int)MiChargeForLockedPage(v21, 1LL) )
      ++*(_WORD *)(v16 + 32);
    MiLockOwnedProtoPage(v16, v20);
  }
  if ( (v6[47] & 1) != 0 )
  {
    v6[20] = -1073741670;
    *((_QWORD *)v6 + 11) = 0LL;
  }
  v22 = v6[20];
  v83 = 17;
  v82 = v22;
  if ( *((unsigned int **)v6 + 2) != v6 + 4 )
  {
    v85 = MiInvalidateCollidedIos((__int64)v6);
    if ( v85 != 1 )
    {
      v6[20] = -1073741801;
      *((_QWORD *)v6 + 11) = 0LL;
    }
  }
  if ( v16 )
  {
    MiLockPageAtDpcInline(v16);
    MiRemoveLockedPageChargeAndDecRef(v16);
    _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( a3 && (*((_BYTE *)v6 + 189) & 4) == 0 )
  {
    if ( !(unsigned int)MiIsFaultPteIntact(v89, v5, v6 + 42) )
      ImagePageOk = -1073740748;
    v81 = ImagePageOk;
  }
  if ( v22 >= 0
    && ((*((_BYTE *)v6 + 189) & 4) != 0 || *((_QWORD *)v6 + 31) || v84 != v11 && v94 > v98 + 56)
    && (v23 = *((_BYTE *)v6 + 190), (v23 & 7) != 0)
    && (*((_BYTE *)v6 + 191) & 4) != 0
    && (v23 & 0x80u) == 0 )
  {
    DecayPfn = MiCreateDecayPfn((v23 >> 4) & 7);
    v25 = 0LL;
  }
  else
  {
    v25 = 0LL;
    DecayPfn = 0LL;
  }
  ListEntry = DecayPfn;
  v26 = 0LL;
  v99 = 0LL;
  v27 = 0;
  v101 = 0LL;
  v28 = 2LL;
  if ( v11 > v84 )
  {
    v65 = DecayPfn;
    goto LABEL_184;
  }
  while ( 1 )
  {
    BugCheckParameter2 = 48LL * *v12 - 0x58000000000LL;
    if ( BugCheckParameter2 == qword_14036CED0 )
      goto LABEL_58;
    if ( v27 )
    {
      if ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 24), 0x3FuLL) )
      {
        MiInsertAndUnlockStandbyPages((__int64)DecayPfn, v104, v27, v83);
        v25 = 0LL;
        v27 = 0;
        --v12;
LABEL_57:
        v28 = 2LL;
LABEL_58:
        v32 = v83;
        goto LABEL_59;
      }
    }
    else
    {
      v83 = KeGetCurrentIrql();
      __writecr8(2uLL);
      v92 = 0;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 24), 0x3FuLL) )
      {
        do
        {
          do
            KeYieldProcessorEx(&v92);
          while ( (*(_QWORD *)(BugCheckParameter2 + 24) & 0x8000000000000000uLL) != 0 );
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 24), 0x3FuLL) );
        v6 = v100;
        v25 = 0LL;
        v28 = 2LL;
      }
    }
    v30 = 0;
    if ( (*(_DWORD *)v102 & 1) != 0 )
    {
      v31 = *(_WORD *)(v102 + 2);
      if ( v31 )
        *(_WORD *)(v102 + 2) = v31 - 1;
    }
    if ( (*(_QWORD *)(BugCheckParameter2 + 24) & 0x4000000000000000LL) != 0 )
    {
      v30 = 2;
      goto LABEL_67;
    }
    v33 = *(_BYTE *)(BugCheckParameter2 + 35);
    if ( (v33 & 0x10) != 0 )
    {
      if ( BugCheckParameter2 == v87 )
      {
        v34 = v82;
        if ( v82 >= 0 )
          v34 = -1073741761;
        v82 = v34;
      }
      goto LABEL_66;
    }
    if ( v82 < 0 )
    {
      *(_BYTE *)(BugCheckParameter2 + 35) = v33 | 0x10;
LABEL_66:
      v30 = 1;
      goto LABEL_67;
    }
    if ( (unsigned __int64)v12 >= v94 )
    {
      v30 = 1;
      if ( BugCheckParameter2 == v87 )
        ImagePageOk = -1073740748;
      *(_BYTE *)(BugCheckParameter2 + 35) = v33 | 0x10;
      v81 = ImagePageOk;
    }
LABEL_67:
    if ( BugCheckParameter2 == v87 && !v30 && ImagePageOk != -1073740748 && a3 && (*((_BYTE *)v6 + 189) & 4) == 0 )
    {
      if ( !MiImagePageOk(v89, BugCheckParameter2, 0LL) )
      {
        *((_BYTE *)v6 + 189) |= 0x10u;
        if ( v27 )
        {
          MiInsertAndUnlockStandbyPages((__int64)ListEntry, v104, v27, 0x11u);
          v27 = 0;
        }
        v35 = MI_READ_PTE_LOCK_FREE(*(_QWORD *)(BugCheckParameter2 + 8) | 0x8000000000000000uLL);
        ImagePageOk = MiMakeImagePageOk(v89, v95[0], v35, a3, BugCheckParameter2, v16);
        v81 = ImagePageOk;
        if ( (*(_QWORD *)(BugCheckParameter2 + 24) & 0x4000000000000000LL) != 0 )
          v30 = 2;
      }
      v25 = 0LL;
    }
    *(_BYTE *)(BugCheckParameter2 + 34) &= ~0x20u;
    if ( v30 )
    {
      if ( v27 )
      {
        MiInsertAndUnlockStandbyPages((__int64)ListEntry, v104, v27, 0x11u);
        v27 = 0;
      }
      if ( v30 == 1 )
      {
        if ( ((*((_BYTE *)v6 + 189) & 8) == 0 || v85 == 1)
          && (*(_DWORD *)(BugCheckParameter2 + 16) & 0x400LL) == 0
          && !(unsigned int)MiIsPfnCommitNotCharged(BugCheckParameter2) )
        {
          MiChargeCommit(
            *(_QWORD *)(qword_14036C8F8 + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 40) & 0x3FFLL)),
            1LL,
            4LL);
        }
        MiRestoreTransitionPte(BugCheckParameter2, 1LL, v25, v28);
        *(_QWORD *)(BugCheckParameter2 + 24) |= 0x4000000000000000uLL;
        if ( (*(_DWORD *)(BugCheckParameter2 + 16) & 0x400LL) == 0 )
          *(_QWORD *)(BugCheckParameter2 + 16) &= 0xFFFFFFFFFFFFFFF9uLL;
      }
      MiRemoveLockedPageChargeAndDecRef(BugCheckParameter2);
      _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v32 = v83;
      __writecr8(v83);
      v25 = 0LL;
      v28 = 2LL;
      goto LABEL_59;
    }
    v36 = v87;
    *(_QWORD *)BugCheckParameter2 = 0LL;
    if ( BugCheckParameter2 == v87 )
    {
      v37 = a4;
      v86 = 1;
      if ( a4 )
      {
        if ( v27 )
        {
          MiInsertAndUnlockStandbyPages((__int64)ListEntry, v104, v27, 0x11u);
          v37 = a4;
          v27 = 0;
        }
        v38 = *(_DWORD **)v95;
        MiSwapHardFaultPage(*(_QWORD *)v95, BugCheckParameter2, v37, v28);
        v36 = a4;
        v87 = a4;
        BugCheckParameter2 = a4;
        a4 = 0LL;
      }
      else
      {
        v38 = *(_DWORD **)v95;
      }
      if ( BugCheckParameter2 == v36 && ImagePageOk >= 0 && a3 && (*((_BYTE *)v6 + 189) & 4) == 0 )
      {
        if ( v27 )
        {
          MiInsertAndUnlockStandbyPages((__int64)ListEntry, v104, v27, 0x11u);
          v27 = 0;
        }
        if ( !(unsigned int)MiAreChargesNeededToLockPage(BugCheckParameter2)
          || (unsigned int)MiChargeForLockedPage(v39, 3LL) )
        {
          ++*(_WORD *)(BugCheckParameter2 + 32);
        }
        v40 = *(_BYTE *)(BugCheckParameter2 + 34);
        *(_QWORD *)(BugCheckParameter2 + 24) ^= (*(_QWORD *)(BugCheckParameter2 + 24) ^ (*(_QWORD *)(BugCheckParameter2 + 24)
                                                                                       + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
        *(_BYTE *)(BugCheckParameter2 + 34) = v40 & 0xF8 | 6;
        MiRemoveLockedPageChargeAndDecRef(BugCheckParameter2);
        v41 = *(struct _KEVENT **)(qword_14036C8F8 + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 40) & 0x3FFLL));
        v42 = *(_DWORD *)(BugCheckParameter2 + 16);
        v101 = v41;
        if ( (v42 & 0x400) == 0 && MiIsPteInStore((__int64)v41, *(_QWORD *)(BugCheckParameter2 + 16)) )
        {
          v26 = MiCaptureDirtyBitToPfn(BugCheckParameter2);
          v99 = v26;
        }
        if ( (*(_QWORD *)(BugCheckParameter2 + 40) & 0x200000000000000LL) != 0 )
        {
          if ( ((*v38 >> 5) & 0x1F) == 0x18 )
            MiMakeProtoReadOnly(v38, BugCheckParameter2);
          ValidPte = MI_READ_PTE_LOCK_FREE(v38);
          v43 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&ValidPte);
          ValidPte = MiMakeValidPte((unsigned __int64)v38, v43, v44);
          *(_QWORD *)v38 = ValidPte;
          if ( (unsigned int)MiPteInShadowRange(v38) )
            MiWritePteShadow(v45);
          if ( v103 )
            *v103 = CachedCommit;
        }
        goto LABEL_121;
      }
    }
    if ( *((char *)v6 + 190) < 0 )
    {
      *v12 |= 0x8000000000000000uLL;
      goto LABEL_121;
    }
    v46 = *(_WORD *)(BugCheckParameter2 + 32);
    if ( !v46 )
      MiBadRefCount(BugCheckParameter2, CachedCommit, 0LL, v28);
    CachedCommit = 0x10000000000000LL;
    v78 = v46 == 1;
    v47 = v46 - 1;
    *(_WORD *)(BugCheckParameter2 + 32) = v47;
    if ( v78 && (*(_QWORD *)(BugCheckParameter2 + 40) & 0x10000000000000LL) != 0 )
    {
LABEL_177:
      if ( v27 == 16 )
      {
        MiInsertAndUnlockStandbyPages((__int64)ListEntry, v104, 0x10u, 0x11u);
        v25 = 0LL;
        v27 = 1;
        v104[0] = BugCheckParameter2;
      }
      else
      {
        v64 = v27;
        v25 = 0LL;
        ++v27;
        v104[v64] = BugCheckParameter2;
      }
      goto LABEL_57;
    }
    v48 = *(_QWORD *)(BugCheckParameter2 + 40);
    if ( (v48 & 0x10000000000000LL) != 0 )
      goto LABEL_121;
    CachedCommit = 0x3FFFFFFFFFFFFFFFLL;
    v49 = *(_QWORD *)(BugCheckParameter2 + 24) & 0x3FFFFFFFFFFFFFFFLL;
    if ( !v47 )
    {
      v50 = 1;
LABEL_138:
      CachedCommit = 0x8000000000000000uLL;
      v51 = *(_QWORD *)(BugCheckParameter2 + 8) | 0x8000000000000000uLL;
      if ( (v51 > 0xFFFFF6BFFFFFFF78uLL || v51 < 0xFFFFF68000000000uLL)
        && ((*(unsigned __int8 *)(BugCheckParameter2 + 35) >> 5) & 1) != 0 )
      {
        *(_BYTE *)(BugCheckParameter2 + 35) &= ~0x20u;
        goto LABEL_176;
      }
      if ( (v48 & 0x200000000000000LL) != 0 && (*(_DWORD *)(BugCheckParameter2 + 16) & 0x400LL) != 0 )
      {
        v52 = 1;
      }
      else if ( (unsigned int)MiIsPfnCommitNotCharged(BugCheckParameter2) )
      {
        v52 = 1;
      }
      else if ( v50 == 1 && v53 )
      {
        v52 = 1;
      }
      v54 = *(_QWORD *)(qword_14036C8F8 + 8 * ((v48 >> 40) & 0x3FF));
      if ( v52 == 1 )
      {
        v55 = *(_QWORD *)(v54 + 4992);
        if ( v55 )
        {
          while ( 1 )
          {
            CachedCommit = 1LL;
            v56 = v55;
            v55 = _InterlockedCompareExchange64((volatile signed __int64 *)(v54 + 4992), v55 - 1, v55);
            if ( v56 == v55 )
              break;
            if ( !v55 )
              goto LABEL_156;
          }
        }
        else
        {
LABEL_156:
          if ( (ULONG_PTR *)v54 == &MiSystemPartition
            && (CurrentPrcb = KeGetCurrentPrcb(),
                _m_prefetchw((const void *)&CurrentPrcb->CachedCommit),
                CachedCommit = CurrentPrcb->CachedCommit,
                CachedCommit + 1 <= 0x100) )
          {
            while ( 1 )
            {
              v58 = _InterlockedCompareExchange(
                      (volatile signed __int32 *)&CurrentPrcb->CachedCommit,
                      CachedCommit + 1,
                      CachedCommit);
              if ( v58 == CachedCommit )
                break;
              CachedCommit = v58;
              if ( v58 + 1 > 0x100 )
                goto LABEL_160;
            }
          }
          else
          {
LABEL_160:
            v59 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v54 + 6128), 0xFFFFFFFFFFFFFFFFuLL);
            v60 = *(_QWORD *)(v54 + 4960);
            if ( v59 >= v60 && v59 - 1 < v60
              || (CachedCommit = *(_QWORD *)(v54 + 4952), v59 - 1 < CachedCommit) && v59 >= CachedCommit )
            {
              MiSyncCommitSignals(v54, 0LL);
            }
          }
        }
      }
      if ( (ULONG_PTR *)v54 == &MiSystemPartition )
      {
        v61 = KeGetCurrentPrcb();
        v62 = 1LL;
        CachedCommit = (int)v61->CachedResidentAvailable;
        if ( (_DWORD)CachedCommit != -1 )
        {
          if ( CachedCommit + 1 <= 0x100 )
          {
            while ( 1 )
            {
              v63 = _InterlockedCompareExchange(
                      (volatile signed __int32 *)&v61->CachedResidentAvailable,
                      CachedCommit + 1,
                      CachedCommit);
              v78 = (_DWORD)CachedCommit == v63;
              CachedCommit = v63;
              if ( v78 )
                break;
              if ( v63 == -1 || (unsigned __int64)(v63 + 1LL) > 0x100 )
                goto LABEL_171;
            }
LABEL_176:
            if ( v50 )
              goto LABEL_177;
            goto LABEL_121;
          }
LABEL_171:
          if ( (int)CachedCommit > 192
            && (_DWORD)CachedCommit == _InterlockedCompareExchange(
                                         (volatile signed __int32 *)&v61->CachedResidentAvailable,
                                         192,
                                         CachedCommit) )
          {
            v62 = (int)CachedCommit - 192 + 1LL;
          }
        }
        _InterlockedExchangeAdd64(&qword_1403818C0, v62);
        goto LABEL_176;
      }
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v54 + 5824), 1uLL);
      goto LABEL_176;
    }
    if ( v47 == 1 )
    {
      if ( v49 )
        goto LABEL_136;
    }
    else if ( v47 != 2 || !v49 )
    {
      goto LABEL_121;
    }
    if ( (*(_BYTE *)(BugCheckParameter2 + 34) & 8) != 0 )
    {
LABEL_136:
      v50 = 0;
      goto LABEL_138;
    }
LABEL_121:
    v32 = v83;
    v28 = 2LL;
    _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v25 = 0LL;
    if ( !v27 )
      __writecr8(v83);
LABEL_59:
    if ( (unsigned __int64)++v12 > v84 )
      break;
    ImagePageOk = v81;
    DecayPfn = ListEntry;
  }
  v65 = ListEntry;
  if ( v27 )
    MiInsertAndUnlockStandbyPages((__int64)ListEntry, v104, v27, v32);
  v11 = (unsigned __int64)v96;
LABEL_184:
  if ( v16 )
  {
    v66 = v79;
    if ( CurrentIrql != 17 )
      v66 = 17;
    v93[0] = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
    {
      do
      {
        do
          KeYieldProcessorEx(v93);
        while ( (*(_QWORD *)(v16 + 24) & 0x8000000000000000uLL) != 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) );
      v65 = ListEntry;
    }
    *(_BYTE *)(v16 + 34) &= ~0x20u;
    MiRemoveLockedPageChargeAndDecRef(v16);
    _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v66 != 17 )
      __writecr8(v66);
  }
  if ( *((char *)v6 + 190) < 0 )
  {
    MmCheckCachedPageStates(v89 + (v6[24] & 0x3FFFF), *(unsigned int *)(v98 + 40), 2, 0LL);
    v67 = 1LL;
    v68 = (v84 - v11 + 8) >> 3;
    if ( v11 > v84 )
      v68 = 0LL;
    if ( v68 )
    {
      v69 = v96;
      do
      {
        if ( *v69 < 0 )
        {
          v70 = *v69 & 0x7FFFFFFFFFFFFFFFLL;
          *v69 = v70;
          v71 = 48 * v70 - 0x58000000000LL;
          v72 = (unsigned __int8)MiLockPageInline(v71);
          MiRemoveLockedPageChargeAndDecRef(v71);
          _InterlockedAnd64((volatile signed __int64 *)(v71 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          __writecr8(v72);
        }
        ++v69;
        ++v67;
      }
      while ( v67 <= v68 );
      v26 = v99;
      v6 = v100;
      v65 = ListEntry;
    }
  }
  if ( v65 )
    MiDecayPfnFullyInitialized(v65);
  if ( v26 )
    MiReleasePageFileInfo(v101, v26, 0);
  if ( a3 && *((char *)v6 + 191) < 0 )
  {
    MiPreUnlockWorkingSetExclusive(a3, CurrentIrql);
    v73 = MiGetSharedVm(a3);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v73, retaddr);
    else
      *v73 = 0;
    __writecr8(CurrentIrql);
  }
  if ( (*((_BYTE *)v6 + 191) & 0x10) == 0 )
    ObDereferenceObjectDeferDelete(*((PVOID *)v6 + 24));
  if ( (int)v6[44] > 1 )
    KeSetEvent((PRKEVENT)(v6 + 14), 0, 0);
  MiFreeInPageSupportBlock(v6);
  if ( a4 )
  {
    v74 = *(_QWORD *)(qword_14036C8F8 + 8 * ((*(_QWORD *)(a4 + 40) >> 40) & 0x3FFLL));
    MiReleaseFreshPage(a4);
    if ( (ULONG_PTR *)v74 == &MiSystemPartition )
      MiReturnResidentAvailable(1LL, v75, v76);
    else
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v74 + 5824), 1uLL);
    MiReturnCommit(v74, 1LL);
  }
  result = (unsigned int)v82;
  if ( v82 >= 0 )
  {
    v78 = v86 == 0;
    result = v81;
    goto LABEL_225;
  }
  if ( (*(_DWORD *)v102 & 1) != 0 )
  {
    v78 = (*(_DWORD *)v102 & 2) == 0;
LABEL_225:
    if ( v78 )
      return 3221226548LL;
  }
  return result;
}
