/*
 * XREFs of MiReInsertPlaceholderVad @ 0x140268574
 * Callers:
 *     MiDeletePartialVad @ 0x140071BC0 (MiDeletePartialVad.c)
 *     MiDeleteVad @ 0x1400F1A40 (MiDeleteVad.c)
 * Callees:
 *     MiInsertVad @ 0x14001F3B0 (MiInsertVad.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x1400E47F8 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400E6200 (MiUnlockWorkingSetExclusive.c)
 */

void __fastcall MiReInsertPlaceholderVad(__int64 a1)
{
  _KPROCESS *Process; // rsi
  LONG *SharedVm; // rbx
  KIRQL v4; // al
  unsigned __int8 v5; // di

  Process = KeGetCurrentThread()->ApcState.Process;
  SharedVm = MiGetSharedVm((__int64)&Process[1].IdealNode[12]);
  v4 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v5 = v4;
  MiInsertVad(a1, (__int64)Process, 1);
  MiUnlockWorkingSetExclusive((__int64)&Process[1].IdealNode[12], v5);
}
