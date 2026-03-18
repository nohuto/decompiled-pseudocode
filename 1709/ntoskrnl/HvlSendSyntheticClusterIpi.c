/*
 * XREFs of HvlSendSyntheticClusterIpi @ 0x140141400
 * Callers:
 *     <none>
 * Callees:
 *     HvlpSendSyntheticClusterIpi @ 0x140141428 (HvlpSendSyntheticClusterIpi.c)
 *     HvlpUseExtendedProcessorSetHypercalls @ 0x140141478 (HvlpUseExtendedProcessorSetHypercalls.c)
 *     HvlpFastSendSyntheticClusterIpiEx @ 0x1401EDE2C (HvlpFastSendSyntheticClusterIpiEx.c)
 *     HvlpSlowSendSyntheticClusterIpiEx @ 0x1401EE078 (HvlpSlowSendSyntheticClusterIpiEx.c)
 */

__int64 __fastcall HvlSendSyntheticClusterIpi(__int64 a1, __int64 a2)
{
  __int64 v2; // r8

  if ( !(unsigned __int8)HvlpUseExtendedProcessorSetHypercalls(a1, a2, a1) )
    return HvlpSendSyntheticClusterIpi(v2);
  if ( (((unsigned int)HvlpFlags >> 8) & 0xF) + 4 > 0xE || (HvlEnlightenments & 0x80u) == 0 )
    return HvlpSlowSendSyntheticClusterIpiEx(v2);
  return HvlpFastSendSyntheticClusterIpiEx(v2);
}
