/*
 * XREFs of ?IsHardwareProtected@CSectionBitmapRealization@@UEBA_NXZ @ 0x180213340
 * Callers:
 *     ?IsHardwareProtected@CSectionBitmapRealization@@WPI@EBA_NXZ @ 0x1800DE790 (-IsHardwareProtected@CSectionBitmapRealization@@WPI@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CSectionBitmapRealization::IsHardwareProtected(CSectionBitmapRealization *this)
{
  return BYTE1(*((_DWORD *)this + 31)) & 1;
}
