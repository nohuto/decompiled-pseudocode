/*
 * XREFs of PpmAcquireLock @ 0x14006FC2C
 * Callers:
 *     PoNotifyVSyncChange @ 0x14006F5D0 (PoNotifyVSyncChange.c)
 *     PpmMediaBufferingWorker @ 0x140130970 (PpmMediaBufferingWorker.c)
 *     PpmPerfLatencySensitivityHintWorker @ 0x140132020 (PpmPerfLatencySensitivityHintWorker.c)
 *     PpmPerfClearBootOverrides @ 0x140148550 (PpmPerfClearBootOverrides.c)
 *     PopIntSteerSetMode @ 0x14015FA70 (PopIntSteerSetMode.c)
 *     PpmClearExitLatencySamplingPercentage @ 0x140227A34 (PpmClearExitLatencySamplingPercentage.c)
 *     PpmSetExitLatencySamplingPercentage @ 0x1402292F0 (PpmSetExitLatencySamplingPercentage.c)
 *     PpmRegisterPerfCap @ 0x14022D480 (PpmRegisterPerfCap.c)
 *     PopDeepSleepEvaluateCallback @ 0x140233BD0 (PopDeepSleepEvaluateCallback.c)
 *     PpmParkSetLpiCap @ 0x140237BAC (PpmParkSetLpiCap.c)
 *     PpmSetProfilePolicySetting @ 0x1404C13FC (PpmSetProfilePolicySetting.c)
 *     PopPowerInformationInternal @ 0x1404C44B4 (PopPowerInformationInternal.c)
 *     PopCheckResiliencyScenarios @ 0x1404C5510 (PopCheckResiliencyScenarios.c)
 *     PpmPerfReApplyStates @ 0x140577A88 (PpmPerfReApplyStates.c)
 *     PopEnforceResiliencyScenarios @ 0x140579E38 (PopEnforceResiliencyScenarios.c)
 *     PopPerfBoostPowerRequest @ 0x1405818E0 (PopPerfBoostPowerRequest.c)
 *     PopPpmHeteroPolicyCallback @ 0x1405BF3A0 (PopPpmHeteroPolicyCallback.c)
 *     PpmRegisterPerfStates @ 0x1405BF450 (PpmRegisterPerfStates.c)
 *     PpmCheckInitProcessors @ 0x1405BFD98 (PpmCheckInitProcessors.c)
 *     PpmReapplyPerfPolicy @ 0x1405C019C (PpmReapplyPerfPolicy.c)
 *     PpmRegisterProfiles @ 0x1405CC9BC (PpmRegisterProfiles.c)
 *     PpmEnableProfile @ 0x1405CD9A8 (PpmEnableProfile.c)
 *     PopSetupHighPerfPowerRequest @ 0x1405D5CC8 (PopSetupHighPerfPowerRequest.c)
 *     PpmEventTraceControlCallback @ 0x1405D6570 (PpmEventTraceControlCallback.c)
 *     PopWnfFullscreenVideoCallback @ 0x1406C7270 (PopWnfFullscreenVideoCallback.c)
 *     PpmUpdatePerfStates @ 0x1406C92D0 (PpmUpdatePerfStates.c)
 *     PdcPoPpmResetProfile @ 0x1406CB240 (PdcPoPpmResetProfile.c)
 *     PpmPerfProcCapFloorSettingCallback @ 0x1406CF2D0 (PpmPerfProcCapFloorSettingCallback.c)
 *     PpmApplyProfile @ 0x1406D59E4 (PpmApplyProfile.c)
 *     PpmDisableProfile @ 0x1406D5B18 (PpmDisableProfile.c)
 *     PpmProfileAcDcUpdate @ 0x1406D5E40 (PpmProfileAcDcUpdate.c)
 *     PpmRegisterSpmSettings @ 0x1406D5EF0 (PpmRegisterSpmSettings.c)
 *     PpmPerfRegisterHvPerfStateCounters @ 0x1406D6500 (PpmPerfRegisterHvPerfStateCounters.c)
 *     PpmParkApplyForcedMask @ 0x1406D6688 (PpmParkApplyForcedMask.c)
 *     PpmParkClearForcedMask @ 0x1406D675C (PpmParkClearForcedMask.c)
 *     PoInitSystem @ 0x14080B764 (PoInitSystem.c)
 *     PpmInitPolicyConfiguration @ 0x14081FF4C (PpmInitPolicyConfiguration.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 */

struct _KTHREAD *__fastcall PpmAcquireLock(struct _KTHREAD **a1)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *result; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  KeWaitForSingleObject(a1 + 1, Executive, 0, 0, 0LL);
  result = KeGetCurrentThread();
  *a1 = result;
  return result;
}
