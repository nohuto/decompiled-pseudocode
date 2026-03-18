/*
 * XREFs of HvlpUseExtendedProcessorSetHypercalls @ 0x140141478
 * Callers:
 *     HvlFlushSingleTb @ 0x140141058 (HvlFlushSingleTb.c)
 *     HvlFlushRangeListTb @ 0x140141198 (HvlFlushRangeListTb.c)
 *     HvlSendSyntheticClusterIpi @ 0x140141400 (HvlSendSyntheticClusterIpi.c)
 *     HvlParkedVirtualProcessors @ 0x1401EE644 (HvlParkedVirtualProcessors.c)
 * Callees:
 *     <none>
 */

bool HvlpUseExtendedProcessorSetHypercalls()
{
  bool result; // al

  result = 0;
  if ( (HvlpFlags & 0x80u) != 0 )
    return (unsigned __int16)KiActiveGroups > 1u;
  return result;
}
