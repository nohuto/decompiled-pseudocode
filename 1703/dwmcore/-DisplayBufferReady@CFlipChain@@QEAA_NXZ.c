/*
 * XREFs of ?DisplayBufferReady@CFlipChain@@QEAA_NXZ @ 0x1800B0F54
 * Callers:
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180051D10 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x180052120 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionIn.c)
 *     ?ProcessSetDxImage@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETDXIMAGE@@@Z @ 0x180053DF8 (-ProcessSetDxImage@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETDXIMAGE@@@Z.c)
 *     ?SetDxImage@CWindowNode@@AEAAJPEAVCFlipChain@@@Z @ 0x18012A668 (-SetDxImage@CWindowNode@@AEAAJPEAVCFlipChain@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CFlipChain::DisplayBufferReady(CFlipChain *this)
{
  bool result; // al

  result = 0;
  if ( *((_DWORD *)this + 40) )
    return *(_DWORD *)(*((_QWORD *)this + 17) + 8LL) == 2;
  return result;
}
