/*
 * XREFs of ?ReleaseMultiplaneOverlayPresentInfo@CDWMSwapChain@@AEAAXXZ @ 0x1800D86DC
 * Callers:
 *     ??1CDWMSwapChain@@MEAA@XZ @ 0x1800D875C (--1CDWMSwapChain@@MEAA@XZ.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z @ 0x1800213F4 (--$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z.c)
 *     ??$SAFE_DELETE_ARRAY@W4D2D1_POLYGON_EDGE_FLAG@@@@YAXAEAPEAW4D2D1_POLYGON_EDGE_FLAG@@@Z @ 0x1800D881C (--$SAFE_DELETE_ARRAY@W4D2D1_POLYGON_EDGE_FLAG@@@@YAXAEAPEAW4D2D1_POLYGON_EDGE_FLAG@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDWMSwapChain::ReleaseMultiplaneOverlayPresentInfo(CDWMSwapChain *this)
{
  unsigned int v2; // edi
  _QWORD *i; // rsi

  (*(void (__fastcall **)(CDWMSwapChain *, _QWORD, _QWORD))(*(_QWORD *)this + 112LL))(this, 0LL, 0LL);
  v2 = 0;
  for ( i = (_QWORD *)((char *)this + 544); v2 < *((_DWORD *)this + 135); ++v2 )
    ReleaseInterfaceNoNULL<IWICBitmap>(*(_QWORD *)(136LL * v2 + *i + 8));
  SAFE_DELETE_ARRAY<enum D2D1_POLYGON_EDGE_FLAG>((char *)this + 544);
  *i = 0LL;
  *((_DWORD *)this + 135) = 0;
  *((_BYTE *)this + 576) = 0;
}
