/*
 * XREFs of ??2CColorBrush@@SAPEAX_K@Z @ 0x1800C6244
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18002BD94 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ?GetMaskContentNoRef@CDropShadow@@AEAAJAEBUShadowIntermediates@1@PEAPEAVCSpriteVisualContent@@@Z @ 0x18018A30C (-GetMaskContentNoRef@CDropShadow@@AEAAJAEBUShadowIntermediates@1@PEAPEAVCSpriteVisualContent@@@Z.c)
 *     ?EnsureBlackColorBrush@CProjectedShadowCaster@@AEAAJXZ @ 0x18019FC04 (-EnsureBlackColorBrush@CProjectedShadowCaster@@AEAAJXZ.c)
 *     ?InitializeFastShadow@CProjectedShadowCaster@@QEAAJPEAVCDrawingContext@@@Z @ 0x1801A0634 (-InitializeFastShadow@CProjectedShadowCaster@@QEAAJPEAVCDrawingContext@@@Z.c)
 *     ?EnsureBlackColorBrush@CProjectedShadowReceiver@@AEAAJXZ @ 0x1801A1338 (-EnsureBlackColorBrush@CProjectedShadowReceiver@@AEAAJXZ.c)
 * Callees:
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x18002B3E4 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 */

void *__fastcall CColorBrush::operator new()
{
  void *result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  result = WPF::ProcessHeapImpl::AllocClear(0x58uLL);
  if ( !result )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  return result;
}
