/*
 * XREFs of ?NeedsConfirmUpdateId@CGdiSpriteBitmap@@UEBA_NXZ @ 0x18009D530
 * Callers:
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18009A570 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CGdiSpriteBitmap::NeedsConfirmUpdateId(CGdiSpriteBitmap *this)
{
  return (*((_BYTE *)this + 60) & 4) != 0;
}
