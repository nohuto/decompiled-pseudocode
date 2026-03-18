/*
 * XREFs of ?GetColorSpace@CCachedVisualImage@@UEBA?AW4DXGI_COLOR_SPACE_TYPE@@XZ @ 0x180165640
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CCachedVisualImage::GetColorSpace(CCachedVisualImage *this)
{
  return *((_DWORD *)this + 19) == 2;
}
