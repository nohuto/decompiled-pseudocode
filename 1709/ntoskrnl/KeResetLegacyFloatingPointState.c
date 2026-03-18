/*
 * XREFs of KeResetLegacyFloatingPointState @ 0x140181970
 * Callers:
 *     KiParkUmsThread @ 0x14020E3B0 (KiParkUmsThread.c)
 *     KiSwapToUmsThread @ 0x1406D8E40 (KiSwapToUmsThread.c)
 * Callees:
 *     <none>
 */

void KeResetLegacyFloatingPointState()
{
  __asm { fninit }
}
