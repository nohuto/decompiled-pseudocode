/*
 * XREFs of PopEsEnterSleepShutdown @ 0x140579A84
 * Callers:
 *     NtSetSystemPowerState @ 0x140408DF4 (NtSetSystemPowerState.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x14007157C (PopAcquireRwLockExclusive.c)
 *     PopCurrentPowerState @ 0x1404C4460 (PopCurrentPowerState.c)
 *     PopEsSnapTelemetry @ 0x140579AC8 (PopEsSnapTelemetry.c)
 */

void PopEsEnterSleepShutdown()
{
  _OWORD v0[2]; // [rsp+20h] [rbp-28h] BYREF

  PopCurrentPowerState(v0);
  PopAcquireRwLockExclusive((ULONG_PTR)&PopEsLock);
  PopEsSnapTelemetry(v0);
  PopEsLastStateChangeTimeStamp = 0LL;
  PopReleaseRwLock((ULONG_PTR)&PopEsLock);
}
