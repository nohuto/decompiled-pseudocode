/*
 * XREFs of ?UpdatePixelFormatInfo@CHDRConversionRenderTarget@@MEAAXAEBUPixelFormatInfo@@@Z @ 0x1801BA6C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CHDRConversionRenderTarget::UpdatePixelFormatInfo(
        CHDRConversionRenderTarget *this,
        const struct PixelFormatInfo *a2)
{
  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 71) + 136LL))(
    *((_QWORD *)this + 71),
    *((unsigned int *)a2 + 1));
}
