/*
 * XREFs of MiLockDownWorkingSet @ 0x140001538
 * Callers:
 *     MiCloneProcessAddressSpace @ 0x14041DF70 (MiCloneProcessAddressSpace.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     MiLockPageAtDpcInline @ 0x14009C240 (MiLockPageAtDpcInline.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1400CCB60 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400D8DB0 (MiUnlockWorkingSetExclusive.c)
 *     MiAddLockedPageCharge @ 0x140109894 (MiAddLockedPageCharge.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

__int64 __fastcall MiLockDownWorkingSet(ULONG_PTR a1, int a2)
{
  ULONG_PTR v3; // rsi
  __int64 SharedVm; // rbx
  KIRQL v5; // al
  KIRQL v6; // bp
  __int64 v7; // rbx
  __int64 v8; // rdx
  _BYTE v10[48]; // [rsp+20h] [rbp-48h] BYREF

  v3 = a1 + 1280;
  KiStackAttachProcess(a1);
  SharedVm = MiGetSharedVm(v3);
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
  *(_DWORD *)(SharedVm + 4) = 0;
  v6 = v5;
  v7 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(0xFFFFF6FB7DBEDF68uLL) - 0x58000000000LL;
  MiLockPageAtDpcInline(v7);
  if ( a2 == 1 )
    MiAddLockedPageCharge(v7);
  else
    MiRemoveLockedPageChargeAndDecRef(v7);
  _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  LOBYTE(v8) = v6;
  MiUnlockWorkingSetExclusive(v3, v8);
  return KiUnstackDetachProcess(v10, 0LL);
}
