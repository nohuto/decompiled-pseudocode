/*
 * XREFs of RestartCtxtPassive @ 0x1C004BD60
 * Callers:
 *     <none>
 * Callees:
 *     InsertReadyQueue @ 0x1C0002838 (InsertReadyQueue.c)
 */

void __fastcall RestartCtxtPassive(__int64 a1)
{
  NewIrql = KeAcquireSpinLockRaiseToDpc(&SpinLock);
  InsertReadyQueue(a1, (*(_DWORD *)(a1 + 64) & 0x100) == 0);
  KeReleaseSpinLock(&SpinLock, NewIrql);
}
