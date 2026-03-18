/*
 * XREFs of GreGetBitmapBitsSize @ 0x1C009A190
 * Callers:
 *     NtGdiGetDIBitsInternal @ 0x1C0018440 (NtGdiGetDIBitsInternal.c)
 *     NtGdiCreateDIBSection @ 0x1C0099DE0 (NtGdiCreateDIBSection.c)
 *     NtGdiCreateSessionMappedDIBSection @ 0x1C0103010 (NtGdiCreateSessionMappedDIBSection.c)
 *     ?xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z @ 0x1C01F41C8 (-xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z.c)
 *     ?GreIcmQueryBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAXPEAK4PEAH@Z @ 0x1C0290C64 (-GreIcmQueryBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAXPEAK4PEAH@Z.c)
 *     NtGdiIcmBrushInfo @ 0x1C02917E0 (NtGdiIcmBrushInfo.c)
 * Callees:
 *     noOverflowCJSCAN @ 0x1C009A1E4 (noOverflowCJSCAN.c)
 */

__int64 __fastcall GreGetBitmapBitsSize(__int64 a1)
{
  unsigned int v2; // ecx
  int v3; // edx
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // rcx

  if ( *(_DWORD *)a1 == 12 )
  {
    v6 = *(unsigned __int16 *)(a1 + 4);
    v4 = *(unsigned __int16 *)(a1 + 10);
    v5 = *(unsigned __int16 *)(a1 + 8);
    return noOverflowCJSCAN(v6, v5, v4);
  }
  v2 = *(_DWORD *)(a1 + 16);
  if ( v2 <= 0xA )
  {
    v3 = 1033;
    if ( _bittest(&v3, v2) )
    {
      v4 = *(unsigned __int16 *)(a1 + 14);
      v5 = *(unsigned __int16 *)(a1 + 12);
      v6 = *(unsigned int *)(a1 + 4);
      return noOverflowCJSCAN(v6, v5, v4);
    }
  }
  return *(unsigned int *)(a1 + 20);
}
