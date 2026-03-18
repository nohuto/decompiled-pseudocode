/*
 * XREFs of MiMakeImagePageOk @ 0x14015AE38
 * Callers:
 *     MiFinishHardFault @ 0x14002FC50 (MiFinishHardFault.c)
 *     MiResolveProtoPteFault @ 0x140043FB0 (MiResolveProtoPteFault.c)
 *     MiResolveTransitionFault @ 0x140049330 (MiResolveTransitionFault.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiDereferenceControlAreaProbe @ 0x14001F474 (MiDereferenceControlAreaProbe.c)
 *     MiObtainProtoReference @ 0x140027120 (MiObtainProtoReference.c)
 *     MiAddLockedPageCharge @ 0x140027170 (MiAddLockedPageCharge.c)
 *     MiStartingOffset @ 0x14002C570 (MiStartingOffset.c)
 *     MiGetSessionIdForVa @ 0x14002CD24 (MiGetSessionIdForVa.c)
 *     MiIsFaultPteIntact @ 0x14002CD68 (MiIsFaultPteIntact.c)
 *     MiRelockProtoPoolPage @ 0x14002E068 (MiRelockProtoPoolPage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140030A90 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiUnlockProtoPoolPage @ 0x140030AF0 (MiUnlockProtoPoolPage.c)
 *     MiLockPageAtDpcInline @ 0x140031780 (MiLockPageAtDpcInline.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiUnlinkPageFromList @ 0x14004B0F0 (MiUnlinkPageFromList.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x140057900 (MiPreUnlockWorkingSetExclusive.c)
 *     MiComputeImagePteIndex @ 0x1400B6E70 (MiComputeImagePteIndex.c)
 *     MiReturnPfnReferenceCount @ 0x1400B7758 (MiReturnPfnReferenceCount.c)
 *     MiGetPrototypePteDirect @ 0x14017C6D0 (MiGetPrototypePteDirect.c)
 *     MiDiscardTransitionPte @ 0x14022AE0C (MiDiscardTransitionPte.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140286144 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiValidateImagePfn @ 0x140509814 (MiValidateImagePfn.c)
 */

__int64 __fastcall MiMakeImagePageOk(
        unsigned __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        ULONG_PTR BugCheckParameter2,
        __int64 a6)
{
  ULONG_PTR v6; // rbp
  __int64 PrototypePteDirect; // rax
  __int64 v12; // r8
  __int64 *v13; // r13
  __int64 v14; // r15
  __int64 v15; // r12
  LONG *v16; // rcx
  _KPROCESS *Process; // rsi
  unsigned int SessionIdForVa; // eax
  int v19; // edi
  int v20; // eax
  int v21; // edi
  LONG *SharedVm; // rbx
  void *retaddr; // [rsp+78h] [rbp+0h]
  __int64 v26; // [rsp+90h] [rbp+18h] BYREF

  v26 = a3;
  v6 = BugCheckParameter2;
  if ( (*(_QWORD *)(BugCheckParameter2 + 24) & 0x4000000000000000LL) != 0 )
    return 3221226548LL;
  PrototypePteDirect = MiGetPrototypePteDirect(*(_QWORD *)(BugCheckParameter2 + 16));
  v13 = (__int64 *)PrototypePteDirect;
  v14 = *(_QWORD *)PrototypePteDirect;
  if ( (MiFlags & 0x8000) == 0
    || (*(_DWORD *)(v14 + 92) & 0xC0000) == 0
    || (*(_BYTE *)(PrototypePteDirect + 34) & 2) != 0 && (*(_DWORD *)(v14 + 56) & 0x4000000) != 0 )
  {
    return 3221226536LL;
  }
  if ( (*(_BYTE *)(v6 + 34) & 7) == 2 && !*(_WORD *)(v6 + 32) )
  {
    if ( !MiUnlinkPageFromList(v6, 0LL) )
    {
      MiDiscardTransitionPte(v6);
      return 3221226548LL;
    }
    *(_QWORD *)(v6 + 24) &= 0xC000000000000000uLL;
  }
  MiAddLockedPageCharge(v6, 1LL, v12);
  _InterlockedAdd64((volatile signed __int64 *)(v14 + 112), 1uLL);
  _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v15 = a6;
  MiObtainProtoReference(a6, 0);
  MiUnlockProtoPoolPage(v15, 0x11u);
  if ( a4 )
  {
    MiPreUnlockWorkingSetExclusive(a4, 1u);
    v16 = &dword_140389780;
    if ( (*(_BYTE *)(a4 + 192) & 7) != 2 )
      v16 = (LONG *)(a4 + 200);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v16, retaddr);
    else
      *v16 = 0;
  }
  __writecr8(1uLL);
  Process = KeGetCurrentThread()->ApcState.Process;
  SessionIdForVa = MiGetSessionIdForVa(a1);
  v19 = MiStartingOffset(v13, (unsigned __int64)a2, SessionIdForVa);
  v20 = MiComputeImagePteIndex(v6);
  v21 = MiValidateImagePfn(v14, v19, (_DWORD)Process, v20);
  MiDereferenceControlAreaProbe((volatile signed __int64 *)v14, 0);
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
  MiRelockProtoPoolPage(v15, 0LL);
  MiReturnPfnReferenceCount(v15);
  MiLockPageAtDpcInline(v6);
  if ( v21 >= 0 && ((*(_QWORD *)(v6 + 24) & 0x4000000000000000LL) != 0 || !MiIsFaultPteIntact(a1, a2, &v26)) )
    v21 = -1073740748;
  MiRemoveLockedPageChargeAndDecRef(v6);
  return (unsigned int)v21;
}
