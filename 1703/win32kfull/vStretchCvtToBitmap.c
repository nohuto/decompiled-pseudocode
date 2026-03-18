/*
 * XREFs of vStretchCvtToBitmap @ 0x1C02361C4
 * Callers:
 *     BmfdQueryFontData @ 0x1C023307C (BmfdQueryFontData.c)
 * Callees:
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall vStretchCvtToBitmap(
        _DWORD *a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        __int64 a6,
        int a7,
        int a8,
        int a9)
{
  int v10; // r10d
  int v11; // r11d
  unsigned int v12; // eax
  void *v13; // rbx

  v10 = a7 * a3;
  v11 = a8 * a4;
  switch ( a9 )
  {
    case 8192:
      ++v10;
      break;
    case 16384:
      v12 = v11 - 1;
      goto LABEL_5;
    case 24576:
      v12 = v11 + 1;
LABEL_5:
      v10 += v12 >> 1;
      break;
  }
  *a1 = 0;
  a1[1] = -(a8 * a5);
  v13 = a1 + 4;
  a1[2] = v10;
  a1[3] = v11;
  memset(a1 + 4, 0, v11 * ((unsigned int)(v10 + 7) >> 3));
  return vStretchGlyphBitmap(v13, a4, a8, a7, a9);
}
