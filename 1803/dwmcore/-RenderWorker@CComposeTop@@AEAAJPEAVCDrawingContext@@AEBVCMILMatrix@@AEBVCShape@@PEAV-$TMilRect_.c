/*
 * XREFs of ?RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBVCShape@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801ADC70
 * Callers:
 *     ?RenderComposeTopWorker@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x180158A6C (-RenderComposeTopWorker@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 *     ?FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801ADA10 (-FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@MUMilRectF@@U.c)
 * Callees:
 *     ?PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z @ 0x180007C2C (-PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@AEBVCMILMatrix@@AEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180008334 (-FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@AEBVCMILMatrix@@AEBVCShape@@U-$TMIL.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x180066650 (-PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x180066930 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180066CF0 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x180067310 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x1800BE970 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CComposeTop::RenderWorker(
        struct IImageSource **a1,
        CDrawingContext *a2,
        const struct CMILMatrix *a3,
        CShape *a4,
        _OWORD *a5)
{
  char v8; // si
  char v9; // r14
  __int64 (__fastcall *v10)(CShape *, __int128 *, _BYTE *); // rax
  int v11; // eax
  unsigned int v12; // ebx
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v18; // [rsp+30h] [rbp-91h] BYREF
  _DWORD v19[11]; // [rsp+34h] [rbp-8Dh] BYREF
  _BYTE v20[64]; // [rsp+60h] [rbp-61h] BYREF
  int v21; // [rsp+A0h] [rbp-21h]
  __int128 v22; // [rsp+B0h] [rbp-11h] BYREF

  v21 = 0;
  v8 = 0;
  v9 = 0;
  CMILMatrix::Multiply((const struct CMILMatrix *)(a1 + 2), a3, (struct CMILMatrix *)v20);
  v10 = *(__int64 (__fastcall **)(CShape *, __int128 *, _BYTE *))(*(_QWORD *)a4 + 32LL);
  v22 = 0uLL;
  v11 = v10(a4, &v22, v20);
  v12 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x17Au);
LABEL_14:
    if ( !v8 )
      goto LABEL_16;
    goto LABEL_15;
  }
  if ( !*a1 )
  {
LABEL_12:
    v9 = v8;
    goto LABEL_14;
  }
  memset_0(v19, 0, 0x24uLL);
  v19[0] = 0;
  v18 = 2;
  v13 = CDrawingContext::PushRenderOptionsInternal(a2, 0LL, (const struct MilRenderOptions *)&v18, 1);
  v12 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x188u);
    goto LABEL_18;
  }
  v9 = 1;
  v14 = CDrawingContext::PushTransformInternal(a2, 0LL, (const struct CMILMatrix *)v20, 0, 1);
  v12 = v14;
  if ( v14 >= 0 )
  {
    v8 = 1;
    v15 = CDrawingContext::ApplyRenderStateInternal(a2, 0);
    v12 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x18Fu);
LABEL_15:
      CDrawingContext::PopTransformInternal(a2, 1);
LABEL_16:
      if ( !v9 )
        goto LABEL_18;
      goto LABEL_17;
    }
    v16 = CDrawingContext::FillShapeWithBitmap(a2, *a1, (const struct CMILMatrix *)&CMILMatrix::Identity, a4, 1);
    v12 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x194u);
      goto LABEL_15;
    }
    goto LABEL_12;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x18Bu);
LABEL_17:
  CDrawingContext::PopRenderOptionsInternal(a2, 1);
LABEL_18:
  if ( a5 )
    *a5 = v22;
  return v12;
}
