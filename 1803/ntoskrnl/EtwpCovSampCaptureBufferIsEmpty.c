/*
 * XREFs of EtwpCovSampCaptureBufferIsEmpty @ 0x1402B4934
 * Callers:
 *     EtwpCovSampCaptureBufferMapAddressesAndQueue @ 0x1407B3478 (EtwpCovSampCaptureBufferMapAddressesAndQueue.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall EtwpCovSampCaptureBufferIsEmpty(__int64 a1)
{
  return *(_WORD *)(a1 + 62) == 0;
}
