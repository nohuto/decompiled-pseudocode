/*
 * XREFs of MiMakeImagePageOk @ 0x140222D1C
 * Callers:
 *     MiResolveProtoPteFault @ 0x1400C0C90 (MiResolveProtoPteFault.c)
 *     MiResolveTransitionFault @ 0x1400C2260 (MiResolveTransitionFault.c)
 *     MiFinishHardFault @ 0x1400CBC40 (MiFinishHardFault.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     MiReturnPfnReferenceCount @ 0x14005EAC8 (MiReturnPfnReferenceCount.c)
 *     MiGetSessionIdForVa @ 0x1400974CC (MiGetSessionIdForVa.c)
 *     MiComputeImagePteIndex @ 0x140097E7C (MiComputeImagePteIndex.c)
 *     MiLockPageAtDpcInline @ 0x14009C240 (MiLockPageAtDpcInline.c)
 *     MiUnlockProtoPoolPage @ 0x1400A3920 (MiUnlockProtoPoolPage.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MiUnlinkPageFromList @ 0x1400C3100 (MiUnlinkPageFromList.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1400CCB60 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiStartingOffset @ 0x1400CDBF0 (MiStartingOffset.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x1400D6900 (MiPreUnlockWorkingSetExclusive.c)
 *     MiObtainProtoReference @ 0x140109844 (MiObtainProtoReference.c)
 *     MiAddLockedPageCharge @ 0x140109894 (MiAddLockedPageCharge.c)
 *     MiRelockProtoPoolPage @ 0x14010B17C (MiRelockProtoPoolPage.c)
 *     MiIsFaultPteIntact @ 0x1401182D8 (MiIsFaultPteIntact.c)
 *     MiDereferenceControlAreaProbe @ 0x140118FA8 (MiDereferenceControlAreaProbe.c)
 *     MiDiscardTransitionPte @ 0x14013B9CC (MiDiscardTransitionPte.c)
 *     MiGetPrototypePteDirect @ 0x14017CE98 (MiGetPrototypePteDirect.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14025C828 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiValidateImagePfn @ 0x1404234F4 (MiValidateImagePfn.c)
 */

__int64 __fastcall MiMakeImagePageOk(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        ULONG_PTR BugCheckParameter2,
        __int64 a6)
{
  ULONG_PTR v6; // rbp
  __int64 PrototypePteDirect; // rax
  __int64 *v12; // r13
  __int64 v13; // r15
  __int64 v14; // r12
  LONG *v15; // rcx
  _KPROCESS *Process; // rsi
  unsigned int SessionIdForVa; // ebx
  int v18; // edi
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // eax
  int v22; // edi
  LONG *SharedVm; // rbx
  void *retaddr; // [rsp+78h] [rbp+0h]
  __int64 v27; // [rsp+90h] [rbp+18h] BYREF

  v27 = a3;
  v6 = BugCheckParameter2;
  if ( (*(_QWORD *)(BugCheckParameter2 + 24) & 0x4000000000000000LL) != 0 )
    return 3221226548LL;
  PrototypePteDirect = MiGetPrototypePteDirect(*(_QWORD *)(BugCheckParameter2 + 16), a2, a3, a4);
  v12 = (__int64 *)PrototypePteDirect;
  v13 = *(_QWORD *)PrototypePteDirect;
  if ( (MiFlags & 0x8000) == 0
    || (*(_DWORD *)(v13 + 92) & 0xC0000) == 0
    || (*(_BYTE *)(PrototypePteDirect + 34) & 2) != 0 && (*(_DWORD *)(v13 + 56) & 0x4000000) != 0 )
  {
    return 3221226536LL;
  }
  if ( (*(_BYTE *)(v6 + 34) & 7) == 2 && !*(_WORD *)(v6 + 32) )
  {
    if ( !MiUnlinkPageFromList(v6, 0) )
    {
      MiDiscardTransitionPte(v6);
      return 3221226548LL;
    }
    *(_QWORD *)(v6 + 24) &= 0xC000000000000000uLL;
  }
  MiAddLockedPageCharge(v6, 1);
  _InterlockedAdd64((volatile signed __int64 *)(v13 + 112), 1uLL);
  _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v14 = a6;
  MiObtainProtoReference(a6, 0);
  MiUnlockProtoPoolPage(v14, 0x11u);
  if ( a4 )
  {
    MiPreUnlockWorkingSetExclusive(a4, 1u);
    v15 = &dword_14036D4C0;
    if ( (*(_BYTE *)(a4 + 192) & 7) != 2 )
      v15 = (LONG *)(a4 + 200);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v15, retaddr);
    else
      *v15 = 0;
  }
  __writecr8(1uLL);
  Process = KeGetCurrentThread()->ApcState.Process;
  SessionIdForVa = MiGetSessionIdForVa(a1);
  v18 = MiStartingOffset(v12, a2, SessionIdForVa);
  v21 = MiComputeImagePteIndex(v6, SessionIdForVa, v19, v20);
  v22 = MiValidateImagePfn(v13, v18, (_DWORD)Process, v21);
  MiDereferenceControlAreaProbe(v13, 0);
  if ( a4 )
  {
    SharedVm = MiGetSharedVm(a4);
    ExAcquireSpinLockExclusive(SharedVm);
    SharedVm[1] = 0;
  }
  else
  {
    KeGetCurrentIrql();
    __writecr8(2uLL);
  }
  MiRelockProtoPoolPage(v14, 0LL);
  MiReturnPfnReferenceCount(v14);
  MiLockPageAtDpcInline(v6);
  if ( v22 >= 0 && ((*(_QWORD *)(v6 + 24) & 0x4000000000000000LL) != 0 || !MiIsFaultPteIntact(a1, a2, &v27)) )
    v22 = -1073740748;
  MiRemoveLockedPageChargeAndDecRef(v6);
  return (unsigned int)v22;
}
