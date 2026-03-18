/*
 * XREFs of ?DisplayBufferReady@CFlipChain@@QEAA_NXZ @ 0x180165398
 * Callers:
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18009A570 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x18009A980 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionIn.c)
 *     ?ProcessSetDxImage@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETDXIMAGE@@@Z @ 0x18009CA54 (-ProcessSetDxImage@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETDXIMAGE@@@Z.c)
 *     ?SetDxImage@CWindowNode@@AEAAJPEAVCFlipChain@@@Z @ 0x18011A31C (-SetDxImage@CWindowNode@@AEAAJPEAVCFlipChain@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CFlipChain::DisplayBufferReady(CFlipChain *this)
{
  bool result; // al

  result = 0;
  if ( *((_DWORD *)this + 42) )
    return *(_DWORD *)(*((_QWORD *)this + 18) + 8LL) == 2;
  return result;
}
