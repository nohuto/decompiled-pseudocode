/*
 * XREFs of ?Create@CResampleLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@MMW4Enum@CompositionResampleMode@@PEAPEAV1@@Z @ 0x18014D4D0
 * Callers:
 *     ?PushResampleLayer@CDrawingContext@@AEAAJPEBVCVisual@@W4Enum@CompositionResampleMode@@AEBUMilPointAndSizeL@@MM@Z @ 0x18013E270 (-PushResampleLayer@CDrawingContext@@AEAAJPEBVCVisual@@W4Enum@CompositionResampleMode@@AEBUMilPoi.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x180001680 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007950C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateRenderTargetBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUMilPointAndSizeL@@AEBUPixelFormatInfo@@U_LUID@@VDisplayId@@_N55PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800812B8 (-CreateRenderTargetBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUMilPointAndSizeL@@AEBUPixelFo.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ??0CResampleLayer@@IEAA@AEBUMilPointAndSizeL@@MMW4Enum@CompositionResampleMode@@PEAVIRenderTargetBitmap@@@Z @ 0x18014D258 (--0CResampleLayer@@IEAA@AEBUMilPointAndSizeL@@MMW4Enum@CompositionResampleMode@@PEAVIRenderTarge.c)
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
  signed int v11; // eax
  unsigned int v12; // ebx
  char v13; // al
  __int64 v14; // rax
  unsigned int v16; // [rsp+28h] [rbp-69h]
  unsigned int v17; // [rsp+58h] [rbp-39h] BYREF
  struct IRenderTargetBitmap *v18; // [rsp+60h] [rbp-31h] BYREF
  __int64 v19; // [rsp+68h] [rbp-29h] BYREF
  int v20; // [rsp+70h] [rbp-21h]
  __int64 v21; // [rsp+78h] [rbp-19h] BYREF
  __int64 v22; // [rsp+80h] [rbp-11h] BYREF
  const char *v23; // [rsp+88h] [rbp-9h] BYREF
  int v24; // [rsp+90h] [rbp-1h]

  v18 = 0LL;
  v22 = 0LL;
  v17 = 0;
  *a6 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64 *, const char **))(*a1 + 24))(a1, &v23);
  v9 = *(_QWORD *)v8;
  v20 = *(_DWORD *)(v8 + 8);
  v10 = *a1;
  v19 = (unsigned int)v9 | 0x100000000LL;
  v11 = (*(__int64 (__fastcall **)(__int64 *, __int64 *, unsigned int *))(v10 + 88))(a1, &v21, &v17);
  v12 = v11;
  if ( v11 < 0 )
  {
    v16 = 138;
    goto LABEL_9;
  }
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v18);
  v24 = 39;
  v23 = "DWM Scratch Rendertarget (ResampleLayer";
  v13 = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 152))(a1);
  v11 = CExternalLayer::CreateRenderTargetBitmap((__int64)&v23, a2, &v19, v21, v17, v13, 1, 1, (__int64 *)&v18);
  v12 = v11;
  if ( v11 < 0 )
  {
    v16 = 149;
LABEL_9:
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v11, v16);
    goto LABEL_10;
  }
  v14 = (__int64)HeapAlloc(WPF::g_processHeap, 0, 0x80uLL);
  if ( v14 )
    v14 = CResampleLayer::CResampleLayer(v14, a2, a3, a4, a5, v18);
  *a6 = v14;
  if ( !v14 )
  {
    v12 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x9Eu);
  }
LABEL_10:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v22);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v18);
  return v12;
}
