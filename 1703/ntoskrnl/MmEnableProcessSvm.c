/*
 * XREFs of MmEnableProcessSvm @ 0x14020C7C4
 * Callers:
 *     ExShareAddressSpaceWithDevice @ 0x14025D960 (ExShareAddressSpaceWithDevice.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 */

__int64 MmEnableProcessSvm()
{
  _KPROCESS *Process; // rdi
  LONG *SharedVm; // rbx
  KIRQL v2; // al

  Process = KeGetCurrentThread()->ApcState.Process;
  SharedVm = MiGetSharedVm((__int64)&Process[1].IdealNode[12]);
  v2 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  BYTE3(Process[2].Header.WaitListHead.Blink) |= 2u;
  return MiUnlockWorkingSetExclusive((__int64)&Process[1].IdealNode[12], v2);
}
