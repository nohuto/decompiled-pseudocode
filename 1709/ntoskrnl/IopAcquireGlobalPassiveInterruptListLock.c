/*
 * XREFs of IopAcquireGlobalPassiveInterruptListLock @ 0x1401FE7B4
 * Callers:
 *     IopDereferencePassiveInterruptBlock @ 0x1401FE808 (IopDereferencePassiveInterruptBlock.c)
 *     IopFindPassiveInterruptBlock @ 0x1401FE8AC (IopFindPassiveInterruptBlock.c)
 *     IopInsertPassiveInterruptBlock @ 0x1401FE924 (IopInsertPassiveInterruptBlock.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140061000 (KxAcquireSpinLock.c)
 */

void __fastcall IopAcquireGlobalPassiveInterruptListLock(unsigned __int8 *a1)
{
  unsigned __int8 CurrentIrql; // al

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  *a1 = CurrentIrql;
  KxAcquireSpinLock(&PassiveInterruptListLock);
}
