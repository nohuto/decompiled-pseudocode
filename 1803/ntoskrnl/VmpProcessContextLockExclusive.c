/*
 * XREFs of VmpProcessContextLockExclusive @ 0x1402AC838
 * Callers:
 *     VmpFlushTb @ 0x1402ABEA8 (VmpFlushTb.c)
 *     VmpFlushTbVaRange @ 0x1402ABFDC (VmpFlushTbVaRange.c)
 *     VmpInsertMemoryRange @ 0x1402AC110 (VmpInsertMemoryRange.c)
 *     VmpRemoveMemoryRange @ 0x1402ACBE0 (VmpRemoveMemoryRange.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1400E4380 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

__int64 __fastcall VmpProcessContextLockExclusive(volatile LONG *a1)
{
  unsigned __int8 CurrentIrql; // bl

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  ExAcquireSpinLockExclusiveAtDpcLevel(a1);
  return CurrentIrql;
}
