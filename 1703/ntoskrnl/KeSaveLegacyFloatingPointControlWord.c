/*
 * XREFs of KeSaveLegacyFloatingPointControlWord @ 0x140181F00
 * Callers:
 *     KiSwapToUmsThread @ 0x1406ADA00 (KiSwapToUmsThread.c)
 *     KiCaptureUmsThreadContext @ 0x1406AEC38 (KiCaptureUmsThreadContext.c)
 * Callees:
 *     <none>
 */

void KeSaveLegacyFloatingPointControlWord()
{
  __asm { fnclex }
}
