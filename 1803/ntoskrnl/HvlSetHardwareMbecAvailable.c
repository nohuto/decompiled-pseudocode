/*
 * XREFs of HvlSetHardwareMbecAvailable @ 0x140226D54
 * Callers:
 *     KiSetFeatureBits @ 0x140479754 (KiSetFeatureBits.c)
 * Callees:
 *     <none>
 */

void HvlSetHardwareMbecAvailable()
{
  HvlpFlags |= 0x20000u;
}
