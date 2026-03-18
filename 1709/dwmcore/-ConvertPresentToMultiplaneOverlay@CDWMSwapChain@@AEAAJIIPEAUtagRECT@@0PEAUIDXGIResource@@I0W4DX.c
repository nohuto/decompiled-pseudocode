/*
 * XREFs of ?ConvertPresentToMultiplaneOverlay@CDWMSwapChain@@AEAAJIIPEAUtagRECT@@0PEAUIDXGIResource@@I0W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1801AFF98
 * Callers:
 *     ?PresentInternal@CDWMSwapChain@@UEAAJPEBVCRegion@@IIPEAURenderTargetPresentParameters@@@Z @ 0x18002E6B0 (-PresentInternal@CDWMSwapChain@@UEAAJPEBVCRegion@@IIPEAURenderTargetPresentParameters@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$SAFE_DELETE_ARRAY@W4D2D1_POLYGON_EDGE_FLAG@@@@YAXAEAPEAW4D2D1_POLYGON_EDGE_FLAG@@@Z @ 0x1800BE440 (--$SAFE_DELETE_ARRAY@W4D2D1_POLYGON_EDGE_FLAG@@@@YAXAEAPEAW4D2D1_POLYGON_EDGE_FLAG@@@Z.c)
 *     ?D2DPresentMultiplaneOverlay@CD2DContext@@QEAAJPEAUIDXGISwapChainDWM1@@IIW4DXGI_HDR_METADATA_TYPE@@PEBXIPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@Z @ 0x1801A99C4 (-D2DPresentMultiplaneOverlay@CD2DContext@@QEAAJPEAUIDXGISwapChainDWM1@@IIW4DXGI_HDR_METADATA_TYP.c)
 *     ?EnsureConvertedPlanes@CDWMSwapChain@@AEAAJXZ @ 0x1801B034C (-EnsureConvertedPlanes@CDWMSwapChain@@AEAAJXZ.c)
 */

__int64 __fastcall CDWMSwapChain::ConvertPresentToMultiplaneOverlay(
        CDWMSwapChain *this,
        unsigned int a2,
        unsigned int a3,
        struct tagRECT *a4,
        struct tagRECT *a5,
        struct IDXGIResource *a6,
        unsigned int a7,
        struct tagRECT *a8,
        enum DXGI_COLOR_SPACE_TYPE a9)
{
  signed int v13; // eax
  unsigned int v14; // edi
  __int64 v15; // rax
  const void *v16; // rdx
  __int64 v17; // rax
  signed int v18; // eax
  int v19; // eax

  v13 = CDWMSwapChain::EnsureConvertedPlanes(this);
  v14 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v13, 0x107u);
    goto LABEL_14;
  }
  *(_QWORD *)(*((_QWORD *)this + 71) + 8LL) = a6;
  if ( !a4 && !a5 )
  {
    *(_DWORD *)(*((_QWORD *)this + 71) + 24LL) = 0;
LABEL_5:
    *(_DWORD *)(*((_QWORD *)this + 71) + 28LL) = 0;
    *(_DWORD *)(*((_QWORD *)this + 71) + 32LL) = 0;
    *(_DWORD *)(*((_QWORD *)this + 71) + 36LL) = *((_DWORD *)this + 30);
    *(_DWORD *)(*((_QWORD *)this + 71) + 40LL) = *((_DWORD *)this + 31);
    goto LABEL_6;
  }
  *(_DWORD *)(*((_QWORD *)this + 71) + 24LL) = 4;
  if ( !a4 )
    goto LABEL_5;
  *(struct tagRECT *)(*((_QWORD *)this + 71) + 28LL) = *a4;
LABEL_6:
  v15 = *((_QWORD *)this + 71);
  if ( a5 )
  {
    *(struct tagRECT *)(v15 + 44) = *a5;
  }
  else
  {
    *(_DWORD *)(v15 + 44) = 0;
    *(_DWORD *)(*((_QWORD *)this + 71) + 48LL) = 0;
    *(_DWORD *)(*((_QWORD *)this + 71) + 52LL) = *((_DWORD *)this + 30);
    *(_DWORD *)(*((_QWORD *)this + 71) + 56LL) = *((_DWORD *)this + 31);
  }
  *(_OWORD *)(*((_QWORD *)this + 71) + 60LL) = *(_OWORD *)(*((_QWORD *)this + 71) + 44LL);
  *(_DWORD *)(*((_QWORD *)this + 71) + 84LL) = a7;
  *(_QWORD *)(*((_QWORD *)this + 71) + 88LL) = a8;
  *(_DWORD *)(*((_QWORD *)this + 71) + 100LL) = a9;
  v16 = (const void *)*((_QWORD *)this + 69);
  v17 = *((_QWORD *)this + 2);
  *((_QWORD *)this + 69) = 0LL;
  v18 = CD2DContext::D2DPresentMultiplaneOverlay(
          *(CD2DContext **)(v17 + 80),
          *((struct IDXGISwapChainDWM1 **)this + 52),
          a2,
          a3,
          (enum DXGI_HDR_METADATA_TYPE)*((_DWORD *)this + 136),
          v16,
          *((_DWORD *)this + 141),
          *((const struct _DXGI_PRESENT_MULTIPLANE_OVERLAY **)this + 71));
  v14 = v18;
  if ( v18 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v18, 0x13Fu);
LABEL_14:
  v19 = *((_DWORD *)this + 140);
  if ( *((_DWORD *)this + 141) != v19 )
  {
    *((_DWORD *)this + 141) = v19;
    SAFE_DELETE_ARRAY<enum D2D1_POLYGON_EDGE_FLAG>((void **)this + 71);
  }
  return v14;
}
