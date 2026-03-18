/*
 * XREFs of HvlpUseExtendedProcessorSetHypercalls @ 0x1401EA4F0
 * Callers:
 *     HvlSendSyntheticClusterIpi @ 0x1401E7BD0 (HvlSendSyntheticClusterIpi.c)
 *     HvlParkedVirtualProcessors @ 0x1401E94E8 (HvlParkedVirtualProcessors.c)
 *     HvlFlushRangeListTb @ 0x1401EB824 (HvlFlushRangeListTb.c)
 *     HvlFlushSingleTb @ 0x1401EB87C (HvlFlushSingleTb.c)
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
