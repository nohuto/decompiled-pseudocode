/*
 * XREFs of MiFinishHardFault @ 0x14002FC50
 * Callers:
 *     MiWaitForInPageComplete @ 0x14002D860 (MiWaitForInPageComplete.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiImagePageOk @ 0x14002C610 (MiImagePageOk.c)
 *     MiMakeTransitionPteValid @ 0x14002C750 (MiMakeTransitionPteValid.c)
 *     MiIsFaultPteIntact @ 0x14002CD68 (MiIsFaultPteIntact.c)
 *     MiRelockProtoPoolPage @ 0x14002E068 (MiRelockProtoPoolPage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140030A90 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiUnlockProtoPoolPage @ 0x140030AF0 (MiUnlockProtoPoolPage.c)
 *     MiLockPageAtDpcInline @ 0x140031780 (MiLockPageAtDpcInline.c)
 *     MiCaptureDirtyBitToPfn @ 0x140032400 (MiCaptureDirtyBitToPfn.c)
 *     MiFreeInPageSupportBlock @ 0x140032450 (MiFreeInPageSupportBlock.c)
 *     MiChargeForLockedPage @ 0x140032500 (MiChargeForLockedPage.c)
 *     MiRestoreTransitionPte @ 0x1400352D0 (MiRestoreTransitionPte.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiReturnCommit @ 0x140036530 (MiReturnCommit.c)
 *     MiChargeCommit @ 0x14003AB20 (MiChargeCommit.c)
 *     MiInsertAndUnlockStandbyPages @ 0x140051C80 (MiInsertAndUnlockStandbyPages.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x140057900 (MiPreUnlockWorkingSetExclusive.c)
 *     ObDereferenceObjectDeferDelete @ 0x140071350 (ObDereferenceObjectDeferDelete.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     MiIsPfnCommitNotCharged @ 0x140078050 (MiIsPfnCommitNotCharged.c)
 *     MiAreChargesNeededToLockPage @ 0x1400780A0 (MiAreChargesNeededToLockPage.c)
 *     MmCheckCachedPageStates @ 0x14007B8D0 (MmCheckCachedPageStates.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     MiReturnResidentAvailable @ 0x1400BFE10 (MiReturnResidentAvailable.c)
 *     MiReleasePageFileInfo @ 0x1400C0554 (MiReleasePageFileInfo.c)
 *     MiReleaseFreshPage @ 0x1400C538C (MiReleaseFreshPage.c)
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 *     MiDecayPfnFullyInitialized @ 0x140115284 (MiDecayPfnFullyInitialized.c)
 *     MiCreateDecayPfn @ 0x140115CFC (MiCreateDecayPfn.c)
 *     MiInvalidateCollidedIos @ 0x14012DC4C (MiInvalidateCollidedIos.c)
 *     MiSyncCommitSignals @ 0x14014FEC8 (MiSyncCommitSignals.c)
 *     MiMakeImagePageOk @ 0x14015AE38 (MiMakeImagePageOk.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MiBadRefCount @ 0x14017CA3C (MiBadRefCount.c)
 *     MiMakeProtoReadOnly @ 0x14021CB54 (MiMakeProtoReadOnly.c)
 *     MiSwapHardFaultPage @ 0x140235F34 (MiSwapHardFaultPage.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140286144 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiFinishHardFault(unsigned int *P, __int64 *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 CurrentIrql; // rbp
  __int64 *v6; // rbx
  unsigned int *v7; // r15
  _DWORD *v9; // rax
  _DWORD *v10; // rdx
  __int64 v11; // r8
  _DWORD *v12; // rsi
  _QWORD *v13; // r13
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // r12
  char v18; // al
  unsigned int v19; // edi
  __int64 SharedVm; // rbx
  char *v21; // rdx
  int v22; // ebp
  int ImagePageOk; // r12d
  unsigned __int8 v24; // cl
  __int64 DecayPfn; // rcx
  __int64 v26; // rdx
  unsigned __int64 v27; // rdi
  unsigned int v28; // r14d
  __int64 v29; // rbx
  __int64 v30; // r8
  unsigned __int64 v31; // r9
  __int64 v32; // rdi
  int v33; // esi
  __int16 v34; // ax
  unsigned __int8 v35; // cl
  char v36; // al
  _QWORD *v37; // r8
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 *v41; // rsi
  __int64 v42; // rcx
  char v43; // al
  __int64 v44; // rdx
  __int64 v45; // rax
  __int64 TransitionPteValid; // rdx
  __int16 v47; // cx
  unsigned __int64 CurrentPrcb; // r9
  bool v49; // zf
  __int16 v50; // cx
  unsigned __int64 v51; // rsi
  __int64 v52; // rax
  int v53; // ebp
  unsigned __int64 v54; // rcx
  char v55; // al
  int v56; // r10d
  int IsPfnCommitNotCharged; // eax
  int v58; // r11d
  __int64 v59; // rsi
  signed __int64 v60; // rax
  signed __int64 v61; // rtt
  __int64 v62; // rdx
  __int64 v63; // rcx
  unsigned __int64 v64; // rcx
  unsigned __int64 v65; // rdx
  unsigned __int64 v66; // rdx
  struct _KPRCB *v67; // r8
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v69; // eax
  __int64 v70; // rax
  ULONG_PTR v71; // r13
  unsigned __int8 v72; // al
  unsigned __int64 v73; // rbp
  unsigned __int64 v74; // r14
  __int64 *v75; // r15
  __int64 v76; // rax
  __int64 v77; // rsi
  unsigned __int64 v78; // rdi
  __int64 v79; // rbx
  unsigned __int8 v80; // di
  _DWORD *v81; // rax
  __int64 v82; // rdx
  __int64 v83; // rbx
  __int64 result; // rax
  char v85; // [rsp+30h] [rbp-188h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-180h]
  int v87; // [rsp+40h] [rbp-178h]
  __int64 v88; // [rsp+48h] [rbp-170h]
  int v89; // [rsp+50h] [rbp-168h]
  int v90; // [rsp+54h] [rbp-164h]
  __int64 v91; // [rsp+58h] [rbp-160h]
  __int64 v92; // [rsp+60h] [rbp-158h]
  int v93[2]; // [rsp+68h] [rbp-150h]
  int v94[2]; // [rsp+70h] [rbp-148h]
  int v95[2]; // [rsp+78h] [rbp-140h]
  unsigned __int64 v96; // [rsp+80h] [rbp-138h]
  unsigned __int64 v97; // [rsp+88h] [rbp-130h]
  _QWORD *v98; // [rsp+90h] [rbp-128h]
  __int64 v99; // [rsp+98h] [rbp-120h]
  __int64 v100; // [rsp+A0h] [rbp-118h]
  _DWORD *v101; // [rsp+A8h] [rbp-110h]
  __int64 v102; // [rsp+B0h] [rbp-108h]
  __int64 v103; // [rsp+B8h] [rbp-100h]
  __int64 v104; // [rsp+C0h] [rbp-F8h]
  __int64 *v105; // [rsp+D0h] [rbp-E8h]
  unsigned int *v106; // [rsp+D8h] [rbp-E0h]
  _QWORD v107[16]; // [rsp+E0h] [rbp-D8h] BYREF
  void *retaddr; // [rsp+1B8h] [rbp+0h]

  v6 = (__int64 *)*((_QWORD *)P + 28);
  v7 = P;
  v104 = a5;
  v9 = (_DWORD *)*((_QWORD *)P + 31);
  v106 = P;
  v105 = a2;
  v10 = P + 64;
  v92 = a4;
  *(_QWORD *)v95 = a3;
  v11 = *((_QWORD *)P + 19);
  if ( v9 )
    v10 = v9;
  v90 = 0;
  v89 = 0;
  *(_QWORD *)v93 = v6;
  v101 = v10;
  v12 = v10 + 12;
  v13 = v10 + 12;
  v14 = (v10[8] + v10[11]) & 0xFFF;
  v15 = (unsigned int)v10[10] + 4095LL;
  v98 = v10 + 12;
  v97 = (unsigned __int64)&v10[2 * (unsigned int)((unsigned __int64)(v15 + v14) >> 12) + 10];
  v16 = v7[46];
  if ( (_DWORD)v16 == -1 )
    v96 = -1LL;
  else
    v96 = (unsigned __int64)&v10[2 * v16 + 12];
  v17 = *((_QWORD *)v7 + 20);
  v91 = *((_QWORD *)v7 + 30);
  *(_QWORD *)v94 = *((_QWORD *)v7 + 27);
  v18 = *((_BYTE *)v7 + 191) & 8;
  v100 = v17;
  v85 = 17;
  v19 = v18 != 0 ? 0xC0000434 : 0;
  if ( a3 )
  {
    CurrentIrql = KeGetCurrentIrql();
    v99 = CurrentIrql;
    __writecr8(1uLL);
    if ( *((char *)v7 + 191) >= 0 )
    {
      if ( (*(_BYTE *)(a3 + 192) & 7) != 0 )
        KiLeaveGuardedRegionUnsafe(v11);
      else
        KeLeaveCriticalRegionThread(v11);
    }
    SharedVm = MiGetSharedVm(a3);
    ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
    *(_DWORD *)(SharedVm + 4) = 0;
    v6 = *(__int64 **)v93;
  }
  else
  {
    LOBYTE(CurrentIrql) = 17;
    v99 = CurrentIrql;
  }
  if ( v17 )
  {
    v21 = &v85;
    if ( (_BYTE)CurrentIrql != 17 )
      v21 = 0LL;
    MiRelockProtoPoolPage(v17, v21);
  }
  if ( (v7[47] & 1) != 0 )
  {
    v7[20] = -1073741670;
    *((_QWORD *)v7 + 11) = 0LL;
  }
  v22 = v7[20];
  LOBYTE(v88) = 17;
  v87 = v22;
  if ( *((unsigned int **)v7 + 2) != v7 + 4 )
  {
    v89 = MiInvalidateCollidedIos(v7);
    if ( v89 != 1 )
    {
      v7[20] = -1073741801;
      *((_QWORD *)v7 + 11) = 0LL;
    }
  }
  if ( v17 )
  {
    MiLockPageAtDpcInline(v17);
    MiRemoveLockedPageChargeAndDecRef(v17);
    _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  ImagePageOk = v19;
  if ( a3 && (*((_BYTE *)v7 + 189) & 4) == 0 && !MiIsFaultPteIntact(*(__int64 *)v94, v6, (__int64 *)v7 + 21) )
    ImagePageOk = -1073740748;
  if ( v22 >= 0
    && ((*((_BYTE *)v7 + 189) & 4) != 0
     || *((_QWORD *)v7 + 31)
     || (_DWORD *)v97 != v12 && v96 > (unsigned __int64)(v101 + 14))
    && (v24 = *((_BYTE *)v7 + 190), (v24 & 7) != 0)
    && (*((_BYTE *)v7 + 191) & 4) != 0
    && (v24 & 0x80u) == 0 )
  {
    DecayPfn = MiCreateDecayPfn((v24 >> 4) & 7);
    v26 = 0LL;
  }
  else
  {
    v26 = 0LL;
    DecayPfn = 0LL;
  }
  v27 = v97;
  v28 = 0;
  BugCheckParameter2 = DecayPfn;
  v29 = 0LL;
  v102 = 0LL;
  v30 = 2LL;
  v103 = 0LL;
  v31 = 0xFFFFFA8000000000uLL;
  if ( (unsigned __int64)v12 > v97 )
  {
    v71 = BugCheckParameter2;
    goto LABEL_181;
  }
  while ( 1 )
  {
    v32 = 48LL * *v13 - 0x58000000000LL;
    if ( v32 == qword_140389190 )
      goto LABEL_50;
    if ( v28 )
    {
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v32 + 24), 0x3FuLL) )
      {
        MiInsertAndUnlockStandbyPages(DecayPfn, v107, v28, (unsigned __int8)v88);
        v26 = 0LL;
        v28 = 0;
        --v13;
LABEL_49:
        v30 = 2LL;
        v31 = 0xFFFFFA8000000000uLL;
LABEL_50:
        v35 = v88;
        goto LABEL_51;
      }
    }
    else
    {
      v88 = KeGetCurrentIrql();
      __writecr8(2uLL);
      MiLockPageAtDpcInline(v32);
      v26 = 0LL;
      v30 = 2LL;
    }
    v33 = 0;
    if ( (*(_DWORD *)v104 & 1) != 0 )
    {
      v34 = *(_WORD *)(v104 + 2);
      if ( v34 )
        *(_WORD *)(v104 + 2) = v34 - 1;
    }
    if ( (*(_QWORD *)(v32 + 24) & 0x4000000000000000LL) != 0 )
    {
      v33 = 2;
      goto LABEL_59;
    }
    v36 = *(_BYTE *)(v32 + 35);
    if ( (v36 & 0x10) != 0 )
    {
      if ( v32 == v91 )
      {
        if ( v22 >= 0 )
          v22 = -1073741761;
        v87 = v22;
      }
      goto LABEL_58;
    }
    if ( v22 < 0 )
    {
      *(_BYTE *)(v32 + 35) = v36 | 0x10;
LABEL_58:
      v33 = 1;
      goto LABEL_59;
    }
    if ( (unsigned __int64)v13 >= v96 )
    {
      v33 = 1;
      if ( v32 == v91 )
        ImagePageOk = -1073740748;
      *(_BYTE *)(v32 + 35) = v36 | 0x10;
    }
LABEL_59:
    if ( v32 == v91 && !v33 && ImagePageOk != -1073740748 && *(_QWORD *)v95 && (*((_BYTE *)v7 + 189) & 4) == 0 )
    {
      if ( !MiImagePageOk(*(__int64 *)v94, v32) )
      {
        *((_BYTE *)v7 + 189) |= 0x10u;
        if ( v28 )
        {
          LOBYTE(v31) = 17;
          MiInsertAndUnlockStandbyPages(BugCheckParameter2, v107, v28, v31);
          v28 = 0;
        }
        v37 = (_QWORD *)(*(_QWORD *)(v32 + 8) | 0x8000000000000000uLL);
        v38 = *v37;
        if ( (unsigned __int64)v37 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v37 <= 0xFFFFF6FB7DBED7F8uLL )
          LODWORD(v38) = MiReadPteShadow(*(_QWORD *)(v32 + 8) | 0x8000000000000000uLL, *v37);
        ImagePageOk = MiMakeImagePageOk(v94[0], v93[0], v38, v95[0], v32, v100);
        if ( (*(_QWORD *)(v32 + 24) & 0x4000000000000000LL) != 0 )
          v33 = 2;
      }
      v26 = 0LL;
    }
    *(_BYTE *)(v32 + 34) &= ~0x20u;
    *(_QWORD *)v32 = 0LL;
    if ( v33 )
    {
      if ( v28 )
      {
        LOBYTE(v31) = 17;
        MiInsertAndUnlockStandbyPages(BugCheckParameter2, v107, v28, v31);
        v28 = 0;
      }
      if ( v33 == 1 )
      {
        if ( ((*((_BYTE *)v7 + 189) & 8) == 0 || v89 == 1)
          && (*(_DWORD *)(v32 + 16) & 0x400LL) == 0
          && !(unsigned int)MiIsPfnCommitNotCharged(v32, v26) )
        {
          MiChargeCommit(*(_QWORD *)(qword_140388AF0 + 8 * ((*(_QWORD *)(v32 + 40) >> 40) & 0x3FFLL)), 1LL, 4LL);
        }
        MiRestoreTransitionPte(v32, 1LL);
        *(_QWORD *)(v32 + 24) |= 0x4000000000000000uLL;
        if ( (*(_DWORD *)(v32 + 16) & 0x400LL) == 0 )
          *(_QWORD *)(v32 + 16) &= 0xFFFFFFFFFFFFFFF9uLL;
      }
      MiRemoveLockedPageChargeAndDecRef(v32);
      _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v35 = v88;
      __writecr8((unsigned __int8)v88);
      v26 = 0LL;
      v31 = 0xFFFFFA8000000000uLL;
      v30 = 2LL;
      goto LABEL_51;
    }
    v39 = v91;
    if ( v32 == v91 )
    {
      v40 = v92;
      v90 = 1;
      if ( v92 )
      {
        if ( v28 )
        {
          LOBYTE(v31) = 17;
          MiInsertAndUnlockStandbyPages(BugCheckParameter2, v107, v28, v31);
          v40 = v92;
          v28 = 0;
        }
        v41 = *(__int64 **)v93;
        MiSwapHardFaultPage(*(_QWORD *)v93, v32, v40);
        v26 = 0LL;
        v39 = v92;
        v91 = v92;
        v32 = v92;
        v92 = 0LL;
      }
      else
      {
        v41 = *(__int64 **)v93;
      }
      if ( v32 == v39 && ImagePageOk >= 0 && *(_QWORD *)v95 && (*((_BYTE *)v7 + 189) & 4) == 0 )
      {
        if ( v28 )
        {
          LOBYTE(v31) = 17;
          MiInsertAndUnlockStandbyPages(BugCheckParameter2, v107, v28, v31);
          v28 = 0;
        }
        if ( !(unsigned int)MiAreChargesNeededToLockPage(v32, v26, v30, v31)
          || (unsigned int)MiChargeForLockedPage(v42, 3LL) )
        {
          ++*(_WORD *)(v32 + 32);
        }
        v43 = *(_BYTE *)(v32 + 34);
        *(_QWORD *)(v32 + 24) ^= (*(_QWORD *)(v32 + 24) ^ (*(_QWORD *)(v32 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
        *(_BYTE *)(v32 + 34) = v43 & 0xF8 | 6;
        MiRemoveLockedPageChargeAndDecRef(v32);
        v44 = *(_QWORD *)(qword_140388AF0 + 8 * ((*(_QWORD *)(v32 + 40) >> 40) & 0x3FFLL));
        v45 = *(_QWORD *)(v32 + 16);
        v103 = v44;
        if ( (v45 & 0x400) == 0 && (v45 & 4) != 0 && (unsigned __int16)v45 >> 12 == *(_DWORD *)(v44 + 1140) )
        {
          v29 = MiCaptureDirtyBitToPfn(v32);
          v102 = v29;
        }
        if ( (*(_QWORD *)(v32 + 40) & 0x200000000000000LL) != 0 )
        {
          if ( ((*(_DWORD *)v41 >> 5) & 0x1F) == 0x18 )
            MiMakeProtoReadOnly(v41, v32);
          TransitionPteValid = MiMakeTransitionPteValid(v41);
          *v41 = TransitionPteValid;
          if ( (unsigned __int64)v41 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v41 <= 0xFFFFF6FB7DBED7F8uLL )
            MiWritePteShadow(v41, TransitionPteValid);
          if ( v105 )
            *v105 = TransitionPteValid;
        }
        goto LABEL_118;
      }
    }
    if ( *((char *)v7 + 190) < 0 )
    {
      *v13 |= 0x8000000000000000uLL;
      goto LABEL_118;
    }
    v47 = *(_WORD *)(v32 + 32);
    if ( !v47 )
      MiBadRefCount(v32, 0LL);
    CurrentPrcb = 0x10000000000000LL;
    v49 = v47 == 1;
    v50 = v47 - 1;
    *(_WORD *)(v32 + 32) = v50;
    if ( v49 && (*(_QWORD *)(v32 + 40) & 0x10000000000000LL) != 0 )
    {
LABEL_174:
      if ( v28 == 16 )
      {
        LOBYTE(CurrentPrcb) = 17;
        MiInsertAndUnlockStandbyPages(BugCheckParameter2, v107, 16LL, CurrentPrcb);
        v26 = 0LL;
        v28 = 1;
        v107[0] = v32;
      }
      else
      {
        v70 = v28;
        v26 = 0LL;
        ++v28;
        v107[v70] = v32;
      }
      goto LABEL_49;
    }
    v51 = *(_QWORD *)(v32 + 40);
    if ( (v51 & 0x10000000000000LL) != 0 )
      goto LABEL_118;
    v52 = *(_QWORD *)(v32 + 24) & 0x3FFFFFFFFFFFFFFFLL;
    if ( !v50 )
    {
      CurrentPrcb = 1LL;
      v53 = 1;
LABEL_135:
      v54 = *(_QWORD *)(v32 + 8) | 0x8000000000000000uLL;
      if ( v54 > 0xFFFFF6BFFFFFFF78uLL || v54 < 0xFFFFF68000000000uLL )
      {
        v55 = *(_BYTE *)(v32 + 35);
        if ( (v55 & 0x20) != 0 )
        {
          *(_BYTE *)(v32 + 35) = v55 & 0xDF;
          goto LABEL_173;
        }
      }
      if ( (v51 & 0x200000000000000LL) != 0 && (*(_DWORD *)(v32 + 16) & 0x400LL) != 0 )
      {
        v56 = 1;
      }
      else
      {
        IsPfnCommitNotCharged = MiIsPfnCommitNotCharged(v32, 0LL);
        CurrentPrcb = 1LL;
        if ( IsPfnCommitNotCharged )
        {
          v56 = 1;
        }
        else if ( v53 == 1 && v58 )
        {
          v56 = 1;
        }
      }
      v59 = *(_QWORD *)(qword_140388AF0 + 8 * ((v51 >> 40) & 0x3FF));
      if ( v56 == 1 )
      {
        v60 = *(_QWORD *)(v59 + 5120);
        if ( v60 )
        {
          while ( 1 )
          {
            v61 = v60;
            v60 = _InterlockedCompareExchange64((volatile signed __int64 *)(v59 + 5120), v60 - 1, v60);
            if ( v61 == v60 )
              break;
            if ( !v60 )
              goto LABEL_153;
          }
        }
        else
        {
LABEL_153:
          if ( (ULONG_PTR *)v59 == &MiSystemPartition
            && (CurrentPrcb = (unsigned __int64)KeGetCurrentPrcb(),
                _m_prefetchw((const void *)(CurrentPrcb + 24600)),
                v62 = *(unsigned int *)(CurrentPrcb + 24600),
                (unsigned __int64)(v62 + 1) <= 0x100) )
          {
            while ( 1 )
            {
              v63 = _InterlockedCompareExchange((volatile signed __int32 *)(CurrentPrcb + 24600), v62 + 1, v62);
              if ( v63 == v62 )
                break;
              v62 = v63;
              if ( (unsigned __int64)(v63 + 1) > 0x100 )
                goto LABEL_157;
            }
          }
          else
          {
LABEL_157:
            v64 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v59 + 6320), 0xFFFFFFFFFFFFFFFFuLL);
            v65 = *(_QWORD *)(v59 + 5088);
            if ( v64 >= v65 && v64 - 1 < v65 || (v66 = *(_QWORD *)(v59 + 5080), v64 - 1 < v66) && v64 >= v66 )
              MiSyncCommitSignals(v59, 0LL, 1LL, CurrentPrcb);
          }
        }
      }
      if ( (ULONG_PTR *)v59 == &MiSystemPartition )
      {
        v67 = KeGetCurrentPrcb();
        CurrentPrcb = 1LL;
        CachedResidentAvailable = (int)v67->CachedResidentAvailable;
        if ( (_DWORD)CachedResidentAvailable != -1 )
        {
          if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
          {
            while ( 1 )
            {
              v69 = _InterlockedCompareExchange(
                      (volatile signed __int32 *)&v67->CachedResidentAvailable,
                      CachedResidentAvailable + 1,
                      CachedResidentAvailable);
              v49 = (_DWORD)CachedResidentAvailable == v69;
              LODWORD(CachedResidentAvailable) = v69;
              if ( v49 )
                break;
              if ( v69 == -1 || (unsigned __int64)(v69 + 1LL) > 0x100 )
                goto LABEL_168;
            }
LABEL_173:
            v49 = v53 == 0;
            v22 = v87;
            if ( !v49 )
              goto LABEL_174;
            goto LABEL_118;
          }
LABEL_168:
          if ( (int)CachedResidentAvailable > 192
            && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                    (volatile signed __int32 *)&v67->CachedResidentAvailable,
                                                    192,
                                                    CachedResidentAvailable) )
          {
            CurrentPrcb = (int)CachedResidentAvailable - 192 + 1LL;
          }
        }
        CurrentPrcb = _InterlockedExchangeAdd64(&qword_14038B840, CurrentPrcb);
        goto LABEL_173;
      }
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v59 + 6016), 1uLL);
      goto LABEL_173;
    }
    if ( v50 == 1 )
    {
      if ( v52 )
        goto LABEL_133;
    }
    else if ( v50 != 2 || !v52 )
    {
      goto LABEL_118;
    }
    if ( (*(_BYTE *)(v32 + 34) & 8) != 0 )
    {
LABEL_133:
      v53 = 0;
      CurrentPrcb = 1LL;
      goto LABEL_135;
    }
LABEL_118:
    v35 = v88;
    v30 = 2LL;
    v31 = 0xFFFFFA8000000000uLL;
    _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v26 = 0LL;
    if ( !v28 )
      __writecr8(v35);
LABEL_51:
    v27 = v97;
    if ( (unsigned __int64)++v13 > v97 )
      break;
    DecayPfn = BugCheckParameter2;
  }
  v71 = BugCheckParameter2;
  if ( v28 )
    MiInsertAndUnlockStandbyPages(BugCheckParameter2, v107, v28, v35);
  v12 = v98;
LABEL_181:
  if ( v100 )
  {
    v72 = v85;
    if ( (_BYTE)v99 != 17 )
      v72 = 17;
    MiUnlockProtoPoolPage(v100, v72);
  }
  if ( *((char *)v7 + 190) < 0 )
  {
    MmCheckCachedPageStates(*(_QWORD *)v94 + (v7[24] & 0x3FFFF), (unsigned int)v101[10], 2LL, 0LL);
    v73 = 1LL;
    v74 = (v27 - (unsigned __int64)v12 + 8) >> 3;
    if ( (unsigned __int64)v12 > v27 )
      v74 = 0LL;
    if ( v74 )
    {
      v75 = v98;
      do
      {
        if ( *v75 < 0 )
        {
          v76 = *v75 & 0x7FFFFFFFFFFFFFFFLL;
          *v75 = v76;
          v77 = 48 * v76 - 0x58000000000LL;
          v78 = (unsigned __int8)MiLockPageInline(v77);
          MiRemoveLockedPageChargeAndDecRef(v77);
          _InterlockedAnd64((volatile signed __int64 *)(v77 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          __writecr8(v78);
        }
        ++v75;
        ++v73;
      }
      while ( v73 <= v74 );
      v29 = v102;
      v7 = v106;
      v71 = BugCheckParameter2;
    }
  }
  if ( v71 )
    MiDecayPfnFullyInitialized(v71);
  if ( v29 )
    MiReleasePageFileInfo(v103, v29, 0LL);
  v79 = *(_QWORD *)v95;
  if ( *(_QWORD *)v95 && *((char *)v7 + 191) < 0 )
  {
    v80 = v99;
    MiPreUnlockWorkingSetExclusive(*(_QWORD *)v95, (unsigned __int8)v99);
    v81 = (_DWORD *)MiGetSharedVm(v79);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v81, retaddr);
    else
      *v81 = 0;
    __writecr8(v80);
  }
  if ( (*((_BYTE *)v7 + 191) & 0x10) == 0 )
    ObDereferenceObjectDeferDelete(*((PVOID *)v7 + 24));
  if ( (int)v7[44] > 1 )
    KeSetEvent((PRKEVENT)(v7 + 14), 0, 0);
  MiFreeInPageSupportBlock(v7);
  if ( v92 )
  {
    v82 = (*(_QWORD *)(v92 + 40) >> 40) & 0x3FFLL;
    v83 = *(_QWORD *)(qword_140388AF0 + 8 * v82);
    MiReleaseFreshPage(v92, v82);
    if ( (ULONG_PTR *)v83 == &MiSystemPartition )
      MiReturnResidentAvailable(1LL);
    else
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v83 + 6016), 1uLL);
    MiReturnCommit(v83, 1LL);
  }
  result = (unsigned int)v87;
  if ( v87 >= 0 )
  {
    if ( !v90 )
      return (unsigned int)-1073740748;
    return (unsigned int)ImagePageOk;
  }
  else if ( (*(_DWORD *)v104 & 1) != 0 && (*(_DWORD *)v104 & 2) == 0 )
  {
    return 3221226548LL;
  }
  return result;
}
