/*
 * XREFs of ?CreateRenderTargetBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBU_GUID@@AEBUMilPointAndSizeL@@AEBUPixelFormatInfo@@U_LUID@@VDisplayId@@_N66PEAPEAVIRenderTargetBitmap@@@Z @ 0x18001AD84
 * Callers:
 *     ?Create@CFilterEffectLayer@@SAJPEAVIRenderTarget@@AEBU_GUID@@AEBUMilPointAndSizeL@@PEAVCFilterEffect@@PEBVCVisual@@AEBUMilPointAndSizeF@@PEAPEAV1@@Z @ 0x180002170 (-Create@CFilterEffectLayer@@SAJPEAVIRenderTarget@@AEBU_GUID@@AEBUMilPointAndSizeL@@PEAVCFilterEf.c)
 *     ?Create@CTreeEffectLayer@@SAJPEAVIRenderTarget@@AEBU_GUID@@AEBUMilPointAndSizeL@@PEAVCEffectBrush@@PEBVCVisual@@AEBUMilPointAndSizeF@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAV1@@Z @ 0x18001AA50 (-Create@CTreeEffectLayer@@SAJPEAVIRenderTarget@@AEBU_GUID@@AEBUMilPointAndSizeL@@PEAVCEffectBrus.c)
 *     ?Create@COffScreenRenderingLayer@@SAJAEBVCResourceTag@@PEAVIRenderTarget@@AEBU_GUID@@AEBUMilPointAndSizeL@@_NPEAPEAV1@@Z @ 0x18001BB38 (-Create@COffScreenRenderingLayer@@SAJAEBVCResourceTag@@PEAVIRenderTarget@@AEBU_GUID@@AEBUMilPoin.c)
 *     ?Create@CLinearInterpolationLayer@@SAJPEAVIRenderTarget@@AEBU_GUID@@AEBUMilPointAndSizeL@@MMPEAPEAV1@@Z @ 0x1800AFA28 (-Create@CLinearInterpolationLayer@@SAJPEAVIRenderTarget@@AEBU_GUID@@AEBUMilPointAndSizeL@@MMPEAP.c)
 *     ?Create@CClippedBitmapLayer@@SAJPEAVIRenderTarget@@AEBU_GUID@@PEAUID2D1Bitmap1@@AEBVCMILMatrix@@PEAVCShape@@PEAPEAV1@@Z @ 0x1801576CC (-Create@CClippedBitmapLayer@@SAJPEAVIRenderTarget@@AEBU_GUID@@PEAUID2D1Bitmap1@@AEBVCMILMatrix@@.c)
 *     ?Create@CColorSpaceLayer@@SAJPEAVIRenderTarget@@AEBU_GUID@@AEBUMilPointAndSizeL@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAV1@@Z @ 0x180157F58 (-Create@CColorSpaceLayer@@SAJPEAVIRenderTarget@@AEBU_GUID@@AEBUMilPointAndSizeL@@W4DXGI_COLOR_SP.c)
 *     ?Create@CColorTransformLayer@@SAJPEAVIRenderTarget@@AEBU_GUID@@AEBUMilPointAndSizeL@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0DJ@@@PEAPEAV1@@Z @ 0x180158258 (-Create@CColorTransformLayer@@SAJPEAVIRenderTarget@@AEBU_GUID@@AEBUMilPointAndSizeL@@PEAV-$TValu.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ?GetScratchRenderTargetBitmap@CD3DDeviceManager@@QEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@_NAEBU_GUID@@U_LUID@@VDisplayId@@44PEAPEAVIRenderTargetBitmap@@@Z @ 0x18001AF94 (-GetScratchRenderTargetBitmap@CD3DDeviceManager@@QEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@.c)
 *     ?CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@_NAEBU_GUID@@U_LUID@@VDisplayId@@444PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800432B0 (-CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U-$T.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     Template_qqqq @ 0x18013BCF4 (Template_qqqq.c)
 */

__int64 __fastcall CExternalLayer::CreateRenderTargetBitmap(
        int a1,
        struct _GUID *a2,
        _DWORD *a3,
        __int64 a4,
        struct _LUID a5,
        int a6,
        char a7,
        char a8,
        char a9,
        __int64 *a10)
{
  __int64 v10; // xmm0_8
  int v12; // eax
  int v15; // r9d
  int v16; // r8d
  int ScratchRenderTargetBitmap; // eax
  unsigned int v18; // edi
  __int64 v19; // rax
  int RenderTargetBitmap; // eax
  __int64 v22; // [rsp+80h] [rbp-29h] BYREF
  __int64 v23; // [rsp+88h] [rbp-21h]
  __int64 v24; // [rsp+90h] [rbp-19h] BYREF
  int v25; // [rsp+98h] [rbp-11h]

  v10 = *(_QWORD *)a4;
  v12 = *(_DWORD *)(a4 + 8);
  v22 = 0LL;
  HIDWORD(v23) = 0;
  v24 = v10;
  *a10 = 0LL;
  v25 = v12;
  LODWORD(v23) = 1;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x40) != 0 )
    Template_qqqq(
      *a3 + a3[2],
      (unsigned int)&EVTDESC_ETWGUID_LAYEREVENT_BeginExternalLayer_Start,
      *a3,
      a3[1],
      *a3 + a3[2],
      a3[1] + *((_BYTE *)a3 + 12));
  v15 = a3[3];
  v16 = a3[2];
  if ( a8 )
  {
    ScratchRenderTargetBitmap = CD3DDeviceManager::GetScratchRenderTargetBitmap(
                                  (unsigned int)&g_D3DDeviceManager,
                                  a1,
                                  v16,
                                  v15,
                                  v23,
                                  0,
                                  (__int64)&v24);
    v18 = ScratchRenderTargetBitmap;
    if ( ScratchRenderTargetBitmap < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, ScratchRenderTargetBitmap, 0x2Fu);
      goto LABEL_8;
    }
  }
  else
  {
    RenderTargetBitmap = CD3DDeviceManager::CreateRenderTargetBitmap(
                           (int)&qword_18023E818,
                           a1,
                           v16,
                           v15,
                           v23,
                           0,
                           (__int64)&v24,
                           1,
                           a2,
                           a5,
                           a6,
                           a7,
                           1,
                           a9,
                           (__int64)&v22);
    v18 = RenderTargetBitmap;
    if ( RenderTargetBitmap < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, RenderTargetBitmap, 0x40u);
      goto LABEL_8;
    }
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    Template_qqqq(
      *a3 + a3[2],
      (unsigned int)&EVTDESC_ETWGUID_LAYEREVENT_BeginExternalLayer_Stop,
      *a3,
      a3[1],
      *(_BYTE *)a3 + *((_BYTE *)a3 + 8),
      a3[1] + *((_BYTE *)a3 + 12));
  v19 = v22;
  v22 = 0LL;
  *a10 = v19;
LABEL_8:
  ReleaseInterfaceNoNULL<CD2DPencil>(v22);
  return v18;
}
