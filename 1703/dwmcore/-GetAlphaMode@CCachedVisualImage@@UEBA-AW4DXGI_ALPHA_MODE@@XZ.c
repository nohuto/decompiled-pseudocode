/*
 * XREFs of ?GetAlphaMode@CCachedVisualImage@@UEBA?AW4DXGI_ALPHA_MODE@@XZ @ 0x180165580
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCachedVisualImage::GetAlphaMode(CCachedVisualImage *this)
{
  return *((_DWORD *)this + 18) != 0 ? 1 : 3;
}
