/*
 * XREFs of ?IsUsingOverlays@CHDRConversionRenderTarget@@MEBA_NXZ @ 0x1801B9940
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CHDRConversionRenderTarget::IsUsingOverlays(CHDRConversionRenderTarget *this)
{
  return ((*((_DWORD *)this + 166) - 1) & 0xFFFFFFFD) == 0;
}
