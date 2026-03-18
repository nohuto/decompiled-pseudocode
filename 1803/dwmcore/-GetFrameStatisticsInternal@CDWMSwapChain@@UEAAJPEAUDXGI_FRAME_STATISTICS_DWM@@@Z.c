/*
 * XREFs of ?GetFrameStatisticsInternal@CDWMSwapChain@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z @ 0x18007CFB0
 * Callers:
 *     ?GetPresentStatistics@CHwFullScreenRenderTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z @ 0x18007BAA0 (-GetPresentStatistics@CHwFullScreenRenderTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z.c)
 * Callees:
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180059E10 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDWMSwapChain::GetFrameStatisticsInternal(CDWMSwapChain *this, struct DXGI_FRAME_STATISTICS_DWM *a2)
{
  int v2; // eax
  int v3; // ebx
  unsigned int v5; // [rsp+40h] [rbp+8h] BYREF

  v2 = (*(__int64 (__fastcall **)(_QWORD, struct DXGI_FRAME_STATISTICS_DWM *))(**((_QWORD **)this + 53) + 160LL))(
         *((_QWORD *)this + 53),
         a2);
  v5 = v2;
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180277AD8, 2u, v2, 0x29Eu);
  TranslateDXGIorD3DErrorInContext(v3, 0, &v5);
  return v5;
}
