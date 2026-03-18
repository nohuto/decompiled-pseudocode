/*
 * XREFs of ??2CMatrixTransform3D@@KAPEAX_K@Z @ 0x1800CA0EC
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18002BD94 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ?SetTransform@CCoRenderVisualProxy@@UEAAJPEBU_D3DMATRIX@@0@Z @ 0x18014BB10 (-SetTransform@CCoRenderVisualProxy@@UEAAJPEBU_D3DMATRIX@@0@Z.c)
 * Callees:
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x18002B3E4 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 */

void *__fastcall CMatrixTransform3D::operator new()
{
  void *result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  result = WPF::ProcessHeapImpl::AllocClear(0xD8uLL);
  if ( !result )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  return result;
}
