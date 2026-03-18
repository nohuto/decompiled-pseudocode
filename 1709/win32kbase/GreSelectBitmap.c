/*
 * XREFs of GreSelectBitmap @ 0x1C0081520
 * Callers:
 *     <none>
 * Callees:
 *     hbmSelectBitmap @ 0x1C004F3A0 (hbmSelectBitmap.c)
 */

struct HOBJ__ *__fastcall GreSelectBitmap(struct HOBJ__ *a1, struct HOBJ__ *a2)
{
  return hbmSelectBitmap(a1, a2, 0, 0);
}
