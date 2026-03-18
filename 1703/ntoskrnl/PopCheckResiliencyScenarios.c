/*
 * XREFs of PopCheckResiliencyScenarios @ 0x1404C5510
 * Callers:
 *     PopSystemRequiredPowerRequest @ 0x140070204 (PopSystemRequiredPowerRequest.c)
 *     PopCoalescingSetActiveState @ 0x14022D8DC (PopCoalescingSetActiveState.c)
 *     NtSetSystemPowerState @ 0x140408DF4 (NtSetSystemPowerState.c)
 *     PopUpdateConsoleDisplayState @ 0x140584DDC (PopUpdateConsoleDisplayState.c)
 *     PopDeepSleepPowerSettingCallback @ 0x1405D5030 (PopDeepSleepPowerSettingCallback.c)
 *     PopCoalescingPowerSettingCallback @ 0x1405D5430 (PopCoalescingPowerSettingCallback.c)
 *     PdcPoResiliencyClient @ 0x1406CB3C0 (PdcPoResiliencyClient.c)
 * Callees:
 *     PopDeepSleepClearDisengageReason @ 0x14006F310 (PopDeepSleepClearDisengageReason.c)
 *     PopDeepSleepSetDisengageReason @ 0x14006F418 (PopDeepSleepSetDisengageReason.c)
 *     PpmReleaseLock @ 0x14006F948 (PpmReleaseLock.c)
 *     PoFxSendSystemLatencyUpdate @ 0x14006F988 (PoFxSendSystemLatencyUpdate.c)
 *     PpmAcquireLock @ 0x14006FC2C (PpmAcquireLock.c)
 *     PopDeepSleepEnabled @ 0x1400702A0 (PopDeepSleepEnabled.c)
 *     PpmGetDeepSleepPlatformStateIndex @ 0x140227C38 (PpmGetDeepSleepPlatformStateIndex.c)
 *     PopEnsureCoalescingWorkerWillRun @ 0x14022DA00 (PopEnsureCoalescingWorkerWillRun.c)
 */

void PopCheckResiliencyScenarios()
{
  char v0; // si
  char v1; // bl
  char v2; // di
  bool v3; // dl
  char v4; // cl

  v0 = PopCurrentCoalescingSpindownTimeout != 0;
  if ( !PopDeepSleepEnforced && !PopCoalescingEnforced )
  {
    v1 = 1;
    if ( byte_14034BC94 )
    {
      v2 = PopPdcIdleResiliency;
      if ( PopDeepSleepEnabled() )
      {
        if ( v2 )
          PpmDripsStateIndex = PpmGetDeepSleepPlatformStateIndex();
        else
          PpmDripsStateIndex = -1;
      }
    }
    else
    {
      v2 = 0;
    }
    v3 = PopDeepSleepEnabled();
    if ( !v4 || !PopDppeCoalescingSpindownTimeout )
      v1 = 0;
    if ( v2 && v3 )
    {
      PopDeepSleepClearDisengageReason(0);
    }
    else
    {
      PopDeepSleepSetDisengageReason(0);
      if ( byte_14034BC94 && !PopDeepSleepEnabled() )
      {
        PpmAcquireLock(&PopFxSystemLatencyLock);
        if ( PopIdleResiliencyIsEngagedWithoutDeepSleep != v2 )
        {
          PopIdleResiliencyIsEngagedWithoutDeepSleep = v2;
          PoFxSendSystemLatencyUpdate();
        }
        PpmReleaseLock((__int64 *)&PopFxSystemLatencyLock);
      }
    }
    if ( v1 != v0 )
    {
      PopCoalescingState = (2 * v1) | PopCoalescingState & 0xFD;
      PopEnsureCoalescingWorkerWillRun();
    }
  }
}
