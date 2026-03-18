/*
 * XREFs of ?SetHDRMetaData@CDWMSwapChain@@UEAAXW4DXGI_HDR_METADATA_TYPE@@PEBX@Z @ 0x18007CF30
 * Callers:
 *     ?SetMultiplaneOverlayPresentInfo@CDWMSwapChain@@UEAAJ_NW4DXGI_HDR_METADATA_TYPE@@PEBXIPEAU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@Z @ 0x18007CCD0 (-SetMultiplaneOverlayPresentInfo@CDWMSwapChain@@UEAAJ_NW4DXGI_HDR_METADATA_TYPE@@PEBXIPEAU_DXGI_.c)
 * Callees:
 *     <none>
 */

void __fastcall CDWMSwapChain::SetHDRMetaData(CDWMSwapChain *this, enum DXGI_HDR_METADATA_TYPE a2, const void *a3)
{
  *((_DWORD *)this + 138) = a2;
  *((_QWORD *)this + 70) = a3;
}
