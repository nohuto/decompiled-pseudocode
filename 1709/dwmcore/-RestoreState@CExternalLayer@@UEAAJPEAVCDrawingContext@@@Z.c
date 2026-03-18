/*
 * XREFs of ?RestoreState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180081490
 * Callers:
 *     ?RestoreState@CTreeEffectLayer@@MEAAJPEAVCDrawingContext@@@Z @ 0x180080BE0 (-RestoreState@CTreeEffectLayer@@MEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RestoreState@COffScreenRenderingLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800BFD00 (-RestoreState@COffScreenRenderingLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RestoreState@CHDRToSDRToneMapLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18014B820 (-RestoreState@CHDRToSDRToneMapLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RestoreState@CColorSpaceLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18014BAF0 (-RestoreState@CColorSpaceLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RestoreState@CColorTransformLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18014C0C0 (-RestoreState@CColorTransformLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RestoreState@CFilterEffectLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18014CC60 (-RestoreState@CFilterEffectLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RestoreState@CLinearInterpolationLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18014D1E0 (-RestoreState@CLinearInterpolationLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RestoreState@CResampleLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18014DD60 (-RestoreState@CResampleLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?PopDeviceTransform@CDrawingContext@@IEAAJAEBVCMILMatrix@@@Z @ 0x18003B344 (-PopDeviceTransform@CDrawingContext@@IEAAJAEBVCMILMatrix@@@Z.c)
 *     ?PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180042F3C (-PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z @ 0x180043A30 (-PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     McTemplateU0 @ 0x180120DC8 (McTemplateU0.c)
 */

__int64 __fastcall CExternalLayer::RestoreState(CExternalLayer *this, struct CDrawingContext *a2)
{
  unsigned int v2; // edi
  signed int v5; // eax

  v2 = 0;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x40) != 0 )
    McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_LAYEREVENT_EndExternalLayer_Start);
  if ( *((_BYTE *)this + 35) )
  {
    *((_BYTE *)a2 + 6827) = *((_BYTE *)this + 36);
    *((_BYTE *)this + 35) = 0;
  }
  if ( *((_BYTE *)this + 34) )
  {
    CDrawingContext::PopGpuClipRectInternal(a2, 0);
    *((_BYTE *)this + 34) = 0;
  }
  if ( *((_BYTE *)this + 33) )
  {
    v5 = CDrawingContext::PopRenderTargetInternal(a2, 0);
    v2 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v5, 0x110u);
  }
  if ( *((_BYTE *)this + 32) )
  {
    CDrawingContext::PopDeviceTransform(a2, (CExternalLayer *)((char *)this + 40));
    *((_BYTE *)this + 32) = 0;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_LAYEREVENT_EndExternalLayer_Stop);
  return v2;
}
