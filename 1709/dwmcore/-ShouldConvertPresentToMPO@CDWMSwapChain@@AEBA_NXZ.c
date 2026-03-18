/*
 * XREFs of ?ShouldConvertPresentToMPO@CDWMSwapChain@@AEBA_NXZ @ 0x18011B36C
 * Callers:
 *     ?PresentInternal@CDWMSwapChain@@UEAAJPEBVCRegion@@IIPEAURenderTargetPresentParameters@@@Z @ 0x18002E6B0 (-PresentInternal@CDWMSwapChain@@UEAAJPEBVCRegion@@IIPEAURenderTargetPresentParameters@@@Z.c)
 *     ?CheckDirectFlipSupport@CDWMSwapChain@@UEAAJPEAUIDXGIResource@@W4DXGI_COLOR_SPACE_TYPE@@AEBUtagRECT@@2PEA_N@Z @ 0x1801AFC70 (-CheckDirectFlipSupport@CDWMSwapChain@@UEAAJPEAUIDXGIResource@@W4DXGI_COLOR_SPACE_TYPE@@AEBUtagR.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDWMSwapChain::ShouldConvertPresentToMPO(CDWMSwapChain *this)
{
  bool result; // al

  result = 0;
  if ( *((_BYTE *)this + 585) )
    return *((_BYTE *)this + 583) == 0;
  return result;
}
