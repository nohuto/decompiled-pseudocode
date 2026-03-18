/*
 * XREFs of ?Create@CHDRToSDRToneMapLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@W4DXGI_COLOR_SPACE_TYPE@@W4DXGI_FORMAT@@PEAPEAV1@@Z @ 0x18014B47C
 * Callers:
 *     ?PushHDRToneMapVPBltLayer@CDrawingContext@@QEAAJXZ @ 0x18013DFD0 (-PushHDRToneMapVPBltLayer@CDrawingContext@@QEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CreateRenderTargetBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUMilPointAndSizeL@@AEBUPixelFormatInfo@@U_LUID@@VDisplayId@@_N55PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800812B8 (-CreateRenderTargetBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUMilPointAndSizeL@@AEBUPixelFo.c)
 *     ??0CExternalLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@@Z @ 0x180081418 (--0CExternalLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@@Z.c)
 *     ?HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z @ 0x1800823E4 (-HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
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
  __int64 (__fastcall *v10)(struct IRenderTarget *, struct CHDRToSDRToneMapLayer ***, unsigned int *); // rax
  signed int v11; // eax
  unsigned int v12; // edi
  char v13; // al
  signed int v14; // eax
  CExternalLayer *v15; // rax
  CExternalLayer *v16; // rbx
  __int64 v18; // [rsp+50h] [rbp-20h] BYREF
  int v19; // [rsp+58h] [rbp-18h]
  const char *v20; // [rsp+60h] [rbp-10h] BYREF
  int v21; // [rsp+68h] [rbp-8h]
  struct IRenderTargetBitmap *v22; // [rsp+A0h] [rbp+30h] BYREF
  unsigned int v23; // [rsp+B8h] [rbp+48h] BYREF

  v5 = a5;
  v6 = 0LL;
  v23 = 0;
  v22 = 0LL;
  v19 = 1;
  *a5 = 0LL;
  LODWORD(v18) = 10;
  v9 = (unsigned int)HasAlphaChannel(10) != 0 ? 0xFFFFFFFE : 0;
  v10 = *(__int64 (__fastcall **)(struct IRenderTarget *, struct CHDRToSDRToneMapLayer ***, unsigned int *))(*(_QWORD *)a1 + 88LL);
  HIDWORD(v18) = v9 + 3;
  v11 = v10(a1, &a5, &v23);
  v12 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v11, 0x1Eu);
  }
  else
  {
    v21 = 52;
    v20 = "DWM Scratch Rendertarget (video processor blt layer)";
    v13 = (*(__int64 (__fastcall **)(struct IRenderTarget *))(*(_QWORD *)a1 + 152LL))(a1);
    v14 = CExternalLayer::CreateRenderTargetBitmap(
            (__int64)&v20,
            a2,
            &v18,
            (__int64)a5,
            v23,
            v13,
            1,
            0,
            (__int64 *)&v22);
    v12 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v14, 0x29u);
      v6 = v22;
    }
    else
    {
      v15 = (CExternalLayer *)operator new(0x70uLL);
      v6 = v22;
      v16 = v15;
      if ( v15 )
      {
        CExternalLayer::CExternalLayer(v15, a2, v22);
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
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x2Du);
      }
    }
  }
  ReleaseInterfaceNoNULL<CManipulationManager>((__int64)v6);
  return v12;
}
