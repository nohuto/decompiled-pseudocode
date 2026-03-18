/*
 * XREFs of ?D2DBitmapInterpolationModeFromMilFilterMode@@YA?AW4D2D1_INTERPOLATION_MODE@@W4Enum@FilterMode@@@Z @ 0x18004D78C
 * Callers:
 *     ?GetD2DBrush@CHwBitmapBrush@@UEAAJMW4ColorSpace@@PEAPEAUID2D1Brush@@@Z @ 0x18004D470 (-GetD2DBrush@CHwBitmapBrush@@UEAAJMW4ColorSpace@@PEAPEAUID2D1Brush@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall D2DBitmapInterpolationModeFromMilFilterMode(int a1)
{
  unsigned int v1; // edx

  v1 = 0;
  if ( a1 != 1 )
    return (unsigned int)(a1 - 2) <= 3;
  return v1;
}
