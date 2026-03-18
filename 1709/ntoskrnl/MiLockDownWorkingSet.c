/*
 * XREFs of MiLockDownWorkingSet @ 0x140120080
 * Callers:
 *     MiCloneProcessAddressSpace @ 0x14057A87C (MiCloneProcessAddressSpace.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiAddLockedPageCharge @ 0x140027170 (MiAddLockedPageCharge.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140030A90 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiLockPageAtDpcInline @ 0x140031780 (MiLockPageAtDpcInline.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400578A0 (MiUnlockWorkingSetExclusive.c)
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

__int64 __fastcall MiLockDownWorkingSet(_KPROCESS *a1, int a2)
{
  __int64 v3; // rsi
  LONG *SharedVm; // rbx
  KIRQL v5; // al
  KIRQL v6; // bp
  __int64 v7; // rbx
  __int64 v8; // r8
  __int64 v9; // rdx
  $709EDFC2F9E0D4565D6AA3C4377BC643 v11; // [rsp+20h] [rbp-48h] BYREF

  v3 = (__int64)&a1[1].IdealNode[12];
  KiStackAttachProcess(a1, 0, (__int64)&v11);
  SharedVm = MiGetSharedVm(v3);
  v5 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v6 = v5;
  v7 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(0xFFFFF6FB7DBEDF68uLL) - 0x58000000000LL;
  MiLockPageAtDpcInline(v7);
  if ( a2 == 1 )
    MiAddLockedPageCharge(v7, 1LL, v8);
  else
    MiRemoveLockedPageChargeAndDecRef(v7);
  _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  LOBYTE(v9) = v6;
  MiUnlockWorkingSetExclusive(v3, v9);
  return KiUnstackDetachProcess(&v11, 0LL);
}
