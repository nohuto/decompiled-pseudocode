/*
 * XREFs of ?IsUsingOverlays@CHDRConversionRenderTarget@@MEBA_NXZ @ 0x1801F31B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CHDRConversionRenderTarget::IsUsingOverlays(CHDRConversionRenderTarget *this)
{
  return ((*((_DWORD *)this + 176) - 1) & 0xFFFFFFFD) == 0;
}
