/*
 * XREFs of CsrFreeCaptureBuffer @ 0x180004780
 * Callers:
 *     CsrpClientConnectToServer @ 0x1800046C4 (CsrpClientConnectToServer.c)
 * Callees:
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 */

LOGICAL __fastcall CsrFreeCaptureBuffer(PVOID BaseAddress)
{
  LOGICAL result; // eax

  if ( !LdrpIsSecureProcess )
    return RtlFreeHeap(CsrPortHeap, 0, BaseAddress);
  return result;
}
