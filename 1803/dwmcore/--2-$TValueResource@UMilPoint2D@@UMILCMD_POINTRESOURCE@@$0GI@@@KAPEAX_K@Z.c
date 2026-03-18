/*
 * XREFs of ??2?$TValueResource@UMilPoint2D@@UMILCMD_POINTRESOURCE@@$0GI@@@KAPEAX_K@Z @ 0x18016DA70
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18002BD94 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 */

LPVOID TValueResource<MilPoint2D,MILCMD_POINTRESOURCE,104>::operator new()
{
  LPVOID result; // rax
  const void *retaddr; // [rsp+28h] [rbp+0h]

  result = HeapAlloc(WPF::g_processHeap, 0, 0x48uLL);
  if ( !result )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  return result;
}
