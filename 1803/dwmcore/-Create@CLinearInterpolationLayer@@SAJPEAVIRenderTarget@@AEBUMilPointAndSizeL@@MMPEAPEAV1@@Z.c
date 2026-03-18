/*
 * XREFs of ?Create@CLinearInterpolationLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@MMPEAPEAV1@@Z @ 0x180176188
 * Callers:
 *     ?PushLinearInterpolationLayer@CDrawingContext@@AEAAJAEBUMilPointAndSizeL@@MM@Z @ 0x1801622D8 (-PushLinearInterpolationLayer@CDrawingContext@@AEAAJAEBUMilPointAndSizeL@@MM@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z @ 0x1800213F4 (--$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z.c)
 *     ?CreateRenderTargetBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUMilPointAndSizeL@@AEBUPixelFormatInfo@@U_LUID@@VDisplayId@@_N55PEAPEAVIRenderTargetBitmap@@@Z @ 0x18002472C (-CreateRenderTargetBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUMilPointAndSizeL@@AEBUPixelFo.c)
 *     ??2@YAPEAX_K@Z @ 0x180025210 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ??0CLinearInterpolationLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@MM@Z @ 0x180175FC8 (--0CLinearInterpolationLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@MM@Z.c)
 */

__int64 __fastcall CLinearInterpolationLayer::Create(
        struct IRenderTarget *a1,
        const struct MilPointAndSizeL *a2,
        float a3,
        float a4,
        struct CLinearInterpolationLayer **a5)
{
  struct IRenderTargetBitmap *v5; // rdi
  int v8; // eax
  unsigned int v9; // ebx
  char v10; // al
  int RenderTargetBitmap; // eax
  CLinearInterpolationLayer *v12; // rax
  int v14; // [rsp+58h] [rbp-31h] BYREF
  struct IRenderTargetBitmap *v15; // [rsp+60h] [rbp-29h] BYREF
  struct _LUID v16; // [rsp+68h] [rbp-21h] BYREF
  const char *v17; // [rsp+70h] [rbp-19h] BYREF
  int v18; // [rsp+78h] [rbp-11h]
  _BYTE v19[16]; // [rsp+80h] [rbp-9h] BYREF

  v5 = 0LL;
  v14 = 0;
  v15 = 0LL;
  *a5 = 0LL;
  (*(void (__fastcall **)(struct IRenderTarget *, _BYTE *))(*(_QWORD *)a1 + 24LL))(a1, v19);
  v8 = (*(__int64 (__fastcall **)(struct IRenderTarget *, struct _LUID *, int *))(*(_QWORD *)a1 + 136LL))(
         a1,
         &v16,
         &v14);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x19u);
  }
  else
  {
    v18 = 52;
    v17 = "DWM Scratch Rendertarget (linear interpolation layer";
    v10 = (*(__int64 (__fastcall **)(struct IRenderTarget *))(*(_QWORD *)a1 + 160LL))(a1);
    RenderTargetBitmap = CExternalLayer::CreateRenderTargetBitmap(
                           (__int64)&v17,
                           a2,
                           (__int64)v19,
                           v16,
                           v14,
                           v10,
                           1,
                           0,
                           (__int64 *)&v15);
    v9 = RenderTargetBitmap;
    if ( RenderTargetBitmap < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, RenderTargetBitmap, 0x26u);
      v5 = v15;
    }
    else
    {
      v12 = (CLinearInterpolationLayer *)operator new(0x88uLL);
      v5 = v15;
      if ( v12 )
        v12 = CLinearInterpolationLayer::CLinearInterpolationLayer(v12, a2, v15, a3, a4);
      *a5 = v12;
      if ( !v12 )
      {
        v9 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x2Cu);
      }
    }
  }
  ReleaseInterfaceNoNULL<IWICBitmap>((__int64)v5);
  return v9;
}
