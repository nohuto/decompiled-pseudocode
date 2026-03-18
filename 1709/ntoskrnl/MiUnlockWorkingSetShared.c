/*
 * XREFs of MiUnlockWorkingSetShared @ 0x1400A664C
 * Callers:
 *     MiComparePteProtections @ 0x14017BE48 (MiComparePteProtections.c)
 * Callees:
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140065040 (ExReleaseSpinLockSharedFromDpcLevel.c)
 */

void __fastcall MiUnlockWorkingSetShared(__int64 a1, unsigned __int8 a2)
{
  unsigned __int64 v2; // rbx
  LONG *SharedVm; // rax

  v2 = a2;
  SharedVm = MiGetSharedVm(a1);
  ExReleaseSpinLockSharedFromDpcLevel(SharedVm);
  __writecr8(v2);
}
