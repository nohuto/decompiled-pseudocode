/*
 * XREFs of MiCopyDataPageToImagePage @ 0x140095B10
 * Callers:
 *     MiResolveMappedFileFault @ 0x1401060D0 (MiResolveMappedFileFault.c)
 * Callees:
 *     MiDereferenceControlAreaPfnList @ 0x1400162F8 (MiDereferenceControlAreaPfnList.c)
 *     MiDecayPfnFullyInitialized @ 0x140016720 (MiDecayPfnFullyInitialized.c)
 *     MiCreateDecayPfn @ 0x14001B2A0 (MiCreateDecayPfn.c)
 *     MiUnlockNestedProtoPoolPage @ 0x140034DA0 (MiUnlockNestedProtoPoolPage.c)
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x14006ADF0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140096D40 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiGetSessionIdForVa @ 0x1400974CC (MiGetSessionIdForVa.c)
 *     MiLockPageAtDpcInline @ 0x14009C240 (MiLockPageAtDpcInline.c)
 *     MiMakeValidPte @ 0x1400A12B0 (MiMakeValidPte.c)
 *     MiReleasePtes @ 0x1400A23A0 (MiReleasePtes.c)
 *     MiRemoveLockedPageCharge @ 0x1400A2B50 (MiRemoveLockedPageCharge.c)
 *     MiUnlockProtoPoolPage @ 0x1400A3920 (MiUnlockProtoPoolPage.c)
 *     MiUnlinkPageFromList @ 0x1400C3100 (MiUnlinkPageFromList.c)
 *     MiInsertAndUnlockStandbyPages @ 0x1400C4D40 (MiInsertAndUnlockStandbyPages.c)
 *     MiPfnReferenceCountIsZero @ 0x1400C9020 (MiPfnReferenceCountIsZero.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1400CCB60 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiStartingOffset @ 0x1400CDBF0 (MiStartingOffset.c)
 *     MiEndingOffset @ 0x1400CDDC0 (MiEndingOffset.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     MiReservePtes @ 0x1400F7CA0 (MiReservePtes.c)
 *     PsGetIoPriorityThread @ 0x1400FCA20 (PsGetIoPriorityThread.c)
 *     MiInitializeTransitionPfn @ 0x140105864 (MiInitializeTransitionPfn.c)
 *     MiAdvanceFaultList @ 0x1401084A0 (MiAdvanceFaultList.c)
 *     MiObtainProtoReference @ 0x140109844 (MiObtainProtoReference.c)
 *     MiAddLockedPageCharge @ 0x140109894 (MiAddLockedPageCharge.c)
 *     MiTryLockLeafAndContainingPagesAtDpc @ 0x14010A7AC (MiTryLockLeafAndContainingPagesAtDpc.c)
 *     MiTryLockLeafPage @ 0x14010AED8 (MiTryLockLeafPage.c)
 *     MiRelockProtoPoolPage @ 0x14010B17C (MiRelockProtoPoolPage.c)
 *     MiDiscardTransitionPte @ 0x14013B9CC (MiDiscardTransitionPte.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     KeCopyPage @ 0x140185390 (KeCopyPage.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiCopyDataPageToImagePage(
        __int64 a1,
        __int64 *a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v10; // r15
  unsigned int v11; // ebx
  __int64 v12; // r14
  __int64 v13; // r13
  unsigned int SessionIdForVa; // eax
  unsigned __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // r13
  unsigned int v21; // ecx
  unsigned __int64 v22; // r12
  __int64 v23; // rcx
  char v24; // di
  unsigned __int64 v25; // rsi
  __int64 v26; // rax
  char v27; // al
  char v28; // si
  unsigned __int64 v29; // rdi
  unsigned __int64 v30; // rcx
  _WORD *v31; // r12
  __int64 v32; // rax
  __int64 v34; // rsi
  __int64 v35; // r13
  __int64 v36; // rdi
  unsigned __int64 v37; // r14
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // rax
  PEX_SPIN_LOCK v41; // rcx
  _SLIST_ENTRY *DecayPfn; // r14
  __int64 v43; // r13
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rdx
  unsigned __int64 v48; // rax
  __int64 v49; // rax
  _BYTE *v50; // rdi
  __int64 v51; // r13
  __int64 v52; // rcx
  __int64 v53; // rcx
  __int64 v54; // rcx
  size_t v55; // rdi
  ULONG_PTR v56; // rdi
  unsigned __int8 v57; // r13
  __int64 v58; // r8
  ULONG_PTR v59; // rdi
  unsigned __int8 v60; // r15
  __int64 v61; // r8
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // [rsp+20h] [rbp-79h]
  __int64 v65; // [rsp+28h] [rbp-71h]
  ULONG_PTR v66; // [rsp+30h] [rbp-69h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-61h] BYREF
  unsigned int v68; // [rsp+40h] [rbp-59h]
  unsigned __int64 v69; // [rsp+48h] [rbp-51h]
  __int64 v70; // [rsp+50h] [rbp-49h]
  _WORD *v71; // [rsp+58h] [rbp-41h]
  size_t v72; // [rsp+60h] [rbp-39h]
  __int64 v73; // [rsp+68h] [rbp-31h]
  PEX_SPIN_LOCK SpinLock; // [rsp+70h] [rbp-29h]
  _BYTE *v75; // [rsp+78h] [rbp-21h]
  unsigned __int64 v76; // [rsp+80h] [rbp-19h]
  unsigned __int64 v77; // [rsp+88h] [rbp-11h]
  __int64 v78; // [rsp+90h] [rbp-9h]
  PEX_SPIN_LOCK v79; // [rsp+98h] [rbp-1h]
  void *Srca; // [rsp+F0h] [rbp+57h]
  unsigned int v82; // [rsp+F8h] [rbp+5Fh] BYREF
  unsigned __int64 v83; // [rsp+100h] [rbp+67h]
  __int64 v84; // [rsp+108h] [rbp+6Fh]

  v84 = a4;
  v83 = a3;
  v6 = *a2;
  v7 = *(_QWORD *)(a1 + 216);
  BugCheckParameter2 = 0LL;
  v10 = 0LL;
  v66 = 0LL;
  LOBYTE(v11) = 16;
  v73 = 0LL;
  v12 = 0LL;
  v70 = v6;
  v13 = 0LL;
  SessionIdForVa = MiGetSessionIdForVa(v7);
  v69 = MiStartingOffset(a2, a3, SessionIdForVa);
  v79 = (PEX_SPIN_LOCK)(v70 + 72);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v70 + 72));
  v15 = *(_QWORD *)(v70 + 64) & 0xFFFFFFFFFFFFFFF0uLL;
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_14036BE00);
  v16 = **(_QWORD **)(v15 + 40);
  v65 = v16;
  if ( !v16
    || (SpinLock = (PEX_SPIN_LOCK)(v16 + 72),
        !(unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel((volatile signed __int32 *)(v16 + 72))) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_14036BE00);
    goto LABEL_37;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_14036BE00);
  LOBYTE(v11) = 24;
  if ( !*(_QWORD *)(v16 + 32) || (*(_DWORD *)(v16 + 56) & 3) != 0 )
    goto LABEL_37;
  v19 = MiEndingOffset(a2);
  v20 = v16 + 128;
  v21 = *(_DWORD *)(v16 + 172);
  v72 = v19;
  v22 = v69 >> 12;
  v82 = v69 >> 12;
  v76 = (unsigned __int64)(v19 - 1) >> 12;
  if ( v82 >= v21 )
  {
    do
    {
      v20 = *(_QWORD *)(v20 + 16);
      LODWORD(v22) = v22 - v21;
      if ( !v20 )
        goto LABEL_116;
      v21 = *(_DWORD *)(v20 + 44);
    }
    while ( (unsigned int)v22 >= v21 );
  }
  if ( !*(_DWORD *)(v20 + 104) || (v23 = *(_QWORD *)(v20 + 8)) == 0 )
  {
LABEL_116:
    v13 = 0LL;
    goto LABEL_37;
  }
  v66 = 0LL;
  v24 = 0;
  v64 = 0LL;
  v68 = 2;
  v25 = v23 + 8LL * (unsigned int)v22;
  v77 = v25;
  v78 = (v25 >> 9) & 0x7FFFFFFFF8LL;
  if ( v78 == ((v83 >> 9) & 0x7FFFFFFFF8LL) )
  {
    v10 = MiTryLockLeafPage(v25, 0LL);
    BugCheckParameter2 = v10;
  }
  else
  {
    v26 = MiTryLockLeafAndContainingPagesAtDpc(v25, &BugCheckParameter2, 0LL);
    v10 = BugCheckParameter2;
    v73 = v26;
    if ( !v26 )
      goto LABEL_114;
  }
  if ( !v10 )
    goto LABEL_114;
  v11 = 26;
  if ( (*(_BYTE *)(v10 + 34) & 0x20) != 0 )
    goto LABEL_114;
  v75 = (_BYTE *)(v10 + 35);
  if ( (*(_BYTE *)(v10 + 35) & 0x40) != 0 )
    goto LABEL_114;
  v71 = (_WORD *)(v10 + 32);
  if ( *(_WORD *)(v10 + 32) >= 0x7FFFu )
    goto LABEL_114;
  v27 = MI_READ_PTE_LOCK_FREE(v25);
  v17 = 1LL;
  v28 = v27;
  if ( (v69 & 0xFFF) != 0 && v82 != (_DWORD)v76 )
  {
    if ( (unsigned int)(v22 + 1) < *(_DWORD *)(v20 + 44) )
    {
      v29 = v77 + 8;
      v30 = v77 + 8;
      if ( v78 == (((v77 + 8) >> 9) & 0x7FFFFFFFF8LL) )
      {
        v13 = 0LL;
        v12 = MiTryLockLeafPage(v30, 1LL);
        v66 = v12;
      }
      else
      {
        v64 = MiTryLockLeafAndContainingPagesAtDpc(v30, &v66, 1LL);
        v13 = v64;
        if ( !v64 )
          goto LABEL_59;
        v12 = v66;
      }
      if ( !v12 )
        goto LABEL_36;
      v11 = 30;
      if ( (*(_BYTE *)(v12 + 34) & 0x20) != 0 )
        goto LABEL_36;
      if ( (*(_BYTE *)(v12 + 35) & 0x40) != 0 )
        goto LABEL_36;
      v31 = v71;
      if ( *v71 >= 0x7FFFu )
        goto LABEL_36;
      v24 = MI_READ_PTE_LOCK_FREE(v29);
      v68 = 3;
      goto LABEL_30;
    }
LABEL_114:
    v13 = 0LL;
    goto LABEL_36;
  }
  v31 = v71;
LABEL_30:
  ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
  v32 = v70;
  ++*(_QWORD *)(v70 + 32);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v32 + 72));
  v10 = BugCheckParameter2;
  v11 = v11 & 0xFFFFFEC7 | 0x20;
  SpinLock = (PEX_SPIN_LOCK)KeGetCurrentThread();
  if ( (v28 & 1) == 0 && !*v31 )
  {
    v11 |= 8 * (*v75 & 8);
    if ( !(unsigned int)MiUnlinkPageFromList(BugCheckParameter2) )
    {
      MiDiscardTransitionPte(v10);
LABEL_34:
      v12 = v66;
LABEL_35:
      v13 = v64;
LABEL_36:
      v16 = v65;
LABEL_37:
      if ( (v11 & 8) != 0 )
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v16 + 72));
      if ( (v11 & 0x10) != 0 )
        ExReleaseSpinLockExclusiveFromDpcLevel(v79);
      if ( (v11 & 4) != 0 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v10 = BugCheckParameter2;
      }
      if ( v13 )
        MiUnlockNestedProtoPoolPage(v13);
      if ( (v11 & 1) != 0 )
        MiRemoveLockedPageChargeAndDecRef(v10);
      if ( (v11 & 2) != 0 )
        _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v73 )
      {
        LOBYTE(v17) = 2;
        MiUnlockProtoPoolPage(v73, v17);
      }
      if ( (v11 & 0x20) != 0 )
        MiDereferenceControlAreaPfnList(v70, 0LL, v18, 3);
      return 0LL;
    }
    *(_QWORD *)(v10 + 24) &= 0xC000000000000000uLL;
    v11 |= 0x100u;
  }
  if ( !(unsigned int)MiAddLockedPageCharge(v10) )
  {
    if ( v11 >= 0x100 )
    {
      MiPfnReferenceCountIsZero(v10, (v10 + 0x58000000000LL) / 48, v18);
      goto LABEL_34;
    }
    v13 = v64;
LABEL_59:
    v12 = v66;
    goto LABEL_36;
  }
  v12 = v66;
  v11 = v11 & 0xFFFFFEFE | 1;
  if ( v66 )
  {
    if ( (v24 & 1) == 0 && !*(_WORD *)(v66 + 32) )
    {
      v11 |= 16 * (*(_BYTE *)(v66 + 35) & 8);
      if ( !(unsigned int)MiUnlinkPageFromList(v66) )
      {
        MiDiscardTransitionPte(v12);
        goto LABEL_35;
      }
      *(_QWORD *)(v12 + 24) &= 0xC000000000000000uLL;
      v11 |= 0x100u;
    }
    if ( !(unsigned int)MiAddLockedPageCharge(v12) )
    {
      if ( v11 >= 0x100 )
        MiPfnReferenceCountIsZero(v12, (v12 + 0x58000000000LL) / 48, v18);
      goto LABEL_35;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v64 )
      MiUnlockNestedProtoPoolPage(v64);
    v10 = BugCheckParameter2;
  }
  v34 = a1;
  *(_BYTE *)(a1 + 189) |= 0x10u;
  _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v73 )
  {
    LOBYTE(v17) = 2;
    MiUnlockProtoPoolPage(v73, v17);
  }
  v35 = a5;
  v36 = 48 * a5 - 0x58000000000LL;
  MiLockPageAtDpcInline(v36);
  v37 = v83;
  MiInitializeTransitionPfn(v35, v83);
  *(_BYTE *)(v36 + 34) = *(_BYTE *)(v36 + 34) & 0xF8 | 2;
  *(_WORD *)(v36 + 32) = 1;
  *(_BYTE *)(v36 + 34) |= 0x20u;
  *(_QWORD *)v36 = a1 + 32;
  if ( (v84 & 1) != 0 && *(_BYTE *)(v84 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
  {
    MiAdvanceFaultList(v84 & 0xFFFFFFFFFFFFFFFEuLL, v38, v39);
    *(_BYTE *)(a1 + 189) |= 4u;
  }
  *(_BYTE *)(v36 + 35) ^= (*(_BYTE *)(v36 + 35) ^ *(_BYTE *)(a1 + 190)) & 7;
  _InterlockedAnd64((volatile signed __int64 *)(v36 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v40 = MI_READ_PTE_LOCK_FREE(v37);
  v41 = SpinLock;
  *(_QWORD *)(a1 + 168) = v40;
  *(_QWORD *)(a1 + 224) = v37;
  if ( (int)PsGetIoPriorityThread(v41) < 2 )
    *(_BYTE *)(a1 + 189) |= 0x40u;
  *(_QWORD *)(a1 + 304) = v35;
  DecayPfn = 0LL;
  v43 = a6;
  v44 = a6;
  *(_QWORD *)(a1 + 256) = 0LL;
  *(_DWORD *)(a1 + 264) = 56;
  *(_QWORD *)(a1 + 288) = 0LL;
  *(_QWORD *)(a1 + 296) = 4096LL;
  MiObtainProtoReference(v44, 0LL);
  LOBYTE(v45) = 2;
  MiUnlockProtoPoolPage(v43, v45);
  *(_WORD *)(a1 + 266) |= 0x42u;
  v46 = v70;
  v47 = v68;
  *(_QWORD *)(a1 + 96) = v69;
  v48 = v83;
  *(_QWORD *)(a1 + 200) = v46;
  *(_QWORD *)(a1 + 232) = v48;
  *(_QWORD *)(a1 + 240) = v36;
  *(_QWORD *)(a1 + 192) = 0LL;
  *(_QWORD *)(a1 + 160) = v43;
  v49 = MiReservePtes(&qword_14036D0A0, v47);
  v75 = (_BYTE *)v49;
  v50 = (_BYTE *)v49;
  if ( v49 )
  {
    v51 = v49 << 25 >> 16;
    Srca = (void *)(v51 + (v69 & 0xFFF) + 4096);
    *(_QWORD *)v49 = MiMakeValidPte(v49, a5, 2684354564LL);
    if ( (unsigned int)MiPteInShadowRange(v50) )
      MiWritePteShadow(v52);
    *((_QWORD *)v50 + 1) = MiMakeValidPte(v50 + 8, (__int64)(BugCheckParameter2 + 0x58000000000LL) / 48, 536870913LL);
    if ( (unsigned int)MiPteInShadowRange(v50 + 8) )
      MiWritePteShadow(v53);
    if ( v66 )
    {
      *((_QWORD *)v50 + 2) = MiMakeValidPte(v50 + 16, (__int64)(v66 + 0x58000000000LL) / 48, 536870913LL);
      if ( (unsigned int)MiPteInShadowRange(v50 + 16) )
        MiWritePteShadow(v54);
    }
    if ( v69 + 4096 > v72 )
    {
      v72 = ((_WORD)v72 - (_WORD)v69) & 0xFFF;
      v55 = v72;
      memmove((void *)v51, Srca, v72);
      memset((void *)(v55 + v51), 0, (unsigned int)(4096 - v72));
      v50 = v75;
    }
    else
    {
      KeCopyPage(v51, Srca);
    }
    MiReleasePtes(&qword_14036D0A0, v50, v68);
    __incgsdword(0x2E98u);
    *(_DWORD *)(v34 + 80) = 0;
  }
  else
  {
    *(_DWORD *)(a1 + 80) = -1073741670;
  }
  if ( (v11 & 0xC0) != 0 )
    DecayPfn = MiCreateDecayPfn(4u);
  v56 = BugCheckParameter2;
  LOBYTE(v82) = MiLockPageInline(BugCheckParameter2);
  v57 = v82;
  if ( (unsigned int)MiRemoveLockedPageCharge(v56) )
  {
    if ( DecayPfn && (v11 & 0x40) != 0 && (*(_QWORD *)(v10 + 24) & 0x4000000000000000LL) == 0 )
    {
      MiInsertAndUnlockStandbyPages(DecayPfn, &BugCheckParameter2, 1LL, v57);
      LOBYTE(v82) = 17;
      goto LABEL_102;
    }
    MiPfnReferenceCountIsZero(v56, (__int64)(v56 + 0x58000000000LL) / 48, v58);
  }
  if ( v57 != 17 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8((unsigned __int8)v82);
  }
LABEL_102:
  v59 = v66;
  if ( v66 )
  {
    LOBYTE(v82) = MiLockPageInline(v66);
    v60 = v82;
    if ( (unsigned int)MiRemoveLockedPageCharge(v59) )
    {
      if ( DecayPfn && (v11 & 0x80u) != 0 && (*(_QWORD *)(v59 + 24) & 0x4000000000000000LL) == 0 )
      {
        MiInsertAndUnlockStandbyPages(DecayPfn, &v66, 1LL, v60);
        LOBYTE(v82) = 17;
        goto LABEL_111;
      }
      MiPfnReferenceCountIsZero(v59, (__int64)(v59 + 0x58000000000LL) / 48, v61);
    }
    if ( v60 != 17 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v59 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8((unsigned __int8)v82);
    }
  }
LABEL_111:
  if ( DecayPfn )
    MiDecayPfnFullyInitialized(DecayPfn);
  MiRelockProtoPoolPage(a6, &v82);
  v62 = (unsigned __int8)v82;
  v63 = a6;
  *(_BYTE *)(v34 + 189) &= ~0x10u;
  MiUnlockProtoPoolPage(v63, v62);
  *(_QWORD *)(v34 + 88) = 4096LL;
  KeSetEvent((PRKEVENT)(v34 + 32), 0, 0);
  return 1LL;
}
