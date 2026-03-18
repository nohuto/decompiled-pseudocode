/*
 * XREFs of ?CreateSurfaceAndContext@CBrushIntermediateRealizer@@IEAAJIIW4Enum@MilTileMode@@PEAPEAVIRenderTargetBitmap@@PEAPEAVCDrawingContext@@@Z @ 0x180185ADC
 * Callers:
 *     ?Realize@CDeviceAlignedIntermediateRealizer@@QEAAJPEAPEAVIRenderTargetBitmap@@PEAPEAVCDrawingContext@@PEAVCMILMatrix@@PEAH@Z @ 0x180183CA0 (-Realize@CDeviceAlignedIntermediateRealizer@@QEAAJPEAPEAVIRenderTargetBitmap@@PEAPEAVCDrawingCon.c)
 *     ?CreateSurfaceAndContext@CViewportAlignedIntermediateRealizer@@AEAAJPEBVCMILMatrix@@000IIPEAPEAVIRenderTargetBitmap@@PEAPEAVCDrawingContext@@@Z @ 0x18018450C (-CreateSurfaceAndContext@CViewportAlignedIntermediateRealizer@@AEAAJPEBVCMILMatrix@@000IIPEAPEAV.c)
 * Callees:
 *     ?CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@_NAEBU_GUID@@U_LUID@@VDisplayId@@444PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800432B0 (-CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U-$T.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N3@Z @ 0x1800A0D6C (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800B4E20 (-Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

__int64 __fastcall CBrushIntermediateRealizer::CreateSurfaceAndContext(
        __int64 *a1,
        signed int a2,
        signed int a3,
        __int64 a4,
        void **a5,
        struct CDrawingContext **a6)
{
  unsigned int v7; // eax
  __int64 v9; // r8
  int v11; // ecx
  int RenderTargetBitmap; // eax
  unsigned int v13; // esi
  int v14; // eax
  struct CDrawingContext *v15; // rcx
  unsigned int v17; // [rsp+20h] [rbp-79h]
  struct _LUID v18; // [rsp+48h] [rbp-51h]
  int v19[2]; // [rsp+80h] [rbp-19h] BYREF
  int v20; // [rsp+88h] [rbp-11h]
  __int64 v21; // [rsp+90h] [rbp-9h] BYREF
  float v22; // [rsp+98h] [rbp-1h]
  float v23; // [rsp+9Ch] [rbp+3h]
  __int64 v24; // [rsp+A0h] [rbp+7h] BYREF
  int v25; // [rsp+A8h] [rbp+Fh]

  v7 = 1;
  v9 = *a1;
  v20 = 22;
  if ( *(_BYTE *)v9 )
    v7 = 3;
  v24 = *(_QWORD *)(v9 + 216);
  v11 = *(_DWORD *)(v9 + 224);
  v21 = v7;
  v25 = v11;
  v18 = *(struct _LUID *)(v9 + 244);
  *(_QWORD *)v19 = "DWM Brush Intermediate";
  RenderTargetBitmap = CD3DDeviceManager::CreateRenderTargetBitmap(
                         (__int64)&qword_18023E818,
                         (__int64)v19,
                         a2,
                         a3,
                         v7,
                         0,
                         (struct PixelFormatInfo *)&v24,
                         1,
                         (struct _GUID *)(v9 + 228),
                         v18,
                         DisplayId::None,
                         0,
                         0,
                         1,
                         a5);
  v13 = RenderTargetBitmap;
  if ( RenderTargetBitmap < 0 )
  {
    v17 = 195;
    goto LABEL_9;
  }
  v14 = CDrawingContext::Create(*(struct CComposition **)(*a1 + 192), a6);
  v13 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0xD0u);
  }
  else
  {
    v15 = *a6;
    v21 = 0LL;
    v22 = (float)a2 + 0.0;
    v23 = (float)a3 + 0.0;
    RenderTargetBitmap = CDrawingContext::PushGpuClipRectInternal((__int64)v15, 0LL, (float *)&v21, 1, 0, 0);
    v13 = RenderTargetBitmap;
    if ( RenderTargetBitmap < 0 )
    {
      v17 = 224;
LABEL_9:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, RenderTargetBitmap, v17);
    }
  }
  return v13;
}
