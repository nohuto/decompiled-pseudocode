/*
 * XREFs of PopDeepSleepEnabled @ 0x1400702A0
 * Callers:
 *     PopCheckResiliencyScenarios @ 0x1404C5510 (PopCheckResiliencyScenarios.c)
 *     PopEnforceResiliencyScenarios @ 0x140579E38 (PopEnforceResiliencyScenarios.c)
 *     PopDripsWatchdogWorkerRoutine @ 0x1406D52E0 (PopDripsWatchdogWorkerRoutine.c)
 * Callees:
 *     <none>
 */

_BOOL8 PopDeepSleepEnabled()
{
  return PopDeepSleepIsEnabled != 0;
}
