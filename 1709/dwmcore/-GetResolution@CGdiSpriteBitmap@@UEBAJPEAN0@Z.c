/*
 * XREFs of ?GetResolution@CGdiSpriteBitmap@@UEBAJPEAN0@Z @ 0x1800C1070
 * Callers:
 *     ?GetResolution@CBitmapColorKey@@W7EAAJPEAN0@Z @ 0x1800C6E70 (-GetResolution@CBitmapColorKey@@W7EAAJPEAN0@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CGdiSpriteBitmap::GetResolution(CGdiSpriteBitmap *this, double *a2, double *a3)
{
  *a2 = 96.0;
  *a3 = 96.0;
  return 0LL;
}
