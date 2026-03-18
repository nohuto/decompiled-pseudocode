/*
 * XREFs of ?ReleaseMultiplaneOverlayPresentInfo@CDWMSwapChain@@AEAAXXZ @ 0x1800CDFC0
 * Callers:
 *     ??1CDWMSwapChain@@MEAA@XZ @ 0x1800CE018 (--1CDWMSwapChain@@MEAA@XZ.c)
 *     ?SetMultiplaneOverlayPresentInfo@CDWMSwapChain@@UEAAJ_NW4DXGI_HDR_METADATA_TYPE@@PEBXIPEAU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@Z @ 0x1800D2530 (-SetMultiplaneOverlayPresentInfo@CDWMSwapChain@@UEAAJ_NW4DXGI_HDR_METADATA_TYPE@@PEBXIPEAU_DXGI_.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ??$SAFE_DELETE_ARRAY@U_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@@YAXAEAPEAU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@Z @ 0x180004170 (--$SAFE_DELETE_ARRAY@U_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@@YAXAEAPEAU_DXGI_PRESENT_MULTIPLANE_OVE.c)
 */

void __fastcall CDWMSwapChain::ReleaseMultiplaneOverlayPresentInfo(CDWMSwapChain *this)
{
  unsigned int v1; // ebx

  *((_DWORD *)this + 107) = 0;
  v1 = 0;
  for ( *((_QWORD *)this + 54) = 0LL; v1 < *((_DWORD *)this + 110); ++v1 )
    ReleaseInterfaceNoNULL<CD2DPencil>(*(_QWORD *)(((unsigned __int64)v1 << 7) + *((_QWORD *)this + 56) + 8));
  SAFE_DELETE_ARRAY<_DXGI_PRESENT_MULTIPLANE_OVERLAY>((void **)this + 56);
  *((_QWORD *)this + 56) = 0LL;
  *((_DWORD *)this + 110) = 0;
  *((_BYTE *)this + 462) = 0;
}
