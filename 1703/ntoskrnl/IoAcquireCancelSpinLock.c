/*
 * XREFs of IoAcquireCancelSpinLock @ 0x140013880
 * Callers:
 *     <none>
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x1400AB2F0 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401FE8B0 (KiAcquireQueuedSpinLockInstrumented.c)
 */

void __stdcall IoAcquireCancelSpinLock(PKIRQL Irql)
{
  UCHAR CurrentIrql; // di
  void *ArbitraryUserPointer; // rcx
  volatile __int64 *v4; // r8
  __int64 v5; // rcx

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  ArbitraryUserPointer = KeGetPcr()->NtTib.ArbitraryUserPointer;
  v4 = (volatile __int64 *)*((_QWORD *)ArbitraryUserPointer + 15);
  v5 = (__int64)ArbitraryUserPointer + 112;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(v5, v4);
  }
  else if ( _InterlockedExchange64(v4, v5) )
  {
    KxWaitForLockOwnerShip();
  }
  *Irql = CurrentIrql;
}
