/*
 * XREFs of ?Create@CColorTransformLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0BG@@@PEAPEAV1@@Z @ 0x1801749E8
 * Callers:
 *     ?PushColorTransformLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0BG@@@@Z @ 0x1801620D8 (-PushColorTransformLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAV-$TValueResource@UMilColorTransf.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z @ 0x1800213F4 (--$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z.c)
 *     ?CreateRenderTargetBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUMilPointAndSizeL@@AEBUPixelFormatInfo@@U_LUID@@VDisplayId@@_N55PEAPEAVIRenderTargetBitmap@@@Z @ 0x18002472C (-CreateRenderTargetBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUMilPointAndSizeL@@AEBUPixelFo.c)
 *     ??0CExternalLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@@Z @ 0x18002488C (--0CExternalLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180025210 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CColorTransformLayer::Create(
        __int64 *a1,
        const struct MilPointAndSizeL *a2,
        __int64 a3,
        CExternalLayer **a4)
{
  struct IRenderTargetBitmap *v4; // rsi
  __int64 v6; // rax
  int v10; // eax
  unsigned int v11; // edi
  char v12; // al
  int RenderTargetBitmap; // eax
  CExternalLayer *v14; // rax
  CExternalLayer *v15; // rbx
  int v17; // [rsp+50h] [rbp-19h] BYREF
  struct IRenderTargetBitmap *v18; // [rsp+58h] [rbp-11h] BYREF
  struct _LUID v19; // [rsp+60h] [rbp-9h] BYREF
  const char *v20; // [rsp+68h] [rbp-1h] BYREF
  int v21; // [rsp+70h] [rbp+7h]
  _BYTE v22[16]; // [rsp+78h] [rbp+Fh] BYREF

  v4 = 0LL;
  *a4 = 0LL;
  v6 = *a1;
  v17 = 0;
  v18 = 0LL;
  (*(void (__fastcall **)(__int64 *, _BYTE *))(v6 + 24))(a1, v22);
  v10 = (*(__int64 (__fastcall **)(__int64 *, struct _LUID *, int *))(*a1 + 136))(a1, &v19, &v17);
  v11 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x18u);
  }
  else
  {
    v21 = 48;
    v20 = "DWM Scratch Rendertarget (color transform layer)";
    v12 = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 160))(a1);
    RenderTargetBitmap = CExternalLayer::CreateRenderTargetBitmap(
                           (__int64)&v20,
                           a2,
                           (__int64)v22,
                           v19,
                           v17,
                           v12,
                           1,
                           0,
                           (__int64 *)&v18);
    v11 = RenderTargetBitmap;
    if ( RenderTargetBitmap < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, RenderTargetBitmap, 0x25u);
      v4 = v18;
    }
    else
    {
      v14 = (CExternalLayer *)operator new(0x78uLL);
      v4 = v18;
      v15 = v14;
      if ( v14 )
      {
        CExternalLayer::CExternalLayer(v14, a2, v18);
        *((_QWORD *)v15 + 14) = a3;
        *(_QWORD *)v15 = &CColorTransformLayer::`vftable';
      }
      else
      {
        v15 = 0LL;
      }
      *a4 = v15;
      if ( !v15 )
      {
        v11 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x2Au);
      }
    }
  }
  ReleaseInterfaceNoNULL<IWICBitmap>((__int64)v4);
  return v11;
}
