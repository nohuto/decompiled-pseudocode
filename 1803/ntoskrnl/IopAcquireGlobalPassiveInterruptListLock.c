/*
 * XREFs of IopAcquireGlobalPassiveInterruptListLock @ 0x14023B184
 * Callers:
 *     IopDereferencePassiveInterruptBlock @ 0x14023B1D8 (IopDereferencePassiveInterruptBlock.c)
 *     IopFindPassiveInterruptBlock @ 0x14023B27C (IopFindPassiveInterruptBlock.c)
 *     IopInsertPassiveInterruptBlock @ 0x14023B2F4 (IopInsertPassiveInterruptBlock.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x1400347F0 (KxAcquireSpinLock.c)
 */

void __fastcall IopAcquireGlobalPassiveInterruptListLock(unsigned __int8 *a1)
{
  unsigned __int8 CurrentIrql; // al

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  *a1 = CurrentIrql;
  KxAcquireSpinLock(&PassiveInterruptListLock);
}
