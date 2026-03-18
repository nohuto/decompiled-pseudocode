/*
 * XREFs of EtwpLockBufferList @ 0x1400E0868
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
 *     KxAcquireSpinLock @ 0x140061000 (KxAcquireSpinLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall EtwpLockBufferList(__int64 a1, unsigned __int8 *a2)
{
  unsigned __int8 CurrentIrql; // al

  if ( *(_DWORD *)(a1 + 316) == 1 )
  {
    ExAcquirePushLockExclusiveEx(a1 + 712, 0LL);
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    *a2 = CurrentIrql;
    KxAcquireSpinLock((PKSPIN_LOCK)(a1 + 712));
  }
}
