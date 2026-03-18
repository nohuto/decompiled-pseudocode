/*
 * XREFs of ?Create@CResampleLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@MMW4Enum@CompositionResampleMode@@PEAPEAV1@@Z @ 0x180176E60
 * Callers:
 *     ?PushResampleLayer@CDrawingContext@@AEAAJPEBVCVisual@@W4Enum@CompositionResampleMode@@AEBUMilPointAndSizeL@@MM@Z @ 0x1801624A4 (-PushResampleLayer@CDrawingContext@@AEAAJPEBVCVisual@@W4Enum@CompositionResampleMode@@AEBUMilPoi.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800213B4 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateRenderTargetBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUMilPointAndSizeL@@AEBUPixelFormatInfo@@U_LUID@@VDisplayId@@_N55PEAPEAVIRenderTargetBitmap@@@Z @ 0x18002472C (-CreateRenderTargetBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUMilPointAndSizeL@@AEBUPixelFo.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ??0CResampleLayer@@IEAA@AEBUMilPointAndSizeL@@MMW4Enum@CompositionResampleMode@@PEAVIRenderTargetBitmap@@@Z @ 0x180176BE8 (--0CResampleLayer@@IEAA@AEBUMilPointAndSizeL@@MMW4Enum@CompositionResampleMode@@PEAVIRenderTarge.c)
 */

__int64 __fastcall CResampleLayer::Create(
        __int64 *a1,
        const struct MilPointAndSizeL *a2,
        float a3,
        float a4,
        int a5,
        __int64 *a6)
{
  __int64 v8; // rax
  __int64 v9; // xmm0_8
  __int64 v10; // rax
  int RenderTargetBitmap; // eax
  unsigned int v12; // ebx
  char v13; // al
  __int64 v14; // rax
  unsigned int v16; // [rsp+28h] [rbp-59h]
  int v17; // [rsp+58h] [rbp-29h] BYREF
  struct IRenderTargetBitmap *v18; // [rsp+60h] [rbp-21h] BYREF
  _DWORD v19[4]; // [rsp+68h] [rbp-19h] BYREF
  struct _LUID v20; // [rsp+78h] [rbp-9h] BYREF
  const char *v21; // [rsp+80h] [rbp-1h] BYREF
  int v22; // [rsp+88h] [rbp+7h]

  v18 = 0LL;
  v17 = 0;
  *a6 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64 *, const char **))(*a1 + 24))(a1, &v21);
  v9 = *(_QWORD *)v8;
  v19[2] = *(_DWORD *)(v8 + 8);
  v10 = *a1;
  v19[0] = v9;
  v19[1] = 1;
  RenderTargetBitmap = (*(__int64 (__fastcall **)(__int64 *, struct _LUID *, int *))(v10 + 136))(a1, &v20, &v17);
  v12 = RenderTargetBitmap;
  if ( RenderTargetBitmap < 0 )
  {
    v16 = 138;
    goto LABEL_9;
  }
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v18);
  v22 = 39;
  v21 = "DWM Scratch Rendertarget (ResampleLayer";
  v13 = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 160))(a1);
  RenderTargetBitmap = CExternalLayer::CreateRenderTargetBitmap(
                         (__int64)&v21,
                         a2,
                         (__int64)v19,
                         v20,
                         v17,
                         v13,
                         1,
                         1,
                         (__int64 *)&v18);
  v12 = RenderTargetBitmap;
  if ( RenderTargetBitmap < 0 )
  {
    v16 = 149;
LABEL_9:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, RenderTargetBitmap, v16);
    goto LABEL_10;
  }
  v14 = (__int64)HeapAlloc(WPF::g_processHeap, 0, 0x80uLL);
  if ( v14 )
    v14 = CResampleLayer::CResampleLayer(v14, a2, a3, a4, a5, v18);
  *a6 = v14;
  if ( !v14 )
  {
    v12 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x9Eu);
  }
LABEL_10:
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v18);
  return v12;
}
