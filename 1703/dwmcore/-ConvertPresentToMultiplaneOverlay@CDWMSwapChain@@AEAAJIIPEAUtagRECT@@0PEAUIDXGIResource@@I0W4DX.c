/*
 * XREFs of ?ConvertPresentToMultiplaneOverlay@CDWMSwapChain@@AEAAJIIPEAUtagRECT@@0PEAUIDXGIResource@@I0W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18019D270
 * Callers:
 *     ?PresentInternal@CDWMSwapChain@@UEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z @ 0x18003E0C0 (-PresentInternal@CDWMSwapChain@@UEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 *     ?D2DPresentMultiplaneOverlay@CD2DContext@@QEAAJPEAUIDXGISwapChainDWM1@@IIW4DXGI_HDR_METADATA_TYPE@@PEBXIPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@Z @ 0x1801981B4 (-D2DPresentMultiplaneOverlay@CD2DContext@@QEAAJPEAUIDXGISwapChainDWM1@@IIW4DXGI_HDR_METADATA_TYP.c)
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
  __int128 v13; // xmm0
  __int64 v14; // rax
  int v15; // eax
  unsigned int v16; // ebx
  _DWORD v18[2]; // [rsp+40h] [rbp-91h] BYREF
  struct IDXGIResource *v19; // [rsp+48h] [rbp-89h]
  int v20; // [rsp+58h] [rbp-79h]
  __int128 v21; // [rsp+5Ch] [rbp-75h]
  __int128 v22; // [rsp+6Ch] [rbp-65h]
  __int128 v23; // [rsp+7Ch] [rbp-55h]
  __int64 v24; // [rsp+8Ch] [rbp-45h]
  unsigned int v25; // [rsp+94h] [rbp-3Dh]
  struct tagRECT *v26; // [rsp+98h] [rbp-39h]
  int v27; // [rsp+A0h] [rbp-31h]
  enum DXGI_COLOR_SPACE_TYPE v28; // [rsp+A4h] [rbp-2Dh]
  int v29; // [rsp+A8h] [rbp-29h]
  int v30; // [rsp+B8h] [rbp-19h]

  memset_0(v18, 0, 0x80uLL);
  v19 = a6;
  v18[0] = 0;
  v18[1] = 1;
  if ( (a4 || a5) && (v20 = 4, a4) )
  {
    v21 = (__int128)*a4;
  }
  else
  {
    *((_QWORD *)&v21 + 1) = *((_QWORD *)this + 16);
    *(_QWORD *)&v21 = 0LL;
  }
  if ( a5 )
  {
    v13 = (__int128)*a5;
    v22 = (__int128)*a5;
  }
  else
  {
    *((_QWORD *)&v22 + 1) = *((_QWORD *)this + 16);
    *(_QWORD *)&v22 = 0LL;
    v13 = v22;
  }
  v25 = a7;
  v28 = a9;
  v14 = *((_QWORD *)this + 2);
  v24 = 1LL;
  v23 = v13;
  v26 = a8;
  v27 = 0;
  v29 = 0;
  v30 = 2;
  v15 = CD2DContext::D2DPresentMultiplaneOverlay(
          *(CD2DContext **)(v14 + 128),
          *((struct IDXGISwapChainDWM1 **)this + 38),
          a2,
          a3,
          (enum DXGI_HDR_METADATA_TYPE)*((_DWORD *)this + 107),
          *((const void **)this + 54),
          1u,
          (const struct _DXGI_PRESENT_MULTIPLANE_OVERLAY *)v18);
  v16 = v15;
  if ( v15 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x159u);
  return v16;
}
