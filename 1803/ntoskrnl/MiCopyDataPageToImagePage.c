/*
 * XREFs of MiCopyDataPageToImagePage @ 0x14004F194
 * Callers:
 *     MiResolveMappedFileFault @ 0x140056F30 (MiResolveMappedFileFault.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiInsertAndUnlockStandbyPages @ 0x14002E460 (MiInsertAndUnlockStandbyPages.c)
 *     MiMakeValidPte @ 0x14002EB00 (MiMakeValidPte.c)
 *     MiPfnReferenceCountIsZero @ 0x1400309A0 (MiPfnReferenceCountIsZero.c)
 *     MiUnlockProtoPoolPage @ 0x140030A70 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140030AF8 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiRemoveLockedPageCharge @ 0x140031840 (MiRemoveLockedPageCharge.c)
 *     MiDecayPfnFullyInitialized @ 0x14004DA54 (MiDecayPfnFullyInitialized.c)
 *     MiCreateDecayPfn @ 0x14004DB30 (MiCreateDecayPfn.c)
 *     MiInitializeTransitionPfn @ 0x14004EEF0 (MiInitializeTransitionPfn.c)
 *     MiTryLockLeafAndContainingPagesAtDpc @ 0x14004FA24 (MiTryLockLeafAndContainingPagesAtDpc.c)
 *     MiTryLockLeafPage @ 0x1400518D8 (MiTryLockLeafPage.c)
 *     MiAdvanceFaultList @ 0x140056E8C (MiAdvanceFaultList.c)
 *     MiObtainProtoReference @ 0x140057FC0 (MiObtainProtoReference.c)
 *     MiAddLockedPageCharge @ 0x140058004 (MiAddLockedPageCharge.c)
 *     MiRelockProtoPoolPage @ 0x140059A10 (MiRelockProtoPoolPage.c)
 *     MiGetSessionIdForVa @ 0x140059D3C (MiGetSessionIdForVa.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140079C30 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiDereferenceControlAreaPfnList @ 0x1400847B0 (MiDereferenceControlAreaPfnList.c)
 *     MiUnlockNestedProtoPoolPage @ 0x1400CB730 (MiUnlockNestedProtoPoolPage.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1400E4380 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     MiReservePtes @ 0x14010E5B0 (MiReservePtes.c)
 *     MiReleasePtes @ 0x140110560 (MiReleasePtes.c)
 *     MiUnlinkPageFromList @ 0x14011AAD0 (MiUnlinkPageFromList.c)
 *     MiLockPageAtDpcInline @ 0x140124DA0 (MiLockPageAtDpcInline.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     PsGetIoPriorityThread @ 0x1401281D0 (PsGetIoPriorityThread.c)
 *     MiEndingOffset @ 0x140128958 (MiEndingOffset.c)
 *     MiStartingOffset @ 0x140129FF0 (MiStartingOffset.c)
 *     MiDiscardTransitionPte @ 0x140154D68 (MiDiscardTransitionPte.c)
 *     KeCopyPage @ 0x1401AEA50 (KeCopyPage.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

__int64 __fastcall MiCopyDataPageToImagePage(__int64 a1, void **a2, __int64 *a3, __int64 a4, __int64 a5, ULONG_PTR a6)
{
  __int64 v8; // rsi
  __int64 v9; // rcx
  char v10; // bl
  unsigned int SessionIdForVa; // eax
  __int64 v12; // rax
  volatile LONG *v13; // r15
  unsigned __int64 v14; // r12
  unsigned __int64 v15; // rdi
  __int64 v16; // r13
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  ULONG_PTR v20; // rdi
  __int64 v22; // rdi
  unsigned int v23; // r14d
  unsigned int v24; // ecx
  ULONG_PTR *v25; // r15
  __int64 v26; // rcx
  unsigned __int64 v27; // r12
  __int64 v28; // r8
  __int64 v29; // rax
  ULONG_PTR *v30; // r14
  ULONG_PTR v31; // rdi
  char v32; // r15
  int locked; // eax
  ULONG_PTR v34; // rcx
  ULONG_PTR *v35; // r13
  __int64 v36; // r15
  __int64 v37; // rbx
  __int64 *v38; // r14
  char v39; // al
  __int64 v40; // rax
  struct _KTHREAD *v41; // rcx
  ULONG_PTR v42; // rdi
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r9
  void *v46; // rcx
  __int64 v47; // rax
  unsigned __int64 v48; // rax
  __int64 v49; // r9
  unsigned __int64 v50; // r14
  __int64 v51; // rdi
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r9
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r9
  __int64 v58; // rdx
  int v59; // eax
  _SLIST_ENTRY *DecayPfn; // rdi
  ULONG_PTR v61; // rbx
  ULONG_PTR v62; // r14
  unsigned __int8 v63; // r15
  __int64 v64; // rdx
  ULONG_PTR v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  unsigned int v68; // r15d
  volatile LONG *SpinLock; // [rsp+28h] [rbp-89h]
  unsigned int v70; // [rsp+30h] [rbp-81h]
  ULONG_PTR v71; // [rsp+38h] [rbp-79h] BYREF
  void *Src; // [rsp+40h] [rbp-71h]
  __int64 v73; // [rsp+48h] [rbp-69h]
  ULONG_PTR BugCheckParameter2[10]; // [rsp+58h] [rbp-59h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+A8h] [rbp-9h]
  unsigned __int64 v76; // [rsp+B0h] [rbp-1h]
  unsigned __int64 v78; // [rsp+110h] [rbp+5Fh] BYREF
  __int64 *v79; // [rsp+118h] [rbp+67h]
  __int64 v80; // [rsp+120h] [rbp+6Fh]

  v80 = a4;
  v79 = a3;
  v8 = a1;
  memset(BugCheckParameter2, 0, sizeof(BugCheckParameter2));
  v9 = *(_QWORD *)(v8 + 216);
  v10 = 0;
  Src = *a2;
  SessionIdForVa = MiGetSessionIdForVa(v9);
  v12 = MiStartingOffset(a2, a3, SessionIdForVa);
  v13 = (volatile LONG *)((char *)Src + 72);
  v73 = v12;
  SpinLock = (volatile LONG *)((char *)Src + 72);
  v14 = v12;
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)Src + 18);
  v15 = *((_QWORD *)Src + 8) & 0xFFFFFFFFFFFFFFF0uLL;
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_1403CB280);
  v16 = **(_QWORD **)(v15 + 40);
  if ( !v16 || !(unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(v16 + 72) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_1403CB280);
LABEL_3:
    if ( (v10 & 1) != 0 )
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v16 + 72));
    if ( (v10 & 2) == 0 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v13);
    if ( BugCheckParameter2[5] )
      _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2[5] + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( BugCheckParameter2[6] )
      MiUnlockNestedProtoPoolPage(BugCheckParameter2[6], v17, v18);
    v20 = BugCheckParameter2[0];
    if ( BYTE1(BugCheckParameter2[4]) == 1 )
      MiRemoveLockedPageChargeAndDecRef(BugCheckParameter2[0], v17, v18, v19);
    if ( v20 )
      _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( BugCheckParameter2[1] )
    {
      LOBYTE(v17) = 2;
      MiUnlockProtoPoolPage(BugCheckParameter2[1], v17, v18, v19);
    }
    if ( (v10 & 4) != 0 )
      MiDereferenceControlAreaPfnList(Src, 0LL, v18, 3LL);
    return 0LL;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_1403CB280);
  v18 = 0LL;
  v19 = 1LL;
  v10 = 1;
  if ( !*(_QWORD *)(v16 + 32) || (*(_DWORD *)(v16 + 56) & 3) != 0 )
    goto LABEL_3;
  v76 = MiEndingOffset(a2);
  v10 = v19 + 8;
  v22 = v16 + 128;
  v23 = v14 >> 12;
  v71 = v14 >> 12;
  v78 = (v76 - 1) >> 12;
  if ( v23 != (_DWORD)v78 )
    v10 = v19;
  while ( 1 )
  {
    v24 = *(_DWORD *)(v22 + 44);
    if ( v23 < v24 )
      break;
    v22 = *(_QWORD *)(v22 + 16);
    v23 -= v24;
    if ( !v22 )
      goto LABEL_3;
  }
  v25 = BugCheckParameter2;
  v70 = 2;
  v17 = (unsigned int)v18;
  while ( 1 )
  {
    if ( *(_DWORD *)(v22 + 104) == (_DWORD)v18 )
      goto LABEL_92;
    v26 = *(_QWORD *)(v22 + 8);
    v19 = 0x7FFFFFFFF8LL;
    if ( !v26 )
      goto LABEL_92;
    v27 = v26 + 8LL * v23;
    if ( !v27 )
      goto LABEL_92;
    v25[2] = v27;
    v28 = ((v27 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    if ( v28 == (((unsigned __int64)v79 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
      || v25 != BugCheckParameter2 && v28 == ((*(v25 - 3) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
    {
      *v25 = MiTryLockLeafPage(v27, v17);
    }
    else
    {
      v29 = MiTryLockLeafAndContainingPagesAtDpc(v27, v25, (unsigned int)v17);
      if ( !v29 )
        goto LABEL_92;
      v25[1] = v29;
    }
    v17 = *v25;
    if ( !*v25
      || (*(_BYTE *)(v17 + 34) & 0x20) != 0
      || (*(_BYTE *)(v17 + 35) & 0x40) != 0
      || *(_WORD *)(v17 + 32) >= 0x7FFFu )
    {
      goto LABEL_92;
    }
    v25[3] = MI_READ_PTE_LOCK_FREE(v27);
    if ( v25 != BugCheckParameter2 || (v73 & 0xFFF) == 0 || (_DWORD)v71 == (_DWORD)v78 )
      break;
    v19 = 1LL;
    v25 += 5;
    ++v70;
    ++v23;
    v18 = 0LL;
    v17 = 1LL;
    if ( v23 >= *(_DWORD *)(v22 + 44) )
    {
      v22 = *(_QWORD *)(v22 + 16);
      v23 = 0;
      if ( !v22 )
        goto LABEL_92;
    }
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v16 + 72));
  ++*((_QWORD *)Src + 4);
  ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
  v30 = BugCheckParameter2;
  v31 = BugCheckParameter2[0];
  v10 = v10 & 0xF8 | 6;
  CurrentThread = KeGetCurrentThread();
  v71 = BugCheckParameter2[0];
  if ( !BugCheckParameter2[0] )
    goto LABEL_55;
  while ( 1 )
  {
    v32 = 0;
    if ( (v30[3] & 1) == 0 && !*(_WORD *)(v31 + 32) )
    {
      *((_BYTE *)v30 + 32) = (*(_BYTE *)(v31 + 35) & 8) != 0;
      if ( !(unsigned int)MiUnlinkPageFromList(v31) )
      {
        MiDiscardTransitionPte(v31);
LABEL_92:
        v13 = SpinLock;
        goto LABEL_3;
      }
      v32 = 1;
      *(_QWORD *)(v31 + 24) &= 0xC000000000000000uLL;
    }
    locked = MiAddLockedPageCharge(v31, 0LL);
    v18 = 0LL;
    if ( !locked )
    {
      if ( v32 )
        MiPfnReferenceCountIsZero(v31, (__int64)(v31 + 0x58000000000LL) / 48);
      goto LABEL_92;
    }
    *((_BYTE *)v30 + 33) = 1;
    if ( v30 != BugCheckParameter2 )
      break;
    v30 += 5;
    v31 = *v30;
    v71 = v31;
    if ( !v31 )
      goto LABEL_54;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v31 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v34 = v30[1];
  if ( v34 )
  {
    MiUnlockNestedProtoPoolPage(v34, v17, 0LL);
    v30[1] = 0LL;
  }
LABEL_54:
  v31 = BugCheckParameter2[0];
LABEL_55:
  *(_BYTE *)(v8 + 189) |= 0x10u;
  v35 = BugCheckParameter2;
  v71 = v31;
  _InterlockedAnd64((volatile signed __int64 *)(v31 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( BugCheckParameter2[1] )
  {
    LOBYTE(v17) = 2;
    MiUnlockProtoPoolPage(BugCheckParameter2[1], v17, 0LL, v19);
  }
  v36 = a5;
  v37 = 48 * a5 - 0x58000000000LL;
  MiLockPageAtDpcInline(v37);
  v38 = v79;
  MiInitializeTransitionPfn(v36, v79);
  v39 = *(_BYTE *)(v37 + 34) & 0xFA;
  *(_WORD *)(v37 + 32) = 1;
  v39 |= 2u;
  *(_BYTE *)(v37 + 34) = v39;
  *(_BYTE *)(v37 + 34) = v39 | 0x20;
  *(_QWORD *)v37 = v8 + 32;
  if ( (v80 & 1) != 0 && *(_BYTE *)(v80 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
  {
    MiAdvanceFaultList(v80 & 0xFFFFFFFFFFFFFFFEuLL);
    *(_BYTE *)(v8 + 189) |= 4u;
  }
  *(_BYTE *)(v37 + 35) ^= (*(_BYTE *)(v37 + 35) ^ *(_BYTE *)(v8 + 190)) & 7;
  _InterlockedAnd64((volatile signed __int64 *)(v37 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v40 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v38);
  v41 = CurrentThread;
  *(_QWORD *)(v8 + 168) = v40;
  *(_QWORD *)(v8 + 224) = v38;
  if ( (int)PsGetIoPriorityThread(v41) < 2 )
    *(_BYTE *)(v8 + 189) |= 0x40u;
  v42 = a6;
  *(_QWORD *)(v8 + 264) = 0LL;
  *(_QWORD *)(v8 + 296) = 0LL;
  *(_DWORD *)(v8 + 272) = 56;
  *(_QWORD *)(v8 + 304) = 4096LL;
  *(_QWORD *)(v8 + 312) = v36;
  MiObtainProtoReference(v42, 0LL);
  LOBYTE(v43) = 2;
  MiUnlockProtoPoolPage(v42, v43, v44, v45);
  *(_WORD *)(v8 + 274) |= 0x42u;
  v46 = Src;
  v47 = v73;
  *(_QWORD *)(v8 + 240) = v37;
  *(_QWORD *)(v8 + 200) = v46;
  *(_QWORD *)(v8 + 96) = v47;
  *(_QWORD *)(v8 + 232) = v38;
  *(_QWORD *)(v8 + 192) = 0LL;
  *(_QWORD *)(v8 + 160) = v42;
  v48 = MiReservePtes(&qword_1403CC5E0, v70);
  v50 = v48;
  if ( v48 )
  {
    v51 = (__int64)(v48 << 25) >> 16;
    Src = (void *)(v51 + (v73 & 0xFFF) + 4096);
    *(_QWORD *)v48 = MiMakeValidPte(v48, v36, 2684354564LL, v49);
    if ( MiPteInShadowRange(v50) )
      MiWritePteShadow(v53, v52);
    *(_QWORD *)(v50 + 8) = MiMakeValidPte(v50 + 8, (__int64)(v71 + 0x58000000000LL) / 48, 536870913LL, v54);
    if ( MiPteInShadowRange(v50 + 8) )
      MiWritePteShadow(v56, v55);
    if ( BugCheckParameter2[5] )
    {
      *(_QWORD *)(v50 + 16) = MiMakeValidPte(
                                v50 + 16,
                                (signed __int64)(BugCheckParameter2[5] + 0x58000000000LL) / 48,
                                536870913LL,
                                v57);
      if ( MiPteInShadowRange(v50 + 16) )
        MiWritePteShadow(v50 + 16, v58);
    }
    if ( v73 + 4096 > v76 )
    {
      v68 = ((_WORD)v76 - (_WORD)v73) & 0xFFF;
      memmove((void *)v51, Src, ((_WORD)v76 - (_WORD)v73) & 0xFFF);
      memset((void *)(v68 + v51), 0, 4096 - v68);
    }
    else
    {
      KeCopyPage(v51, Src);
    }
    MiReleasePtes(&qword_1403CC5E0, v50, v70);
    __incgsdword(0x2E98u);
    v59 = 0;
  }
  else
  {
    v59 = -1073741670;
  }
  *(_DWORD *)(v8 + 80) = v59;
  DecayPfn = 0LL;
  if ( LOBYTE(BugCheckParameter2[4]) || LOBYTE(BugCheckParameter2[9]) )
    DecayPfn = MiCreateDecayPfn(4u);
  v61 = BugCheckParameter2[0];
  v71 = BugCheckParameter2[0];
  if ( BugCheckParameter2[0] )
  {
    v62 = BugCheckParameter2[0];
    while ( 1 )
    {
      LOBYTE(v78) = MiLockPageInline(v61);
      v63 = v78;
      if ( !(unsigned int)MiRemoveLockedPageCharge(v61) )
        goto LABEL_78;
      if ( !DecayPfn || !*((_BYTE *)v35 + 32) || (*(_QWORD *)(v61 + 24) & 0x4000000000000000LL) != 0 )
        break;
      MiInsertAndUnlockStandbyPages((__int64)DecayPfn, &v71, 1u, v63);
      LOBYTE(v78) = 17;
LABEL_80:
      if ( v35 == BugCheckParameter2 )
      {
        v35 += 5;
        v61 = *v35;
        v71 = v61;
        v62 = v61;
        if ( v61 )
          continue;
      }
      v8 = a1;
      goto LABEL_83;
    }
    MiPfnReferenceCountIsZero(v61, (__int64)(v62 + 0x58000000000LL) / 48);
LABEL_78:
    if ( v63 != 17 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v62 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8((unsigned __int8)v78);
    }
    goto LABEL_80;
  }
LABEL_83:
  if ( DecayPfn )
    MiDecayPfnFullyInitialized(DecayPfn);
  MiRelockProtoPoolPage(a6, &v78);
  LOBYTE(v64) = v78;
  v65 = a6;
  *(_BYTE *)(v8 + 189) &= ~0x10u;
  MiUnlockProtoPoolPage(v65, v64, v66, v67);
  *(_QWORD *)(v8 + 88) = 4096LL;
  KeSetEvent((PRKEVENT)(v8 + 32), 0, 0);
  return 1LL;
}
