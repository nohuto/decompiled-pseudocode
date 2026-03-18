/*
 * XREFs of EtwpUnlockBufferList @ 0x1400E0828
 * Callers:
 *     EtwpLogKernelEvent @ 0x14000F4E0 (EtwpLogKernelEvent.c)
 *     EtwpAdjustSiloTraceBuffers @ 0x14002441C (EtwpAdjustSiloTraceBuffers.c)
 *     EtwpEventWriteFull @ 0x140087F40 (EtwpEventWriteFull.c)
 *     EtwpReserveTraceBuffer @ 0x140092980 (EtwpReserveTraceBuffer.c)
 *     EtwpAllocateFreeBuffers @ 0x1400E02E8 (EtwpAllocateFreeBuffers.c)
 *     EtwpDequeueFreeBuffer @ 0x1400E0608 (EtwpDequeueFreeBuffer.c)
 *     EtwpEnqueueAvailableBuffer @ 0x1400E078C (EtwpEnqueueAvailableBuffer.c)
 *     EtwpEnqueueOverflowBuffer @ 0x1401315F4 (EtwpEnqueueOverflowBuffer.c)
 *     EtwpDequeueBufferPendingCompression @ 0x140281494 (EtwpDequeueBufferPendingCompression.c)
 *     EtwpReenableCompression @ 0x140281B58 (EtwpReenableCompression.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 */

void __fastcall EtwpUnlockBufferList(__int64 a1, unsigned __int8 *a2)
{
  unsigned __int64 v2; // rbx

  if ( *(_DWORD *)(a1 + 316) == 1 )
  {
    ExReleasePushLockEx(a1 + 712, 0LL);
  }
  else
  {
    v2 = *a2;
    KxReleaseSpinLock((PKSPIN_LOCK)(a1 + 712));
    __writecr8(v2);
  }
}
