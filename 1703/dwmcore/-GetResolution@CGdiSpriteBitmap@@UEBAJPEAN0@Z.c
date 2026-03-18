/*
 * XREFs of ?GetResolution@CGdiSpriteBitmap@@UEBAJPEAN0@Z @ 0x180163820
 * Callers:
 *     ?GetResolution@CGdiSpriteBitmap@@WFA@EBAJPEAN0@Z @ 0x1800D5C60 (-GetResolution@CGdiSpriteBitmap@@WFA@EBAJPEAN0@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CGdiSpriteBitmap::GetResolution(CGdiSpriteBitmap *this, double *a2, double *a3)
{
  return CBitmapResource::GetResolution(this, a2, a3);
}
