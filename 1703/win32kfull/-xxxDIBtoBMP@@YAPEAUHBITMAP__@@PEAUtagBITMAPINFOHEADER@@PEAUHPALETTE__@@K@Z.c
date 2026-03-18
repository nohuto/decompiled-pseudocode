/*
 * XREFs of ?xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z @ 0x1C01E81B0
 * Callers:
 *     ?xxxGetDummyBitmap@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C01E8320 (-xxxGetDummyBitmap@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 * Callees:
 *     GreGetBitmapBitsSize @ 0x1C0047BFC (GreGetBitmapBitsSize.c)
 *     _SelectPalette @ 0x1C00E6528 (_SelectPalette.c)
 *     xxxRealizePalette @ 0x1C01083C0 (xxxRealizePalette.c)
 *     GreGetBitmapSizeInternal @ 0x1C013F53C (GreGetBitmapSizeInternal.c)
 *     ?CreateScreenBitmap@@YAPEAUHBITMAP__@@HHI@Z @ 0x1C01E7EF4 (-CreateScreenBitmap@@YAPEAUHBITMAP__@@HHI@Z.c)
 *     GreSetDIBits @ 0x1C029CA38 (GreSetDIBits.c)
 */

__int64 __fastcall xxxDIBtoBMP(struct tagBITMAPINFOHEADER *a1, __int64 a2, unsigned int a3)
{
  DWORD biSize; // edi
  unsigned int BitmapSizeInternal; // eax
  __int64 v8; // rsi
  unsigned int BitmapBitsSize; // eax
  unsigned int v10; // r11d
  unsigned int v11; // eax
  unsigned int biWidth_low; // r14d
  unsigned int biWidth_high; // ebp
  WORD biHeight_high; // r15
  char *v15; // r12
  __int64 v16; // rsi
  HDC CompatibleDC; // rdi
  __int64 ScreenBitmap; // rax
  __int64 v19; // r14
  __int64 v20; // r15

  biSize = a1->biSize;
  BitmapSizeInternal = GreGetBitmapSizeInternal((__int64)a1, 0, a1->biSize);
  v8 = BitmapSizeInternal;
  if ( !BitmapSizeInternal )
    return 0LL;
  BitmapBitsSize = GreGetBitmapBitsSize((__int64)a1);
  v10 = BitmapBitsSize;
  if ( !BitmapBitsSize )
    return 0LL;
  v11 = v8 + BitmapBitsSize;
  if ( v11 < v10 || a3 < v11 )
    return 0LL;
  if ( biSize != 40 )
  {
    if ( biSize == 12 )
    {
      biWidth_low = LOWORD(a1->biWidth);
      biWidth_high = HIWORD(a1->biWidth);
      biHeight_high = HIWORD(a1->biHeight);
      goto LABEL_9;
    }
    return 0LL;
  }
  biWidth_low = a1->biWidth;
  biWidth_high = a1->biHeight;
  biHeight_high = a1->biBitCount;
LABEL_9:
  v15 = (char *)a1 + v8;
  v16 = 0LL;
  CompatibleDC = (HDC)GreCreateCompatibleDC(*(_QWORD *)(gpDispInfo + 48LL));
  if ( CompatibleDC )
  {
    ScreenBitmap = CreateScreenBitmap(biWidth_low, biWidth_high, biHeight_high);
    v16 = ScreenBitmap;
    if ( ScreenBitmap )
    {
      v19 = 0LL;
      v20 = GreSelectBitmap(CompatibleDC, ScreenBitmap);
      if ( a2 )
      {
        v19 = SelectPalette((__int64)CompatibleDC, a2, 0);
        xxxRealizePalette(CompatibleDC);
      }
      GreSetDIBits(CompatibleDC, (__int64)v15, (__int64)a1);
      if ( v19 )
      {
        SelectPalette((__int64)CompatibleDC, v19, 0);
        xxxRealizePalette(CompatibleDC);
      }
      GreSelectBitmap(CompatibleDC, v20);
    }
    GreDeleteDC(CompatibleDC);
  }
  return v16;
}
