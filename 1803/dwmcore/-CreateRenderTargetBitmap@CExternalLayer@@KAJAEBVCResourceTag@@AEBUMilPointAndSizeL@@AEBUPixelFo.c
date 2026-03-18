/*
 * XREFs of ?CreateRenderTargetBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUMilPointAndSizeL@@AEBUPixelFormatInfo@@U_LUID@@VDisplayId@@_N55PEAPEAVIRenderTargetBitmap@@@Z @ 0x18002472C
 * Callers:
 *     ?Create@CTreeEffectLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@PEAVCEffectBrush@@PEBVCVisual@@AEBUMilPointAndSizeF@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAV1@@Z @ 0x180008F98 (-Create@CTreeEffectLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@PEAVCEffectBrush@@PEBVCVis.c)
 *     ?Create@COffScreenRenderingLayer@@SAJAEBVCResourceTag@@PEAVIRenderTarget@@AEBUMilPointAndSizeL@@_NPEAPEAV1@@Z @ 0x1800244D8 (-Create@COffScreenRenderingLayer@@SAJAEBVCResourceTag@@PEAVIRenderTarget@@AEBUMilPointAndSizeL@@.c)
 *     ?Create@CHDRToSDRToneMapLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@W4DXGI_COLOR_SPACE_TYPE@@W4DXGI_FORMAT@@PEAPEAV1@@Z @ 0x1801742EC (-Create@CHDRToSDRToneMapLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@W4DXGI_COLOR_SPACE_TY.c)
 *     ?Create@CColorSpaceLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAV1@@Z @ 0x180174718 (-Create@CColorSpaceLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@W4DXGI_COLOR_SPACE_TYPE@@P.c)
 *     ?Create@CColorTransformLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0BG@@@PEAPEAV1@@Z @ 0x1801749E8 (-Create@CColorTransformLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@PEAV-$TValueResource@U.c)
 *     ?Create@CFilterEffectLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@PEAVCFilterEffect@@PEBVCVisual@@AEBUMilPointAndSizeF@@PEAPEAV1@@Z @ 0x180175B7C (-Create@CFilterEffectLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@PEAVCFilterEffect@@PEBVC.c)
 *     ?Create@CLinearInterpolationLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@MMPEAPEAV1@@Z @ 0x180176188 (-Create@CLinearInterpolationLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@MMPEAPEAV1@@Z.c)
 *     ?Create@CGammaBlendLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@PEAPEAV1@@Z @ 0x1801769A8 (-Create@CGammaBlendLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@PEAPEAV1@@Z.c)
 *     ?Create@CResampleLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@MMW4Enum@CompositionResampleMode@@PEAPEAV1@@Z @ 0x180176E60 (-Create@CResampleLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@MMW4Enum@CompositionResample.c)
 * Callees:
 *     ?GetScratchRenderTargetBitmap@CD3DDeviceManager@@QEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@_NU_LUID@@VDisplayId@@44PEAPEAVIRenderTargetBitmap@@@Z @ 0x180017E6C (-GetScratchRenderTargetBitmap@CD3DDeviceManager@@QEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@.c)
 *     ??$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z @ 0x1800213F4 (--$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@_NU_LUID@@VDisplayId@@444PEAPEAVIRenderTargetBitmap@@@Z @ 0x180089BC0 (-CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U-$T.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     McTemplateU0qqqq @ 0x180148DD8 (McTemplateU0qqqq.c)
 */

__int64 __fastcall CExternalLayer::CreateRenderTargetBitmap(
        __int64 a1,
        _DWORD *a2,
        __int64 a3,
        struct _LUID a4,
        int a5,
        char a6,
        char a7,
        char a8,
        __int64 *a9)
{
  __int64 v9; // xmm0_8
  int v11; // eax
  unsigned int v14; // r9d
  unsigned int v15; // r8d
  int ScratchRenderTargetBitmap; // eax
  unsigned int v17; // ebx
  __int64 v18; // rax
  int RenderTargetBitmap; // eax
  int v21; // [rsp+38h] [rbp-59h]
  __int64 v22; // [rsp+70h] [rbp-21h] BYREF
  __int64 v23; // [rsp+78h] [rbp-19h]
  __int64 v24; // [rsp+80h] [rbp-11h] BYREF
  int v25; // [rsp+88h] [rbp-9h]

  v9 = *(_QWORD *)a3;
  v11 = *(_DWORD *)(a3 + 8);
  v22 = 0LL;
  HIDWORD(v23) = 0;
  v24 = v9;
  *a9 = 0LL;
  v25 = v11;
  LODWORD(v23) = 1;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x40) != 0 )
    McTemplateU0qqqq(
      *a2 + a2[2],
      (unsigned int)&EVTDESC_ETWGUID_LAYEREVENT_BeginExternalLayer_Start,
      *a2,
      a2[1],
      *(_BYTE *)a2 + *((_BYTE *)a2 + 8),
      a2[1] + *((_BYTE *)a2 + 12));
  v14 = a2[3];
  v15 = a2[2];
  if ( a7 )
  {
    ScratchRenderTargetBitmap = CD3DDeviceManager::GetScratchRenderTargetBitmap(
                                  (CD3DDeviceManager *)&g_D3DDeviceManager,
                                  a1,
                                  v15,
                                  v14,
                                  v23,
                                  0,
                                  (__int64)&v24,
                                  v21,
                                  a4,
                                  a5,
                                  a6,
                                  a8,
                                  &v22);
    v17 = ScratchRenderTargetBitmap;
    if ( ScratchRenderTargetBitmap < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ScratchRenderTargetBitmap, 0x2Du);
      goto LABEL_8;
    }
  }
  else
  {
    RenderTargetBitmap = CD3DDeviceManager::CreateRenderTargetBitmap(
                           (int)&qword_1802D6728,
                           a1,
                           v15,
                           v14,
                           v23,
                           0,
                           (__int64)&v24,
                           1,
                           a4,
                           a5,
                           a6,
                           1,
                           a8,
                           (__int64)&v22);
    v17 = RenderTargetBitmap;
    if ( RenderTargetBitmap < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, RenderTargetBitmap, 0x3Du);
      goto LABEL_8;
    }
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0qqqq(
      *a2 + a2[2],
      (unsigned int)&EVTDESC_ETWGUID_LAYEREVENT_BeginExternalLayer_Stop,
      *a2,
      a2[1],
      *(_BYTE *)a2 + *((_BYTE *)a2 + 8),
      a2[1] + *((_BYTE *)a2 + 12));
  v18 = v22;
  v22 = 0LL;
  *a9 = v18;
LABEL_8:
  ReleaseInterfaceNoNULL<IWICBitmap>(v22);
  return v17;
}
