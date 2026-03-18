/*
 * XREFs of ?NeedsConfirmUpdateId@CGdiSpriteBitmap@@UEBA_NXZ @ 0x180093DB0
 * Callers:
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1800918D0 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CGdiSpriteBitmap::NeedsConfirmUpdateId(CGdiSpriteBitmap *this)
{
  return (*((_BYTE *)this + 60) & 4) != 0;
}
