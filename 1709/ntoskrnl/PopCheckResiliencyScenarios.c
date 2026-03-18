/*
 * XREFs of PopCheckResiliencyScenarios @ 0x1404E7F34
 * Callers:
 *     PopHandleSystemRequiredPowerRequestsUpdate @ 0x1400B0B44 (PopHandleSystemRequiredPowerRequestsUpdate.c)
 *     PopCoalescingSetActiveState @ 0x140240E38 (PopCoalescingSetActiveState.c)
 *     NtSetSystemPowerState @ 0x140437F10 (NtSetSystemPowerState.c)
 *     PopUpdateConsoleDisplayState @ 0x1405CB168 (PopUpdateConsoleDisplayState.c)
 *     PopDeepSleepPowerSettingCallback @ 0x1405F14B0 (PopDeepSleepPowerSettingCallback.c)
 *     PopCoalescingPowerSettingCallback @ 0x1405F1A30 (PopCoalescingPowerSettingCallback.c)
 *     PdcPoResiliencyClient @ 0x1406FF380 (PdcPoResiliencyClient.c)
 * Callees:
 *     PopDeepSleepClearDisengageReason @ 0x1400AEF7C (PopDeepSleepClearDisengageReason.c)
 *     PopDeepSleepSetDisengageReason @ 0x1400AF04C (PopDeepSleepSetDisengageReason.c)
 *     PpmAcquireLock @ 0x1400AF45C (PpmAcquireLock.c)
 *     PopDeepSleepEnabled @ 0x1400B0B30 (PopDeepSleepEnabled.c)
 *     PoFxSendSystemLatencyUpdate @ 0x1400B1788 (PoFxSendSystemLatencyUpdate.c)
 *     PpmReleaseLock @ 0x1400E49C8 (PpmReleaseLock.c)
 *     PpmGetDeepSleepPlatformStateIndex @ 0x14023ABF0 (PpmGetDeepSleepPlatformStateIndex.c)
 *     PopEnsureCoalescingWorkerWillRun @ 0x140240F60 (PopEnsureCoalescingWorkerWillRun.c)
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
    if ( byte_140366314 )
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
      if ( byte_140366314 && !PopDeepSleepEnabled() )
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
