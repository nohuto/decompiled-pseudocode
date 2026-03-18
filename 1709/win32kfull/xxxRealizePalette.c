/*
 * XREFs of xxxRealizePalette @ 0x1C010EC10
 * Callers:
 *     ?xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z @ 0x1C013ECE8 (-xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z.c)
 *     ?xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z @ 0x1C01F41C8 (-xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     FreeAllSpbs @ 0x1C00D70D0 (FreeAllSpbs.c)
 *     GreRealizePalette @ 0x1C010EC68 (GreRealizePalette.c)
 *     WindowFromCacheDC @ 0x1C01C5AC8 (WindowFromCacheDC.c)
 *     xxxBroadcastPaletteChanged @ 0x1C0204454 (xxxBroadcastPaletteChanged.c)
 *     IsDCCurrentPalette @ 0x1C02928AC (IsDCCurrentPalette.c)
 */

__int64 __fastcall xxxRealizePalette(HDC a1)
{
  unsigned int v2; // eax
  unsigned __int16 v3; // bp
  unsigned int v4; // edi
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 i; // rcx
  __int64 j; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  _QWORD v15[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = GreRealizePalette(a1);
  v3 = v2;
  v4 = HIWORD(v2);
  if ( HIWORD(v2) )
  {
    if ( (unsigned int)IsDCCurrentPalette(a1) )
    {
      v7 = WindowFromCacheDC(a1);
      if ( v7 )
      {
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v6, v8, v9);
        v15[0] = *(_QWORD *)(ThreadWin32Thread + 392);
        *(_QWORD *)(ThreadWin32Thread + 392) = v15;
        v15[1] = v7;
        _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
        xxxBroadcastPaletteChanged(v7, 0LL);
        for ( i = grpWinStaList; i; i = *(_QWORD *)(i + 8) )
        {
          for ( j = *(_QWORD *)(i + 16); j; j = *(_QWORD *)(j + 32) )
          {
            if ( j != *(_QWORD *)(v7 + 24) )
              *(_DWORD *)(j + 48) |= 1u;
          }
        }
        GreRealizePalette(a1);
        ThreadUnlock1(v14, v13);
      }
    }
    if ( (_WORD)v4 )
      FreeAllSpbs();
  }
  return v3;
}
