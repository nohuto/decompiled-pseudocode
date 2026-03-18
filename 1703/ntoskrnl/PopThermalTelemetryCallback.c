/*
 * XREFs of PopThermalTelemetryCallback @ 0x14022F630
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char PopThermalTelemetryCallback()
{
  return PopQueueWorkItem((__int64)&unk_14034AAE8, DelayedWorkQueue);
}
