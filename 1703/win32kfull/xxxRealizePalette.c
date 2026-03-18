/*
 * XREFs of xxxRealizePalette @ 0x1C01083C0
 * Callers:
 *     ?xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z @ 0x1C0137E70 (-xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z.c)
 *     ?xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z @ 0x1C01E81B0 (-xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z.c)
 * Callees:
 *     FreeAllSpbs @ 0x1C00FE090 (FreeAllSpbs.c)
 *     GreRealizePalette @ 0x1C0108418 (GreRealizePalette.c)
 *     WindowFromCacheDC @ 0x1C01C2DB4 (WindowFromCacheDC.c)
 *     xxxBroadcastPaletteChanged @ 0x1C0202950 (xxxBroadcastPaletteChanged.c)
 *     IsDCCurrentPalette @ 0x1C02961F8 (IsDCCurrentPalette.c)
 */

__int64 __fastcall xxxRealizePalette(HDC a1)
{
  unsigned int v2; // eax
  unsigned __int16 v3; // bp
  unsigned int v4; // edi
  __int64 v6; // rsi
  __int64 i; // rcx
  __int64 j; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = GreRealizePalette(a1);
  v3 = v2;
  v4 = HIWORD(v2);
  if ( HIWORD(v2) )
  {
    if ( (unsigned int)IsDCCurrentPalette(a1) )
    {
      v6 = WindowFromCacheDC(a1);
      if ( v6 )
      {
        v11[0] = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = v11;
        v11[1] = v6;
        ++*(_DWORD *)(v6 + 8);
        xxxBroadcastPaletteChanged(v6, 0LL);
        for ( i = grpWinStaList; i; i = *(_QWORD *)(i + 8) )
        {
          for ( j = *(_QWORD *)(i + 16); j; j = *(_QWORD *)(j + 32) )
          {
            if ( j != *(_QWORD *)(v6 + 24) )
              *(_DWORD *)(j + 48) |= 1u;
          }
        }
        GreRealizePalette(a1);
        ThreadUnlock1(v10, v9);
      }
    }
    if ( (_WORD)v4 )
      FreeAllSpbs();
  }
  return v3;
}
