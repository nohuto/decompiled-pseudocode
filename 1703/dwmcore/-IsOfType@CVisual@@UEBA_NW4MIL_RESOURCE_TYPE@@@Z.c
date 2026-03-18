/*
 * XREFs of ?IsOfType@CVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180085F50
 * Callers:
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18005B2F0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ?ProcessRemoveChild@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_REMOVECHILD@@@Z @ 0x180085CD4 (-ProcessRemoveChild@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_REMOVECHILD@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CVisual::IsOfType(__int64 a1, int a2)
{
  return a2 == 31 || (unsigned int)(a2 - 116) <= 1;
}
