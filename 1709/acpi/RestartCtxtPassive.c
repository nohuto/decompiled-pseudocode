/*
 * XREFs of RestartCtxtPassive @ 0x1C0021DE0
 * Callers:
 *     <none>
 * Callees:
 *     InsertReadyQueue @ 0x1C00079E0 (InsertReadyQueue.c)
 */

void __fastcall RestartCtxtPassive(__int64 a1)
{
  byte_1C0079660 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
  InsertReadyQueue((PSLIST_ENTRY)a1, (*(_DWORD *)(a1 + 64) & 0x100) == 0);
  KeReleaseSpinLock(&SpinLock, byte_1C0079660);
}
