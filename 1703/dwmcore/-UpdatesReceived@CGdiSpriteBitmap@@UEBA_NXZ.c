/*
 * XREFs of ?UpdatesReceived@CGdiSpriteBitmap@@UEBA_NXZ @ 0x1800CC6F0
 * Callers:
 *     ?UpdatesReceived@CGdiSpriteBitmap@@WFA@EBA_NXZ @ 0x1800D5CF0 (-UpdatesReceived@CGdiSpriteBitmap@@WFA@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CGdiSpriteBitmap::UpdatesReceived(CGdiSpriteBitmap *this)
{
  return (*((_BYTE *)this + 140) & 2) != 0;
}
