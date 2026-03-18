/*
 * XREFs of ?UpdatePixelFormatInfo@CHDRConversionRenderTarget@@MEAAXAEBUPixelFormatInfo@@@Z @ 0x1801F3F70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CHDRConversionRenderTarget::UpdatePixelFormatInfo(
        CHDRConversionRenderTarget *this,
        const struct PixelFormatInfo *a2)
{
  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 76) + 144LL))(
    *((_QWORD *)this + 76),
    *((unsigned int *)a2 + 1));
}
