/*
 * XREFs of MNInitUAHMenuItem @ 0x1C000E024
 * Callers:
 *     ?xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IPEAUtagMENU@@PEAUtagITEM@@HHPEAUtagWND@@@Z @ 0x1C000DEB4 (-xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IPEAUtagMENU@@PEAUtagITEM@@HHPEAUtagWND@@@Z.c)
 *     ?xxxMNGetBitmapSize@@YAHPEAUtagMENU@@PEAUtagITEM@@PEAUtagWND@@HPEAUHDC__@@@Z @ 0x1C004372C (-xxxMNGetBitmapSize@@YAHPEAUtagMENU@@PEAUtagITEM@@PEAUtagWND@@HPEAUHDC__@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MNInitUAHMenuItem(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  *(_DWORD *)a3 = (a2 - *(_QWORD *)(a1 + 96)) / 152;
  result = *(unsigned int *)(a1 + 56);
  if ( (result & 1) != 0 )
  {
    *(_OWORD *)(a3 + 36) = *(_OWORD *)(a1 + 148);
    result = *(unsigned int *)(a1 + 164);
    *(_DWORD *)(a3 + 52) = result;
  }
  *(_OWORD *)(a3 + 4) = *(_OWORD *)(a2 + 120);
  *(_OWORD *)(a3 + 20) = *(_OWORD *)(a2 + 136);
  return result;
}
