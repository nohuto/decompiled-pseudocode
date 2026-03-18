/*
 * XREFs of ?GetPresentStatistics@CHwFullScreenRenderTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z @ 0x1800700A0
 * Callers:
 *     ?GetPresentStatistics@CHwndRenderTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UNSIGNED_RATIO@@@Z @ 0x18006CB70 (-GetPresentStatistics@CHwndRenderTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UNSIGNED_RATIO.c)
 * Callees:
 *     ?IsValid@CHwDisplayRenderTarget@@UEBA_NXZ @ 0x180039C30 (-IsValid@CHwDisplayRenderTarget@@UEBA_NXZ.c)
 *     ?GetFrameStatisticsInternal@CDWMSwapChain@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z @ 0x18003E050 (-GetFrameStatisticsInternal@CDWMSwapChain@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18008F260 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
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
  unsigned int v9; // ebx
  CDWMSwapChain *v10; // rcx
  __int64 (__fastcall *v11)(CDWMSwapChain *, struct DXGI_FRAME_STATISTICS_DWM *); // rax
  int FrameStatisticsInternal; // eax
  int v14; // r9d
  unsigned int v15; // [rsp+20h] [rbp-18h]
  unsigned int v16; // [rsp+40h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 1);
  v4 = (CHwFullScreenRenderTarget *)((char *)this - 176);
  if ( v2 )
  {
    v6 = *(_DWORD *)(v2 + 872);
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_1801E9F58, 2u, v6, 0x516u);
    }
    else
    {
      v7 = *(__int64 (**)(void))(*(_QWORD *)v4 + 48LL);
      if ( (char *)v7 == (char *)CHwDisplayRenderTarget::IsValid )
        IsValid = CHwDisplayRenderTarget::IsValid(v4);
      else
        IsValid = v7();
      if ( !IsValid )
      {
        v6 = -2003304442;
        MilInstrumentationCheckHR(0x14u, &dword_1801E9F58, 2u, -2003304442, 0x522u);
        v9 = -2003304442;
        v16 = -2003304442;
        goto LABEL_16;
      }
    }
  }
  else
  {
    v6 = -2003304307;
    MilInstrumentationCheckHR(0x14u, &dword_1801E9F58, 2u, -2003304307, 0x51Au);
  }
  v9 = v6;
  v16 = v6;
  if ( v6 < 0 )
  {
LABEL_16:
    v15 = 390;
    v14 = v6;
LABEL_17:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, v15);
    goto LABEL_11;
  }
  v10 = (CDWMSwapChain *)*((_QWORD *)this + 5);
  if ( !v10 )
  {
    v9 = -2003304315;
    v15 = 394;
    v16 = -2003304315;
LABEL_22:
    v14 = v9;
    goto LABEL_17;
  }
  v11 = *(__int64 (__fastcall **)(CDWMSwapChain *, struct DXGI_FRAME_STATISTICS_DWM *))(*(_QWORD *)v10 + 280LL);
  if ( v11 == CDWMSwapChain::GetFrameStatisticsInternal )
    FrameStatisticsInternal = CDWMSwapChain::GetFrameStatisticsInternal(v10, a2);
  else
    FrameStatisticsInternal = v11(v10, a2);
  v16 = FrameStatisticsInternal;
  v9 = FrameStatisticsInternal;
  if ( FrameStatisticsInternal < 0 )
  {
    v15 = 397;
    goto LABEL_22;
  }
LABEL_11:
  TranslateDXGIorD3DErrorInContext(v9, 0LL, &v16);
  return v16;
}
