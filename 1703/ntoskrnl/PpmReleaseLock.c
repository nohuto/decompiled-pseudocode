/*
 * XREFs of PpmReleaseLock @ 0x14006F948
 * Callers:
 *     PoNotifyVSyncChange @ 0x14006F5D0 (PoNotifyVSyncChange.c)
 *     PpmCheckStart @ 0x14006F670 (PpmCheckStart.c)
 *     PpmMediaBufferingWorker @ 0x140130970 (PpmMediaBufferingWorker.c)
 *     PpmClearExitLatencySamplingPercentage @ 0x140227A34 (PpmClearExitLatencySamplingPercentage.c)
 *     PpmSetExitLatencySamplingPercentage @ 0x1402292F0 (PpmSetExitLatencySamplingPercentage.c)
 *     PpmRegisterPerfCap @ 0x14022D480 (PpmRegisterPerfCap.c)
 *     PopDeepSleepEvaluateCallback @ 0x140233BD0 (PopDeepSleepEvaluateCallback.c)
 *     PpmParkSetLpiCap @ 0x140237BAC (PpmParkSetLpiCap.c)
 *     PpmSetProfilePolicySetting @ 0x1404C13FC (PpmSetProfilePolicySetting.c)
 *     PopPowerInformationInternal @ 0x1404C44B4 (PopPowerInformationInternal.c)
 *     PopCheckResiliencyScenarios @ 0x1404C5510 (PopCheckResiliencyScenarios.c)
 *     PopEnforceResiliencyScenarios @ 0x140579E38 (PopEnforceResiliencyScenarios.c)
 *     PopPpmHeteroPolicyCallback @ 0x1405BF3A0 (PopPpmHeteroPolicyCallback.c)
 *     PpmRegisterPerfStates @ 0x1405BF450 (PpmRegisterPerfStates.c)
 *     PpmCheckInitProcessors @ 0x1405BFD98 (PpmCheckInitProcessors.c)
 *     PpmReapplyPerfPolicy @ 0x1405C019C (PpmReapplyPerfPolicy.c)
 *     PpmRegisterProfiles @ 0x1405CC9BC (PpmRegisterProfiles.c)
 *     PpmEventTraceControlCallback @ 0x1405D6570 (PpmEventTraceControlCallback.c)
 *     PopWnfFullscreenVideoCallback @ 0x1406C7270 (PopWnfFullscreenVideoCallback.c)
 *     PpmUpdatePerfStates @ 0x1406C92D0 (PpmUpdatePerfStates.c)
 *     PdcPoPpmResetProfile @ 0x1406CB240 (PdcPoPpmResetProfile.c)
 *     PpmCompareAndApplyPolicySettings @ 0x1406CEFD0 (PpmCompareAndApplyPolicySettings.c)
 *     PpmDisableProfile @ 0x1406D5B18 (PpmDisableProfile.c)
 *     PpmRegisterSpmSettings @ 0x1406D5EF0 (PpmRegisterSpmSettings.c)
 *     PpmPerfRegisterHvPerfStateCounters @ 0x1406D6500 (PpmPerfRegisterHvPerfStateCounters.c)
 *     PpmParkApplyForcedMask @ 0x1406D6688 (PpmParkApplyForcedMask.c)
 *     PpmParkClearForcedMask @ 0x1406D675C (PpmParkClearForcedMask.c)
 *     PoInitSystem @ 0x14080B764 (PoInitSystem.c)
 *     PpmInitPolicyConfiguration @ 0x14081FF4C (PpmInitPolicyConfiguration.c)
 * Callees:
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 */

LONG __fastcall PpmReleaseLock(__int64 *a1)
{
  __int64 v1; // rbx
  LONG result; // eax

  v1 = *a1;
  *a1 = 0LL;
  result = KeSetEvent((PRKEVENT)(a1 + 1), 0, 0);
  if ( v1 )
    return KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
  return result;
}
