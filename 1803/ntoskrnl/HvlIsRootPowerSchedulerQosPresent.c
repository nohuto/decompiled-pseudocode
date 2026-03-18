/*
 * XREFs of HvlIsRootPowerSchedulerQosPresent @ 0x140226B44
 * Callers:
 *     PpmCheckInitProcessors @ 0x14063F434 (PpmCheckInitProcessors.c)
 * Callees:
 *     <none>
 */

__int64 HvlIsRootPowerSchedulerQosPresent()
{
  return BYTE2(HvlpFlags) & 1;
}
