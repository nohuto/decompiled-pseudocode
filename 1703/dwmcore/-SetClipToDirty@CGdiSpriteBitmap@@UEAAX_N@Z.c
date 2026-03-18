/*
 * XREFs of ?SetClipToDirty@CGdiSpriteBitmap@@UEAAX_N@Z @ 0x180054910
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CGdiSpriteBitmap::SetClipToDirty(CGdiSpriteBitmap *this, char a2)
{
  *((_BYTE *)this + 60) &= ~0x20u;
  *((_BYTE *)this + 60) |= 32 * a2;
}
