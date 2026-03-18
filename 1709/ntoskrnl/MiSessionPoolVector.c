/*
 * XREFs of MiSessionPoolVector @ 0x1405096C0
 * Callers:
 *     ExFreeLargePool @ 0x14002E0E0 (ExFreeLargePool.c)
 *     ExAllocatePoolWithTagPriority @ 0x140081330 (ExAllocatePoolWithTagPriority.c)
 *     ExpAllocateBigPool @ 0x1400C0CC0 (ExpAllocateBigPool.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 * Callees:
 *     <none>
 */

unsigned __int64 MiSessionPoolVector()
{
  return KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 3456;
}
