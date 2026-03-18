/*
 * XREFs of ?RenderLayer@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@@Z @ 0x1800093C4
 * Callers:
 *     ?Draw@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x1800097C0 (-Draw@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?Pop@?$CWatermarkStack@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0EA@$01$09@@QEAA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000A6D8 (-Pop@-$CWatermarkStack@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@.c)
 *     ?Draw@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000A700 (-Draw@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMil.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?PopGpuClipFromScope@CScopedClipStack@@QEAAXXZ @ 0x180062FD8 (-PopGpuClipFromScope@CScopedClipStack@@QEAAXXZ.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N3@Z @ 0x1800660AC (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x180066930 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180066CF0 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x180067310 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?PushEffectiveAlphaForNode@CDrawingContext@@AEAAJPEBVCVisual@@M_N@Z @ 0x18006B474 (-PushEffectiveAlphaForNode@CDrawingContext@@AEAAJPEBVCVisual@@M_N@Z.c)
 *     ?DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@PEBUMilRectF@@1HU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18006C978 (-DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@PEBUMilRectF@@1HU-$TMILFlagsEnum@W4FlagsEnum.c)
 *     ?Pop@?$CWatermarkStack@_N$0EA@$01$09@@QEAA_NPEA_N@Z @ 0x1800BE2F8 (-Pop@-$CWatermarkStack@_N$0EA@$01$09@@QEAA_NPEA_N@Z.c)
 *     ?Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z @ 0x1800C0A50 (-Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C244C (-InternalRelease@-$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0 @ 0x180143900 (McTemplateU0.c)
 *     ?GetMaskForLayerVisualNoRef@CDropShadow@@QEAAPEAVCSpriteVisualContent@@XZ @ 0x18018A428 (-GetMaskForLayerVisualNoRef@CDropShadow@@QEAAPEAVCSpriteVisualContent@@XZ.c)
 */

__int64 __fastcall CTreeEffectLayer::RenderLayer(
        __int64 a1,
        __int64 a2,
        const struct CMILMatrix *a3,
        int a4,
        float *a5)
{
  char v8; // r12
  char v9; // r13
  int v10; // eax
  unsigned int v11; // ebx
  int v12; // eax
  _QWORD *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // r14
  CCompositionSurfaceBitmap *v16; // rcx
  __int64 (__usercall *v17)@<rax>(CCompositionSurfaceBitmap *@<rcx>, _DWORD); // rax
  int v18; // eax
  __int64 v19; // r8
  CDropShadow *v21; // rcx
  float v22; // xmm0_4
  float v23; // xmm1_4
  float v24; // xmm2_4
  float v25; // xmm0_4
  float v26; // xmm2_4
  float v27; // xmm0_4
  float v28; // xmm1_4
  int v29; // eax
  int v30; // eax
  unsigned int v31; // [rsp+20h] [rbp-58h]
  _BYTE v32[8]; // [rsp+30h] [rbp-48h] BYREF
  struct CRenderTargetImageSource *v33[2]; // [rsp+38h] [rbp-40h] BYREF
  _DWORD v34[8]; // [rsp+48h] [rbp-30h] BYREF

  v8 = 0;
  v9 = 0;
  v10 = CDrawingContext::PushGpuClipRectInternal(a2, 0, a4, 1, 1, 0);
  v11 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x297u);
    return v11;
  }
  if ( !*(_QWORD *)(a1 + 248) )
  {
    v11 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x29Cu);
    goto LABEL_15;
  }
  v12 = CDrawingContext::PushTransformInternal((CDrawingContext *)a2, 0LL, a3, 0, 1);
  v11 = v12;
  if ( v12 < 0 )
  {
    v31 = 675;
    goto LABEL_34;
  }
  v9 = 1;
  v12 = CDrawingContext::PushEffectiveAlphaForNode((CDrawingContext *)a2, 0LL, 1.0, 1);
  v11 = v12;
  if ( v12 < 0 )
  {
    v31 = 678;
    goto LABEL_34;
  }
  ++*(_DWORD *)(a2 + 768);
  v8 = 1;
  v12 = CDrawingContext::ApplyRenderStateInternal((CDrawingContext *)a2, 0);
  v11 = v12;
  if ( v12 < 0 )
  {
    v31 = 684;
LABEL_34:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, v31);
    goto LABEL_15;
  }
  if ( g_LockAndReadLayer )
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 8) + 224LL))(
      *(_QWORD *)(a1 + 8),
      *(_QWORD *)(a2 + 384),
      (a2 + 8) & -(__int64)(a2 != 0));
  v13 = *(_QWORD **)(a1 + 248);
  if ( *(_QWORD *)(a1 + 240) )
  {
    v14 = (*(__int64 (__fastcall **)(_QWORD *))(*v13 + 184LL))(v13);
    v15 = v14;
    if ( !v14 )
      goto LABEL_13;
    *(_QWORD *)(v14 + 8) = a1;
    v16 = *(CCompositionSurfaceBitmap **)(a1 + 240);
    v32[0] = 0;
    *(_OWORD *)v33 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    v17 = *(__int64 (__usercall **)@<rax>(CCompositionSurfaceBitmap *@<rcx>, _DWORD))(*(_QWORD *)v16 + 160LL);
    v18 = v17 == CSpriteVisualContent::Draw
        ? CSpriteVisualContent::Draw(v16, (unsigned int)v33)
        : ((__int64 (__fastcall *)(CCompositionSurfaceBitmap *, __int64, float *, _BYTE *, struct CRenderTargetImageSource **))v17)(
            v16,
            a2,
            a5,
            v32,
            v33);
    *(_QWORD *)(v15 + 8) = 0LL;
    v11 = v18;
    if ( v18 >= 0 )
    {
LABEL_13:
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_LAYEREVENT_EndExternalLayer_Stop);
      goto LABEL_15;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x2CFu);
  }
  else
  {
    v21 = (CDropShadow *)v13[65];
    if ( !v21 || CDropShadow::GetMaskForLayerVisualNoRef(v21) )
      goto LABEL_13;
    v22 = *a5;
    v23 = a5[1];
    v34[0] = 0;
    v34[1] = 0;
    v24 = *(float *)(a1 + 224);
    v33[0] = 0LL;
    *(float *)&v34[2] = v22 + 0.0;
    v25 = (float)*(int *)(a1 + 20);
    *(float *)&v34[3] = v23 + 0.0;
    v26 = v24 - v25;
    v27 = *(float *)(a1 + 220);
    v28 = (float)*(int *)(a1 + 16);
    *(float *)&v34[5] = v26;
    *(float *)&v34[7] = v26 + *(float *)(a1 + 232);
    *(float *)&v34[4] = v27 - v28;
    *(float *)&v34[6] = (float)(v27 - v28) + *(float *)(a1 + 228);
    Microsoft::WRL::ComPtr<CRenderTargetImageSource>::InternalRelease(v33);
    v29 = CRenderTargetImageSource::Create(*(struct IRenderTarget **)(a1 + 8), 1, v33);
    v11 = v29;
    if ( v29 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v29, 0x2EBu);
    }
    else
    {
      v30 = CDrawingContext::DrawBitmap((CDrawingContext *)a2, 0, 0);
      v11 = v30;
      if ( v30 >= 0 )
      {
        Microsoft::WRL::ComPtr<CRenderTargetImageSource>::InternalRelease(v33);
        goto LABEL_13;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v30, 0x2F4u);
    }
    Microsoft::WRL::ComPtr<CRenderTargetImageSource>::InternalRelease(v33);
  }
LABEL_15:
  CScopedClipStack::PopGpuClipFromScope((CScopedClipStack *)(a2 + 1008));
  *(_BYTE *)(a2 + 6825) = 1;
  if ( v8 )
  {
    --*(_DWORD *)(a2 + 768);
    CWatermarkStack<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,64,2,10>::Pop(
      a2 + 448,
      v34,
      v19);
    CWatermarkStack<bool,64,2,10>::Pop(a2 + 3104);
  }
  if ( v9 )
    CDrawingContext::PopTransformInternal((CDrawingContext *)a2, 1);
  return v11;
}
