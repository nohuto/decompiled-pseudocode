/*
 * XREFs of PpmReleaseLock @ 0x1400E49C8
 * Callers:
 *     PoNotifyVSyncChange @ 0x14000A3F0 (PoNotifyVSyncChange.c)
 *     PpmMediaBufferingWorker @ 0x14000D2B0 (PpmMediaBufferingWorker.c)
 *     PpmCheckStart @ 0x1400E4720 (PpmCheckStart.c)
 *     PpmClearExitLatencySamplingPercentage @ 0x14023A804 (PpmClearExitLatencySamplingPercentage.c)
 *     PpmSetExitLatencySamplingPercentage @ 0x14023C1A0 (PpmSetExitLatencySamplingPercentage.c)
 *     PpmRegisterPerfCap @ 0x1402408F0 (PpmRegisterPerfCap.c)
 *     PpmCheckResumePpmEngineFromSx @ 0x140248718 (PpmCheckResumePpmEngineFromSx.c)
 *     PpmCheckResumeStatisticsCollection @ 0x140248734 (PpmCheckResumeStatisticsCollection.c)
 *     PopDeepSleepEvaluateCallback @ 0x140249000 (PopDeepSleepEvaluateCallback.c)
 *     PpmParkSetLpiCap @ 0x14024CC50 (PpmParkSetLpiCap.c)
 *     PpmInfoReleaseLocks @ 0x1404E1168 (PpmInfoReleaseLocks.c)
 *     PopCheckResiliencyScenarios @ 0x1404E7F34 (PopCheckResiliencyScenarios.c)
 *     PopPowerInformationInternal @ 0x1404EA1F0 (PopPowerInformationInternal.c)
 *     PopPpmHeteroPolicyCallback @ 0x1405B3BE0 (PopPpmHeteroPolicyCallback.c)
 *     PpmPerfTelemetryWorker @ 0x1405B3C70 (PpmPerfTelemetryWorker.c)
 *     PpmRegisterPerfStates @ 0x1405B500C (PpmRegisterPerfStates.c)
 *     PpmCheckInitProcessors @ 0x1405B5958 (PpmCheckInitProcessors.c)
 *     PpmReapplyPerfPolicy @ 0x1405B5D08 (PpmReapplyPerfPolicy.c)
 *     PpmPerfUpdateDomainPolicy @ 0x1405B62EC (PpmPerfUpdateDomainPolicy.c)
 *     PpmRegisterProfiles @ 0x1405E0DB4 (PpmRegisterProfiles.c)
 *     PpmEventTraceControlCallback @ 0x1405F2F90 (PpmEventTraceControlCallback.c)
 *     PopWnfFullscreenVideoCallback @ 0x1406F7B70 (PopWnfFullscreenVideoCallback.c)
 *     PpmUpdatePerfStates @ 0x1406F9EC0 (PpmUpdatePerfStates.c)
 *     PdcPoPpmResetProfile @ 0x1406FF200 (PdcPoPpmResetProfile.c)
 *     PpmCompareAndApplyPolicySettings @ 0x14070664C (PpmCompareAndApplyPolicySettings.c)
 *     PopEnforceResiliencyScenarios @ 0x140706AE4 (PopEnforceResiliencyScenarios.c)
 *     PpmDisableProfile @ 0x14070B87C (PpmDisableProfile.c)
 *     PpmRegisterSpmSettings @ 0x14070BC60 (PpmRegisterSpmSettings.c)
 *     PpmPerfRegisterHvPerfStateCounters @ 0x14070C770 (PpmPerfRegisterHvPerfStateCounters.c)
 *     PpmParkApplyForcedMask @ 0x14070C8F8 (PpmParkApplyForcedMask.c)
 *     PpmParkClearForcedMask @ 0x14070C9C8 (PpmParkClearForcedMask.c)
 *     PoInitSystem @ 0x140831CA8 (PoInitSystem.c)
 *     PpmInitPolicyConfiguration @ 0x140850E70 (PpmInitPolicyConfiguration.c)
 * Callees:
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 */

LONG __fastcall PpmReleaseLock(__int64 *a1)
{
  __int64 v1; // rbx
  LONG result; // eax

  v1 = *a1;
  *a1 = 0LL;
  result = KeSetEvent((PRKEVENT)(a1 + 1), 0, 0);
  if ( v1 )
    return KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  return result;
}
