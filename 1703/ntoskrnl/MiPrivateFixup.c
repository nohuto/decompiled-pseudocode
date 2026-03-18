/*
 * XREFs of MiPrivateFixup @ 0x140117AB4
 * Callers:
 *     MiCompleteProtoPteFault @ 0x1400B9890 (MiCompleteProtoPteFault.c)
 * Callees:
 *     MiReturnFaultCharges @ 0x14003B28C (MiReturnFaultCharges.c)
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     MiCopyPage @ 0x1400A0320 (MiCopyPage.c)
 *     MiMakeValidPte @ 0x1400A12B0 (MiMakeValidPte.c)
 *     MiReleasePtes @ 0x1400A23A0 (MiReleasePtes.c)
 *     MiMakeProtectionPfnCompatible @ 0x1400A5B28 (MiMakeProtectionPfnCompatible.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MiGetPage @ 0x1400BBC00 (MiGetPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400C6A20 (MiInsertPageInFreeOrZeroedList.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1400CCB60 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiObtainFaultCharges @ 0x1400CDE40 (MiObtainFaultCharges.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400D8DB0 (MiUnlockWorkingSetExclusive.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     MiReservePtes @ 0x1400F7CA0 (MiReservePtes.c)
 *     MiGetInPageSupportBlock @ 0x1400FBF70 (MiGetInPageSupportBlock.c)
 *     MiGetEffectivePagePriorityThread @ 0x1400FE040 (MiGetEffectivePagePriorityThread.c)
 *     MiInitializeReadInProgressPfn @ 0x140109270 (MiInitializeReadInProgressPfn.c)
 *     MiAddLockedPageCharge @ 0x140109894 (MiAddLockedPageCharge.c)
 *     MiFreeInPageSupportBlock @ 0x140109900 (MiFreeInPageSupportBlock.c)
 *     MiReleaseFreshPage @ 0x14010ADC8 (MiReleaseFreshPage.c)
 *     MiIsFaultPteIntact @ 0x1401182D8 (MiIsFaultPteIntact.c)
 *     MiDereferenceControlAreaProbe @ 0x140118FA8 (MiDereferenceControlAreaProbe.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     MiWaitForForkToComplete @ 0x140223828 (MiWaitForForkToComplete.c)
 *     MiRelocateImagePfn @ 0x140518C20 (MiRelocateImagePfn.c)
 *     MiAllocateDriverPage @ 0x14053D888 (MiAllocateDriverPage.c)
 */

__int64 __fastcall MiPrivateFixup(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned __int8 a7)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v8; // esi
  __int64 v9; // rbx
  _KPROCESS *Process; // r12
  ULONG_PTR *v14; // rdi
  bool v15; // zf
  ULONG_PTR v16; // r14
  __int64 v17; // r15
  __int64 v18; // r15
  LONG *SharedVm; // rbx
  unsigned int v20; // ebx
  __int64 v21; // rdi
  char *v22; // rbp
  unsigned __int8 v23; // bl
  __int16 v24; // dx
  __int64 v25; // r15
  char EffectivePagePriorityThread; // al
  __int64 v27; // r15
  __int64 v28; // r8
  __int64 v29; // r9
  int ProtectionPfnCompatible; // eax
  __int64 v31; // rcx
  __int64 v32; // r9
  __int64 v33; // r15
  LONG *v34; // rbx
  int IsFaultPteIntact; // ebx
  unsigned __int8 v36; // al
  unsigned __int8 v37; // r15
  char v38; // al
  __int64 *v39; // [rsp+30h] [rbp-78h]
  __int64 Page; // [rsp+38h] [rbp-70h] BYREF
  struct _KTHREAD *v41; // [rsp+40h] [rbp-68h]
  __int64 v42; // [rsp+48h] [rbp-60h] BYREF
  ULONG_PTR *v43; // [rsp+50h] [rbp-58h]
  ULONG_PTR v44; // [rsp+58h] [rbp-50h]
  __int64 v45[9]; // [rsp+60h] [rbp-48h] BYREF
  unsigned int v47; // [rsp+B8h] [rbp+10h]

  v47 = a2;
  CurrentThread = KeGetCurrentThread();
  v8 = 0;
  v9 = a6;
  v41 = CurrentThread;
  Process = CurrentThread->ApcState.Process;
  if ( (*(_BYTE *)(a6 + 192) & 7) == 0 && Process[1].Affinity.Bitmap[10] )
  {
    LOBYTE(a2) = a7;
    MiWaitForForkToComplete(CurrentThread->ApcState.Process, a2);
    return 297LL;
  }
  v14 = *(ULONG_PTR **)(qword_14036C8F8 + 8LL * *(unsigned __int16 *)(a6 + 172));
  v43 = v14;
  if ( a4 < 0xFFFF800000000000uLL )
  {
    v15 = KeGetCurrentThread()->ApcState.Process->SecurePid == 0;
  }
  else
  {
    if ( (MiFlags & 0x10000) == 0 || (MiFlags & 0x4000) == 0 )
      goto LABEL_15;
    v15 = (((unsigned __int8)*(_DWORD *)(a3 + 16) >> 5) & 2) == 0;
  }
  if ( !v15 )
  {
    v16 = 0LL;
    goto LABEL_11;
  }
LABEL_15:
  v16 = MiReservePtes((__int64)&qword_14036D0A0, 1uLL, a3);
  if ( !v16 )
    return 3221225626LL;
LABEL_11:
  v39 = (__int64 *)(((a4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v42 = MI_READ_PTE_LOCK_FREE(v39);
  v17 = (__int64)(a3 + 0x58000000000LL) / 48;
  v44 = v17;
  MiObtainFaultCharges(v14, 1u, 2);
  if ( v16 || a4 < 0xFFFF800000000000uLL )
  {
    Page = MiGetPage(
             (__int64)v14,
             dword_14036C1F8 & v17 | (((*(_QWORD *)(a3 + 40) >> 36) & 3) << byte_14036C1BA) | (*(_QWORD *)(a3 + 40) >> 58 << byte_14036C1B9),
             0);
    v18 = Page;
    if ( Page == -1 )
    {
      v20 = -1073741670;
      goto LABEL_19;
    }
  }
  else
  {
    MiUnlockWorkingSetExclusive(a6, a7);
    Page = MiAllocateDriverPage(v14);
    v18 = Page;
    SharedVm = MiGetSharedVm(a6);
    ExAcquireSpinLockExclusive(SharedVm);
    SharedVm[1] = 0;
    if ( !(unsigned int)MiIsFaultPteIntact(a4, v39, &v42) )
    {
      v20 = -1073740748;
LABEL_19:
      if ( v18 != -1 )
        MiReleaseFreshPage(48 * v18 - 0x58000000000LL);
      MiReturnFaultCharges((__int64)v14, 1uLL, 2LL);
      if ( v16 )
        MiReleasePtes((__int64)&qword_14036D0A0, (_QWORD *)v16, 1u);
      return v20;
    }
    v9 = a6;
  }
  v21 = 48 * v18 - 0x58000000000LL;
  v22 = (char *)MiGetInPageSupportBlock(2);
  if ( !v22 )
  {
    if ( v16 )
      MiReleasePtes((__int64)&qword_14036D0A0, (_QWORD *)v16, 1u);
    v23 = MiLockPageInline(48 * v18 - 0x58000000000LL);
    v24 = 1;
    if ( *(_QWORD *)(v21 + 16) )
      v24 = 2;
    MiInsertPageInFreeOrZeroedList(v18, v24);
    _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v23);
    MiReturnFaultCharges((__int64)v43, 1uLL, 2LL);
    return 3221225626LL;
  }
  v25 = (__int64)v41;
  EffectivePagePriorityThread = MiGetEffectivePagePriorityThread((__int64)v41);
  v22[189] |= 0x10u;
  *((_QWORD *)v22 + 30) = v21;
  *((_DWORD *)v22 + 20) = 0;
  *((_QWORD *)v22 + 11) = 0LL;
  MiInitializeReadInProgressPfn(a4, &Page, 1, v39, (__int64)(v22 + 32), EffectivePagePriorityThread & 7 | 0x48);
  if ( (*(_BYTE *)(v9 + 192) & 7) == 0 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[13], 1uLL);
  v45[0] = MI_READ_PTE_LOCK_FREE(v39);
  *((_QWORD *)v22 + 25) = a1;
  _InterlockedAdd64((volatile signed __int64 *)(a1 + 112), 1uLL);
  MiUnlockWorkingSetExclusive(v9, 1u);
  --*(_WORD *)(v25 + 486);
  __writecr8(a7);
  v27 = Page;
  MiCopyPage(Page, v44, 0LL, v16 != 0 ? 9 : 17);
  if ( v16 )
  {
    ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4, v21);
    *(_QWORD *)v16 = MiMakeValidPte(v16, v27, ProtectionPfnCompatible | 0xA0000000);
    if ( (unsigned int)MiPteInShadowRange(v16) )
      MiWritePteShadow(v31);
    if ( *(__int64 *)(a3 + 8) >= 0 )
    {
      v33 = a1;
    }
    else
    {
      v32 = v27;
      v33 = a1;
      MiRelocateImagePfn(a1, (__int64)(v16 << 25) >> 16, v47, v32);
    }
    MiReleasePtes((__int64)&qword_14036D0A0, (_QWORD *)v16, 1u);
  }
  else
  {
    v33 = a1;
  }
  MiDereferenceControlAreaProbe(v33, 0LL, v28, v29);
  KeGetCurrentIrql();
  __writecr8(1uLL);
  KiLeaveGuardedRegionUnsafe((__int64)v41);
  v34 = MiGetSharedVm(v9);
  ExAcquireSpinLockExclusive(v34);
  v34[1] = 0;
  IsFaultPteIntact = MiIsFaultPteIntact(a4, v39, v45);
  v36 = MiLockPageInline(v21);
  *(_BYTE *)(v21 + 34) &= ~0x20u;
  v37 = v36;
  if ( (*(_QWORD *)(v21 + 24) & 0x4000000000000000LL) == 0 )
  {
    *(_BYTE *)(v21 + 34) |= 0x10u;
    *(_QWORD *)v21 = 0LL;
  }
  if ( IsFaultPteIntact == 1 )
  {
    MiAddLockedPageCharge(v21, 3);
    v38 = *(_BYTE *)(v21 + 34) & 0xFE;
    *(_QWORD *)(v21 + 24) ^= (*(_QWORD *)(v21 + 24) ^ (*(_QWORD *)(v21 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
    *(_BYTE *)(v21 + 34) = v38 | 6;
    if ( !v16 && a4 >= 0xFFFF800000000000uLL )
      *(_BYTE *)(v21 + 35) |= 8u;
  }
  else
  {
    v8 = -1073740748;
  }
  MiRemoveLockedPageChargeAndDecRef(v21);
  _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v37);
  v22[189] &= ~0x10u;
  if ( *((int *)v22 + 44) > 1 )
    KeSetEvent((PRKEVENT)(v22 + 56), 0, 0);
  MiFreeInPageSupportBlock(v22);
  return v8;
}
