/*
 * XREFs of KiAcquireSecondarySignalListLock @ 0x140206EC8
 * Callers:
 *     KiInsertSecondarySignalList @ 0x1402071A8 (KiInsertSecondarySignalList.c)
 *     KiProcessSecondarySignalList @ 0x140207340 (KiProcessSecondarySignalList.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140061000 (KxAcquireSpinLock.c)
 */

void __fastcall KiAcquireSecondarySignalListLock(unsigned __int8 *a1)
{
  unsigned __int8 CurrentIrql; // al

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  *a1 = CurrentIrql;
  KxAcquireSpinLock(&KiSecondarySignalListLock);
}
