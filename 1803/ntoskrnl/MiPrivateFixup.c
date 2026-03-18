/*
 * XREFs of MiPrivateFixup @ 0x14004C8E8
 * Callers:
 *     MiCompleteProtoPteFault @ 0x140019F00 (MiCompleteProtoPteFault.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiGetPage @ 0x140018200 (MiGetPage.c)
 *     MiMakeValidPte @ 0x14002EB00 (MiMakeValidPte.c)
 *     MiCopyPage @ 0x14002ED70 (MiCopyPage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140030AF8 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiInitializeReadInProgressPfn @ 0x140047D40 (MiInitializeReadInProgressPfn.c)
 *     MiDereferenceControlAreaProbe @ 0x14004B034 (MiDereferenceControlAreaProbe.c)
 *     MiGetEffectivePagePriorityThread @ 0x14005605C (MiGetEffectivePagePriorityThread.c)
 *     MiGetInPageSupportBlock @ 0x140057704 (MiGetInPageSupportBlock.c)
 *     MiReleaseFaultState @ 0x140057E38 (MiReleaseFaultState.c)
 *     MiAddLockedPageCharge @ 0x140058004 (MiAddLockedPageCharge.c)
 *     MiFreeInPageSupportBlock @ 0x140059960 (MiFreeInPageSupportBlock.c)
 *     MiRelockFaultState @ 0x140059A7C (MiRelockFaultState.c)
 *     MiIsFaultPteIntact @ 0x140059B20 (MiIsFaultPteIntact.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiReturnFaultCharges @ 0x1400D13B8 (MiReturnFaultCharges.c)
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiReservePtes @ 0x14010E5B0 (MiReservePtes.c)
 *     MiReleasePtes @ 0x140110560 (MiReleasePtes.c)
 *     MiObtainFaultCharges @ 0x14011C410 (MiObtainFaultCharges.c)
 *     MiMakeProtectionPfnCompatible @ 0x1401389C0 (MiMakeProtectionPfnCompatible.c)
 *     MiReleaseFreshPage @ 0x14013A6E0 (MiReleaseFreshPage.c)
 *     MiRelocateImagePfn @ 0x1404AFB00 (MiRelocateImagePfn.c)
 *     MiAllocateDriverPage @ 0x1405BB3F0 (MiAllocateDriverPage.c)
 */

__int64 __fastcall MiPrivateFixup(unsigned __int64 *a1, ULONG_PTR a2, int a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v5; // r8
  unsigned __int64 v7; // rbx
  unsigned int v8; // esi
  struct _KTHREAD *CurrentThread; // rcx
  _KPROCESS *Process; // rdx
  struct _KTHREAD *v12; // rax
  __int64 v13; // r13
  bool v14; // zf
  unsigned __int64 *v15; // r14
  __int64 v16; // rdx
  __int64 v17; // rdx
  ULONG_PTR v18; // r12
  ULONG_PTR v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // r13
  struct _KTHREAD *v22; // r12
  char EffectivePagePriorityThread; // al
  __int64 v24; // rcx
  ULONG_PTR v25; // rax
  __int64 v26; // rdx
  ULONG_PTR v27; // rdx
  int ProtectionPfnCompatible; // eax
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // rcx
  int IsFaultPteIntact; // r15d
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  unsigned __int8 v36; // r12
  char v37; // al
  __int64 v39; // rbx
  unsigned int v40; // r15d
  __int64 v41; // [rsp+38h] [rbp-41h]
  __int64 v42; // [rsp+38h] [rbp-41h]
  __int64 v43; // [rsp+40h] [rbp-39h]
  unsigned __int64 v44; // [rsp+48h] [rbp-31h]
  __int64 Page; // [rsp+50h] [rbp-29h] BYREF
  __int64 v46; // [rsp+58h] [rbp-21h]
  unsigned __int64 v47; // [rsp+60h] [rbp-19h]
  __int64 v48; // [rsp+68h] [rbp-11h] BYREF
  struct _KTHREAD *v49; // [rsp+70h] [rbp-9h]
  unsigned __int64 v50; // [rsp+78h] [rbp-1h]
  __int64 v51[9]; // [rsp+80h] [rbp+7h] BYREF
  unsigned __int8 v52; // [rsp+D8h] [rbp+5Fh] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+E0h] [rbp+67h]
  int v54; // [rsp+E8h] [rbp+6Fh]
  __int64 v55; // [rsp+F0h] [rbp+77h]

  v55 = a4;
  v54 = a3;
  BugCheckParameter2 = a2;
  v5 = a1[7];
  v7 = *a1;
  v8 = 0;
  CurrentThread = KeGetCurrentThread();
  v50 = v5;
  v14 = (*(_BYTE *)(v5 + 184) & 7) == 0;
  v47 = v7;
  Process = CurrentThread->ApcState.Process;
  v46 = (__int64)Process;
  v49 = CurrentThread;
  if ( !v14 || (v12 = (struct _KTHREAD *)Process[1].Affinity.Bitmap[10]) == 0LL )
  {
    v13 = *(_QWORD *)(qword_1403CBD88 + 8LL * *(unsigned __int16 *)(v5 + 174));
    v43 = v13;
    if ( v7 >= 0xFFFF800000000000uLL )
    {
      if ( (MiFlags & 0x10000) == 0 || (MiFlags & 0x4000) == 0 )
        goto LABEL_6;
      v14 = (((unsigned __int8)*(_DWORD *)(a4 + 16) >> 5) & 2) == 0;
    }
    else
    {
      v14 = (KeGetCurrentThread()->ApcState.Process->SecureState.SecureHandle & 1) == 0;
    }
    if ( !v14 )
    {
      v15 = 0LL;
LABEL_7:
      v44 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v48 = MI_READ_PTE_LOCK_FREE(v44);
      v41 = (a4 + 0x58000000000LL) / 48;
      MiObtainFaultCharges(v13, 1LL, 2LL);
      if ( v15 || v7 < 0xFFFF800000000000uLL )
      {
        Page = MiGetPage(
                 v13,
                 dword_1403CB6D8 & v41 | (((*(_QWORD *)(a4 + 40) >> 36) & 3) << byte_1403CB69A) | (*(_QWORD *)(a4 + 40) >> 58 << byte_1403CB699),
                 0);
        v18 = Page;
        if ( Page == -1 )
        {
          v40 = -1073741670;
          goto LABEL_39;
        }
      }
      else
      {
        LOBYTE(v16) = 1;
        v39 = MiReleaseFaultState(a1 + 7, v16, &v52);
        __writecr8(v52);
        Page = MiAllocateDriverPage(v13);
        v18 = Page;
        MiRelockFaultState(a1 + 7, v39);
        if ( !(unsigned int)MiIsFaultPteIntact(a1, *a1, v44, &v48) )
        {
          v40 = -1073740748;
LABEL_39:
          if ( v18 != -1LL )
            MiReleaseFreshPage(48 * v18 - 0x58000000000LL);
          MiReturnFaultCharges(v13, 1LL, 2LL);
          if ( v15 )
            MiReleasePtes(&qword_1403CC5E0, v15, 1LL);
          return v40;
        }
      }
      v19 = 48 * v18 - 0x58000000000LL;
      v21 = MiGetInPageSupportBlock(2LL, v17);
      if ( v21 )
      {
        v22 = v49;
        EffectivePagePriorityThread = MiGetEffectivePagePriorityThread(v49, v20);
        v24 = v47;
        *(_BYTE *)(v21 + 189) |= 0x10u;
        *(_QWORD *)(v21 + 240) = v19;
        *(_DWORD *)(v21 + 80) = 0;
        *(_QWORD *)(v21 + 88) = 0LL;
        MiInitializeReadInProgressPfn(v24, &Page, 1, v44, v21, EffectivePagePriorityThread & 7 | 0x48);
        if ( (*(_BYTE *)(v50 + 184) & 7) == 0 )
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v46 + 920), 1uLL);
        v51[0] = MI_READ_PTE_LOCK_FREE(v44);
        v25 = BugCheckParameter2;
        *(_QWORD *)(v21 + 200) = BugCheckParameter2;
        _InterlockedAdd64((volatile signed __int64 *)(v25 + 112), 1uLL);
        LOBYTE(v26) = 1;
        v46 = MiReleaseFaultState(a1 + 7, v26, &v52);
        --v22->SpecialApcDisable;
        __writecr8(v52);
        v27 = v41;
        v42 = Page;
        MiCopyPage(Page, v27, 0LL, v15 != 0LL ? 9 : 17);
        if ( v15 )
        {
          ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4LL, v19);
          *v15 = MiMakeValidPte((unsigned __int64)v15, v42, ProtectionPfnCompatible | 0xA0000000, v29);
          if ( MiPteInShadowRange((unsigned __int64)v15) )
            MiWritePteShadow(v31, v30);
          if ( *(__int64 *)(v55 + 8) < 0 )
            MiRelocateImagePfn(BugCheckParameter2, a5);
          MiReleasePtes(&qword_1403CC5E0, v15, 1LL);
        }
        MiDereferenceControlAreaProbe((volatile signed __int64 *)BugCheckParameter2, 0);
        KeGetCurrentIrql();
        __writecr8(1uLL);
        KiLeaveGuardedRegionUnsafe(v22);
        MiRelockFaultState(a1 + 7, v46);
        IsFaultPteIntact = MiIsFaultPteIntact(a1, *a1, v44, v51);
        v36 = MiLockPageInline(v19);
        *(_QWORD *)v19 = 0LL;
        *(_BYTE *)(v19 + 34) &= ~0x20u;
        if ( (*(_QWORD *)(v19 + 24) & 0x4000000000000000LL) == 0 )
          *(_BYTE *)(v19 + 34) |= 0x10u;
        if ( IsFaultPteIntact == 1 )
        {
          MiAddLockedPageCharge(v19, 3LL);
          v33 = 0x3FFFFFFFFFFFFFFFLL;
          v37 = *(_BYTE *)(v19 + 34) & 0xFE;
          *(_QWORD *)(v19 + 24) ^= (*(_QWORD *)(v19 + 24) ^ (*(_QWORD *)(v19 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
          *(_BYTE *)(v19 + 34) = v37 | 6;
          if ( !v15 && v47 >= 0xFFFF800000000000uLL )
            *(_BYTE *)(v19 + 35) |= 8u;
        }
        else
        {
          v8 = -1073740748;
        }
        MiRemoveLockedPageChargeAndDecRef(v19, v33, v34, v35);
        _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v36);
        *(_BYTE *)(v21 + 189) &= ~0x10u;
        if ( *(int *)(v21 + 176) > 1 )
          KeSetEvent((PRKEVENT)(v21 + 56), 0, 0);
        MiFreeInPageSupportBlock((PVOID)v21);
        return v8;
      }
      if ( v15 )
        MiReleasePtes(&qword_1403CC5E0, v15, 1LL);
      MiReleaseFreshPage(v19);
      MiReturnFaultCharges(v43, 1LL, 2LL);
      return 3221225626LL;
    }
LABEL_6:
    v15 = (unsigned __int64 *)MiReservePtes(&qword_1403CC5E0, 1LL);
    if ( !v15 )
      return 3221225626LL;
    goto LABEL_7;
  }
  if ( v12 != CurrentThread )
    *((_DWORD *)a1 + 21) |= 8u;
  return 297LL;
}
