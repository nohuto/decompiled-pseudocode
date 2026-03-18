/*
 * XREFs of MiGetWsAndMakePageTablesNx @ 0x140167358
 * Callers:
 *     MmInitializeHandBuiltProcess2 @ 0x1405D36C0 (MmInitializeHandBuiltProcess2.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400D8DB0 (MiUnlockWorkingSetExclusive.c)
 *     MiWriteValidPteNewProtection @ 0x140100C50 (MiWriteValidPteNewProtection.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 MiGetWsAndMakePageTablesNx()
{
  _KPROCESS *Process; // rsi
  LONG *SharedVm; // rbx
  unsigned __int8 v2; // r11

  Process = KeGetCurrentThread()->ApcState.Process;
  SharedVm = MiGetSharedVm((__int64)&Process[1].IdealNode[12]);
  ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  MI_READ_PTE_LOCK_FREE(0xFFFFF6FB7DBEDF68uLL);
  MiWriteValidPteNewProtection(0xFFFFF6FB7DBEDF68uLL);
  MiUnlockWorkingSetExclusive((__int64)&Process[1].IdealNode[12], v2);
  return KeFlushTb(1u, 0);
}
