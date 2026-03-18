/*
 * XREFs of ?Create@CColorSpaceLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAV1@@Z @ 0x18014B8A8
 * Callers:
 *     ?PushColorSpaceLayer@CDrawingContext@@AEAAJPEBVCVisual@@W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18013DE18 (-PushColorSpaceLayer@CDrawingContext@@AEAAJPEBVCVisual@@W4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CreateRenderTargetBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUMilPointAndSizeL@@AEBUPixelFormatInfo@@U_LUID@@VDisplayId@@_N55PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800812B8 (-CreateRenderTargetBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUMilPointAndSizeL@@AEBUPixelFo.c)
 *     ??0CExternalLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@@Z @ 0x180081418 (--0CExternalLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CColorSpaceLayer::Create(
        struct IRenderTarget *a1,
        const struct MilPointAndSizeL *a2,
        enum DXGI_COLOR_SPACE_TYPE a3,
        struct CColorSpaceLayer **a4)
{
  struct IRenderTargetBitmap *v5; // rsi
  __int64 v6; // rax
  signed int v9; // eax
  unsigned int v10; // edi
  char v11; // al
  signed int RenderTargetBitmap; // eax
  CExternalLayer *v13; // rax
  struct CColorSpaceLayer *v14; // rbx
  int v16; // [rsp+50h] [rbp-20h] BYREF
  __int64 v17; // [rsp+54h] [rbp-1Ch]
  const char *v18; // [rsp+60h] [rbp-10h] BYREF
  int v19; // [rsp+68h] [rbp-8h]
  struct IRenderTargetBitmap *v20; // [rsp+A0h] [rbp+30h] BYREF
  unsigned int v21; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v22; // [rsp+B8h] [rbp+48h] BYREF

  v16 = 28;
  v21 = 0;
  *a4 = 0LL;
  v17 = 0LL;
  v5 = 0LL;
  v6 = *(_QWORD *)a1;
  HIDWORD(v17) = a3;
  v20 = 0LL;
  v9 = (*(__int64 (__fastcall **)(struct IRenderTarget *, __int64 *, unsigned int *))(v6 + 88))(a1, &v22, &v21);
  v10 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, 0x1Du);
  }
  else
  {
    v19 = 43;
    v18 = "DWM Scratch Rendertarget (colorspace layer)";
    v11 = (*(__int64 (__fastcall **)(struct IRenderTarget *))(*(_QWORD *)a1 + 152LL))(a1);
    RenderTargetBitmap = CExternalLayer::CreateRenderTargetBitmap(
                           (__int64)&v18,
                           a2,
                           (__int64 *)&v16,
                           v22,
                           v21,
                           v11,
                           1,
                           0,
                           (__int64 *)&v20);
    v10 = RenderTargetBitmap;
    if ( RenderTargetBitmap < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, RenderTargetBitmap, 0x27u);
      v5 = v20;
    }
    else
    {
      v13 = (CExternalLayer *)operator new(0x78uLL);
      v5 = v20;
      v14 = v13;
      if ( v13 )
      {
        CExternalLayer::CExternalLayer(v13, a2, v20);
        *(_QWORD *)v14 = &CColorSpaceLayer::`vftable';
      }
      else
      {
        v14 = 0LL;
      }
      *a4 = v14;
      if ( !v14 )
      {
        v10 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x2Bu);
      }
    }
  }
  ReleaseInterfaceNoNULL<CManipulationManager>((__int64)v5);
  return v10;
}
