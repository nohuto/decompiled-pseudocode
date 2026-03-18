/*
 * XREFs of AlpcpProbeAndCaptureMessageHeader @ 0x1404DDD48
 * Callers:
 *     AlpcpProcessConnectionRequest @ 0x1404DA158 (AlpcpProcessConnectionRequest.c)
 *     AlpcpAcceptConnectPort @ 0x1404DBC58 (AlpcpAcceptConnectPort.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x1404DD564 (AlpcpSendLegacySynchronousRequest.c)
 *     NtAlpcOpenSenderProcess @ 0x1404DDA8C (NtAlpcOpenSenderProcess.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x1404DE4F0 (AlpcpReplyLegacySynchronousRequest.c)
 *     NtAlpcOpenSenderThread @ 0x1404E032C (NtAlpcOpenSenderThread.c)
 *     AlpcpCopyRequestData @ 0x140747E84 (AlpcpCopyRequestData.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall AlpcpProbeAndCaptureMessageHeader(unsigned __int64 a1, __int64 a2, int a3)
{
  unsigned __int64 result; // rax
  __m128i v4; // xmm0
  __m128i v5; // xmm2
  __int16 v6; // ax
  __int64 v7; // [rsp+10h] [rbp-18h]

  result = 0x7FFFFFFF0000LL;
  if ( (a3 & 0xC0000000) == 0x80000000 )
  {
    if ( a1 < 0x7FFFFFFF0000LL )
      result = a1;
    v4 = *(__m128i *)result;
    v5 = *(__m128i *)result;
    v7 = *(_QWORD *)(result + 16);
    v6 = _mm_cvtsi128_si32(*(__m128i *)result);
    *(_WORD *)a2 = v6;
    *(_QWORD *)(a2 + 8) = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v5, 8));
    *(_WORD *)(a2 + 2) = v6 + 40;
    result = (unsigned int)v7;
    *(_QWORD *)(a2 + 16) = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v5, 12));
    *(_QWORD *)(a2 + 32) = HIDWORD(v7);
    *(_DWORD *)(a2 + 32) = HIDWORD(v7);
    *(_DWORD *)(a2 + 4) = _mm_cvtsi128_si32(_mm_srli_si128(v4, 4));
    *(_DWORD *)(a2 + 24) = v7;
  }
  else
  {
    if ( a1 < 0x7FFFFFFF0000LL )
      result = a1;
    *(_OWORD *)a2 = *(_OWORD *)result;
    *(_OWORD *)(a2 + 16) = *(_OWORD *)(result + 16);
    *(_QWORD *)(a2 + 32) = *(_QWORD *)(result + 32);
  }
  return result;
}
