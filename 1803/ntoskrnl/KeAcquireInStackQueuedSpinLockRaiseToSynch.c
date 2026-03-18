/*
 * XREFs of KeAcquireInStackQueuedSpinLockRaiseToSynch @ 0x140242250
 * Callers:
 *     VerifierKeAcquireInStackQueuedSpinLockRaiseToSynchCommon @ 0x140825EC4 (VerifierKeAcquireInStackQueuedSpinLockRaiseToSynchCommon.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x1400E01A0 (KxAcquireQueuedSpinLock.c)
 */

__int64 __fastcall KeAcquireInStackQueuedSpinLockRaiseToSynch(volatile __int64 *a1, __int64 a2)
{
  unsigned __int8 CurrentIrql; // al

  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = a1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  *(_BYTE *)(a2 + 16) = CurrentIrql;
  return KxAcquireQueuedSpinLock(a2, a1);
}
