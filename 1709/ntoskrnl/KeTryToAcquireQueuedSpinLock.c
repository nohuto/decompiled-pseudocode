/*
 * XREFs of KeTryToAcquireQueuedSpinLock @ 0x140204AF0
 * Callers:
 *     <none>
 * Callees:
 *     KxTryToAcquireQueuedSpinLock @ 0x1400CAF3C (KxTryToAcquireQueuedSpinLock.c)
 */

LOGICAL __stdcall KeTryToAcquireQueuedSpinLock(KSPIN_LOCK_QUEUE_NUMBER Number, PKIRQL OldIrql)
{
  UCHAR CurrentIrql; // bl
  char *v4; // rcx

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v4 = (char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 16 * Number;
  if ( (unsigned int)KxTryToAcquireQueuedSpinLock((signed __int64)v4, *((_DWORD **)v4 + 1)) )
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
