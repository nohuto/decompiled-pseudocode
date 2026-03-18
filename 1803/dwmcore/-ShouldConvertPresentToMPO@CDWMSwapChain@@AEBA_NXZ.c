/*
 * XREFs of ?ShouldConvertPresentToMPO@CDWMSwapChain@@AEBA_NXZ @ 0x18013DBC8
 * Callers:
 *     ?PresentInternal@CDWMSwapChain@@UEAAJPEBVCRegion@@IIPEBURenderTargetPresentParameters@@@Z @ 0x18007D020 (-PresentInternal@CDWMSwapChain@@UEAAJPEBVCRegion@@IIPEBURenderTargetPresentParameters@@@Z.c)
 *     ?CheckDirectFlipSupport@CDWMSwapChain@@UEAAJPEAUIDXGIResource@@W4DXGI_COLOR_SPACE_TYPE@@AEBUtagRECT@@2PEA_N@Z @ 0x1800DD020 (-CheckDirectFlipSupport@CDWMSwapChain@@UEAAJPEAUIDXGIResource@@W4DXGI_COLOR_SPACE_TYPE@@AEBUtagR.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDWMSwapChain::ShouldConvertPresentToMPO(CDWMSwapChain *this)
{
  char v1; // dl

  v1 = 0;
  if ( *((_DWORD *)this + 145) == 2 )
    return *((_BYTE *)this + 575) == 0;
  return v1;
}
