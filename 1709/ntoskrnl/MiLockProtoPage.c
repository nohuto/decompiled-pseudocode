/*
 * XREFs of MiLockProtoPage @ 0x14010C430
 * Callers:
 *     MiGetWorkingSetInfoList @ 0x14010B360 (MiGetWorkingSetInfoList.c)
 * Callees:
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140030A90 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140065040 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiLockWorkingSetShared @ 0x1400A63A0 (MiLockWorkingSetShared.c)
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 *     MiMakeProtoAddressValid @ 0x14010C53C (MiMakeProtoAddressValid.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14022A1F8 (MI_GET_PFN_FROM_PTE.c)
 */

ULONG_PTR __fastcall MiLockProtoPage(ULONG_PTR BugCheckParameter1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int8 v3; // bp
  _KPROCESS *Process; // r14
  __int64 *v6; // r9
  __int64 PteShadow; // rax
  __int64 v8; // rdi
  unsigned __int64 v9; // rbx
  LONG *SharedVm; // rax
  __int64 v12; // [rsp+48h] [rbp+10h] BYREF

  v3 = a3;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( a2 )
  {
    v6 = (__int64 *)(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    PteShadow = *v6;
    if ( (unsigned __int64)v6 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v6 <= 0xFFFFF6FB7DBED7F8uLL )
      PteShadow = MiReadPteShadow(v6, *v6);
    v12 = PteShadow;
    v8 = MI_GET_PFN_FROM_PTE(&v12, a2, a3, v6);
    v9 = (unsigned __int8)MiLockPageInline(v8);
    MiRemoveLockedPageChargeAndDecRef(v8);
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v9);
    if ( !BugCheckParameter1 )
      return 0LL;
  }
  SharedVm = MiGetSharedVm((__int64)&Process[1].IdealNode[12]);
  ExReleaseSpinLockSharedFromDpcLevel(SharedVm);
  __writecr8(v3);
  MiMakeProtoAddressValid(BugCheckParameter1);
  MiLockWorkingSetShared((__int64)&Process[1].IdealNode[12]);
  return BugCheckParameter1;
}
