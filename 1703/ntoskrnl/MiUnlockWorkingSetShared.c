/*
 * XREFs of MiUnlockWorkingSetShared @ 0x1400A7E34
 * Callers:
 *     MiComparePteProtections @ 0x14017C710 (MiComparePteProtections.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400A5D60 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
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
