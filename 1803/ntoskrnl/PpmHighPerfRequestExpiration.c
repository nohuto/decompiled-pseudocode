/*
 * XREFs of PpmHighPerfRequestExpiration @ 0x14016E330
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PoClearPowerRequestInternal @ 0x1400762C0 (PoClearPowerRequestInternal.c)
 */

__int64 PpmHighPerfRequestExpiration()
{
  KIRQL v0; // di
  unsigned int i; // ebx
  __int64 result; // rax

  v0 = KeAcquireSpinLockRaiseToDpc(&PpmHighPerfRequestLock);
  if ( MEMORY[0xFFFFF78000000008] >= (unsigned __int64)PpmHighPerfDeferredEndTime )
  {
    for ( i = 0; i < PpmHighPerfDeferredEndCount; ++i )
      PoClearPowerRequestInternal(PpmHighPerfPowerRequest, 4);
    PpmHighPerfDeferredEndCount = 0;
  }
  KxReleaseSpinLock(&PpmHighPerfRequestLock);
  result = v0;
  __writecr8(v0);
  return result;
}
