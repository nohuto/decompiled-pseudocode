/*
 * XREFs of MiGetWsAndMakePageTablesNx @ 0x140185724
 * Callers:
 *     MmInitializeHandBuiltProcess2 @ 0x140652748 (MmInitializeHandBuiltProcess2.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockWorkingSetShared @ 0x14001CF10 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140025A60 (MiLockWorkingSetShared.c)
 *     KeFlushTb @ 0x1400349E0 (KeFlushTb.c)
 *     MiPerformSafePdeWrite @ 0x1400CD48C (MiPerformSafePdeWrite.c)
 *     MiLockPageTableInternal @ 0x140120C90 (MiLockPageTableInternal.c)
 *     MiUnlockPageTableInternal @ 0x140123AD0 (MiUnlockPageTableInternal.c)
 */

__int64 MiGetWsAndMakePageTablesNx()
{
  unsigned __int16 *v0; // rsi
  unsigned __int8 v1; // bl
  signed __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // r8

  v0 = &KeGetCurrentThread()->ApcState.Process[1].IdealNode[12];
  v1 = MiLockWorkingSetShared((__int64)v0);
  MiLockPageTableInternal((__int64)v0, 0xFFFFF6FB7DBEDF68uLL, 0LL);
  v2 = MI_READ_PTE_LOCK_FREE(0xFFFFF6FB7DBEDF68uLL);
  MiPerformSafePdeWrite(v3, (volatile signed __int64 *)0xFFFFF6FB7DBEDF68LL, v2, 2);
  MiUnlockPageTableInternal((__int64)v0, 0xFFFFF6FB7DBEDF68uLL);
  MiUnlockWorkingSetShared((__int64)v0, v1, v4);
  return KeFlushTb(1u, 0);
}
