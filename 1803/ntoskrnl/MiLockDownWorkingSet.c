/*
 * XREFs of MiLockDownWorkingSet @ 0x140140AFC
 * Callers:
 *     MiCloneProcessAddressSpace @ 0x1405BF2F8 (MiCloneProcessAddressSpace.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140030AF8 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiAddLockedPageCharge @ 0x140058004 (MiAddLockedPageCharge.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x1400E47F8 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400E6200 (MiUnlockWorkingSetExclusive.c)
 *     MiLockPageAtDpcInline @ 0x140124DA0 (MiLockPageAtDpcInline.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

__int64 __fastcall MiLockDownWorkingSet(_KPROCESS *a1, int a2)
{
  __int64 v3; // rsi
  LONG *SharedVm; // rbx
  KIRQL v5; // al
  unsigned __int8 v6; // bp
  unsigned __int64 v7; // rbx
  __int64 v8; // r8
  __int64 v9; // r9
  _BYTE v11[48]; // [rsp+20h] [rbp-48h] BYREF

  v3 = (__int64)&a1[1].IdealNode[12];
  KiStackAttachProcess(a1, 0, (__int64)v11);
  SharedVm = MiGetSharedVm(v3);
  v5 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v6 = v5;
  v7 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(0xFFFFF6FB7DBEDF68uLL) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  MiLockPageAtDpcInline(v7);
  if ( a2 == 1 )
    MiAddLockedPageCharge(v7, 1);
  else
    MiRemoveLockedPageChargeAndDecRef(v7, 1LL, v8, v9);
  _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiUnlockWorkingSetExclusive(v3, v6);
  return KiUnstackDetachProcess((__int64)v11, 0LL);
}
