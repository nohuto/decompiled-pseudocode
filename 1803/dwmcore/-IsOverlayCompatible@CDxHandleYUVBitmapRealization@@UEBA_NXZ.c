/*
 * XREFs of ?IsOverlayCompatible@CDxHandleYUVBitmapRealization@@UEBA_NXZ @ 0x180215F10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CDxHandleYUVBitmapRealization::IsOverlayCompatible(CDxHandleYUVBitmapRealization *this)
{
  return (*((_DWORD *)this + 31) & 0x40) != 0;
}
