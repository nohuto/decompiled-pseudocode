/*
 * XREFs of KeSaveLegacyFloatingPointControlWord @ 0x1401AB5D0
 * Callers:
 *     KiSwapToUmsThread @ 0x140742F20 (KiSwapToUmsThread.c)
 *     KiCaptureUmsThreadContext @ 0x140744154 (KiCaptureUmsThreadContext.c)
 * Callees:
 *     <none>
 */

void KeSaveLegacyFloatingPointControlWord()
{
  __asm { fnclex }
}
