/*
 * XREFs of MiFinishHardFault @ 0x140058B10
 * Callers:
 *     MiPfCompleteInPageSupport @ 0x14003F1DC (MiPfCompleteInPageSupport.c)
 *     MiIssueHardFault @ 0x140059D80 (MiIssueHardFault.c)
 * Callees:
 *     MiReturnCommit @ 0x14000A1A0 (MiReturnCommit.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiInsertAndUnlockStandbyPages @ 0x14002E460 (MiInsertAndUnlockStandbyPages.c)
 *     MiMakeValidPte @ 0x14002EB00 (MiMakeValidPte.c)
 *     MiUnlockProtoPoolPage @ 0x140030A70 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140030AF8 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiIsPfnCommitNotCharged @ 0x140032060 (MiIsPfnCommitNotCharged.c)
 *     MiDecayPfnFullyInitialized @ 0x14004DA54 (MiDecayPfnFullyInitialized.c)
 *     MiCreateDecayPfn @ 0x14004DB30 (MiCreateDecayPfn.c)
 *     MiRestoreTransitionPte @ 0x140053D40 (MiRestoreTransitionPte.c)
 *     MiReleaseFaultState @ 0x140057E38 (MiReleaseFaultState.c)
 *     MiImagePageOk @ 0x140057EB0 (MiImagePageOk.c)
 *     MiAddLockedPageCharge @ 0x140058004 (MiAddLockedPageCharge.c)
 *     MiFreeInPageSupportBlock @ 0x140059960 (MiFreeInPageSupportBlock.c)
 *     MiRelockProtoPoolPage @ 0x140059A10 (MiRelockProtoPoolPage.c)
 *     MiRelockFaultState @ 0x140059A7C (MiRelockFaultState.c)
 *     MiIsFaultPteIntact @ 0x140059B20 (MiIsFaultPteIntact.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiInvalidateCollidedIos @ 0x1400ACB34 (MiInvalidateCollidedIos.c)
 *     MiIsPteInStore @ 0x1400C62F4 (MiIsPteInStore.c)
 *     MiReleasePageFileInfo @ 0x1400D6FBC (MiReleasePageFileInfo.c)
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ObDereferenceObjectDeferDelete @ 0x1400FA020 (ObDereferenceObjectDeferDelete.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiChargeCommit @ 0x140119760 (MiChargeCommit.c)
 *     MmCheckCachedPageStates @ 0x14011E3C0 (MmCheckCachedPageStates.c)
 *     MiCaptureDirtyBitToPfn @ 0x140124940 (MiCaptureDirtyBitToPfn.c)
 *     MiLockPageAtDpcInline @ 0x140124DA0 (MiLockPageAtDpcInline.c)
 *     MiReturnResidentAvailable @ 0x14013511C (MiReturnResidentAvailable.c)
 *     MiReleaseFreshPage @ 0x14013A6E0 (MiReleaseFreshPage.c)
 *     MiSyncCommitSignals @ 0x14017DDB4 (MiSyncCommitSignals.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     MiBadRefCount @ 0x1401A6864 (MiBadRefCount.c)
 *     MiMakeProtoReadOnly @ 0x140258CD0 (MiMakeProtoReadOnly.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x140264B7C (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 *     MiMakeImagePageOk @ 0x14026A8A4 (MiMakeImagePageOk.c)
 *     MiSwapHardFaultPage @ 0x14026D914 (MiSwapHardFaultPage.c)
 */

__int64 __fastcall MiFinishHardFault(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 CurrentIrql; // r12
  __int64 v5; // r13
  _DWORD *v6; // r15
  _DWORD *v7; // r9
  unsigned int v8; // ebx
  __int64 v10; // r8
  __int64 v11; // rdx
  _DWORD *v12; // rax
  _DWORD *v13; // rbp
  _QWORD *v14; // r14
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  char v18; // al
  unsigned int v19; // edi
  ULONG_PTR v20; // rsi
  char *v21; // rdx
  int v22; // r12d
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  bool v26; // zf
  int v27; // esi
  unsigned __int8 v28; // cl
  _SLIST_ENTRY *DecayPfn; // rcx
  __int64 v30; // r8
  unsigned __int64 v31; // rsi
  unsigned int v32; // r15d
  __int64 v33; // rdi
  __int64 v34; // r9
  __int64 v35; // rsi
  int v36; // ebp
  unsigned __int8 v37; // cl
  char v38; // al
  int v39; // ecx
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // r9
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rcx
  _DWORD *v46; // rbp
  char v47; // al
  __int64 v48; // r8
  __int64 v49; // r9
  unsigned __int64 v50; // r8
  __int64 v51; // rcx
  int v52; // eax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // r9
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int16 v58; // dx
  __int16 v59; // dx
  __int64 v60; // rcx
  unsigned __int64 v61; // rbp
  __int64 v62; // rax
  __int64 v63; // rcx
  int v64; // r14d
  unsigned __int64 v65; // rcx
  char v66; // al
  int v67; // r10d
  int v68; // r11d
  __int64 v69; // rbp
  signed __int64 v70; // rax
  signed __int64 v71; // rtt
  struct _KPRCB *CurrentPrcb; // r9
  __int64 CachedCommit; // rdx
  __int64 v74; // rcx
  unsigned __int64 v75; // rcx
  unsigned __int64 v76; // rdx
  unsigned __int64 v77; // rdx
  struct _KPRCB *v78; // r8
  unsigned __int64 v79; // r9
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v81; // eax
  __int64 v82; // rax
  unsigned __int8 v83; // al
  unsigned __int64 v84; // r14
  unsigned __int64 v85; // r15
  __int64 *v86; // r13
  __int64 v87; // rax
  ULONG_PTR v88; // rbp
  unsigned __int64 v89; // rsi
  __int64 v90; // rdx
  __int64 v91; // r8
  __int64 v92; // r9
  __int64 v93; // rdi
  __int64 v94; // rdx
  __int64 result; // rax
  char v96; // [rsp+30h] [rbp-1A8h] BYREF
  int ImagePageOk; // [rsp+34h] [rbp-1A4h]
  PSLIST_ENTRY ListEntry; // [rsp+38h] [rbp-1A0h]
  __int64 v99; // [rsp+40h] [rbp-198h]
  int v100; // [rsp+48h] [rbp-190h]
  unsigned int v101; // [rsp+4Ch] [rbp-18Ch]
  int v102; // [rsp+50h] [rbp-188h]
  __int64 v103; // [rsp+58h] [rbp-180h]
  __int64 v104; // [rsp+60h] [rbp-178h]
  __int64 v105; // [rsp+68h] [rbp-170h]
  unsigned __int64 v106; // [rsp+70h] [rbp-168h]
  __int64 v107; // [rsp+78h] [rbp-160h]
  _DWORD *v108; // [rsp+80h] [rbp-158h]
  _QWORD *v109; // [rsp+88h] [rbp-150h]
  unsigned __int64 v110; // [rsp+90h] [rbp-148h]
  ULONG_PTR v111; // [rsp+98h] [rbp-140h]
  __int64 v112; // [rsp+A0h] [rbp-138h]
  _QWORD *v113; // [rsp+A8h] [rbp-130h]
  unsigned __int64 ValidPte; // [rsp+B0h] [rbp-128h] BYREF
  __int64 v115; // [rsp+B8h] [rbp-120h]
  _DWORD *v116; // [rsp+C0h] [rbp-118h]
  __int64 v117; // [rsp+C8h] [rbp-110h]
  __int64 v118; // [rsp+D0h] [rbp-108h]
  __int64 v119; // [rsp+D8h] [rbp-100h]
  _QWORD *v120; // [rsp+E8h] [rbp-F0h]
  __int64 v121; // [rsp+F0h] [rbp-E8h]
  ULONG_PTR v122[16]; // [rsp+100h] [rbp-D8h] BYREF

  v5 = a3;
  v107 = a1;
  v120 = a4;
  v121 = a3;
  v119 = a1 + 56;
  v6 = *(_DWORD **)(a3 + 224);
  v7 = (_DWORD *)(a3 + 264);
  v8 = *(_DWORD *)(a3 + 112);
  v10 = *(_QWORD *)(a1 + 56);
  v11 = *(_QWORD *)(v5 + 152);
  v104 = *(_QWORD *)(v5 + 104);
  v12 = *(_DWORD **)(v5 + 248);
  v102 = 0;
  v100 = 0;
  if ( v12 )
    v7 = v12;
  v105 = v10;
  v101 = v8;
  v108 = v6;
  v116 = v7;
  v13 = v7 + 12;
  v14 = v7 + 12;
  v15 = (v7[8] + v7[11]) & 0xFFF;
  v16 = (unsigned int)v7[10] + 4095LL;
  v113 = v7 + 12;
  v109 = v7 + 12;
  v110 = (unsigned __int64)&v7[2 * (unsigned int)((unsigned __int64)(v16 + v15) >> 12) + 10];
  v17 = *(unsigned int *)(v5 + 184);
  if ( (_DWORD)v17 == -1 )
    v106 = -1LL;
  else
    v106 = (unsigned __int64)&v7[2 * v17 + 12];
  v103 = *(_QWORD *)(v5 + 240);
  v111 = *(_QWORD *)(v5 + 160);
  v112 = *(_QWORD *)(v5 + 216);
  v18 = *(_BYTE *)(v5 + 191) & 8;
  v96 = 17;
  v19 = v18 != 0 ? 0xC0000434 : 0;
  if ( v10 )
  {
    CurrentIrql = KeGetCurrentIrql();
    v115 = CurrentIrql;
    __writecr8(1uLL);
    if ( *(char *)(v5 + 191) >= 0 )
    {
      if ( (*(_BYTE *)(v10 + 184) & 7) != 0 )
        KiLeaveGuardedRegionUnsafe(v11);
      else
        KeLeaveCriticalRegionThread(v11);
    }
    MiRelockFaultState(v119, a2);
    *(_BYTE *)(v107 + 64) = CurrentIrql;
  }
  else
  {
    LOBYTE(CurrentIrql) = 17;
    v115 = CurrentIrql;
  }
  v20 = v111;
  if ( v111 )
  {
    v21 = &v96;
    if ( (_BYTE)CurrentIrql != 17 )
      v21 = 0LL;
    MiRelockProtoPoolPage(v111, v21);
  }
  if ( (*(_BYTE *)(v5 + 188) & 1) != 0 )
  {
    v22 = -1073741670;
    *(_QWORD *)(v5 + 88) = 0LL;
    *(_DWORD *)(v5 + 80) = -1073741670;
  }
  else
  {
    v22 = *(_DWORD *)(v5 + 80);
  }
  LOBYTE(v99) = 17;
  if ( *(_QWORD *)(v5 + 16) != v5 + 16 )
  {
    v100 = MiInvalidateCollidedIos(v5);
    if ( v100 != 1 )
    {
      *(_DWORD *)(v5 + 80) = -1073741801;
      *(_QWORD *)(v5 + 88) = 0LL;
    }
  }
  if ( v20 )
  {
    MiLockPageAtDpcInline(v20);
    MiRemoveLockedPageChargeAndDecRef(v20, v23, v24, v25);
    _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  ImagePageOk = v19;
  if ( v105 )
  {
    v26 = (*(_BYTE *)(v5 + 189) & 4) == 0;
    ImagePageOk = v19;
    if ( v26 )
    {
      v27 = v19;
      if ( !(unsigned int)MiIsFaultPteIntact(v107, v112, v6, v5 + 168) )
        v27 = -1073740748;
      ImagePageOk = v27;
    }
  }
  if ( v22 >= 0
    && ((*(_BYTE *)(v5 + 189) & 4) != 0
     || *(_QWORD *)(v5 + 248)
     || (_DWORD *)v110 != v13 && v106 > (unsigned __int64)(v116 + 14))
    && (v28 = *(_BYTE *)(v5 + 190), (v28 & 7) != 0)
    && (*(_BYTE *)(v5 + 191) & 4) != 0
    && (v28 & 0x80u) == 0 )
  {
    DecayPfn = MiCreateDecayPfn((v28 >> 4) & 7);
    v30 = 0LL;
  }
  else
  {
    v30 = 0LL;
    DecayPfn = 0LL;
  }
  v31 = v110;
  v32 = 0;
  v33 = ZeroPte;
  ListEntry = DecayPfn;
  v117 = ZeroPte;
  v118 = 0LL;
  v34 = 0xFFFFFA8000000000uLL;
  if ( (unsigned __int64)v14 <= v110 )
  {
    while ( 1 )
    {
      v35 = 48LL * *v14 - 0x58000000000LL;
      if ( v35 == qword_1403CC410 )
        goto LABEL_52;
      if ( v32 )
      {
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v35 + 24), 0x3FuLL) )
        {
          MiInsertAndUnlockStandbyPages((__int64)DecayPfn, v122, v32, v99);
          v30 = 0LL;
          v32 = 0;
          --v14;
LABEL_51:
          v34 = 0xFFFFFA8000000000uLL;
LABEL_52:
          v37 = v99;
          goto LABEL_53;
        }
      }
      else
      {
        v99 = KeGetCurrentIrql();
        __writecr8(2uLL);
        MiLockPageAtDpcInline(v35);
        v30 = 0LL;
      }
      v36 = 0;
      if ( (v8 & 1) != 0 && HIWORD(v8) )
      {
        v8 = (unsigned __int16)v8 | ((HIWORD(v8) - 1) << 16);
        v101 = v8;
      }
      if ( (*(_QWORD *)(v35 + 24) & 0x4000000000000000LL) != 0 )
        break;
      v38 = *(_BYTE *)(v35 + 35);
      if ( (v38 & 0x10) != 0 )
      {
        if ( v35 == v103 && v22 >= 0 )
          v22 = -1073741761;
LABEL_59:
        v36 = 1;
LABEL_60:
        v39 = ImagePageOk;
        v40 = 3221226548LL;
        goto LABEL_61;
      }
      if ( v22 < 0 )
      {
        *(_BYTE *)(v35 + 35) = v38 | 0x10;
        goto LABEL_59;
      }
      if ( (unsigned __int64)v14 < v106 )
        goto LABEL_60;
      v40 = 3221226548LL;
      v39 = ImagePageOk;
      v36 = 1;
      if ( v35 == v103 )
        v39 = -1073740748;
      *(_BYTE *)(v35 + 35) = v38 | 0x10;
      ImagePageOk = v39;
LABEL_61:
      if ( v35 == v103 && !v36 && v39 != -1073740748 && v105 && (*(_BYTE *)(v5 + 189) & 4) == 0 )
      {
        if ( !MiImagePageOk(v112, v35) )
        {
          *(_BYTE *)(v5 + 189) |= 0x10u;
          if ( v32 )
          {
            MiInsertAndUnlockStandbyPages((__int64)ListEntry, v122, v32, 0x11u);
            v32 = 0;
          }
          v41 = MI_READ_PTE_LOCK_FREE(*(_QWORD *)(v35 + 8) | 0x8000000000000000uLL);
          ImagePageOk = MiMakeImagePageOk(v107, v108, v41, v35, v111);
          if ( (*(_QWORD *)(v35 + 24) & 0x4000000000000000LL) != 0 )
            v36 = 2;
        }
        v30 = 0LL;
      }
      *(_BYTE *)(v35 + 34) &= ~0x20u;
      *(_QWORD *)v35 = 0LL;
      if ( v36 )
      {
        if ( v32 )
        {
          MiInsertAndUnlockStandbyPages((__int64)ListEntry, v122, v32, 0x11u);
          v32 = 0;
        }
        if ( v36 == 1 )
        {
          if ( ((*(_BYTE *)(v5 + 189) & 8) == 0 || v100 == 1)
            && (*(_DWORD *)(v35 + 16) & 0x400LL) == 0
            && !(unsigned int)MiIsPfnCommitNotCharged(v35) )
          {
            MiChargeCommit(*(_QWORD *)(qword_1403CBD88 + 8 * ((*(_QWORD *)(v35 + 40) >> 40) & 0x3FFLL)), 1LL, 4LL, v42);
          }
          MiRestoreTransitionPte(v35, 1);
          *(_QWORD *)(v35 + 24) |= 0x4000000000000000uLL;
          v43 = *(_QWORD *)(v35 + 16);
          if ( (v43 & 0x400) == 0 )
            *(_QWORD *)(v35 + 16) = v43 & 0xFFFFFFFFFFFFFFF9uLL;
        }
        MiRemoveLockedPageChargeAndDecRef(v35, v40, v30, v34);
        _InterlockedAnd64((volatile signed __int64 *)(v35 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v37 = v99;
        __writecr8((unsigned __int8)v99);
        v30 = 0LL;
        v34 = 0xFFFFFA8000000000uLL;
        goto LABEL_53;
      }
      v44 = v103;
      if ( v35 == v103 )
      {
        v45 = v104;
        v102 = 1;
        if ( v104 )
        {
          if ( v32 )
          {
            MiInsertAndUnlockStandbyPages((__int64)ListEntry, v122, v32, 0x11u);
            v45 = v104;
            v32 = 0;
          }
          v46 = v108;
          MiSwapHardFaultPage(v108, v35, v45);
          v44 = v104;
          v103 = v104;
          v35 = v104;
          v104 = 0LL;
        }
        else
        {
          v46 = v108;
        }
        if ( v35 == v44 && ImagePageOk >= 0 && v105 && (*(_BYTE *)(v5 + 189) & 4) == 0 )
        {
          if ( v32 )
          {
            MiInsertAndUnlockStandbyPages((__int64)ListEntry, v122, v32, 0x11u);
            v32 = 0;
          }
          MiAddLockedPageCharge(v35, 3);
          v47 = *(_BYTE *)(v35 + 34);
          *(_QWORD *)(v35 + 24) ^= (*(_QWORD *)(v35 + 24) ^ (*(_QWORD *)(v35 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
          *(_BYTE *)(v35 + 34) = v47 & 0xF8 | 6;
          MiRemoveLockedPageChargeAndDecRef(v35, 0x3FFFFFFFFFFFFFFFLL, v48, v49);
          v50 = *(_QWORD *)(v35 + 40);
          v51 = *(_QWORD *)(qword_1403CBD88 + 8 * ((v50 >> 40) & 0x3FF));
          v52 = *(_DWORD *)(v35 + 16);
          v118 = v51;
          if ( (v52 & 0x400) == 0 && (unsigned int)MiIsPteInStore(v51, *(_QWORD *)(v35 + 16)) )
          {
            v53 = MiCaptureDirtyBitToPfn(v35);
            v50 = *(_QWORD *)(v35 + 40);
            v33 = v53;
            v117 = v53;
          }
          if ( (v50 & 0x200000000000000LL) != 0 )
          {
            if ( ((*v46 >> 5) & 0x1F) == 0x18 )
              MiMakeProtoReadOnly(v46, v35);
            ValidPte = MI_READ_PTE_LOCK_FREE((unsigned __int64)v46);
            v54 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&ValidPte);
            ValidPte = MiMakeValidPte((unsigned __int64)v46, v54, (unsigned int)v55, v55);
            *(_QWORD *)v46 = ValidPte;
            if ( MiPteInShadowRange((unsigned __int64)v46) )
              MiWritePteShadow(v57, v56);
            if ( v120 )
              *v120 = v56;
          }
          goto LABEL_112;
        }
      }
      if ( *(char *)(v5 + 190) < 0 )
      {
        *v14 |= 0x8000000000000000uLL;
        goto LABEL_112;
      }
      v58 = *(_WORD *)(v35 + 32);
      if ( !v58 )
        MiBadRefCount(v35);
      v26 = v58 == 1;
      v59 = v58 - 1;
      *(_WORD *)(v35 + 32) = v59;
      if ( v26 )
      {
        v60 = (*(_QWORD *)(v35 + 40) >> 52) & 1LL;
        if ( (*(_QWORD *)(v35 + 24) & 0x4000000000000000LL) != 0 )
        {
          if ( v60 )
            goto LABEL_174;
        }
        else if ( v60 )
        {
          goto LABEL_174;
        }
      }
      v61 = *(_QWORD *)(v35 + 40);
      v62 = (v61 >> 52) & 1;
      if ( (*(_QWORD *)(v35 + 24) & 0x4000000000000000LL) != 0 )
      {
        if ( v62 )
          goto LABEL_112;
      }
      else if ( v62 )
      {
        goto LABEL_112;
      }
      v63 = *(_QWORD *)(v35 + 24) & 0x3FFFFFFFFFFFFFFFLL;
      if ( !v59 )
      {
        v64 = 1;
LABEL_135:
        v65 = *(_QWORD *)(v35 + 8) | 0x8000000000000000uLL;
        if ( v65 > 0xFFFFF6BFFFFFFF78uLL || v65 < 0xFFFFF68000000000uLL )
        {
          v66 = *(_BYTE *)(v35 + 35);
          if ( (v66 & 0x20) != 0 )
          {
            *(_BYTE *)(v35 + 35) = v66 & 0xDF;
            goto LABEL_173;
          }
        }
        if ( (v61 & 0x200000000000000LL) != 0 && (*(_DWORD *)(v35 + 16) & 0x400LL) != 0 )
        {
          v67 = 1;
        }
        else if ( (unsigned int)MiIsPfnCommitNotCharged(v35) )
        {
          v67 = 1;
        }
        else if ( v64 == 1 && v68 )
        {
          v67 = 1;
        }
        v69 = *(_QWORD *)(qword_1403CBD88 + 8 * ((v61 >> 40) & 0x3FF));
        if ( v67 == 1 )
        {
          v70 = *(_QWORD *)(v69 + 6208);
          if ( v70 )
          {
            while ( 1 )
            {
              v71 = v70;
              v70 = _InterlockedCompareExchange64((volatile signed __int64 *)(v69 + 6208), v70 - 1, v70);
              if ( v71 == v70 )
                break;
              if ( !v70 )
                goto LABEL_153;
            }
          }
          else
          {
LABEL_153:
            if ( (ULONG_PTR *)v69 == &MiSystemPartition
              && (CurrentPrcb = KeGetCurrentPrcb(),
                  _m_prefetchw((const void *)&CurrentPrcb->CachedCommit),
                  CachedCommit = CurrentPrcb->CachedCommit,
                  (unsigned __int64)(CachedCommit + 1) <= 0x100) )
            {
              while ( 1 )
              {
                v74 = _InterlockedCompareExchange(
                        (volatile signed __int32 *)&CurrentPrcb->CachedCommit,
                        CachedCommit + 1,
                        CachedCommit);
                if ( v74 == CachedCommit )
                  break;
                CachedCommit = v74;
                if ( (unsigned __int64)(v74 + 1) > 0x100 )
                  goto LABEL_157;
              }
            }
            else
            {
LABEL_157:
              v75 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v69 + 7400), 0xFFFFFFFFFFFFFFFFuLL);
              v76 = *(_QWORD *)(v69 + 6176);
              if ( v75 >= v76 && v75 - 1 < v76 || (v77 = *(_QWORD *)(v69 + 6168), v75 - 1 < v77) && v75 >= v77 )
                MiSyncCommitSignals(v69, 0LL);
            }
          }
        }
        if ( (ULONG_PTR *)v69 == &MiSystemPartition )
        {
          v78 = KeGetCurrentPrcb();
          v79 = 1LL;
          CachedResidentAvailable = (int)v78->CachedResidentAvailable;
          if ( (_DWORD)CachedResidentAvailable != -1 )
          {
            if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
            {
              while ( 1 )
              {
                v81 = _InterlockedCompareExchange(
                        (volatile signed __int32 *)&v78->CachedResidentAvailable,
                        CachedResidentAvailable + 1,
                        CachedResidentAvailable);
                v26 = (_DWORD)CachedResidentAvailable == v81;
                LODWORD(CachedResidentAvailable) = v81;
                if ( v26 )
                  break;
                if ( v81 == -1 || (unsigned __int64)(v81 + 1LL) > 0x100 )
                  goto LABEL_168;
              }
LABEL_173:
              v26 = v64 == 0;
              v14 = v109;
              if ( !v26 )
              {
LABEL_174:
                if ( v32 == 16 )
                {
                  MiInsertAndUnlockStandbyPages((__int64)ListEntry, v122, 0x10u, 0x11u);
                  v30 = 0LL;
                  v32 = 1;
                  v122[0] = v35;
                }
                else
                {
                  v82 = v32;
                  v30 = 0LL;
                  ++v32;
                  v122[v82] = v35;
                }
                goto LABEL_51;
              }
              goto LABEL_112;
            }
LABEL_168:
            if ( (int)CachedResidentAvailable > 192
              && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                      (volatile signed __int32 *)&v78->CachedResidentAvailable,
                                                      192,
                                                      CachedResidentAvailable) )
            {
              v79 = (int)CachedResidentAvailable - 192 + 1LL;
            }
          }
          _InterlockedExchangeAdd64(&qword_1403CFB00, v79);
          goto LABEL_173;
        }
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v69 + 7104), 1uLL);
        goto LABEL_173;
      }
      if ( v59 == 1 )
      {
        if ( v63 )
          goto LABEL_133;
      }
      else if ( v59 != 2 || !v63 )
      {
        goto LABEL_112;
      }
      if ( (*(_BYTE *)(v35 + 34) & 8) != 0 )
      {
LABEL_133:
        v64 = 0;
        goto LABEL_135;
      }
LABEL_112:
      _InterlockedAnd64((volatile signed __int64 *)(v35 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v37 = v99;
      v30 = 0LL;
      v34 = 0xFFFFFA8000000000uLL;
      if ( !v32 )
        __writecr8((unsigned __int8)v99);
LABEL_53:
      v31 = v110;
      v109 = ++v14;
      if ( (unsigned __int64)v14 > v110 )
      {
        if ( v32 )
          MiInsertAndUnlockStandbyPages((__int64)ListEntry, v122, v32, v37);
        v13 = v113;
        goto LABEL_180;
      }
      DecayPfn = ListEntry;
    }
    v36 = 2;
    goto LABEL_60;
  }
LABEL_180:
  if ( v111 )
  {
    v83 = v96;
    if ( (_BYTE)v115 != 17 )
      v83 = 17;
    MiUnlockProtoPoolPage(v111, v83, v30, v34);
  }
  if ( *(char *)(v5 + 190) < 0 )
  {
    MmCheckCachedPageStates(v112 + (*(_DWORD *)(v5 + 96) & 0x3FFFF), (unsigned int)v116[10], 2LL);
    v84 = 1LL;
    v85 = (v31 - (unsigned __int64)v13 + 8) >> 3;
    if ( (unsigned __int64)v13 > v31 )
      v85 = 0LL;
    if ( v85 )
    {
      v86 = v113;
      do
      {
        if ( *v86 < 0 )
        {
          v87 = *v86 & 0x7FFFFFFFFFFFFFFFLL;
          *v86 = v87;
          v88 = 48 * v87 - 0x58000000000LL;
          v89 = (unsigned __int8)MiLockPageInline(v88);
          MiRemoveLockedPageChargeAndDecRef(v88, v90, v91, v92);
          _InterlockedAnd64((volatile signed __int64 *)(v88 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          __writecr8(v89);
        }
        ++v86;
        ++v84;
      }
      while ( v84 <= v85 );
      LOBYTE(v8) = v101;
      v33 = v117;
      v5 = v121;
    }
  }
  if ( ListEntry )
    MiDecayPfnFullyInitialized(ListEntry);
  if ( v33 )
    MiReleasePageFileInfo(v118, v33, 0LL);
  if ( v105 && *(char *)(v5 + 191) < 0 )
    MiReleaseFaultState(v119, 0x11u, 0LL);
  if ( (*(_BYTE *)(v5 + 191) & 0x10) == 0 )
    ObDereferenceObjectDeferDelete(*(PVOID *)(v5 + 192));
  if ( *(int *)(v5 + 176) > 1 )
    KeSetEvent((PRKEVENT)(v5 + 56), 0, 0);
  MiFreeInPageSupportBlock((PVOID)v5);
  if ( v104 )
  {
    v93 = *(_QWORD *)(qword_1403CBD88 + 8 * ((*(_QWORD *)(v104 + 40) >> 40) & 0x3FFLL));
    MiReleaseFreshPage(v104);
    if ( (ULONG_PTR *)v93 == &MiSystemPartition )
      MiReturnResidentAvailable(1LL, v94);
    else
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v93 + 7104), 1uLL);
    MiReturnCommit(v93, 1uLL);
  }
  if ( v22 >= 0 )
  {
    result = (unsigned int)ImagePageOk;
    if ( !v102 )
      return 3221226548LL;
  }
  else
  {
    if ( (v8 & 1) != 0 && (v8 & 2) == 0 )
      return (unsigned int)-1073740748;
    return (unsigned int)v22;
  }
  return result;
}
