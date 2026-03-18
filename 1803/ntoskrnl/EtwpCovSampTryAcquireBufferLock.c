/*
 * XREFs of EtwpCovSampTryAcquireBufferLock @ 0x1402B5B78
 * Callers:
 *     EtwpCovSampCaptureFlushSampleBuffers @ 0x1402B4E04 (EtwpCovSampCaptureFlushSampleBuffers.c)
 *     EtwpCovSampSampleBufferReserve @ 0x1402B59B8 (EtwpCovSampSampleBufferReserve.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x1400347F0 (KxAcquireSpinLock.c)
 *     KxTryToAcquireSpinLock @ 0x1400B8074 (KxTryToAcquireSpinLock.c)
 */

__int64 __fastcall EtwpCovSampTryAcquireBufferLock(volatile signed __int32 *SpinLock, unsigned __int8 *a2)
{
  unsigned __int8 CurrentIrql; // r8

  CurrentIrql = KeGetCurrentIrql();
  *a2 = CurrentIrql;
  if ( CurrentIrql <= 1u )
  {
    KeGetCurrentIrql();
    __writecr8(2uLL);
  }
  else if ( CurrentIrql != 2 )
  {
    return (unsigned __int8)KxTryToAcquireSpinLock(SpinLock, (__int64)a2);
  }
  KxAcquireSpinLock((PKSPIN_LOCK)SpinLock);
  return 1LL;
}
