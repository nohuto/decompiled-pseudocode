/*
 * XREFs of ?SetClipToDirty@CGdiSpriteBitmap@@UEAAX_N@Z @ 0x180093DC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CGdiSpriteBitmap::SetClipToDirty(CGdiSpriteBitmap *this, char a2)
{
  *((_BYTE *)this + 60) &= ~0x10u;
  *((_BYTE *)this + 60) |= 16 * a2;
}
