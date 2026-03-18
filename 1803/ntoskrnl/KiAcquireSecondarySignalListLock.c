/*
 * XREFs of KiAcquireSecondarySignalListLock @ 0x140244AE8
 * Callers:
 *     KiInsertSecondarySignalList @ 0x140244DC8 (KiInsertSecondarySignalList.c)
 *     KiProcessSecondarySignalList @ 0x140244F60 (KiProcessSecondarySignalList.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x1400347F0 (KxAcquireSpinLock.c)
 */

void __fastcall KiAcquireSecondarySignalListLock(unsigned __int8 *a1)
{
  unsigned __int8 CurrentIrql; // al

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  *a1 = CurrentIrql;
  KxAcquireSpinLock(&KiSecondarySignalListLock);
}
