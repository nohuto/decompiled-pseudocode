/*
 * XREFs of HvlSendSyntheticClusterIpi @ 0x14015A040
 * Callers:
 *     <none>
 * Callees:
 *     HvlpSendSyntheticClusterIpi @ 0x14015A06C (HvlpSendSyntheticClusterIpi.c)
 *     HvlpFastSendSyntheticClusterIpiEx @ 0x14022B6CC (HvlpFastSendSyntheticClusterIpiEx.c)
 *     HvlpSlowSendSyntheticClusterIpiEx @ 0x14022B914 (HvlpSlowSendSyntheticClusterIpiEx.c)
 */

__int64 HvlSendSyntheticClusterIpi()
{
  if ( (HvlpFlags & 0x80u) == 0 || (unsigned __int16)KiActiveGroups <= 1u )
    return HvlpSendSyntheticClusterIpi();
  if ( (((unsigned int)HvlpFlags >> 8) & 0xF) + 4 > 0xE || (HvlEnlightenments & 0x80u) == 0 )
    return HvlpSlowSendSyntheticClusterIpiEx();
  return HvlpFastSendSyntheticClusterIpiEx();
}
