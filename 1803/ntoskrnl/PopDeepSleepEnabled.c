/*
 * XREFs of PopDeepSleepEnabled @ 0x140074E54
 * Callers:
 *     PopCheckResiliencyScenarios @ 0x14051D450 (PopCheckResiliencyScenarios.c)
 *     PopEnforceResiliencyScenarios @ 0x1405EECF8 (PopEnforceResiliencyScenarios.c)
 *     PopDripsWatchdogWorkerRoutine @ 0x14076E360 (PopDripsWatchdogWorkerRoutine.c)
 * Callees:
 *     <none>
 */

bool PopDeepSleepEnabled()
{
  return PopDeepSleepIsEnabled != 0;
}
