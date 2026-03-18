/*
 * XREFs of ??2CCoRenderVisualProxy@@SAPEAX_K@Z @ 0x180146720
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800930B8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ?CreateForControlledVisual@CCoRenderVisualProxy@@SAJPEAXPEAPEAV1@@Z @ 0x180129524 (-CreateForControlledVisual@CCoRenderVisualProxy@@SAJPEAXPEAPEAV1@@Z.c)
 *     ?CreateForForeignVisual@CCoRenderVisualProxy@@SAJPEAVCComposition@@PEAXPEAPEAV1@@Z @ 0x1801295E4 (-CreateForForeignVisual@CCoRenderVisualProxy@@SAJPEAVCComposition@@PEAXPEAPEAV1@@Z.c)
 * Callees:
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x1800950C8 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 */

void *__fastcall CCoRenderVisualProxy::operator new()
{
  void *result; // rax
  const void *retaddr; // [rsp+28h] [rbp+0h]

  result = WPF::ProcessHeapImpl::AllocClear(0x40uLL);
  if ( !result )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  return result;
}
