/*
 * XREFs of PpmAcquireLock @ 0x1400AF45C
 * Callers:
 *     PoNotifyVSyncChange @ 0x14000A3F0 (PoNotifyVSyncChange.c)
 *     PpmMediaBufferingWorker @ 0x14000D2B0 (PpmMediaBufferingWorker.c)
 *     PpmPerfLatencySensitivityHintWorker @ 0x14000F3F0 (PpmPerfLatencySensitivityHintWorker.c)
 *     PopIntSteerSetMode @ 0x140137B10 (PopIntSteerSetMode.c)
 *     PpmPerfClearBootOverrides @ 0x140137B80 (PpmPerfClearBootOverrides.c)
 *     PpmClearExitLatencySamplingPercentage @ 0x14023A804 (PpmClearExitLatencySamplingPercentage.c)
 *     PpmSetExitLatencySamplingPercentage @ 0x14023C1A0 (PpmSetExitLatencySamplingPercentage.c)
 *     PpmRegisterPerfCap @ 0x1402408F0 (PpmRegisterPerfCap.c)
 *     PpmCheckPausePpmEngineForSx @ 0x1402486EC (PpmCheckPausePpmEngineForSx.c)
 *     PpmCheckResumeStatisticsCollection @ 0x140248734 (PpmCheckResumeStatisticsCollection.c)
 *     PopDeepSleepEvaluateCallback @ 0x140249000 (PopDeepSleepEvaluateCallback.c)
 *     PpmParkSetLpiCap @ 0x14024CC50 (PpmParkSetLpiCap.c)
 *     PpmSetProfilePolicySetting @ 0x1404DEB98 (PpmSetProfilePolicySetting.c)
 *     PopCheckResiliencyScenarios @ 0x1404E7F34 (PopCheckResiliencyScenarios.c)
 *     PopPowerInformationInternal @ 0x1404EA1F0 (PopPowerInformationInternal.c)
 *     PopPerfBoostPowerRequest @ 0x1405B3B70 (PopPerfBoostPowerRequest.c)
 *     PopPpmHeteroPolicyCallback @ 0x1405B3BE0 (PopPpmHeteroPolicyCallback.c)
 *     PpmPerfTelemetryWorker @ 0x1405B3C70 (PpmPerfTelemetryWorker.c)
 *     PpmRegisterPerfStates @ 0x1405B500C (PpmRegisterPerfStates.c)
 *     PpmCheckInitProcessors @ 0x1405B5958 (PpmCheckInitProcessors.c)
 *     PpmReapplyPerfPolicy @ 0x1405B5D08 (PpmReapplyPerfPolicy.c)
 *     PpmRegisterProfiles @ 0x1405E0DB4 (PpmRegisterProfiles.c)
 *     PpmEnableProfile @ 0x1405E2108 (PpmEnableProfile.c)
 *     PopSetupHighPerfPowerRequest @ 0x1405EF820 (PopSetupHighPerfPowerRequest.c)
 *     PpmEventTraceControlCallback @ 0x1405F2F90 (PpmEventTraceControlCallback.c)
 *     PopWnfFullscreenVideoCallback @ 0x1406F7B70 (PopWnfFullscreenVideoCallback.c)
 *     PpmPerfReApplyStates @ 0x1406F9D48 (PpmPerfReApplyStates.c)
 *     PpmUpdatePerfStates @ 0x1406F9EC0 (PpmUpdatePerfStates.c)
 *     PdcPoPpmResetProfile @ 0x1406FF200 (PdcPoPpmResetProfile.c)
 *     PpmPerfProcCapFloorSettingCallback @ 0x140706950 (PpmPerfProcCapFloorSettingCallback.c)
 *     PopEnforceResiliencyScenarios @ 0x140706AE4 (PopEnforceResiliencyScenarios.c)
 *     PpmApplyProfile @ 0x14070B748 (PpmApplyProfile.c)
 *     PpmDisableProfile @ 0x14070B87C (PpmDisableProfile.c)
 *     PpmProfileAcDcUpdate @ 0x14070BBB4 (PpmProfileAcDcUpdate.c)
 *     PpmRegisterSpmSettings @ 0x14070BC60 (PpmRegisterSpmSettings.c)
 *     PpmPerfRegisterHvPerfStateCounters @ 0x14070C770 (PpmPerfRegisterHvPerfStateCounters.c)
 *     PpmParkApplyForcedMask @ 0x14070C8F8 (PpmParkApplyForcedMask.c)
 *     PpmParkClearForcedMask @ 0x14070C9C8 (PpmParkClearForcedMask.c)
 *     PoInitSystem @ 0x140831CA8 (PoInitSystem.c)
 *     PpmInitPolicyConfiguration @ 0x140850E70 (PpmInitPolicyConfiguration.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
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
