/*
 * XREFs of ?Create@CColorTransformLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0BE@@@PEAPEAV1@@Z @ 0x18014BB78
 * Callers:
 *     ?PushColorTransformLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0BE@@@@Z @ 0x18013DEF4 (-PushColorTransformLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAV-$TValueResource@UMilColorTransf.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CreateRenderTargetBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUMilPointAndSizeL@@AEBUPixelFormatInfo@@U_LUID@@VDisplayId@@_N55PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800812B8 (-CreateRenderTargetBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUMilPointAndSizeL@@AEBUPixelFo.c)
 *     ??0CExternalLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@@Z @ 0x180081418 (--0CExternalLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CColorTransformLayer::Create(
        __int64 *a1,
        const struct MilPointAndSizeL *a2,
        __int64 a3,
        CExternalLayer **a4)
{
  struct IRenderTargetBitmap *v4; // rsi
  __int64 v6; // rax
  signed int v10; // eax
  unsigned int v11; // edi
  char v12; // al
  signed int RenderTargetBitmap; // eax
  CExternalLayer *v14; // rax
  CExternalLayer *v15; // rbx
  unsigned int v17; // [rsp+50h] [rbp-19h] BYREF
  struct IRenderTargetBitmap *v18; // [rsp+58h] [rbp-11h] BYREF
  __int64 v19; // [rsp+60h] [rbp-9h] BYREF
  const char *v20; // [rsp+68h] [rbp-1h] BYREF
  int v21; // [rsp+70h] [rbp+7h]
  __int64 v22[2]; // [rsp+78h] [rbp+Fh] BYREF

  v4 = 0LL;
  *a4 = 0LL;
  v6 = *a1;
  v17 = 0;
  v18 = 0LL;
  (*(void (__fastcall **)(__int64 *, __int64 *))(v6 + 24))(a1, v22);
  v10 = (*(__int64 (__fastcall **)(__int64 *, __int64 *, unsigned int *))(*a1 + 88))(a1, &v19, &v17);
  v11 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v10, 0x18u);
  }
  else
  {
    v21 = 48;
    v20 = "DWM Scratch Rendertarget (color transform layer)";
    v12 = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 152))(a1);
    RenderTargetBitmap = CExternalLayer::CreateRenderTargetBitmap(
                           (__int64)&v20,
                           a2,
                           v22,
                           v19,
                           v17,
                           v12,
                           1,
                           0,
                           (__int64 *)&v18);
    v11 = RenderTargetBitmap;
    if ( RenderTargetBitmap < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, RenderTargetBitmap, 0x25u);
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
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x2Au);
      }
    }
  }
  ReleaseInterfaceNoNULL<CManipulationManager>((__int64)v4);
  return v11;
}
