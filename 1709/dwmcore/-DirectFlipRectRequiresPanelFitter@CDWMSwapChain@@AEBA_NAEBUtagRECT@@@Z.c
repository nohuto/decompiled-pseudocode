/*
 * XREFs of ?DirectFlipRectRequiresPanelFitter@CDWMSwapChain@@AEBA_NAEBUtagRECT@@@Z @ 0x1801B0324
 * Callers:
 *     ?PresentInternal@CDWMSwapChain@@UEAAJPEBVCRegion@@IIPEAURenderTargetPresentParameters@@@Z @ 0x18002E6B0 (-PresentInternal@CDWMSwapChain@@UEAAJPEBVCRegion@@IIPEAURenderTargetPresentParameters@@@Z.c)
 *     ?CheckDirectFlipSupport@CDWMSwapChain@@UEAAJPEAUIDXGIResource@@W4DXGI_COLOR_SPACE_TYPE@@AEBUtagRECT@@2PEA_N@Z @ 0x1801AFC70 (-CheckDirectFlipSupport@CDWMSwapChain@@UEAAJPEAUIDXGIResource@@W4DXGI_COLOR_SPACE_TYPE@@AEBUtagR.c)
 * Callees:
 *     <none>
 */

char __fastcall CDWMSwapChain::DirectFlipRectRequiresPanelFitter(CDWMSwapChain *this, const struct tagRECT *a2)
{
  char v2; // r8

  v2 = 0;
  if ( a2->left || a2->top || a2->right != *((_DWORD *)this + 30) || a2->bottom != *((_DWORD *)this + 31) )
    return 1;
  return v2;
}
