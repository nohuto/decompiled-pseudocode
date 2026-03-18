/*
 * XREFs of ?IsHardwareProtected@CSectionBitmapRealization@@UEBA_NXZ @ 0x1801D0FF0
 * Callers:
 *     ?IsHardwareProtected@CSectionBitmapRealization@@WPI@EBA_NXZ @ 0x1800C7040 (-IsHardwareProtected@CSectionBitmapRealization@@WPI@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CSectionBitmapRealization::IsHardwareProtected(CSectionBitmapRealization *this)
{
  return BYTE1(*((_DWORD *)this + 31)) & 1;
}
