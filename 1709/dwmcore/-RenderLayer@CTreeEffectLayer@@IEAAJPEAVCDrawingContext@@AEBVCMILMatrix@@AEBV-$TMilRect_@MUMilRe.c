/*
 * XREFs of ?RenderLayer@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@@Z @ 0x180080600
 * Callers:
 *     ?Draw@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x1800809DC (-Draw@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?PushEffectiveAlphaForNode@CDrawingContext@@AEAAJPEBVCVisual@@M_N@Z @ 0x18003B4F0 (-PushEffectiveAlphaForNode@CDrawingContext@@AEAAJPEBVCVisual@@M_N@Z.c)
 *     ?PopAlpha@CDrawingContext@@AEAAX_N@Z @ 0x18003B6C0 (-PopAlpha@CDrawingContext@@AEAAX_N@Z.c)
 *     ?DrawBitmapSource@CDrawingContext@@AEAAJPEAVIBitmapSource@@PEBUMilRectF@@1HU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@W4Enum@MilCompositingMode@@@Z @ 0x18003DA1C (-DrawBitmapSource@CDrawingContext@@AEAAJPEAVIBitmapSource@@PEBUMilRectF@@1HU-$TMILFlagsEnum@W4Fl.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x180041260 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180041600 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x180041BF8 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N3@Z @ 0x1800437C8 (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z @ 0x180043A30 (-PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007950C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0 @ 0x180120DC8 (McTemplateU0.c)
 *     ?GetMaskForLayerVisualNoRef@CDropShadow@@QEAAPEAVCSpriteVisualContent@@XZ @ 0x180160B84 (-GetMaskForLayerVisualNoRef@CDropShadow@@QEAAPEAVCSpriteVisualContent@@XZ.c)
 */

__int64 __fastcall CTreeEffectLayer::RenderLayer(
        __int64 a1,
        __int64 a2,
        const struct CMILMatrix *a3,
        float *a4,
        float *a5)
{
  char v8; // r12
  char v9; // r15
  signed int v10; // eax
  unsigned int v11; // ebx
  signed int v12; // eax
  __int64 v13; // rax
  __int64 v14; // r14
  __int64 v15; // rcx
  CDropShadow *v17; // rcx
  float v18; // xmm1_4
  __int64 *v19; // rcx
  float v20; // xmm0_4
  float v21; // xmm2_4
  __int64 v22; // rax
  float v23; // xmm0_4
  __int64 (__fastcall *v24)(__int64 *, __int128 *); // rax
  float v25; // xmm2_4
  float v26; // xmm0_4
  float v27; // xmm1_4
  signed int v28; // eax
  signed int v29; // eax
  unsigned int v30; // [rsp+20h] [rbp-51h]
  _BYTE v31[8]; // [rsp+40h] [rbp-31h] BYREF
  __int128 v32; // [rsp+48h] [rbp-29h] BYREF
  float v33[4]; // [rsp+58h] [rbp-19h] BYREF
  _DWORD v34[4]; // [rsp+68h] [rbp-9h] BYREF

  v8 = 0;
  v9 = 0;
  v10 = CDrawingContext::PushGpuClipRectInternal(a2, 0LL, a4, 1, 1, 0);
  v11 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v10, 0x298u);
    return v11;
  }
  if ( !*(_QWORD *)(a1 + 248) )
  {
    v11 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0x29Du);
    goto LABEL_13;
  }
  v12 = CDrawingContext::PushTransformInternal((CDrawingContext *)a2, 0LL, a3, 0, 1);
  v11 = v12;
  if ( v12 < 0 )
  {
    v30 = 676;
    goto LABEL_31;
  }
  v9 = 1;
  v12 = CDrawingContext::PushEffectiveAlphaForNode((CDrawingContext *)a2, 0LL, 1.0, 1);
  v11 = v12;
  if ( v12 < 0 )
  {
    v30 = 679;
LABEL_31:
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v12, v30);
    goto LABEL_13;
  }
  ++*(_DWORD *)(a2 + 768);
  v8 = 1;
  v12 = CDrawingContext::ApplyRenderStateInternal((CDrawingContext *)a2, 0);
  v11 = v12;
  if ( v12 < 0 )
  {
    v30 = 685;
    goto LABEL_31;
  }
  if ( g_LockAndReadLayer )
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 8) + 184LL))(
      *(_QWORD *)(a1 + 8),
      *(_QWORD *)(a2 + 384),
      (a2 + 8) & -(__int64)(a2 != 0));
  if ( *(_QWORD *)(a1 + 240) )
  {
    v13 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 248) + 184LL))(*(_QWORD *)(a1 + 248));
    v14 = v13;
    if ( !v13 )
      goto LABEL_11;
    *(_QWORD *)(v13 + 8) = a1;
    v15 = *(_QWORD *)(a1 + 240);
    v31[0] = 0;
    v32 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    v12 = (*(__int64 (__fastcall **)(__int64, __int64, float *, _BYTE *, __int128 *))(*(_QWORD *)v15 + 160LL))(
            v15,
            a2,
            a5,
            v31,
            &v32);
    *(_QWORD *)(v14 + 8) = 0LL;
    v11 = v12;
    if ( v12 >= 0 )
      goto LABEL_11;
    v30 = 720;
    goto LABEL_31;
  }
  v17 = *(CDropShadow **)(*(_QWORD *)(a1 + 248) + 512LL);
  if ( !v17 || CDropShadow::GetMaskForLayerVisualNoRef(v17) )
  {
LABEL_11:
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_LAYEREVENT_EndExternalLayer_Stop);
    goto LABEL_13;
  }
  v18 = a5[1];
  v19 = *(__int64 **)(a1 + 8);
  v20 = *a5 + 0.0;
  v34[0] = 0;
  v21 = *(float *)(a1 + 224);
  v34[1] = 0;
  *(_QWORD *)&v32 = 0LL;
  v22 = *v19;
  *(float *)&v34[2] = v20;
  v23 = (float)*(int *)(a1 + 20);
  v24 = *(__int64 (__fastcall **)(__int64 *, __int128 *))(v22 + 192);
  *(float *)&v34[3] = v18 + 0.0;
  v25 = v21 - v23;
  v26 = *(float *)(a1 + 220);
  v27 = (float)*(int *)(a1 + 16);
  v33[1] = v25;
  v33[3] = v25 + *(float *)(a1 + 232);
  v33[0] = v26 - v27;
  v33[2] = (float)(v26 - v27) + *(float *)(a1 + 228);
  v28 = v24(v19, &v32);
  v11 = v28;
  if ( v28 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v28, 0x2EAu);
  }
  else
  {
    v29 = CDrawingContext::DrawBitmapSource((CDrawingContext *)a2, v32, (__int64)v34, v33, 0, 0);
    v11 = v29;
    if ( v29 >= 0 )
    {
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v32);
      goto LABEL_11;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v29, 0x2F1u);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v32);
LABEL_13:
  CDrawingContext::PopGpuClipRectInternal((CDrawingContext *)a2, 0);
  if ( v8 )
  {
    --*(_DWORD *)(a2 + 768);
    CDrawingContext::PopAlpha((CDrawingContext *)a2, 1);
  }
  if ( v9 )
    CDrawingContext::PopTransformInternal((CDrawingContext *)a2, 1);
  return v11;
}
