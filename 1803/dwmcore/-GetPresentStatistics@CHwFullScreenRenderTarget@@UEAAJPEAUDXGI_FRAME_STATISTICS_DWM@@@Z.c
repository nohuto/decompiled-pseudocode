/*
 * XREFs of ?GetPresentStatistics@CHwFullScreenRenderTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z @ 0x18007BAA0
 * Callers:
 *     ?GetPresentStatistics@CHwndRenderTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UNSIGNED_RATIO@@@Z @ 0x1800609D0 (-GetPresentStatistics@CHwndRenderTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UNSIGNED_RATIO.c)
 * Callees:
 *     ?IsValid@CHwDisplayRenderTarget@@UEBA_NXZ @ 0x180046690 (-IsValid@CHwDisplayRenderTarget@@UEBA_NXZ.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180059E10 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetFrameStatisticsInternal@CDWMSwapChain@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z @ 0x18007CFB0 (-GetFrameStatisticsInternal@CDWMSwapChain@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::GetPresentStatistics(
        CHwFullScreenRenderTarget *this,
        struct DXGI_FRAME_STATISTICS_DWM *a2)
{
  __int64 v2; // rax
  CHwDisplayRenderTarget *v4; // rcx
  int v6; // edi
  __int64 (*v7)(void); // rax
  char IsValid; // al
  int v9; // ebx
  CDWMSwapChain *v10; // rcx
  __int64 (__fastcall *v11)(CDWMSwapChain *__hidden, struct DXGI_FRAME_STATISTICS_DWM *); // rax
  int FrameStatisticsInternal; // eax
  unsigned int v14; // [rsp+40h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 1);
  v4 = (CHwFullScreenRenderTarget *)((char *)this - 216);
  if ( v2 )
  {
    v6 = *(_DWORD *)(v2 + 888);
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180240F48, 2u, v6, 0x36Au);
    }
    else
    {
      v7 = *(__int64 (**)(void))(*(_QWORD *)v4 + 32LL);
      if ( (char *)v7 == (char *)CHwDisplayRenderTarget::IsValid )
        IsValid = CHwDisplayRenderTarget::IsValid(v4);
      else
        IsValid = v7();
      if ( !IsValid )
      {
        v6 = -2003304442;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180240F48, 2u, -2003304442, 0x374u);
        v9 = -2003304442;
        v14 = -2003304442;
        goto LABEL_16;
      }
    }
  }
  else
  {
    v6 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180240F48, 2u, -2003304307, 0x36Eu);
  }
  v9 = v6;
  v14 = v6;
  if ( v6 < 0 )
  {
LABEL_16:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18023A090, 1u, v6, 0xEEu);
    goto LABEL_11;
  }
  v10 = (CDWMSwapChain *)*((_QWORD *)this + 4);
  v11 = *(__int64 (__fastcall **)(CDWMSwapChain *__hidden, struct DXGI_FRAME_STATISTICS_DWM *))(*(_QWORD *)v10 + 312LL);
  if ( v11 == CDWMSwapChain::GetFrameStatisticsInternal )
    FrameStatisticsInternal = CDWMSwapChain::GetFrameStatisticsInternal(v10, a2);
  else
    FrameStatisticsInternal = v11(v10, a2);
  v14 = FrameStatisticsInternal;
  v9 = FrameStatisticsInternal;
  if ( FrameStatisticsInternal < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18023A090, 1u, FrameStatisticsInternal, 0xF0u);
LABEL_11:
  TranslateDXGIorD3DErrorInContext(v9, 0, &v14);
  return v14;
}
