/*
 * XREFs of KeTryToAcquireQueuedSpinLockRaiseToSynch @ 0x140242330
 * Callers:
 *     VerifierKeTryToAcquireQueuedSpinLockRaiseToSynch @ 0x140826DD0 (VerifierKeTryToAcquireQueuedSpinLockRaiseToSynch.c)
 * Callees:
 *     KxTryToAcquireQueuedSpinLock @ 0x1400D508C (KxTryToAcquireQueuedSpinLock.c)
 */

__int64 __fastcall KeTryToAcquireQueuedSpinLockRaiseToSynch(__int64 a1, unsigned __int8 *a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // bl
  char *v5; // rcx

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  v5 = (char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 16 * a1;
  if ( (unsigned int)KxTryToAcquireQueuedSpinLock((signed __int64)v5, *((_DWORD **)v5 + 1), a3) )
  {
    *a2 = CurrentIrql;
    return 1LL;
  }
  else
  {
    __writecr8(CurrentIrql);
    return 0LL;
  }
}
