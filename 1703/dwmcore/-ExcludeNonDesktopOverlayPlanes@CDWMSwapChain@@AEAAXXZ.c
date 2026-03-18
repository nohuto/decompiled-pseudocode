/*
 * XREFs of ?ExcludeNonDesktopOverlayPlanes@CDWMSwapChain@@AEAAXXZ @ 0x18019D410
 * Callers:
 *     ?PresentInternal@CDWMSwapChain@@UEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z @ 0x18003E0C0 (-PresentInternal@CDWMSwapChain@@UEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 */

void __fastcall CDWMSwapChain::ExcludeNonDesktopOverlayPlanes(CDWMSwapChain *this)
{
  int v2; // ebx
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // rcx

  v2 = *((_DWORD *)this + 110) - 1;
  v3 = v2;
  if ( v2 >= 0 )
  {
    v4 = (__int64)v2 << 7;
    do
    {
      v5 = *(_QWORD *)(*((_QWORD *)this + 56) + v4 + 8);
      if ( !v5 )
        break;
      ReleaseInterfaceNoNULL<CD2DPencil>(v5);
      --v2;
      v4 -= 128LL;
      --v3;
    }
    while ( v3 >= 0 );
  }
  *((_DWORD *)this + 110) = v2 + 1;
}
