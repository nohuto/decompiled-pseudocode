/*
 * XREFs of ?ConvertPresentToMultiplaneOverlay@CDWMSwapChain@@AEAAJIIPEAUtagRECT@@0PEAUIDXGIResource@@I0W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1801EA4A8
 * Callers:
 *     ?PresentInternal@CDWMSwapChain@@UEAAJPEBVCRegion@@IIPEBURenderTargetPresentParameters@@@Z @ 0x18007D020 (-PresentInternal@CDWMSwapChain@@UEAAJPEBVCRegion@@IIPEBURenderTargetPresentParameters@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     ?ConvertSDRBoostToSDRWhiteLevel@@YAIMW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1800DCF88 (-ConvertSDRBoostToSDRWhiteLevel@@YAIMW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?D2DPresentMultiplaneOverlay@CD2DContext@@QEAAJPEAUIDXGISwapChainDWM1@@IIW4DXGI_HDR_METADATA_TYPE@@PEBXIPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@Z @ 0x1801E1F24 (-D2DPresentMultiplaneOverlay@CD2DContext@@QEAAJPEAUIDXGISwapChainDWM1@@IIW4DXGI_HDR_METADATA_TYP.c)
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
  float v14; // xmm0_4
  int v15; // eax
  const void *v16; // r10
  struct IDXGISwapChainDWM1 *v17; // rdx
  __int64 v18; // rax
  __int64 v19; // r8
  unsigned int v20; // r9d
  int v21; // eax
  unsigned int v22; // ebx
  _BYTE v24[4]; // [rsp+40h] [rbp-A1h] BYREF
  int v25; // [rsp+44h] [rbp-9Dh]
  struct IDXGIResource *v26; // [rsp+48h] [rbp-99h]
  int v27; // [rsp+58h] [rbp-89h]
  __int128 v28; // [rsp+5Ch] [rbp-85h]
  __int128 v29; // [rsp+6Ch] [rbp-75h]
  __int128 v30; // [rsp+7Ch] [rbp-65h]
  int v31; // [rsp+8Ch] [rbp-55h]
  unsigned int v32; // [rsp+94h] [rbp-4Dh]
  struct tagRECT *v33; // [rsp+98h] [rbp-49h]
  enum DXGI_COLOR_SPACE_TYPE v34; // [rsp+A4h] [rbp-3Dh]
  int v35; // [rsp+A8h] [rbp-39h]
  int v36; // [rsp+B8h] [rbp-29h]
  int v37; // [rsp+C0h] [rbp-21h]

  memset_0(v24, 0, 0x88uLL);
  v26 = a6;
  v25 = 1;
  if ( (a4 || a5) && (v27 = 4, a4) )
  {
    v28 = (__int128)*a4;
  }
  else
  {
    *((_QWORD *)&v28 + 1) = *((_QWORD *)this + 15);
    *(_QWORD *)&v28 = 0LL;
  }
  if ( a5 )
  {
    v13 = (__int128)*a5;
    v29 = (__int128)*a5;
  }
  else
  {
    *((_QWORD *)&v29 + 1) = *((_QWORD *)this + 15);
    *(_QWORD *)&v29 = 0LL;
    v13 = v29;
  }
  v30 = v13;
  v31 = 1;
  v14 = *((float *)this + 49);
  v32 = a7;
  v33 = a8;
  v34 = a9;
  v35 = 0;
  v36 = 2;
  v15 = ConvertSDRBoostToSDRWhiteLevel(v14, a9);
  v16 = (const void *)*((_QWORD *)this + 70);
  v17 = (struct IDXGISwapChainDWM1 *)*((_QWORD *)this + 53);
  v37 = v15;
  v18 = *((_QWORD *)this + 2);
  *((_QWORD *)this + 70) = v19;
  v21 = CD2DContext::D2DPresentMultiplaneOverlay(
          *(CD2DContext **)(v18 + 80),
          v17,
          a2,
          a3,
          (enum DXGI_HDR_METADATA_TYPE)*((_DWORD *)this + 138),
          v16,
          v20,
          (const struct _DXGI_PRESENT_MULTIPLANE_OVERLAY *)v24);
  v22 = v21;
  if ( v21 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0x11Bu);
  return v22;
}
