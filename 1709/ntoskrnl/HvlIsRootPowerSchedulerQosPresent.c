/*
 * XREFs of HvlIsRootPowerSchedulerQosPresent @ 0x1401E9980
 * Callers:
 *     PpmCheckInitProcessors @ 0x1405B5958 (PpmCheckInitProcessors.c)
 * Callees:
 *     <none>
 */

__int64 HvlIsRootPowerSchedulerQosPresent()
{
  return BYTE2(HvlpFlags) & 1;
}
