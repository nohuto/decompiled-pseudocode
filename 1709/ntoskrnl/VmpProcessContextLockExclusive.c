/*
 * XREFs of VmpProcessContextLockExclusive @ 0x14027964C
 * Callers:
 *     VmpFlushTb @ 0x140278DBC (VmpFlushTb.c)
 *     VmpFlushTbVaRange @ 0x140278EF0 (VmpFlushTbVaRange.c)
 *     VmpInsertMemoryRange @ 0x140279020 (VmpInsertMemoryRange.c)
 *     VmpRemoveMemoryRange @ 0x1402799A0 (VmpRemoveMemoryRange.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140067810 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

__int64 __fastcall VmpProcessContextLockExclusive(volatile LONG *a1)
{
  unsigned __int8 CurrentIrql; // bl

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  ExAcquireSpinLockExclusiveAtDpcLevel(a1);
  return CurrentIrql;
}
