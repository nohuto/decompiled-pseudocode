/*
 * XREFs of ?Create@CGammaBlendLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@PEAPEAV1@@Z @ 0x1801769A8
 * Callers:
 *     ?PushGammaBlendLayer@CDrawingContext@@QEAAJAEBUMilPointAndSizeL@@@Z @ 0x180162198 (-PushGammaBlendLayer@CDrawingContext@@QEAAJAEBUMilPointAndSizeL@@@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z @ 0x1800213F4 (--$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z.c)
 *     ?CreateRenderTargetBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUMilPointAndSizeL@@AEBUPixelFormatInfo@@U_LUID@@VDisplayId@@_N55PEAPEAVIRenderTargetBitmap@@@Z @ 0x18002472C (-CreateRenderTargetBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUMilPointAndSizeL@@AEBUPixelFo.c)
 *     ??0CExternalLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@@Z @ 0x18002488C (--0CExternalLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180025210 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGammaBlendLayer::Create(
        struct IRenderTarget *a1,
        const struct MilPointAndSizeL *a2,
        struct CGammaBlendLayer **a3)
{
  struct IRenderTargetBitmap *v3; // rsi
  __int64 v5; // rax
  __int64 v8; // xmm0_8
  __int64 v9; // rax
  __int64 (__fastcall *v10)(struct IRenderTarget *, struct _LUID *, int *); // rax
  int v11; // eax
  unsigned int v12; // edi
  char v13; // al
  int RenderTargetBitmap; // eax
  CExternalLayer *v15; // rax
  struct CGammaBlendLayer *v16; // rbx
  int v18; // [rsp+50h] [rbp-9h] BYREF
  struct IRenderTargetBitmap *v19; // [rsp+58h] [rbp-1h] BYREF
  __int64 v20; // [rsp+60h] [rbp+7h] BYREF
  int v21; // [rsp+68h] [rbp+Fh]
  struct _LUID v22; // [rsp+70h] [rbp+17h] BYREF
  const char *v23; // [rsp+78h] [rbp+1Fh] BYREF
  int v24; // [rsp+80h] [rbp+27h]

  v3 = 0LL;
  *a3 = 0LL;
  v5 = *(_QWORD *)a1;
  v18 = 0;
  v19 = 0LL;
  v8 = *(_QWORD *)(*(__int64 (__fastcall **)(struct IRenderTarget *, const char **))(v5 + 24))(a1, &v23);
  v21 = 0;
  v20 = v8;
  v9 = *(_QWORD *)a1;
  HIDWORD(v20) = 1;
  v10 = *(__int64 (__fastcall **)(struct IRenderTarget *, struct _LUID *, int *))(v9 + 136);
  LODWORD(v20) = CCommonRegistryData::m_fGammaBlendWithFP16 != 0 ? 10 : 28;
  v11 = v10(a1, &v22, &v18);
  v12 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x28u);
  }
  else
  {
    v24 = 44;
    v23 = "DWM Scratch Rendertarget (gamma blend layer)";
    v13 = (*(__int64 (__fastcall **)(struct IRenderTarget *))(*(_QWORD *)a1 + 160LL))(a1);
    RenderTargetBitmap = CExternalLayer::CreateRenderTargetBitmap(
                           (__int64)&v23,
                           a2,
                           (__int64)&v20,
                           v22,
                           v18,
                           v13,
                           1,
                           0,
                           (__int64 *)&v19);
    v12 = RenderTargetBitmap;
    if ( RenderTargetBitmap < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, RenderTargetBitmap, 0x33u);
      v3 = v19;
    }
    else
    {
      v15 = (CExternalLayer *)operator new(0x70uLL);
      v3 = v19;
      v16 = v15;
      if ( v15 )
      {
        CExternalLayer::CExternalLayer(v15, a2, v19);
        *(_QWORD *)v16 = &CGammaBlendLayer::`vftable';
      }
      else
      {
        v16 = 0LL;
      }
      *a3 = v16;
      if ( !v16 )
      {
        v12 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x37u);
      }
    }
  }
  ReleaseInterfaceNoNULL<IWICBitmap>((__int64)v3);
  return v12;
}
