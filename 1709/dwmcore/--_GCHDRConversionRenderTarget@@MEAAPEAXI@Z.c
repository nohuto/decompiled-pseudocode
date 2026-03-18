/*
 * XREFs of ??_GCHDRConversionRenderTarget@@MEAAPEAXI@Z @ 0x1801ADF30
 * Callers:
 *     ??_ECHDRConversionRenderTarget@@OJA@EAAPEAXI@Z @ 0x1800C6B50 (--_ECHDRConversionRenderTarget@@OJA@EAAPEAXI@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CHDRConversionRenderTarget@@MEAA@XZ @ 0x1801ADE10 (--1CHDRConversionRenderTarget@@MEAA@XZ.c)
 */

CHDRConversionRenderTarget *__fastcall CHDRConversionRenderTarget::`scalar deleting destructor'(
        CHDRConversionRenderTarget *this,
        char a2)
{
  CHDRConversionRenderTarget::~CHDRConversionRenderTarget(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
