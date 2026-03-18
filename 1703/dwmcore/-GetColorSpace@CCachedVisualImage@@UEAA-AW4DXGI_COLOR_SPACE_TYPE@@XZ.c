/*
 * XREFs of ?GetColorSpace@CCachedVisualImage@@UEAA?AW4DXGI_COLOR_SPACE_TYPE@@XZ @ 0x180021C60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CCachedVisualImage::GetColorSpace(CCachedVisualImage *this)
{
  return *((_DWORD *)this + 39) == 2;
}
