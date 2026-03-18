/*
 * XREFs of ?Create@CHDRToSDRToneMapLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@W4DXGI_COLOR_SPACE_TYPE@@W4DXGI_FORMAT@@PEAPEAV1@@Z @ 0x1801742EC
 * Callers:
 *     ?PushHDRToneMapVPBltLayer@CDrawingContext@@QEAAJXZ @ 0x180162224 (-PushHDRToneMapVPBltLayer@CDrawingContext@@QEAAJXZ.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z @ 0x1800213F4 (--$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z.c)
 *     ?HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z @ 0x180021D84 (-HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z.c)
 *     ?CreateRenderTargetBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUMilPointAndSizeL@@AEBUPixelFormatInfo@@U_LUID@@VDisplayId@@_N55PEAPEAVIRenderTargetBitmap@@@Z @ 0x18002472C (-CreateRenderTargetBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUMilPointAndSizeL@@AEBUPixelFo.c)
 *     ??0CExternalLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@@Z @ 0x18002488C (--0CExternalLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180025210 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHDRToSDRToneMapLayer::Create(
        struct IRenderTarget *a1,
        const struct MilPointAndSizeL *a2,
        enum DXGI_COLOR_SPACE_TYPE a3,
        enum DXGI_FORMAT a4,
        struct CHDRToSDRToneMapLayer **a5)
{
  struct CHDRToSDRToneMapLayer **v5; // r15
  struct IRenderTargetBitmap *v6; // rsi
  unsigned int v9; // ecx
  __int64 (__fastcall *v10)(struct IRenderTarget *, struct CHDRToSDRToneMapLayer ***, int *); // rax
  int v11; // eax
  unsigned int v12; // edi
  char v13; // al
  int RenderTargetBitmap; // eax
  CExternalLayer *v15; // rax
  CExternalLayer *v16; // rbx
  _DWORD v18[4]; // [rsp+50h] [rbp-20h] BYREF
  const char *v19; // [rsp+60h] [rbp-10h] BYREF
  int v20; // [rsp+68h] [rbp-8h]
  struct IRenderTargetBitmap *v21; // [rsp+A0h] [rbp+30h] BYREF
  int v22; // [rsp+B8h] [rbp+48h] BYREF

  v5 = a5;
  v6 = 0LL;
  v22 = 0;
  v21 = 0LL;
  v18[2] = 1;
  *a5 = 0LL;
  v18[0] = 10;
  v9 = (unsigned int)HasAlphaChannel(10) != 0 ? 0xFFFFFFFE : 0;
  v10 = *(__int64 (__fastcall **)(struct IRenderTarget *, struct CHDRToSDRToneMapLayer ***, int *))(*(_QWORD *)a1 + 136LL);
  v18[1] = v9 + 3;
  v11 = v10(a1, &a5, &v22);
  v12 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x1Eu);
  }
  else
  {
    v20 = 52;
    v19 = "DWM Scratch Rendertarget (video processor blt layer)";
    v13 = (*(__int64 (__fastcall **)(struct IRenderTarget *))(*(_QWORD *)a1 + 160LL))(a1);
    RenderTargetBitmap = CExternalLayer::CreateRenderTargetBitmap(
                           (__int64)&v19,
                           a2,
                           (__int64)v18,
                           (struct _LUID)a5,
                           v22,
                           v13,
                           1,
                           0,
                           (__int64 *)&v21);
    v12 = RenderTargetBitmap;
    if ( RenderTargetBitmap < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, RenderTargetBitmap, 0x29u);
      v6 = v21;
    }
    else
    {
      v15 = (CExternalLayer *)operator new(0x70uLL);
      v6 = v21;
      v16 = v15;
      if ( v15 )
      {
        CExternalLayer::CExternalLayer(v15, a2, v21);
        *(_QWORD *)v16 = &CHDRToSDRToneMapLayer::`vftable';
      }
      else
      {
        v16 = 0LL;
      }
      *v5 = v16;
      if ( !v16 )
      {
        v12 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x2Du);
      }
    }
  }
  ReleaseInterfaceNoNULL<IWICBitmap>((__int64)v6);
  return v12;
}
