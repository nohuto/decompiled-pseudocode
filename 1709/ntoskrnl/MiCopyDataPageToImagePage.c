/*
 * XREFs of MiCopyDataPageToImagePage @ 0x140027210
 * Callers:
 *     MiResolveMappedFileFault @ 0x14002A0B0 (MiResolveMappedFileFault.c)
 * Callees:
 *     MiInitializeTransitionPfn @ 0x140025E00 (MiInitializeTransitionPfn.c)
 *     MiObtainProtoReference @ 0x140027120 (MiObtainProtoReference.c)
 *     MiAddLockedPageCharge @ 0x140027170 (MiAddLockedPageCharge.c)
 *     MiEndingOffset @ 0x14002B178 (MiEndingOffset.c)
 *     MiStartingOffset @ 0x14002C570 (MiStartingOffset.c)
 *     MiGetSessionIdForVa @ 0x14002CD24 (MiGetSessionIdForVa.c)
 *     MiRelockProtoPoolPage @ 0x14002E068 (MiRelockProtoPoolPage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140030A90 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiUnlockProtoPoolPage @ 0x140030AF0 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageCharge @ 0x140030B80 (MiRemoveLockedPageCharge.c)
 *     MiLockPageAtDpcInline @ 0x140031780 (MiLockPageAtDpcInline.c)
 *     MiMakeValidPte @ 0x140036F30 (MiMakeValidPte.c)
 *     MiUnlinkPageFromList @ 0x14004B0F0 (MiUnlinkPageFromList.c)
 *     MiPfnReferenceCountIsZero @ 0x14004D4F0 (MiPfnReferenceCountIsZero.c)
 *     MiInsertAndUnlockStandbyPages @ 0x140051C80 (MiInsertAndUnlockStandbyPages.c)
 *     PsGetIoPriorityThread @ 0x140061EF0 (PsGetIoPriorityThread.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140067810 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     MiReleasePtes @ 0x140074F70 (MiReleasePtes.c)
 *     MiReservePtes @ 0x140099750 (MiReservePtes.c)
 *     MiTryLockLeafAndContainingPagesAtDpc @ 0x1400CBF98 (MiTryLockLeafAndContainingPagesAtDpc.c)
 *     MiTryLockLeafPage @ 0x1400CC170 (MiTryLockLeafPage.c)
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x1400FD510 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiAdvanceFaultList @ 0x14010A0F4 (MiAdvanceFaultList.c)
 *     MiDereferenceControlAreaPfnList @ 0x14010A900 (MiDereferenceControlAreaPfnList.c)
 *     MiDecayPfnFullyInitialized @ 0x140115284 (MiDecayPfnFullyInitialized.c)
 *     MiCreateDecayPfn @ 0x140115CFC (MiCreateDecayPfn.c)
 *     MiUnlockNestedProtoPoolPage @ 0x140131C48 (MiUnlockNestedProtoPoolPage.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     KeCopyPage @ 0x140184E30 (KeCopyPage.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     MiDiscardTransitionPte @ 0x14022AE0C (MiDiscardTransitionPte.c)
 */

__int64 __fastcall MiCopyDataPageToImagePage(__int64 a1, __int64 *a2, __int64 *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r12
  __int64 v8; // rcx
  unsigned int v11; // ebx
  __int64 v12; // r15
  __int64 v13; // r14
  unsigned int SessionIdForVa; // eax
  volatile LONG *v15; // r12
  unsigned __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r12
  unsigned __int64 v21; // rax
  unsigned int v22; // ecx
  __int64 v24; // rcx
  __int64 v25; // rdi
  unsigned __int64 v26; // rsi
  __int64 v27; // rax
  __int64 v28; // rsi
  unsigned __int64 v29; // r9
  _QWORD *v30; // r12
  unsigned __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rsi
  __int64 v34; // rdi
  __int64 *v35; // r14
  char v36; // al
  __int64 PteShadow; // rax
  PEX_SPIN_LOCK v38; // rcx
  __int64 v39; // rsi
  __int64 v40; // rdx
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rax
  _QWORD *v44; // rsi
  __int64 v45; // r14
  __int64 ValidPte; // rax
  __int64 v47; // rax
  unsigned __int64 v48; // rcx
  __int64 v49; // rax
  size_t v50; // rdi
  ULONG_PTR DecayPfn; // rsi
  ULONG_PTR v52; // rdi
  char v53; // r14
  __int64 v54; // r9
  ULONG_PTR v55; // rdi
  char v56; // r14
  __int64 v57; // r9
  __int64 v58; // rdx
  __int64 v59; // rcx
  volatile LONG *v60; // [rsp+20h] [rbp-79h]
  __int64 v61; // [rsp+28h] [rbp-71h]
  ULONG_PTR v62; // [rsp+30h] [rbp-69h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-61h] BYREF
  unsigned __int64 v64; // [rsp+40h] [rbp-59h]
  void *Src; // [rsp+48h] [rbp-51h]
  __int64 v66; // [rsp+50h] [rbp-49h]
  __int64 v67; // [rsp+58h] [rbp-41h]
  size_t v68; // [rsp+60h] [rbp-39h]
  __int64 v69; // [rsp+68h] [rbp-31h]
  PEX_SPIN_LOCK SpinLock; // [rsp+70h] [rbp-29h]
  unsigned __int64 v71; // [rsp+78h] [rbp-21h]
  size_t v72; // [rsp+80h] [rbp-19h]
  unsigned __int64 v73; // [rsp+88h] [rbp-11h]
  __int64 v74; // [rsp+90h] [rbp-9h]
  _BYTE *v75; // [rsp+98h] [rbp-1h]
  int v76; // [rsp+F0h] [rbp+57h] BYREF
  unsigned int v77; // [rsp+F8h] [rbp+5Fh]
  __int64 *v78; // [rsp+100h] [rbp+67h]
  __int64 v79; // [rsp+108h] [rbp+6Fh]

  v79 = a4;
  v78 = a3;
  v6 = *a2;
  BugCheckParameter2 = 0LL;
  v8 = *(_QWORD *)(a1 + 216);
  v62 = 0LL;
  LOBYTE(v11) = 16;
  v69 = 0LL;
  v12 = 0LL;
  v66 = 0LL;
  v13 = 0LL;
  v67 = v6;
  SessionIdForVa = MiGetSessionIdForVa(v8);
  v15 = (volatile LONG *)(v6 + 72);
  v64 = MiStartingOffset(a2, a3, SessionIdForVa);
  v60 = v15;
  ExAcquireSpinLockExclusiveAtDpcLevel(v15);
  v16 = *(_QWORD *)(v67 + 64) & 0xFFFFFFFFFFFFFFF0uLL;
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140388100);
  v17 = **(_QWORD **)(v16 + 40);
  v61 = v17;
  if ( !v17 || (SpinLock = (PEX_SPIN_LOCK)(v17 + 72), !(unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(v17 + 72)) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140388100);
    goto LABEL_9;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140388100);
  LOBYTE(v11) = 24;
  if ( !*(_QWORD *)(v17 + 32) || (*(_DWORD *)(v17 + 56) & 3) != 0 )
    goto LABEL_9;
  v68 = MiEndingOffset(a2);
  v20 = v17 + 128;
  v21 = v64 >> 12;
  v73 = v64 >> 12;
  v72 = (v68 - 1) >> 12;
  v76 = v64 >> 12;
  while ( 1 )
  {
    v22 = *(_DWORD *)(v20 + 44);
    if ( (unsigned int)v21 < v22 )
      break;
    v20 = *(_QWORD *)(v20 + 16);
    LODWORD(v21) = v21 - v22;
    v76 = v21;
    if ( !v20 )
      goto LABEL_8;
  }
  if ( !*(_DWORD *)(v20 + 104) || (v24 = *(_QWORD *)(v20 + 8)) == 0 )
  {
LABEL_8:
    v15 = v60;
    goto LABEL_9;
  }
  v13 = 0LL;
  v62 = 0LL;
  v66 = 0LL;
  LOBYTE(v25) = 0;
  v77 = 2;
  v26 = v24 + 8LL * (unsigned int)v21;
  v71 = v26;
  v74 = (v26 >> 9) & 0x7FFFFFFFF8LL;
  if ( v74 == (((unsigned __int64)v78 >> 9) & 0x7FFFFFFFF8LL) )
  {
    v12 = MiTryLockLeafPage(v26, 0LL);
    BugCheckParameter2 = v12;
  }
  else
  {
    v27 = MiTryLockLeafAndContainingPagesAtDpc(v26, &BugCheckParameter2, 0LL);
    v12 = BugCheckParameter2;
    v69 = v27;
    if ( !v27 )
    {
LABEL_68:
      v17 = v61;
      goto LABEL_8;
    }
  }
  if ( !v12 )
    goto LABEL_68;
  v11 = 26;
  if ( (*(_BYTE *)(v12 + 34) & 0x20) != 0 )
    goto LABEL_68;
  v75 = (_BYTE *)(v12 + 35);
  if ( (*(_BYTE *)(v12 + 35) & 0x40) != 0 )
    goto LABEL_68;
  Src = (void *)(v12 + 32);
  if ( *(_WORD *)(v12 + 32) >= 0x7FFFu )
    goto LABEL_68;
  v28 = *(_QWORD *)v26;
  v29 = v71;
  if ( v71 >= 0xFFFFF6FB7DBED000uLL && v71 <= 0xFFFFF6FB7DBED7F8uLL )
    LOBYTE(v28) = MiReadPteShadow(v71, v28);
  if ( (v64 & 0xFFF) != 0 && (_DWORD)v73 != (_DWORD)v72 )
  {
    if ( (unsigned int)(v76 + 1) >= *(_DWORD *)(v20 + 44) )
      goto LABEL_68;
    v30 = (_QWORD *)(v29 + 8);
    v31 = v29 + 8;
    if ( v74 == (((v29 + 8) >> 9) & 0x7FFFFFFFF8LL) )
    {
      v13 = MiTryLockLeafPage(v31, 1LL);
      v62 = v13;
    }
    else
    {
      v66 = MiTryLockLeafAndContainingPagesAtDpc(v31, &v62, 1LL);
      if ( !v66 )
      {
        v15 = v60;
        goto LABEL_57;
      }
      v13 = v62;
    }
    if ( !v13 )
      goto LABEL_68;
    v11 = 30;
    if ( (*(_BYTE *)(v13 + 34) & 0x20) != 0 || (*(_BYTE *)(v13 + 35) & 0x40) != 0 || *(_WORD *)Src >= 0x7FFFu )
      goto LABEL_68;
    v25 = *v30;
    if ( (unsigned __int64)v30 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v30 <= 0xFFFFF6FB7DBED7F8uLL )
      LOBYTE(v25) = MiReadPteShadow(v30, *v30);
    v77 = 3;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
  v15 = v60;
  ++*(_QWORD *)(v67 + 32);
  ExReleaseSpinLockExclusiveFromDpcLevel(v60);
  v12 = BugCheckParameter2;
  v11 = v11 & 0xFFFFFEC7 | 0x20;
  SpinLock = (PEX_SPIN_LOCK)KeGetCurrentThread();
  if ( (v28 & 1) == 0 && !*(_WORD *)Src )
  {
    v11 |= 8 * (*v75 & 8);
    if ( !(unsigned int)MiUnlinkPageFromList(BugCheckParameter2) )
    {
      MiDiscardTransitionPte(v12);
LABEL_57:
      v13 = v62;
      v17 = v61;
LABEL_9:
      if ( (v11 & 8) != 0 )
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v17 + 72));
      if ( (v11 & 0x10) != 0 )
        ExReleaseSpinLockExclusiveFromDpcLevel(v15);
      if ( (v11 & 4) != 0 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v12 = BugCheckParameter2;
      }
      if ( v66 )
        MiUnlockNestedProtoPoolPage(v66);
      if ( (v11 & 1) != 0 )
        MiRemoveLockedPageChargeAndDecRef(v12);
      if ( (v11 & 2) != 0 )
        _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v69 )
      {
        LOBYTE(v18) = 2;
        MiUnlockProtoPoolPage(v69, v18);
      }
      if ( (v11 & 0x20) != 0 )
        MiDereferenceControlAreaPfnList(v67, 0LL, v19, 3LL);
      return 0LL;
    }
    *(_QWORD *)(v12 + 24) &= 0xC000000000000000uLL;
    v11 |= 0x100u;
  }
  if ( !(unsigned int)MiAddLockedPageCharge(v12, 0LL, v32) )
  {
    if ( v11 >= 0x100 )
      MiPfnReferenceCountIsZero(v12, (v12 + 0x58000000000LL) / 48);
    goto LABEL_57;
  }
  v13 = v62;
  v11 = v11 & 0xFFFFFEFE | 1;
  if ( v62 )
  {
    if ( (v25 & 1) == 0 && !*(_WORD *)(v62 + 32) )
    {
      v11 |= 16 * (*(_BYTE *)(v62 + 35) & 8);
      if ( !(unsigned int)MiUnlinkPageFromList(v62) )
      {
        MiDiscardTransitionPte(v13);
        goto LABEL_68;
      }
      *(_QWORD *)(v13 + 24) &= 0xC000000000000000uLL;
      v11 |= 0x100u;
    }
    if ( !(unsigned int)MiAddLockedPageCharge(v13, 0LL, v19) )
    {
      if ( v11 >= 0x100 )
        MiPfnReferenceCountIsZero(v13, (v13 + 0x58000000000LL) / 48);
      goto LABEL_68;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v66 )
      MiUnlockNestedProtoPoolPage(v66);
    v12 = BugCheckParameter2;
  }
  *(_BYTE *)(a1 + 189) |= 0x10u;
  _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v69 )
  {
    LOBYTE(v18) = 2;
    MiUnlockProtoPoolPage(v69, v18);
  }
  v33 = a5;
  v34 = 48 * a5 - 0x58000000000LL;
  MiLockPageAtDpcInline(v34);
  v35 = v78;
  MiInitializeTransitionPfn(v33, v78);
  v36 = *(_BYTE *)(v34 + 34) & 0xFA;
  *(_WORD *)(v34 + 32) = 1;
  *(_BYTE *)(v34 + 34) = v36 | 2;
  *(_BYTE *)(v34 + 34) |= 0x20u;
  *(_QWORD *)v34 = a1 + 32;
  if ( (v79 & 1) != 0 && *(_BYTE *)(v79 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
  {
    MiAdvanceFaultList(v79 & 0xFFFFFFFFFFFFFFFEuLL);
    *(_BYTE *)(a1 + 189) |= 4u;
  }
  *(_BYTE *)(v34 + 35) ^= (*(_BYTE *)(v34 + 35) ^ *(_BYTE *)(a1 + 190)) & 7;
  _InterlockedAnd64((volatile signed __int64 *)(v34 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  PteShadow = *v35;
  if ( (unsigned __int64)v35 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v35 <= 0xFFFFF6FB7DBED7F8uLL )
    PteShadow = MiReadPteShadow(v35, *v35);
  v38 = SpinLock;
  *(_QWORD *)(a1 + 168) = PteShadow;
  *(_QWORD *)(a1 + 224) = v35;
  if ( (int)PsGetIoPriorityThread(v38) < 2 )
    *(_BYTE *)(a1 + 189) |= 0x40u;
  *(_QWORD *)(a1 + 304) = v33;
  v39 = a6;
  *(_QWORD *)(a1 + 256) = 0LL;
  *(_QWORD *)(a1 + 288) = 0LL;
  *(_DWORD *)(a1 + 264) = 56;
  *(_QWORD *)(a1 + 296) = 4096LL;
  MiObtainProtoReference(v39, 0);
  LOBYTE(v40) = 2;
  MiUnlockProtoPoolPage(v39, v40);
  *(_WORD *)(a1 + 266) |= 0x42u;
  v41 = v77;
  *(_QWORD *)(a1 + 96) = v64;
  v42 = v67;
  *(_QWORD *)(a1 + 232) = v35;
  *(_QWORD *)(a1 + 200) = v42;
  *(_QWORD *)(a1 + 240) = v34;
  *(_QWORD *)(a1 + 192) = 0LL;
  *(_QWORD *)(a1 + 160) = v39;
  v43 = MiReservePtes(&qword_140389360, v41);
  v44 = (_QWORD *)v43;
  if ( v43 )
  {
    v45 = v43 << 25 >> 16;
    Src = (void *)(v45 + (v64 & 0xFFF) + 4096);
    ValidPte = MiMakeValidPte(v43, a5, 2684354564LL);
    *v44 = ValidPte;
    if ( (unsigned __int64)v44 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v44 <= 0xFFFFF6FB7DBED7F8uLL )
      MiWritePteShadow(v44, ValidPte);
    v47 = MiMakeValidPte(v44 + 1, (__int64)(BugCheckParameter2 + 0x58000000000LL) / 48, 536870913LL);
    v48 = (unsigned __int64)(v44 + 1);
    v44[1] = v47;
    if ( (unsigned __int64)(v44 + 1) >= 0xFFFFF6FB7DBED000uLL && v48 <= 0xFFFFF6FB7DBED7F8uLL )
      MiWritePteShadow(v48, v47);
    if ( v62 )
    {
      v49 = MiMakeValidPte(v44 + 2, (__int64)(v62 + 0x58000000000LL) / 48, 536870913LL);
      v44[2] = v49;
      if ( (unsigned __int64)(v44 + 2) >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)(v44 + 2) <= 0xFFFFF6FB7DBED7F8uLL )
        MiWritePteShadow(v44 + 2, v49);
    }
    if ( v64 + 4096 > v68 )
    {
      v68 = ((_WORD)v68 - (_WORD)v64) & 0xFFF;
      v50 = v68;
      memmove((void *)v45, Src, v68);
      memset((void *)(v50 + v45), 0, (unsigned int)(4096 - v68));
    }
    else
    {
      KeCopyPage(v45, Src);
    }
    MiReleasePtes(&qword_140389360, v44, v77);
    __incgsdword(0x2E98u);
    *(_DWORD *)(a1 + 80) = 0;
  }
  else
  {
    *(_DWORD *)(a1 + 80) = -1073741670;
  }
  DecayPfn = 0LL;
  if ( (v11 & 0xC0) != 0 )
    DecayPfn = MiCreateDecayPfn(4LL);
  v52 = BugCheckParameter2;
  LOBYTE(v76) = MiLockPageInline(BugCheckParameter2);
  v53 = v76;
  if ( (unsigned int)MiRemoveLockedPageCharge(v52) )
  {
    if ( DecayPfn && (v11 & 0x40) != 0 && (*(_QWORD *)(v12 + 24) & 0x4000000000000000LL) == 0 )
    {
      LOBYTE(v54) = v53;
      MiInsertAndUnlockStandbyPages(DecayPfn, &BugCheckParameter2, 1LL, v54);
      LOBYTE(v76) = 17;
      goto LABEL_112;
    }
    MiPfnReferenceCountIsZero(v52, (__int64)(v52 + 0x58000000000LL) / 48);
  }
  if ( v53 != 17 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8((unsigned __int8)v76);
  }
LABEL_112:
  v55 = v62;
  if ( v62 )
  {
    LOBYTE(v76) = MiLockPageInline(v62);
    v56 = v76;
    if ( (unsigned int)MiRemoveLockedPageCharge(v55) )
    {
      if ( DecayPfn && (v11 & 0x80u) != 0 && (*(_QWORD *)(v55 + 24) & 0x4000000000000000LL) == 0 )
      {
        LOBYTE(v57) = v56;
        MiInsertAndUnlockStandbyPages(DecayPfn, &v62, 1LL, v57);
        LOBYTE(v76) = 17;
        goto LABEL_121;
      }
      MiPfnReferenceCountIsZero(v55, (__int64)(v55 + 0x58000000000LL) / 48);
    }
    if ( v56 != 17 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v55 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8((unsigned __int8)v76);
    }
  }
LABEL_121:
  if ( DecayPfn )
    MiDecayPfnFullyInitialized(DecayPfn);
  MiRelockProtoPoolPage(a6, &v76);
  LOBYTE(v58) = v76;
  v59 = a6;
  *(_BYTE *)(a1 + 189) &= ~0x10u;
  MiUnlockProtoPoolPage(v59, v58);
  *(_QWORD *)(a1 + 88) = 4096LL;
  KeSetEvent((PRKEVENT)(a1 + 32), 0, 0);
  return 1LL;
}
