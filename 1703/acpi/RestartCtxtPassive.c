/*
 * XREFs of RestartCtxtPassive @ 0x1C00250E0
 * Callers:
 *     <none>
 * Callees:
 *     InsertReadyQueue @ 0x1C0004690 (InsertReadyQueue.c)
 */

void __fastcall RestartCtxtPassive(PSLIST_ENTRY ListEntry)
{
  byte_1C00775A0 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
  InsertReadyQueue(ListEntry, ((__int64)ListEntry[4].Next & 0x100) == 0);
  KeReleaseSpinLock(&SpinLock, byte_1C00775A0);
}
