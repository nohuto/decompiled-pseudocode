/*
 * XREFs of GreGetBitmapBitsSize @ 0x1C0047BFC
 * Callers:
 *     NtGdiCreateDIBSection @ 0x1C00478C0 (NtGdiCreateDIBSection.c)
 *     NtGdiGetDIBitsInternal @ 0x1C007F950 (NtGdiGetDIBitsInternal.c)
 *     NtGdiCreateSessionMappedDIBSection @ 0x1C00F50F0 (NtGdiCreateSessionMappedDIBSection.c)
 *     ?xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z @ 0x1C01E81B0 (-xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z.c)
 *     ?GreIcmQueryBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAXPEAK4PEAH@Z @ 0x1C029453C (-GreIcmQueryBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAXPEAK4PEAH@Z.c)
 *     NtGdiIcmBrushInfo @ 0x1C02950A0 (NtGdiIcmBrushInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GreGetBitmapBitsSize(__int64 a1)
{
  unsigned int v2; // ecx
  int v3; // edx

  if ( *(_DWORD *)a1 == 12 )
    return noOverflowCJSCAN(
             *(unsigned __int16 *)(a1 + 4),
             *(unsigned __int16 *)(a1 + 8),
             *(unsigned __int16 *)(a1 + 10));
  v2 = *(_DWORD *)(a1 + 16);
  if ( v2 <= 0xA && (v3 = 1033, _bittest(&v3, v2)) )
    return noOverflowCJSCAN(*(unsigned int *)(a1 + 4), *(unsigned __int16 *)(a1 + 12), *(unsigned __int16 *)(a1 + 14));
  else
    return *(unsigned int *)(a1 + 20);
}
