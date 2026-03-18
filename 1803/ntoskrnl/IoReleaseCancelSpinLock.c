/*
 * XREFs of IoReleaseCancelSpinLock @ 0x1400B2470
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 */

void __stdcall IoReleaseCancelSpinLock(KIRQL Irql)
{
  unsigned __int64 v1; // rbx

  v1 = Irql;
  KeReleaseInStackQueuedSpinLockFromDpcLevel((PKLOCK_QUEUE_HANDLE)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 112));
  __writecr8(v1);
}
