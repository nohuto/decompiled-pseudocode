/*
 * XREFs of IopAcquirePassiveInterruptBlockLock @ 0x14023B1B0
 * Callers:
 *     IoProcessPassiveInterrupts @ 0x14023B108 (IoProcessPassiveInterrupts.c)
 *     IopDereferencePassiveInterruptBlock @ 0x14023B1D8 (IopDereferencePassiveInterruptBlock.c)
 *     IopPassiveInterruptWorker @ 0x14023B3B0 (IopPassiveInterruptWorker.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x1400347F0 (KxAcquireSpinLock.c)
 */

void __fastcall IopAcquirePassiveInterruptBlockLock(__int64 a1, unsigned __int8 *a2)
{
  unsigned __int8 CurrentIrql; // al

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  *a2 = CurrentIrql;
  KxAcquireSpinLock((PKSPIN_LOCK)(a1 + 56));
}
