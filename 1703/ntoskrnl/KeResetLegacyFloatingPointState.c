/*
 * XREFs of KeResetLegacyFloatingPointState @ 0x140181EF0
 * Callers:
 *     KiParkUmsThread @ 0x140207A00 (KiParkUmsThread.c)
 *     KiSwapToUmsThread @ 0x1406ADA00 (KiSwapToUmsThread.c)
 * Callees:
 *     <none>
 */

void KeResetLegacyFloatingPointState()
{
  __asm { fninit }
}
