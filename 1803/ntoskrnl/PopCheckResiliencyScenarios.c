/*
 * XREFs of PopCheckResiliencyScenarios @ 0x14051D450
 * Callers:
 *     PopHandleSystemRequiredPowerRequestsUpdate @ 0x140074DB4 (PopHandleSystemRequiredPowerRequestsUpdate.c)
 *     PopCoalescingSetActiveState @ 0x1402783CC (PopCoalescingSetActiveState.c)
 *     PopTransitionSystemPowerStateEx @ 0x1404714E0 (PopTransitionSystemPowerStateEx.c)
 *     PopUpdateConsoleDisplayState @ 0x140611BE0 (PopUpdateConsoleDisplayState.c)
 *     PopDeepSleepPowerSettingCallback @ 0x140654880 (PopDeepSleepPowerSettingCallback.c)
 *     PopCoalescingPowerSettingCallback @ 0x140654BA0 (PopCoalescingPowerSettingCallback.c)
 *     PdcPoResiliencyClient @ 0x140764CE0 (PdcPoResiliencyClient.c)
 * Callees:
 *     PpmReleaseLock @ 0x140036890 (PpmReleaseLock.c)
 *     PopDeepSleepClearDisengageReason @ 0x1400732CC (PopDeepSleepClearDisengageReason.c)
 *     PopDeepSleepSetDisengageReason @ 0x1400733E0 (PopDeepSleepSetDisengageReason.c)
 *     PoFxSendSystemLatencyUpdate @ 0x1400735B8 (PoFxSendSystemLatencyUpdate.c)
 *     PpmAcquireLock @ 0x14007385C (PpmAcquireLock.c)
 *     PopDeepSleepEnabled @ 0x140074E54 (PopDeepSleepEnabled.c)
 *     PpmGetDeepSleepPlatformStateIndex @ 0x140272020 (PpmGetDeepSleepPlatformStateIndex.c)
 *     PopEnsureCoalescingWorkerWillRun @ 0x1402784F0 (PopEnsureCoalescingWorkerWillRun.c)
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
    if ( byte_1403AAB74 )
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
      if ( byte_1403AAB74 && !PopDeepSleepEnabled() )
      {
        PpmAcquireLock((struct _KTHREAD **)&PopFxSystemLatencyLock);
        if ( PopIdleResiliencyIsEngagedWithoutDeepSleep != v2 )
        {
          PopIdleResiliencyIsEngagedWithoutDeepSleep = v2;
          PoFxSendSystemLatencyUpdate();
        }
        PpmReleaseLock(&PopFxSystemLatencyLock);
      }
    }
    if ( v1 != v0 )
    {
      PopCoalescingState = (2 * v1) | PopCoalescingState & 0xFD;
      PopEnsureCoalescingWorkerWillRun();
    }
  }
}
