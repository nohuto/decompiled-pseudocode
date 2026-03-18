/*
 * XREFs of KeSaveLegacyFloatingPointControlWord @ 0x140181980
 * Callers:
 *     KiSwapToUmsThread @ 0x1406D8E40 (KiSwapToUmsThread.c)
 *     KiCaptureUmsThreadContext @ 0x1406DA088 (KiCaptureUmsThreadContext.c)
 * Callees:
 *     <none>
 */

void KeSaveLegacyFloatingPointControlWord()
{
  __asm { fnclex }
}
