/*
 * XREFs of ?IsDirectFlipCompatible@CDxHandleBitmapRealization@@UEBA_NXZ @ 0x180007B90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CDxHandleBitmapRealization::IsDirectFlipCompatible(CDxHandleBitmapRealization *this)
{
  return (*((_DWORD *)this + 31) & 0x10) != 0;
}
