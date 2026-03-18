/*
 * XREFs of ?ApplyState@CHDRConvertLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180157C00
 * Callers:
 *     <none>
 * Callees:
 *     ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z @ 0x18000F688 (-PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z.c)
 *     ?Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x18000F7A0 (-Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N3@Z @ 0x1800A0D6C (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     Template_qqqq @ 0x18013BCF4 (Template_qqqq.c)
 *     ?RestoreState@CHDRConvertLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180157EF0 (-RestoreState@CHDRConvertLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 */

__int64 __fastcall CHDRConvertLayer::ApplyState(CHDRConvertLayer *this, struct CDrawingContext *a2)
{
  int v2; // r9d
  int v4; // r8d
  char v6; // al
  __int64 v7; // rcx
  int v8; // edx
  int v9; // eax
  unsigned int v10; // ebx
  unsigned int v12; // [rsp+20h] [rbp-38h]
  float v13[4]; // [rsp+30h] [rbp-28h] BYREF

  v2 = *((_DWORD *)this + 5);
  v4 = *((_DWORD *)this + 4);
  v6 = Microsoft_Windows_Dwm_CoreEnableBits;
  v7 = (unsigned int)(v4 + *((_DWORD *)this + 6));
  v8 = v2 + *((_DWORD *)this + 7);
  v13[0] = (float)v4;
  v13[1] = (float)v2;
  v13[2] = (float)(int)v7;
  v13[3] = (float)v8;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x40) != 0 )
  {
    Template_qqqq(v7, &EVTDESC_ETWGUID_LAYEREVENT_BeginExternalLayer_Start, v4, v2, v7, v8);
    v6 = Microsoft_Windows_Dwm_CoreEnableBits;
  }
  if ( (v6 & 0x20) != 0 )
    Template_qqqq(
      (unsigned int)(*((_DWORD *)this + 4) + *((_DWORD *)this + 6)),
      &EVTDESC_ETWGUID_LAYEREVENT_BeginExternalLayer_Stop,
      *((_DWORD *)this + 4),
      *((_DWORD *)this + 5),
      *((_DWORD *)this + 4) + *((_BYTE *)this + 24),
      *((_DWORD *)this + 5) + *((_BYTE *)this + 28));
  v9 = CDrawingContext::PushRenderTarget(a2, *((struct IRenderTarget **)this + 15));
  v10 = v9;
  if ( v9 < 0 )
  {
    v12 = 62;
    goto LABEL_11;
  }
  *((_BYTE *)this + 33) = 1;
  v9 = CDrawingContext::PushGpuClipRectInternal((__int64)a2, 0LL, v13, 1, 1, 0);
  v10 = v9;
  if ( v9 < 0 )
  {
    v12 = 65;
    goto LABEL_11;
  }
  *((_BYTE *)this + 34) = 1;
  v9 = CDrawingContext::Clear((CD2DContext **)a2, &`CVisual::SetHeatMapColor'::`2'::sc_defaultValue);
  v10 = v9;
  if ( v9 < 0 )
  {
    v12 = 68;
LABEL_11:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, v12);
    CHDRConvertLayer::RestoreState(this, a2);
  }
  return v10;
}
