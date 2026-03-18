/*
 * XREFs of PfSnPowerBoost @ 0x14048C930
 * Callers:
 *     PfSnAsyncPrefetchWorker @ 0x14048E5B0 (PfSnAsyncPrefetchWorker.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x140040D50 (ExWaitForRundownProtectionRelease.c)
 *     KeCancelTimer @ 0x14005A760 (KeCancelTimer.c)
 *     KiSetTimerEx @ 0x14005AB60 (KiSetTimerEx.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 *     PfSnPowerBoostUpdate @ 0x14048C9AC (PfSnPowerBoostUpdate.c)
 */

void __fastcall PfSnPowerBoost(PEX_RUNDOWN_REF RunRef, int a2)
{
  if ( a2 )
  {
    PfSnPowerBoostUpdate(1LL);
    ExAcquireRundownProtection(RunRef);
    KiSetTimerEx((__int64)&RunRef[1], -30000000LL, 0, 0, (__int64)&RunRef[9]);
  }
  else
  {
    if ( KeCancelTimer((PKTIMER)&RunRef[1]) )
    {
      PfSnPowerBoostUpdate(0LL);
      ExReleaseRundownProtection(RunRef);
    }
    ExWaitForRundownProtectionRelease(RunRef);
  }
}
