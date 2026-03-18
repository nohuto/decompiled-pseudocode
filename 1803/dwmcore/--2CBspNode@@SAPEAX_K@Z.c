/*
 * XREFs of ??2CBspNode@@SAPEAX_K@Z @ 0x180211550
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18002BD94 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ?CreateShadow@CProjectedShadowCaster@@QEAAXPEAVCProjectedShadowReceiver@@PEAVCProjectedShadowScene@@@Z @ 0x18019FAC4 (-CreateShadow@CProjectedShadowCaster@@QEAAXPEAVCProjectedShadowReceiver@@PEAVCProjectedShadowSce.c)
 *     ?CreateShadow@CProjectedShadowReceiver@@QEAAXPEAVCProjectedShadowCaster@@PEAVCProjectedShadowScene@@@Z @ 0x1801A1254 (-CreateShadow@CProjectedShadowReceiver@@QEAAXPEAVCProjectedShadowCaster@@PEAVCProjectedShadowSce.c)
 *     ?CreatePolygonAndPushToBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N11@Z @ 0x180211688 (-CreatePolygonAndPushToBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N11@Z.c)
 *     ?PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z @ 0x18021F04C (-PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z.c)
 * Callees:
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x18002B3E4 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 */

void *__fastcall CBspNode::operator new()
{
  void *result; // rax
  const void *retaddr; // [rsp+28h] [rbp+0h]

  result = WPF::ProcessHeapImpl::AllocClear(0x68uLL);
  if ( !result )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  return result;
}
