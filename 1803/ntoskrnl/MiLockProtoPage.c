/*
 * XREFs of MiLockProtoPage @ 0x1400B4D9C
 * Callers:
 *     MiGetWorkingSetInfoList @ 0x1400B3CD0 (MiGetWorkingSetInfoList.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockWorkingSetShared @ 0x14001CF10 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140025A60 (MiLockWorkingSetShared.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140030AF8 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiMakeProtoAddressValid @ 0x1400B4F10 (MiMakeProtoAddressValid.c)
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 */

ULONG_PTR __fastcall MiLockProtoPage(ULONG_PTR a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int8 v3; // bp
  _KPROCESS *Process; // r14
  ULONG_PTR v6; // rdi
  unsigned __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v12; // [rsp+48h] [rbp+10h] BYREF

  v3 = a3;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( a2 )
  {
    v12 = MI_READ_PTE_LOCK_FREE(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v6 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v12) >> 12) & 0xFFFFFFFFFLL)
       - 0x58000000000LL;
    v7 = (unsigned __int8)MiLockPageInline(v6);
    MiRemoveLockedPageChargeAndDecRef(v6, v8, v9, v10);
    _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v7);
    if ( !a1 )
      return 0LL;
  }
  MiUnlockWorkingSetShared((__int64)&Process[1].IdealNode[12], v3, a3);
  MiMakeProtoAddressValid(a1);
  MiLockWorkingSetShared((__int64)&Process[1].IdealNode[12]);
  return a1;
}
