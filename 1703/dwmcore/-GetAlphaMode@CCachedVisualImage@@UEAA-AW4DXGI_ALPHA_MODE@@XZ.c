/*
 * XREFs of ?GetAlphaMode@CCachedVisualImage@@UEAA?AW4DXGI_ALPHA_MODE@@XZ @ 0x180021C40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCachedVisualImage::GetAlphaMode(CCachedVisualImage *this)
{
  return *((_DWORD *)this + 38) != 0 ? 1 : 3;
}
