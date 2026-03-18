/*
 * XREFs of MiGetWsAndMakePageTablesNx @ 0x14015B444
 * Callers:
 *     MmInitializeHandBuiltProcess2 @ 0x1405EF52C (MmInitializeHandBuiltProcess2.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiWriteValidPteNewPage @ 0x140031C10 (MiWriteValidPteNewPage.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400578A0 (MiUnlockWorkingSetExclusive.c)
 *     KeFlushTb @ 0x140059170 (KeFlushTb.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 */

__int64 MiGetWsAndMakePageTablesNx()
{
  _KPROCESS *Process; // rsi
  LONG *SharedVm; // rbx
  KIRQL v2; // al
  KIRQL v3; // bp
  __int64 v4; // rdx
  __int64 v5; // r8

  Process = KeGetCurrentThread()->ApcState.Process;
  SharedVm = MiGetSharedVm((__int64)&Process[1].IdealNode[12]);
  v2 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v3 = v2;
  MiWriteValidPteNewPage((unsigned __int64 *)0xFFFFF6FB7DBEDF68LL, MEMORY[0xFFFFF6FB7DBEDF68] | 0x8000000000000000uLL);
  LOBYTE(v4) = v3;
  MiUnlockWorkingSetExclusive((__int64)&Process[1].IdealNode[12], v4);
  return KeFlushTb(1LL, 0LL, v5);
}
