/*
 * XREFs of ?DrawGenericInk@CDrawingContext@@UEAAJPEAUIDCompositionDirectInkWetStrokePartner@@_N@Z @ 0x18015FFB0
 * Callers:
 *     ?Draw@CWetInkManager@@QEAAJPEAVCDrawingContext@@PEAVCGenericInk@@@Z @ 0x180171320 (-Draw@CWetInkManager@@QEAAJPEAVCDrawingContext@@PEAVCGenericInk@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsIn3DMode@CDrawingContext@@UEBA_NXZ @ 0x180066600 (-IsIn3DMode@CDrawingContext@@UEBA_NXZ.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180066CF0 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?D2DPrimitiveBlendFromMilCompositingMode@@YA?AW4D2D1_PRIMITIVE_BLEND@@W4Enum@MilCompositingMode@@@Z @ 0x18015ECC0 (-D2DPrimitiveBlendFromMilCompositingMode@@YA-AW4D2D1_PRIMITIVE_BLEND@@W4Enum@MilCompositingMode@.c)
 */

__int64 __fastcall CDrawingContext::DrawGenericInk(
        CDrawingContext *this,
        struct IDCompositionDirectInkWetStrokePartner *a2,
        char a3)
{
  unsigned int v6; // ebx
  int v7; // eax
  int v8; // eax
  float v9; // xmm0_4
  int v10; // eax
  __int64 v11; // r8
  __int64 v12; // r11
  unsigned int v14; // [rsp+20h] [rbp-28h]

  if ( CDrawingContext::IsIn3DMode((CDrawingContext *)((char *)this + 8)) )
  {
    v6 = -2147467263;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147467263, 0x832u);
    return v6;
  }
  v7 = CDrawingContext::ApplyRenderStateInternal(this, 0);
  v6 = v7;
  if ( v7 < 0 )
  {
    v14 = 2101;
    goto LABEL_10;
  }
  v8 = *((_DWORD *)this + 776);
  if ( v8 )
    v9 = *(float *)(*((_QWORD *)this + 390) + 4LL * (unsigned int)(v8 - 1));
  else
    v9 = FLOAT_1_0;
  v10 = D2DPrimitiveBlendFromMilCompositingMode(*((_DWORD *)this + 65));
  v7 = (*(__int64 (__fastcall **)(__int64, char *, struct IDCompositionDirectInkWetStrokePartner *, bool, int, float, char))(v11 + 200))(
         v12,
         (char *)this + 8,
         a2,
         *((_DWORD *)this + 64) != 0,
         v10,
         COERCE_FLOAT(LODWORD(v9)),
         a3);
  v6 = v7;
  if ( v7 < 0 )
  {
    v14 = 2112;
LABEL_10:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, v14);
  }
  return v6;
}
