/*
 * XREFs of ?RestoreState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180015610
 * Callers:
 *     ?RestoreState@CFilterEffectLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180002600 (-RestoreState@CFilterEffectLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RestoreState@CTreeEffectLayer@@MEAAJPEAVCDrawingContext@@@Z @ 0x180014D60 (-RestoreState@CTreeEffectLayer@@MEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RestoreState@CLinearInterpolationLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18001C540 (-RestoreState@CLinearInterpolationLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RestoreState@COffScreenRenderingLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180021440 (-RestoreState@COffScreenRenderingLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?ApplyState@CClippedBitmapLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180157570 (-ApplyState@CClippedBitmapLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RestoreState@CClippedBitmapLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180157AE0 (-RestoreState@CClippedBitmapLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RestoreState@CHDRConvertLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180157EF0 (-RestoreState@CHDRConvertLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RestoreState@CColorSpaceLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1801581D0 (-RestoreState@CColorSpaceLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RestoreState@CColorTransformLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180158800 (-RestoreState@CColorTransformLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?PopDeviceTransform@CDrawingContext@@IEAAJAEBVCMILMatrix@@@Z @ 0x18000CF34 (-PopDeviceTransform@CDrawingContext@@IEAAJAEBVCMILMatrix@@@Z.c)
 *     ?PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z @ 0x18000F84C (-PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?PopGpuClipFromScope@CScopedClipStack@@QEAAXXZ @ 0x18000F988 (-PopGpuClipFromScope@CScopedClipStack@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     TemplateEventDescriptor @ 0x1800D2908 (TemplateEventDescriptor.c)
 */

__int64 __fastcall CExternalLayer::RestoreState(CExternalLayer *this, struct CDrawingContext *a2)
{
  unsigned int v2; // esi
  int v5; // eax

  v2 = 0;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x40) != 0 )
    TemplateEventDescriptor(this, &EVTDESC_ETWGUID_LAYEREVENT_EndExternalLayer_Start);
  if ( *((_BYTE *)this + 35) )
  {
    *((_BYTE *)a2 + 6771) = *((_BYTE *)this + 36);
    *((_BYTE *)this + 35) = 0;
  }
  if ( *((_BYTE *)this + 34) )
  {
    CScopedClipStack::PopGpuClipFromScope((struct CDrawingContext *)((char *)a2 + 912));
    *((_BYTE *)a2 + 6769) = 1;
    *((_BYTE *)this + 34) = 0;
  }
  if ( *((_BYTE *)this + 33) )
  {
    v5 = CDrawingContext::PopRenderTargetInternal(a2, 0);
    v2 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x110u);
  }
  if ( *((_BYTE *)this + 32) )
  {
    CDrawingContext::PopDeviceTransform(a2, (CExternalLayer *)((char *)this + 40));
    *((_BYTE *)this + 32) = 0;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    TemplateEventDescriptor(this, &EVTDESC_ETWGUID_LAYEREVENT_EndExternalLayer_Stop);
  return v2;
}
