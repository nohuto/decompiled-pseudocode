/*
 * XREFs of KeTryToAcquireQueuedSpinLock @ 0x1402422D0
 * Callers:
 *     <none>
 * Callees:
 *     KxTryToAcquireQueuedSpinLock @ 0x1400D508C (KxTryToAcquireQueuedSpinLock.c)
 */

LOGICAL __stdcall KeTryToAcquireQueuedSpinLock(KSPIN_LOCK_QUEUE_NUMBER Number, PKIRQL OldIrql)
{
  __int64 v2; // r8
  UCHAR CurrentIrql; // bl
  char *v5; // rcx

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v5 = (char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 16 * Number;
  if ( (unsigned int)KxTryToAcquireQueuedSpinLock((signed __int64)v5, *((_DWORD **)v5 + 1), v2) )
  {
    *OldIrql = CurrentIrql;
    return 1;
  }
  else
  {
    __writecr8(CurrentIrql);
    return 0;
  }
}
