/*
 * XREFs of KeAcquireQueuedSpinLockRaiseToSynch @ 0x1401FE7B0
 * Callers:
 *     VerifierKeAcquireQueuedSpinLockRaiseToSynch @ 0x140776ED0 (VerifierKeAcquireQueuedSpinLockRaiseToSynch.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x1400AA4A0 (KxAcquireQueuedSpinLock.c)
 */

unsigned __int8 __fastcall KeAcquireQueuedSpinLockRaiseToSynch(__int64 a1)
{
  unsigned __int8 CurrentIrql; // bl
  volatile __int64 **v2; // rcx

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  v2 = (volatile __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 16 * a1);
  KxAcquireQueuedSpinLock((__int64)v2, v2[1]);
  return CurrentIrql;
}
