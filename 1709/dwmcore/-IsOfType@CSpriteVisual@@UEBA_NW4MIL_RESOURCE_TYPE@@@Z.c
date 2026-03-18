/*
 * XREFs of ?IsOfType@CSpriteVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180022240
 * Callers:
 *     ?ConvertInnerToOuterBounds@CVisual@@IEAAJXZ @ 0x18004FDC0 (-ConvertInnerToOuterBounds@CVisual@@IEAAJXZ.c)
 *     ?ProcessInsertChildAt@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_INSERTCHILDAT@@@Z @ 0x180051578 (-ProcessInsertChildAt@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_INSERTCHILDAT@@@Z.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ?AddTargets@CCompositionLight@@AEAAJPEAVCResourceTable@@IPEBXIW4LightBehavior@@@Z @ 0x1800B13B4 (-AddTargets@CCompositionLight@@AEAAJPEAVCResourceTable@@IPEBXIW4LightBehavior@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CSpriteVisual::IsOfType(__int64 a1, int a2)
{
  __int64 v2; // rax
  bool result; // al

  result = 0;
  if ( (unsigned int)(a2 - 94) <= 0x28 )
  {
    v2 = 0x10020000101LL;
    if ( _bittest64(&v2, a2 - 94) )
      return 1;
  }
  return result;
}
