/*
 * XREFs of IopAcquireGlobalPassiveInterruptListLock @ 0x1401F86CC
 * Callers:
 *     IopDereferencePassiveInterruptBlock @ 0x1401F86F0 (IopDereferencePassiveInterruptBlock.c)
 *     IopFindPassiveInterruptBlock @ 0x1401F87A0 (IopFindPassiveInterruptBlock.c)
 *     IopInsertPassiveInterruptBlock @ 0x1401F8818 (IopInsertPassiveInterruptBlock.c)
 * Callees:
 *     <none>
 */

void __fastcall IopAcquireGlobalPassiveInterruptListLock(unsigned __int8 *a1)
{
  unsigned __int8 CurrentIrql; // al

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  *a1 = CurrentIrql;
  KxAcquireSpinLock(&PassiveInterruptListLock);
}
