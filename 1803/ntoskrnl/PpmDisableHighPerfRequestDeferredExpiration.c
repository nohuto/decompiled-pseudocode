/*
 * XREFs of PpmDisableHighPerfRequestDeferredExpiration @ 0x14027EAA4
 * Callers:
 *     PdcPoPerfOverride @ 0x140764B40 (PdcPoPerfOverride.c)
 *     PdcPoResiliencyClient @ 0x140764CE0 (PdcPoResiliencyClient.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeCancelTimer @ 0x14005A760 (KeCancelTimer.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PoClearPowerRequestInternal @ 0x1400762C0 (PoClearPowerRequestInternal.c)
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
