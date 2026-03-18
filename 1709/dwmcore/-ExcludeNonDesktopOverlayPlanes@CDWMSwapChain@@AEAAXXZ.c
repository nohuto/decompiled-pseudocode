/*
 * XREFs of ?ExcludeNonDesktopOverlayPlanes@CDWMSwapChain@@AEAAXXZ @ 0x1801B0454
 * Callers:
 *     ?PresentInternal@CDWMSwapChain@@UEAAJPEBVCRegion@@IIPEAURenderTargetPresentParameters@@@Z @ 0x18002E6B0 (-PresentInternal@CDWMSwapChain@@UEAAJPEBVCRegion@@IIPEAURenderTargetPresentParameters@@@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 */

void __fastcall CDWMSwapChain::ExcludeNonDesktopOverlayPlanes(CDWMSwapChain *this)
{
  int v2; // ebx
  __int64 v3; // rdi
  __int64 v4; // rbp
  __int64 v5; // rcx

  v2 = *((_DWORD *)this + 133) - 1;
  v3 = v2;
  if ( v2 >= 0 )
  {
    v4 = 136LL * v2;
    do
    {
      v5 = *(_QWORD *)(*((_QWORD *)this + 67) + v4 + 8);
      if ( !v5 )
        break;
      ReleaseInterfaceNoNULL<CManipulationManager>(v5);
      --v2;
      v4 -= 136LL;
      --v3;
    }
    while ( v3 >= 0 );
  }
  *((_DWORD *)this + 133) = v2 + 1;
}
