/*
 * XREFs of IopAcquirePassiveInterruptBlockLock @ 0x1401FE7E0
 * Callers:
 *     IoProcessPassiveInterrupts @ 0x1401FE738 (IoProcessPassiveInterrupts.c)
 *     IopDereferencePassiveInterruptBlock @ 0x1401FE808 (IopDereferencePassiveInterruptBlock.c)
 *     IopPassiveInterruptWorker @ 0x1401FE9E0 (IopPassiveInterruptWorker.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140061000 (KxAcquireSpinLock.c)
 */

void __fastcall IopAcquirePassiveInterruptBlockLock(__int64 a1, unsigned __int8 *a2)
{
  unsigned __int8 CurrentIrql; // al

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  *a2 = CurrentIrql;
  KxAcquireSpinLock((PKSPIN_LOCK)(a1 + 56));
}
