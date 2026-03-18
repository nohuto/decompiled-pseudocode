/*
 * XREFs of PpmAcquireLock @ 0x14007385C
 * Callers:
 *     PoNotifyVSyncChange @ 0x140073580 (PoNotifyVSyncChange.c)
 *     PpmMediaBufferingWorker @ 0x140144040 (PpmMediaBufferingWorker.c)
 *     PpmPerfLatencySensitivityHintWorker @ 0x140144D10 (PpmPerfLatencySensitivityHintWorker.c)
 *     PpmCheckPausePpmEngineForSx @ 0x14014DDE0 (PpmCheckPausePpmEngineForSx.c)
 *     PpmCheckResumeStatisticsCollection @ 0x14014DE28 (PpmCheckResumeStatisticsCollection.c)
 *     PpmPerfClearBootOverrides @ 0x14016A670 (PpmPerfClearBootOverrides.c)
 *     PopIntSteerSetMode @ 0x14017F220 (PopIntSteerSetMode.c)
 *     PpmClearExitLatencySamplingPercentage @ 0x140271C34 (PpmClearExitLatencySamplingPercentage.c)
 *     PpmSetExitLatencySamplingPercentage @ 0x140273790 (PpmSetExitLatencySamplingPercentage.c)
 *     PpmRegisterPerfCap @ 0x140277F50 (PpmRegisterPerfCap.c)
 *     PopDeepSleepEvaluateCallback @ 0x14027F090 (PopDeepSleepEvaluateCallback.c)
 *     PpmParkSetLpiCap @ 0x1402829EC (PpmParkSetLpiCap.c)
 *     PpmSetProfilePolicySetting @ 0x140518648 (PpmSetProfilePolicySetting.c)
 *     PopCheckResiliencyScenarios @ 0x14051D450 (PopCheckResiliencyScenarios.c)
 *     PopPowerInformationInternal @ 0x140522340 (PopPowerInformationInternal.c)
 *     PpmPerfReApplyStates @ 0x1405EA8BC (PpmPerfReApplyStates.c)
 *     PopEnforceResiliencyScenarios @ 0x1405EECF8 (PopEnforceResiliencyScenarios.c)
 *     PpmPerfTelemetryWorker @ 0x1405F2B50 (PpmPerfTelemetryWorker.c)
 *     PopPerfBoostPowerRequest @ 0x1406102F0 (PopPerfBoostPowerRequest.c)
 *     PopSetupHighPerfPowerRequest @ 0x14062754C (PopSetupHighPerfPowerRequest.c)
 *     PopPpmHeteroPolicyCallback @ 0x14063EA10 (PopPpmHeteroPolicyCallback.c)
 *     PpmRegisterPerfStates @ 0x14063EACC (PpmRegisterPerfStates.c)
 *     PpmCheckInitProcessors @ 0x14063F434 (PpmCheckInitProcessors.c)
 *     PpmReapplyPerfPolicy @ 0x14063F630 (PpmReapplyPerfPolicy.c)
 *     PpmRegisterProfiles @ 0x140648FC4 (PpmRegisterProfiles.c)
 *     PpmEnableProfile @ 0x14064A9B4 (PpmEnableProfile.c)
 *     PpmEventTraceControlCallback @ 0x140655C50 (PpmEventTraceControlCallback.c)
 *     PopWnfFullscreenVideoCallback @ 0x14075F240 (PopWnfFullscreenVideoCallback.c)
 *     PpmUpdatePerfStates @ 0x140761350 (PpmUpdatePerfStates.c)
 *     PdcPoPpmResetProfile @ 0x140764B90 (PdcPoPpmResetProfile.c)
 *     PpmPerfProcCapFloorSettingCallback @ 0x14076A860 (PpmPerfProcCapFloorSettingCallback.c)
 *     PpmApplyProfile @ 0x14076EBC0 (PpmApplyProfile.c)
 *     PpmDisableProfile @ 0x14076ED30 (PpmDisableProfile.c)
 *     PpmProfileAcDcUpdate @ 0x14076F08C (PpmProfileAcDcUpdate.c)
 *     PpmRegisterSpmSettings @ 0x14076F130 (PpmRegisterSpmSettings.c)
 *     PpmPerfRegisterHvPerfStateCounters @ 0x14076FC30 (PpmPerfRegisterHvPerfStateCounters.c)
 *     PpmParkApplyForcedMask @ 0x14076FDB8 (PpmParkApplyForcedMask.c)
 *     PpmParkClearForcedMask @ 0x14076FE88 (PpmParkClearForcedMask.c)
 *     PoInitSystem @ 0x1408A80C0 (PoInitSystem.c)
 *     PpmInitPolicyConfiguration @ 0x1408C19C4 (PpmInitPolicyConfiguration.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
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
