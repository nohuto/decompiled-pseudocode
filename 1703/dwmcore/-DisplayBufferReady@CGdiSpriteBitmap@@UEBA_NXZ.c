/*
 * XREFs of ?DisplayBufferReady@CGdiSpriteBitmap@@UEBA_NXZ @ 0x1800548F0
 * Callers:
 *     ?ProcessReadyGdiSpriteBitmaps@CWindowNode@@AEAA_NXZ @ 0x180050074 (-ProcessReadyGdiSpriteBitmaps@CWindowNode@@AEAA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CGdiSpriteBitmap::DisplayBufferReady(CGdiSpriteBitmap *this)
{
  return (*((_BYTE *)this + 60) & 2) != 0;
}
