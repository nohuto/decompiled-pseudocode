/*
 * XREFs of KeResetLegacyFloatingPointState @ 0x1401AB5C0
 * Callers:
 *     KiParkUmsThread @ 0x14024C690 (KiParkUmsThread.c)
 *     KiSwapToUmsThread @ 0x140742F20 (KiSwapToUmsThread.c)
 * Callees:
 *     <none>
 */

void KeResetLegacyFloatingPointState()
{
  __asm { fninit }
}
