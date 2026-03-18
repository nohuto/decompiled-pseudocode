/*
 * XREFs of EtwpLockBufferList @ 0x1400D4514
 * Callers:
 *     EtwpEnqueueOverflowBuffer @ 0x1400D1C34 (EtwpEnqueueOverflowBuffer.c)
 *     EtwpAllocateFreeBuffers @ 0x1400D3AB4 (EtwpAllocateFreeBuffers.c)
 *     EtwpAdjustSiloTraceBuffers @ 0x1400D3FB4 (EtwpAdjustSiloTraceBuffers.c)
 *     EtwpDequeueFreeBuffer @ 0x1400D42C8 (EtwpDequeueFreeBuffer.c)
 *     EtwpEnqueueAvailableBuffer @ 0x1400D4438 (EtwpEnqueueAvailableBuffer.c)
 *     EtwpReserveTraceBuffer @ 0x1400F0B50 (EtwpReserveTraceBuffer.c)
 *     EtwpLogKernelEvent @ 0x1401080D0 (EtwpLogKernelEvent.c)
 *     EtwpDequeueBufferPendingCompression @ 0x1402B3724 (EtwpDequeueBufferPendingCompression.c)
 *     EtwpReenableCompression @ 0x1402B3DEC (EtwpReenableCompression.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x1400347F0 (KxAcquireSpinLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
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
