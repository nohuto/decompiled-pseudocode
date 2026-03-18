/*
 * XREFs of MiPrivateFixup @ 0x1400CD7E0
 * Callers:
 *     MiCompleteProtoPteFault @ 0x140045530 (MiCompleteProtoPteFault.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiDereferenceControlAreaProbe @ 0x14001F474 (MiDereferenceControlAreaProbe.c)
 *     MiInitializeReadInProgressPfn @ 0x140026A90 (MiInitializeReadInProgressPfn.c)
 *     MiAddLockedPageCharge @ 0x140027170 (MiAddLockedPageCharge.c)
 *     MiGetEffectivePagePriorityThread @ 0x140028114 (MiGetEffectivePagePriorityThread.c)
 *     MiGetInPageSupportBlock @ 0x14002A960 (MiGetInPageSupportBlock.c)
 *     MiIsFaultPteIntact @ 0x14002CD68 (MiIsFaultPteIntact.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140030A90 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiFreeInPageSupportBlock @ 0x140032450 (MiFreeInPageSupportBlock.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiMakeValidPte @ 0x140036F30 (MiMakeValidPte.c)
 *     MiObtainFaultCharges @ 0x1400383C0 (MiObtainFaultCharges.c)
 *     MiGetPage @ 0x1400489F0 (MiGetPage.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x140057900 (MiPreUnlockWorkingSetExclusive.c)
 *     MiCopyPage @ 0x14005A3E0 (MiCopyPage.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     MiReleasePtes @ 0x140074F70 (MiReleasePtes.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     MiReservePtes @ 0x140099750 (MiReservePtes.c)
 *     MiReleaseFreshPage @ 0x1400C538C (MiReleaseFreshPage.c)
 *     MiMakeProtectionPfnCompatible @ 0x1400CD358 (MiMakeProtectionPfnCompatible.c)
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 *     MiReturnFaultCharges @ 0x14012F0F4 (MiReturnFaultCharges.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MiWaitForForkToComplete @ 0x14023027C (MiWaitForForkToComplete.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140286144 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiRelocateImagePfn @ 0x140495F60 (MiRelocateImagePfn.c)
 *     MiAllocateDriverPage @ 0x140509740 (MiAllocateDriverPage.c)
 */

__int64 __fastcall MiPrivateFixup(
        volatile signed __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned __int8 a7)
{
  unsigned int v7; // r14d
  __int64 v8; // rbx
  __int64 v10; // r9
  _KPROCESS *Process; // rcx
  ULONG_PTR *v13; // r13
  bool v14; // zf
  ULONG_PTR v15; // r15
  __int64 *v16; // r12
  __int64 PteShadow; // rax
  LONG *v18; // rcx
  __int64 Page; // rdi
  LONG *SharedVm; // rbx
  unsigned int v21; // ebx
  unsigned __int64 v22; // r9
  __int64 v23; // rdi
  unsigned __int64 v24; // r9
  char *v25; // r13
  char EffectivePagePriorityThread; // al
  __int64 v27; // rax
  LONG *v28; // rax
  int ProtectionPfnCompatible; // eax
  unsigned __int64 ValidPte; // rax
  unsigned __int64 v31; // r9
  LONG *v32; // rbx
  BOOL IsFaultPteIntact; // r12d
  unsigned __int8 v34; // al
  __int64 v35; // r8
  __int64 v36; // rax
  char v37; // al
  unsigned __int64 v38; // rdx
  __int64 DriverPage; // [rsp+30h] [rbp-48h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+38h] [rbp-40h]
  ULONG_PTR v41; // [rsp+40h] [rbp-38h]
  __int64 v42; // [rsp+48h] [rbp-30h] BYREF
  ULONG_PTR *v43; // [rsp+50h] [rbp-28h]
  _KPROCESS *v44; // [rsp+58h] [rbp-20h]
  __int64 v45[3]; // [rsp+60h] [rbp-18h] BYREF
  void *retaddr; // [rsp+B8h] [rbp+40h]
  unsigned int v48; // [rsp+C8h] [rbp+50h]
  __int64 v51; // [rsp+E8h] [rbp+70h]
  unsigned __int8 v52; // [rsp+E8h] [rbp+70h]

  v48 = a2;
  v7 = 0;
  v8 = a6;
  v10 = a3;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  v14 = (*(_BYTE *)(a6 + 192) & 7) == 0;
  v44 = Process;
  if ( v14 && Process[1].Affinity.Bitmap[10] )
  {
    LOBYTE(a2) = a7;
    MiWaitForForkToComplete(Process, a2);
    return 297LL;
  }
  v13 = *(ULONG_PTR **)(qword_140388AF0 + 8LL * *(unsigned __int16 *)(a6 + 172));
  v43 = v13;
  if ( a4 < 0xFFFF800000000000uLL )
  {
    v14 = (KeGetCurrentThread()->ApcState.Process->SecureState.SecureHandle & 1) == 0;
  }
  else
  {
    if ( (MiFlags & 0x10000) == 0 || (MiFlags & 0x4000) == 0 )
      goto LABEL_11;
    v14 = (((unsigned __int8)*(_DWORD *)(a3 + 16) >> 5) & 2) == 0;
  }
  if ( !v14 )
  {
    v15 = 0LL;
    goto LABEL_14;
  }
LABEL_11:
  v15 = MiReservePtes((__int64)&qword_140389360, 1uLL, a3);
  if ( !v15 )
    return 3221225626LL;
  v10 = a3;
LABEL_14:
  v16 = (__int64 *)(((a4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  PteShadow = *v16;
  if ( (unsigned __int64)v16 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v16 <= 0xFFFFF6FB7DBED7F8uLL )
    PteShadow = MiReadPteShadow(((a4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, *v16);
  v42 = PteShadow;
  v41 = (v10 + 0x58000000000LL) / 48;
  MiObtainFaultCharges(v13, 1u, 2);
  if ( v15 || a4 < 0xFFFF800000000000uLL )
  {
    Page = MiGetPage(
             (__int64)v13,
             dword_140388540 & v41 | (((*(_QWORD *)(a3 + 40) >> 36) & 3) << byte_140388502) | (*(_QWORD *)(a3 + 40) >> 58 << byte_140388501),
             0);
    DriverPage = Page;
    if ( Page == -1 )
    {
      v21 = -1073741670;
      goto LABEL_28;
    }
  }
  else
  {
    MiPreUnlockWorkingSetExclusive(a6, a7);
    v18 = &dword_140389780;
    if ( (*(_BYTE *)(a6 + 192) & 7) != 2 )
      v18 = (LONG *)(a6 + 200);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v18, retaddr);
    else
      *v18 = 0;
    __writecr8(a7);
    DriverPage = MiAllocateDriverPage(v13);
    Page = DriverPage;
    SharedVm = MiGetSharedVm(a6);
    ExAcquireSpinLockExclusive(SharedVm);
    SharedVm[1] = 0;
    if ( !MiIsFaultPteIntact(a4, v16, &v42) )
    {
      v21 = -1073740748;
LABEL_28:
      if ( Page != -1 )
        MiReleaseFreshPage(48 * Page - 0x58000000000LL);
      MiReturnFaultCharges(v13, 1LL, 2LL);
      if ( v15 )
        MiReleasePtes((__int64)&qword_140389360, v15, 1u, v22);
      return v21;
    }
    v8 = a6;
  }
  v23 = 48 * Page - 0x58000000000LL;
  v25 = (char *)MiGetInPageSupportBlock(2);
  if ( !v25 )
  {
    if ( v15 )
      MiReleasePtes((__int64)&qword_140389360, v15, 1u, v24);
    MiReleaseFreshPage(v23);
    MiReturnFaultCharges(v43, 1LL, 2LL);
    return 3221225626LL;
  }
  EffectivePagePriorityThread = MiGetEffectivePagePriorityThread((__int64)CurrentThread);
  v25[189] |= 0x10u;
  *((_QWORD *)v25 + 30) = v23;
  *((_DWORD *)v25 + 20) = 0;
  *((_QWORD *)v25 + 11) = 0LL;
  MiInitializeReadInProgressPfn(a4, &DriverPage, 1, v16, (__int64)v25, EffectivePagePriorityThread & 7 | 0x48);
  if ( (*(_BYTE *)(v8 + 192) & 7) == 0 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)&v44[1].Affinity.Bitmap[13], 1uLL);
  v27 = *v16;
  if ( (unsigned __int64)v16 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v16 <= 0xFFFFF6FB7DBED7F8uLL )
    v27 = MiReadPteShadow(v16, *v16);
  v45[0] = v27;
  *((_QWORD *)v25 + 25) = a1;
  _InterlockedAdd64(a1 + 14, 1uLL);
  MiPreUnlockWorkingSetExclusive(v8, 1u);
  v28 = MiGetSharedVm(v8);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v28, retaddr);
  else
    *v28 = 0;
  __writecr8(1uLL);
  --CurrentThread->SpecialApcDisable;
  __writecr8(a7);
  v51 = DriverPage;
  MiCopyPage(DriverPage, v41, 0LL, v15 != 0 ? 9 : 17);
  if ( v15 )
  {
    ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4, v23);
    ValidPte = MiMakeValidPte(v15, v51, ProtectionPfnCompatible | 0xA0000000);
    *(_QWORD *)v15 = ValidPte;
    if ( v15 >= 0xFFFFF6FB7DBED000uLL && v15 <= 0xFFFFF6FB7DBED7F8uLL )
      MiWritePteShadow(v15, ValidPte);
    if ( *(__int64 *)(a3 + 8) < 0 )
      MiRelocateImagePfn(a1, (__int64)(v15 << 25) >> 16, v48, v51);
    MiReleasePtes((__int64)&qword_140389360, v15, 1u, v31);
  }
  MiDereferenceControlAreaProbe(a1, 0);
  KeGetCurrentIrql();
  __writecr8(1uLL);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  v32 = MiGetSharedVm(v8);
  ExAcquireSpinLockExclusive(v32);
  v32[1] = 0;
  IsFaultPteIntact = MiIsFaultPteIntact(a4, v16, v45);
  v34 = MiLockPageInline(v23);
  *(_BYTE *)(v23 + 34) &= ~0x20u;
  v52 = v34;
  v36 = *(_QWORD *)(v23 + 24) >> 62;
  *(_QWORD *)v23 = 0LL;
  if ( (v36 & 1) == 0 )
    *(_BYTE *)(v23 + 34) |= 0x10u;
  if ( IsFaultPteIntact )
  {
    MiAddLockedPageCharge(v23, 3LL, v35);
    v37 = *(_BYTE *)(v23 + 34) & 0xFE;
    *(_QWORD *)(v23 + 24) ^= (*(_QWORD *)(v23 + 24) ^ (*(_QWORD *)(v23 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
    *(_BYTE *)(v23 + 34) = v37 | 6;
    if ( !v15 && a4 >= 0xFFFF800000000000uLL )
      *(_BYTE *)(v23 + 35) |= 8u;
  }
  else
  {
    v7 = -1073740748;
  }
  MiRemoveLockedPageChargeAndDecRef(v23);
  _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v52);
  v25[189] &= ~0x10u;
  if ( *((int *)v25 + 44) > 1 )
    KeSetEvent((PRKEVENT)(v25 + 56), 0, 0);
  MiFreeInPageSupportBlock(v25, v38);
  return v7;
}
