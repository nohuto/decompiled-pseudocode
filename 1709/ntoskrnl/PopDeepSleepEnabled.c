/*
 * XREFs of PopDeepSleepEnabled @ 0x1400B0B30
 * Callers:
 *     PopCheckResiliencyScenarios @ 0x1404E7F34 (PopCheckResiliencyScenarios.c)
 *     PopEnforceDeepSleep @ 0x140706A34 (PopEnforceDeepSleep.c)
 *     PopDripsWatchdogWorkerRoutine @ 0x14070AC40 (PopDripsWatchdogWorkerRoutine.c)
 * Callees:
 *     <none>
 */

bool PopDeepSleepEnabled()
{
  return PopDeepSleepIsEnabled != 0;
}
