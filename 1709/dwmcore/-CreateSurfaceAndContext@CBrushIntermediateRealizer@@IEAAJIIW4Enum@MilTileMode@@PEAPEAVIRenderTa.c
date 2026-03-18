/*
 * XREFs of ?CreateSurfaceAndContext@CBrushIntermediateRealizer@@IEAAJIIW4Enum@MilTileMode@@PEAPEAVIRenderTargetBitmap@@PEAPEAVCDrawingContext@@@Z @ 0x18018DBEC
 * Callers:
 *     ?Realize@CDeviceAlignedIntermediateRealizer@@QEAAJPEAPEAVIRenderTargetBitmap@@PEAPEAVCDrawingContext@@PEAVCMILMatrix@@PEAH@Z @ 0x18018BD68 (-Realize@CDeviceAlignedIntermediateRealizer@@QEAAJPEAPEAVIRenderTargetBitmap@@PEAPEAVCDrawingCon.c)
 *     ?CreateSurfaceAndContext@CViewportAlignedIntermediateRealizer@@AEAAJPEBVCMILMatrix@@000IIPEAPEAVIRenderTargetBitmap@@PEAPEAVCDrawingContext@@@Z @ 0x18018C5CC (-CreateSurfaceAndContext@CViewportAlignedIntermediateRealizer@@AEAAJPEBVCMILMatrix@@000IIPEAPEAV.c)
 * Callees:
 *     ?CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@_NU_LUID@@VDisplayId@@444PEAPEAVIRenderTargetBitmap@@@Z @ 0x18001AF40 (-CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U-$T.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N3@Z @ 0x1800437C8 (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x180079484 (-Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 */

__int64 __fastcall CBrushIntermediateRealizer::CreateSurfaceAndContext(
        __int64 *a1,
        signed int a2,
        signed int a3,
        __int64 a4,
        _QWORD *a5,
        struct CDrawingContext **a6)
{
  unsigned int v7; // eax
  __int64 v9; // r8
  int v11; // ecx
  struct _LUID v12; // rax
  signed int RenderTargetBitmap; // eax
  unsigned int v14; // esi
  signed int v15; // eax
  struct CDrawingContext *v16; // rcx
  unsigned int v18; // [rsp+20h] [rbp-69h]
  const char *v19; // [rsp+70h] [rbp-19h] BYREF
  int v20; // [rsp+78h] [rbp-11h]
  __int64 v21; // [rsp+80h] [rbp-9h] BYREF
  float v22; // [rsp+88h] [rbp-1h]
  float v23; // [rsp+8Ch] [rbp+3h]
  __int64 v24; // [rsp+90h] [rbp+7h] BYREF
  int v25; // [rsp+98h] [rbp+Fh]

  v7 = 1;
  v9 = *a1;
  v20 = 22;
  if ( *(_BYTE *)v9 )
    v7 = 3;
  v24 = *(_QWORD *)(v9 + 216);
  v11 = *(_DWORD *)(v9 + 224);
  v21 = v7;
  v25 = v11;
  v12 = *(struct _LUID *)(v9 + 228);
  v19 = "DWM Brush Intermediate";
  RenderTargetBitmap = CD3DDeviceManager::CreateRenderTargetBitmap(
                         (__int64)&qword_18026EEE8,
                         (__int64)&v19,
                         a2,
                         a3,
                         v21,
                         0,
                         (__int64)&v24,
                         1,
                         v12,
                         DisplayId::None,
                         0,
                         0,
                         1,
                         a5);
  v14 = RenderTargetBitmap;
  if ( RenderTargetBitmap < 0 )
  {
    v18 = 194;
    goto LABEL_9;
  }
  v15 = CDrawingContext::Create(*(struct CComposition **)(*a1 + 192), a6);
  v14 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v15, 0xCFu);
  }
  else
  {
    v16 = *a6;
    v21 = 0LL;
    v22 = (float)a2 + 0.0;
    v23 = (float)a3 + 0.0;
    RenderTargetBitmap = CDrawingContext::PushGpuClipRectInternal((__int64)v16, 0LL, (float *)&v21, 1, 0, 0);
    v14 = RenderTargetBitmap;
    if ( RenderTargetBitmap < 0 )
    {
      v18 = 223;
LABEL_9:
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, RenderTargetBitmap, v18);
    }
  }
  return v14;
}
