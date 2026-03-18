/*
 * XREFs of KiAcquireSecondarySignalListLock @ 0x140200A04
 * Callers:
 *     KiInsertSecondarySignalList @ 0x140200CFC (KiInsertSecondarySignalList.c)
 *     KiProcessSecondarySignalList @ 0x140200EA0 (KiProcessSecondarySignalList.c)
 * Callees:
 *     <none>
 */

void __fastcall KiAcquireSecondarySignalListLock(unsigned __int8 *a1)
{
  unsigned __int8 CurrentIrql; // al

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  *a1 = CurrentIrql;
  KxAcquireSpinLock(&KiSecondarySignalListLock);
}
