/*
 * XREFs of ??2CCachedVisualImage@@KAPEAX_K@Z @ 0x1800C92C4
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18005A0F8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ?EnsureCachedVisualImage@CHwndBitmap@@AEAAJXZ @ 0x180164784 (-EnsureCachedVisualImage@CHwndBitmap@@AEAAJXZ.c)
 *     ?CreateCVI@CSnapshot@@AEAAJPEAVCVisual@@@Z @ 0x180164F10 (-CreateCVI@CSnapshot@@AEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x1800576D8 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 */

void *__fastcall CCachedVisualImage::operator new()
{
  void *result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  result = WPF::ProcessHeapImpl::AllocClear(0x168uLL);
  if ( !result )
  {
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
    __debugbreak();
  }
  return result;
}
