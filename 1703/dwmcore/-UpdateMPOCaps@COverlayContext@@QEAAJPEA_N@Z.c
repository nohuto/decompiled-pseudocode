/*
 * XREFs of ?UpdateMPOCaps@COverlayContext@@QEAAJPEA_N@Z @ 0x180072344
 * Callers:
 *     ?UpdateMPOCaps@CRenderTargetManager@@QEAAJXZ @ 0x18006B768 (-UpdateMPOCaps@CRenderTargetManager@@QEAAJXZ.c)
 *     ?HandleWindowErrors@CHwndRenderTarget@@IEAAJJ@Z @ 0x18006C4C0 (-HandleWindowErrors@CHwndRenderTarget@@IEAAJJ@Z.c)
 *     ?CheckDeviceState@CHwndRenderTarget@@UEAAJXZ @ 0x18006CA20 (-CheckDeviceState@CHwndRenderTarget@@UEAAJXZ.c)
 *     ?GetPresentStatistics@CHwndRenderTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UNSIGNED_RATIO@@@Z @ 0x18006CB70 (-GetPresentStatistics@CHwndRenderTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UNSIGNED_RATIO.c)
 *     ?Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z @ 0x18006E340 (-Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetMultiplaneOverlayCaps@COverlayContext@@AEAAJPEAUDXGI_MULTIPLANE_OVERLAY_CAPS@@@Z @ 0x180071998 (-GetMultiplaneOverlayCaps@COverlayContext@@AEAAJPEAUDXGI_MULTIPLANE_OVERLAY_CAPS@@@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 */

__int64 __fastcall COverlayContext::UpdateMPOCaps(COverlayContext *this, bool *a2)
{
  bool v4; // bp
  int MultiplaneOverlayCaps; // eax
  unsigned int v6; // edi
  int v7; // eax
  int v8; // ecx
  __int128 v9; // xmm1
  __int64 v10; // xmm0_8
  unsigned int v11; // edx
  __int64 v12; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  _OWORD v16[2]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v17; // [rsp+50h] [rbp-38h]
  int v18; // [rsp+58h] [rbp-30h]

  memset_0(v16, 0, 0x2CuLL);
  v4 = 0;
  MultiplaneOverlayCaps = COverlayContext::GetMultiplaneOverlayCaps(this, (struct DXGI_MULTIPLANE_OVERLAY_CAPS *)v16);
  v6 = MultiplaneOverlayCaps;
  if ( MultiplaneOverlayCaps < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, MultiplaneOverlayCaps, 0x5D5u);
  }
  else
  {
    v7 = *((_DWORD *)this + 66);
    v8 = v18;
    v9 = v16[1];
    *((_OWORD *)this + 8) = v16[0];
    v10 = v17;
    *((_OWORD *)this + 9) = v9;
    *((_QWORD *)this + 20) = v10;
    *((_DWORD *)this + 42) = v8;
    if ( v7 || *((_BYTE *)this + 1097) )
    {
      *((_BYTE *)this + 1102) = 1;
      v4 = 1;
    }
    v11 = 0;
    if ( v7 )
    {
      do
      {
        v14 = v11++;
        v15 = 240 * v14;
        *(_DWORD *)(v15 + *((_QWORD *)this + 30) + 200) = 0;
        *(_DWORD *)(v15 + *((_QWORD *)this + 30) + 204) = 0;
      }
      while ( v11 < *((_DWORD *)this + 66) );
    }
    v12 = *((_QWORD *)this + 121);
    if ( v12 )
    {
      *(_DWORD *)(v12 + 92) = 0;
      *(_DWORD *)(v12 + 96) = 0;
    }
  }
  if ( a2 )
    *a2 = v4;
  return v6;
}
