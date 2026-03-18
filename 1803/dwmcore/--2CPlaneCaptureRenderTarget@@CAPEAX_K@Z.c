/*
 * XREFs of ??2CPlaneCaptureRenderTarget@@CAPEAX_K@Z @ 0x18016DD08
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18002BD94 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ?CreateForControlledVisual@CCoRenderVisualProxy@@SAJPEAXPEAPEAV1@@Z @ 0x18014B1DC (-CreateForControlledVisual@CCoRenderVisualProxy@@SAJPEAXPEAPEAV1@@Z.c)
 *     ?CreateForForeignVisual@CCoRenderVisualProxy@@SAJPEAVCComposition@@PEAXPEAPEAV1@@Z @ 0x18014B29C (-CreateForForeignVisual@CCoRenderVisualProxy@@SAJPEAVCComposition@@PEAXPEAPEAV1@@Z.c)
 * Callees:
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x18002B3E4 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 */

void *__fastcall CPlaneCaptureRenderTarget::operator new()
{
  void *result; // rax
  const void *retaddr; // [rsp+28h] [rbp+0h]

  result = WPF::ProcessHeapImpl::AllocClear(0x40uLL);
  if ( !result )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  return result;
}
