/*
 * XREFs of MiLockProtoPage @ 0x140078790
 * Callers:
 *     MiGetWorkingSetInfoList @ 0x140077410 (MiGetWorkingSetInfoList.c)
 * Callees:
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 *     MiMakeProtoAddressValid @ 0x1400788F8 (MiMakeProtoAddressValid.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400A5D60 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MiLockWorkingSetShared @ 0x1400A7E80 (MiLockWorkingSetShared.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1400CCB60 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

ULONG_PTR __fastcall MiLockProtoPage(ULONG_PTR a1, unsigned __int64 a2, unsigned __int8 a3)
{
  _KPROCESS *Process; // r14
  __int64 v6; // rdi
  unsigned __int64 v7; // rbx
  volatile LONG *SharedVm; // rax
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  Process = KeGetCurrentThread()->ApcState.Process;
  if ( a2 )
  {
    v10 = MI_READ_PTE_LOCK_FREE(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v6 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(&v10) - 0x58000000000LL;
    v7 = (unsigned __int8)MiLockPageInline(v6);
    MiRemoveLockedPageChargeAndDecRef(v6);
    _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v7);
    if ( !a1 )
      return 0LL;
  }
  SharedVm = (volatile LONG *)MiGetSharedVm(&Process[1].IdealNode[12]);
  ExReleaseSpinLockSharedFromDpcLevel(SharedVm);
  __writecr8(a3);
  MiMakeProtoAddressValid(a1);
  MiLockWorkingSetShared(&Process[1].IdealNode[12]);
  return a1;
}
