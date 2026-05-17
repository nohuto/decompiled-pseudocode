/*
 * XREFs of CsrFreeCaptureBuffer @ 0x180004780
 * Callers:
 *     CsrpClientConnectToServer @ 0x1800046C4 (CsrpClientConnectToServer.c)
 * Callees:
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 */

__int64 __fastcall CsrFreeCaptureBuffer(__int64 a1)
{
  __int64 result; // rax

  if ( !LdrpIsSecureProcess )
    return RtlFreeHeap(CsrPortHeap, 0LL, a1);
  return result;
}
