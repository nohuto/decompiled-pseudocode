/*
 * XREFs of ?RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@PEAVCShape@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18017676C
 * Callers:
 *     ?RenderComposeTopWorker@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x1800D1EE8 (-RenderComposeTopWorker@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 *     ?FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180134B34 (-FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@PEBV-$TMilRect_@MUMilRectF@@U.c)
 * Callees:
 *     ?PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z @ 0x18000CC78 (-PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@AEBVCMILMatrix@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@W4Enum@MilBitmapWrapMode@@_N@Z @ 0x18000E2FC (-FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@AEBVCMILMatrix@@PEAVCShape@@U-$TMIL.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x180057184 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x1800A0FE0 (-PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x1800A12C0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x1800A1660 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800A1C68 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CComposeTop::RenderWorker(
        CCachedVisualImage **a1,
        CDrawingContext *a2,
        const struct CMILMatrix *a3,
        struct CShape *a4,
        _OWORD *a5)
{
  char v8; // si
  char v9; // r14
  __int64 (__fastcall *v10)(struct CShape *, __int128 *, _BYTE *); // rax
  int v11; // eax
  unsigned int v12; // ebx
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v18; // [rsp+30h] [rbp-A1h]
  int v19; // [rsp+40h] [rbp-91h] BYREF
  _DWORD v20[11]; // [rsp+44h] [rbp-8Dh] BYREF
  _BYTE v21[64]; // [rsp+70h] [rbp-61h] BYREF
  int v22; // [rsp+B0h] [rbp-21h]
  __int128 v23; // [rsp+C0h] [rbp-11h] BYREF

  v22 = 0;
  v8 = 0;
  v9 = 0;
  CMILMatrix::Multiply((const struct CMILMatrix *)(a1 + 2), a3, (struct CMILMatrix *)v21);
  v10 = *(__int64 (__fastcall **)(struct CShape *, __int128 *, _BYTE *))(*(_QWORD *)a4 + 32LL);
  v23 = 0uLL;
  v11 = v10(a4, &v23, v21);
  v12 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x19Cu);
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
  memset_0(v20, 0, 0x24uLL);
  v20[0] = 0;
  v19 = 2;
  v13 = CDrawingContext::PushRenderOptionsInternal(a2, 0LL, (const struct MilRenderOptions *)&v19, 1);
  v12 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x1ACu);
    goto LABEL_18;
  }
  v9 = 1;
  v14 = CDrawingContext::PushTransformInternal(a2, 0LL, (const struct CMILMatrix *)v21, 0, 1);
  v12 = v14;
  if ( v14 >= 0 )
  {
    v8 = 1;
    v15 = CDrawingContext::ApplyRenderStateInternal(a2, 0);
    v12 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x1B5u);
LABEL_15:
      CDrawingContext::PopTransformInternal(a2, 1);
LABEL_16:
      if ( !v9 )
        goto LABEL_18;
      goto LABEL_17;
    }
    v16 = CDrawingContext::FillShapeWithBitmap(a2, *a1, (__int64)&CMILMatrix::Identity, a4, 1, 0LL, v18, 0);
    v12 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x1BAu);
      goto LABEL_15;
    }
    goto LABEL_12;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x1AFu);
LABEL_17:
  CDrawingContext::PopRenderOptionsInternal(a2, 1);
LABEL_18:
  if ( a5 )
    *a5 = v23;
  return v12;
}
