/*
 * XREFs of ??2CFormatConverter@@SAPEAX_K@Z @ 0x1801AB008
 * Callers:
 *     ?HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEAPEAV2@@Z @ 0x1801AB890 (-HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEAPEAV2@@Z.c)
 * Callees:
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x1800576D8 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 */

void *__fastcall CFormatConverter::operator new()
{
  void *result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  result = WPF::ProcessHeapImpl::AllocClear(0x318uLL);
  if ( !result )
  {
    ModuleFailFastForHRESULT(-2147024882, retaddr);
    __debugbreak();
  }
  return result;
}
