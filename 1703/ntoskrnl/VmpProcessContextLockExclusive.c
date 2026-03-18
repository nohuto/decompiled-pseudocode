/*
 * XREFs of VmpProcessContextLockExclusive @ 0x1402524DC
 * Callers:
 *     VmpFlushTb @ 0x140251E58 (VmpFlushTb.c)
 *     VmpFlushTbVaRange @ 0x140251F98 (VmpFlushTbVaRange.c)
 *     VmpInsertMemoryRange @ 0x1402521B8 (VmpInsertMemoryRange.c)
 *     VmpRemoveMemoryRange @ 0x140252564 (VmpRemoveMemoryRange.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140096D40 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

__int64 __fastcall VmpProcessContextLockExclusive(volatile LONG *a1)
{
  unsigned __int8 CurrentIrql; // bl

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  ExAcquireSpinLockExclusiveAtDpcLevel(a1);
  return CurrentIrql;
}
