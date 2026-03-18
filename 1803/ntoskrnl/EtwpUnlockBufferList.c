/*
 * XREFs of EtwpUnlockBufferList @ 0x1400D44D8
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
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 */

void __fastcall EtwpUnlockBufferList(__int64 a1, unsigned __int8 *a2)
{
  bool v2; // zf
  KSPIN_LOCK *v3; // rcx
  unsigned __int64 v4; // rbx

  v2 = *(_DWORD *)(a1 + 316) == 1;
  v3 = (KSPIN_LOCK *)(a1 + 712);
  if ( v2 )
  {
    ExReleasePushLockEx((ULONG_PTR)v3, 0LL);
  }
  else
  {
    v4 = *a2;
    KxReleaseSpinLock(v3);
    __writecr8(v4);
  }
}
