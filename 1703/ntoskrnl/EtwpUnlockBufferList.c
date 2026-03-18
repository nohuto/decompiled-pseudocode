/*
 * XREFs of EtwpUnlockBufferList @ 0x140087CE0
 * Callers:
 *     EtwpEnqueueOverflowBuffer @ 0x14003BB70 (EtwpEnqueueOverflowBuffer.c)
 *     EtwpReferenceCurrentBuffer @ 0x140086AE0 (EtwpReferenceCurrentBuffer.c)
 *     EtwpDequeueFreeBuffer @ 0x140087AC0 (EtwpDequeueFreeBuffer.c)
 *     EtwpEnqueueAvailableBuffer @ 0x140087C44 (EtwpEnqueueAvailableBuffer.c)
 *     EtwpAdjustSiloTraceBuffers @ 0x140087DD0 (EtwpAdjustSiloTraceBuffers.c)
 *     EtwpLogKernelEvent @ 0x1400F22E0 (EtwpLogKernelEvent.c)
 *     EtwpAllocateFreeBuffers @ 0x140122058 (EtwpAllocateFreeBuffers.c)
 *     EtwpDequeueBufferPendingCompression @ 0x140257A30 (EtwpDequeueBufferPendingCompression.c)
 *     EtwpReenableCompression @ 0x1402580F8 (EtwpReenableCompression.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 */

void __fastcall EtwpUnlockBufferList(__int64 a1, unsigned __int8 *a2)
{
  unsigned __int64 v2; // rbx

  if ( *(_DWORD *)(a1 + 300) == 1 )
  {
    ExReleasePushLockEx(a1 + 696, 0LL);
  }
  else
  {
    v2 = *a2;
    KxReleaseSpinLock((PKSPIN_LOCK)(a1 + 696));
    __writecr8(v2);
  }
}
