/*
 * XREFs of PopEnforceResiliencyScenarios @ 0x140706AE4
 * Callers:
 *     NtSetSystemPowerState @ 0x140437F10 (NtSetSystemPowerState.c)
 *     NtPowerInformation @ 0x1404E90A0 (NtPowerInformation.c)
 * Callees:
 *     PpmAcquireLock @ 0x1400AF45C (PpmAcquireLock.c)
 *     PoFxSendSystemLatencyUpdate @ 0x1400B1788 (PoFxSendSystemLatencyUpdate.c)
 *     PpmReleaseLock @ 0x1400E49C8 (PpmReleaseLock.c)
 *     PopEnsureCoalescingWorkerWillRun @ 0x140240F60 (PopEnsureCoalescingWorkerWillRun.c)
 *     PopEnforceDeepSleep @ 0x140706A34 (PopEnforceDeepSleep.c)
 */

void __fastcall PopEnforceResiliencyScenarios(int *a1)
{
  int v2; // ecx

  PopEnforceDeepSleep();
  PpmAcquireLock(&PopFxSystemLatencyLock);
  PoFxSendSystemLatencyUpdate();
  PpmReleaseLock((__int64 *)&PopFxSystemLatencyLock);
  v2 = *a1;
  if ( *a1 )
  {
    if ( PopCurrentCoalescingSpindownTimeout )
      return;
    PopCoalescingState |= 2u;
    PopCoalescingEnforced = 1;
    PopEnforcedCoalescingSpindownTimeout = v2;
    goto LABEL_7;
  }
  if ( PopCurrentCoalescingSpindownTimeout && PopCoalescingEnforced )
  {
    PopCoalescingState &= ~2u;
    PopEnforcedCoalescingSpindownTimeout = 0;
    PopCoalescingEnforced = 0;
LABEL_7:
    PopEnsureCoalescingWorkerWillRun();
  }
}
