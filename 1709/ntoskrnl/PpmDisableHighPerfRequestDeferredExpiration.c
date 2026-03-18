/*
 * XREFs of PpmDisableHighPerfRequestDeferredExpiration @ 0x140248A1C
 * Callers:
 *     PdcPoPerfOverride @ 0x1406FF1B0 (PdcPoPerfOverride.c)
 *     PdcPoResiliencyClient @ 0x1406FF380 (PdcPoResiliencyClient.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PoClearPowerRequestInternal @ 0x1400B4DB8 (PoClearPowerRequestInternal.c)
 *     KeCancelTimer @ 0x1400E2110 (KeCancelTimer.c)
 */

__int64 __fastcall PpmDisableHighPerfRequestDeferredExpiration(char a1)
{
  KIRQL v2; // si
  unsigned int i; // ebx
  __int64 result; // rax

  v2 = KeAcquireSpinLockRaiseToDpc(&PpmHighPerfRequestLock);
  if ( a1 )
  {
    KeCancelTimer(&PpmHighPerfEndTimer);
    PpmHighPerfDeferredEndTime = 0LL;
    for ( i = 0; i < PpmHighPerfDeferredEndCount; ++i )
      PoClearPowerRequestInternal(PpmHighPerfPowerRequest, 4);
    PpmHighPerfDeferredEndCount = 0;
    PpmHighPerfDeferredEndTime = 0LL;
  }
  PpmHighPerfDeferredEndDisabled = a1;
  KxReleaseSpinLock(&PpmHighPerfRequestLock);
  result = v2;
  __writecr8(v2);
  return result;
}
