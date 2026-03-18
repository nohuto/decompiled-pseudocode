/*
 * XREFs of ?Create@CLinearInterpolationLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@MMPEAPEAV1@@Z @ 0x18014CE88
 * Callers:
 *     ?PushLinearInterpolationLayer@CDrawingContext@@AEAAJAEBUMilPointAndSizeL@@MM@Z @ 0x18013E0A0 (-PushLinearInterpolationLayer@CDrawingContext@@AEAAJAEBUMilPointAndSizeL@@MM@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CreateRenderTargetBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUMilPointAndSizeL@@AEBUPixelFormatInfo@@U_LUID@@VDisplayId@@_N55PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800812B8 (-CreateRenderTargetBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUMilPointAndSizeL@@AEBUPixelFo.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ??0CLinearInterpolationLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@MM@Z @ 0x18014CCC8 (--0CLinearInterpolationLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@MM@Z.c)
 */

__int64 __fastcall CLinearInterpolationLayer::Create(
        struct IRenderTarget *a1,
        const struct MilPointAndSizeL *a2,
        float a3,
        float a4,
        struct CLinearInterpolationLayer **a5)
{
  struct IRenderTargetBitmap *v5; // rdi
  signed int v8; // eax
  unsigned int v9; // ebx
  char v10; // al
  signed int RenderTargetBitmap; // eax
  CLinearInterpolationLayer *v12; // rax
  unsigned int v14; // [rsp+58h] [rbp-31h] BYREF
  struct IRenderTargetBitmap *v15; // [rsp+60h] [rbp-29h] BYREF
  __int64 v16; // [rsp+68h] [rbp-21h] BYREF
  const char *v17; // [rsp+70h] [rbp-19h] BYREF
  int v18; // [rsp+78h] [rbp-11h]
  __int64 v19[2]; // [rsp+80h] [rbp-9h] BYREF

  v5 = 0LL;
  v14 = 0;
  v15 = 0LL;
  *a5 = 0LL;
  (*(void (__fastcall **)(struct IRenderTarget *, __int64 *))(*(_QWORD *)a1 + 24LL))(a1, v19);
  v8 = (*(__int64 (__fastcall **)(struct IRenderTarget *, __int64 *, unsigned int *))(*(_QWORD *)a1 + 88LL))(
         a1,
         &v16,
         &v14);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0x19u);
  }
  else
  {
    v18 = 52;
    v17 = "DWM Scratch Rendertarget (linear interpolation layer";
    v10 = (*(__int64 (__fastcall **)(struct IRenderTarget *))(*(_QWORD *)a1 + 152LL))(a1);
    RenderTargetBitmap = CExternalLayer::CreateRenderTargetBitmap(
                           (__int64)&v17,
                           a2,
                           v19,
                           v16,
                           v14,
                           v10,
                           1,
                           0,
                           (__int64 *)&v15);
    v9 = RenderTargetBitmap;
    if ( RenderTargetBitmap < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, RenderTargetBitmap, 0x26u);
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
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x2Cu);
      }
    }
  }
  ReleaseInterfaceNoNULL<CManipulationManager>((__int64)v5);
  return v9;
}
