/*
 * XREFs of PopEsEnterSleepShutdown @ 0x1407083E0
 * Callers:
 *     NtSetSystemPowerState @ 0x140437F10 (NtSetSystemPowerState.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x1400B0AF4 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x1400B1870 (PopReleaseRwLock.c)
 *     PopCurrentPowerState @ 0x1404EA194 (PopCurrentPowerState.c)
 *     PopEsSnapTelemetry @ 0x140708450 (PopEsSnapTelemetry.c)
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
