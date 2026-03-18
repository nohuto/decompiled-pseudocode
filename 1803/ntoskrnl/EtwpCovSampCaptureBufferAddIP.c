/*
 * XREFs of EtwpCovSampCaptureBufferAddIP @ 0x1402B4864
 * Callers:
 *     EtwpCovSampCaptureSample @ 0x1402B5344 (EtwpCovSampCaptureSample.c)
 *     EtwpCovSampCaptureUserAddresses @ 0x1407B3D28 (EtwpCovSampCaptureUserAddresses.c)
 * Callees:
 *     <none>
 */

void __fastcall EtwpCovSampCaptureBufferAddIP(__int64 a1, unsigned __int64 a2)
{
  int v2; // eax
  int v3; // eax

  if ( a2 )
  {
    v2 = *(_DWORD *)(a1 + 56) | 8;
    *(_QWORD *)(a1 + 64) = a2;
    *(_DWORD *)(a1 + 56) = v2;
    *(_WORD *)(a1 + 62) = 1;
    if ( a2 < 0xFFFF800000000000uLL )
      v3 = v2 | 2;
    else
      v3 = v2 | 1;
    *(_DWORD *)(a1 + 56) = v3;
  }
}
