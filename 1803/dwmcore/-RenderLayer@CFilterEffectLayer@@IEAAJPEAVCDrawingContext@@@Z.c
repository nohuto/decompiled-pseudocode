/*
 * XREFs of ?RenderLayer@CFilterEffectLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x180175D5C
 * Callers:
 *     ?RestoreState@CFilterEffectLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180175F60 (-RestoreState@CFilterEffectLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z @ 0x1800213F4 (--$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N3@Z @ 0x1800660AC (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z @ 0x18013D0F8 (-PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z.c)
 *     McTemplateU0 @ 0x180143900 (McTemplateU0.c)
 *     ?FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBUD2D_POINT_2F@@_N@Z @ 0x180161240 (-FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 *     ?GetD2DEffectNoRef@CFilterEffect@@QEAAJPEAUID2D1Bitmap1@@PEAVID2DContext@@PEAVID2DContextOwner@@PEAPEAUID2D1Effect@@@Z @ 0x18018E298 (-GetD2DEffectNoRef@CFilterEffect@@QEAAJPEAUID2D1Bitmap1@@PEAVID2DContext@@PEAVID2DContextOwner@@.c)
 */

__int64 __fastcall CFilterEffectLayer::RenderLayer(CFilterEffectLayer *this, struct CDrawingContext *a2)
{
  int v2; // xmm0_4
  int v4; // xmm1_4
  __int64 v6; // rcx
  struct ID2DContext *v7; // r15
  struct ID2DContextOwner *v8; // r14
  int v9; // eax
  int v10; // ebx
  struct ID2D1Effect *v11; // r14
  float v12; // xmm4_4
  float v13; // xmm2_4
  float v14; // xmm0_4
  float v15; // xmm3_4
  float v16; // xmm0_4
  float v17; // xmm1_4
  float v18; // xmm0_4
  unsigned int v20; // [rsp+20h] [rbp-50h]
  struct ID2D1Bitmap1 *v21; // [rsp+30h] [rbp-40h] BYREF
  _DWORD v22[2]; // [rsp+38h] [rbp-38h] BYREF
  struct ID2D1Effect *v23; // [rsp+40h] [rbp-30h] BYREF
  float v24; // [rsp+48h] [rbp-28h]
  float v25; // [rsp+4Ch] [rbp-24h]
  _DWORD v26[4]; // [rsp+50h] [rbp-20h] BYREF

  v2 = *((_DWORD *)this + 30);
  v4 = *((_DWORD *)this + 31);
  v21 = 0LL;
  v23 = 0LL;
  v6 = *((_QWORD *)this + 1);
  v7 = (struct ID2DContext *)*((_QWORD *)a2 + 48);
  v22[0] = v2;
  v22[1] = v4;
  v8 = (struct ID2DContextOwner *)(((unsigned __int64)a2 + 8) & -(__int64)(a2 != 0LL));
  v9 = (*(__int64 (__fastcall **)(__int64, struct ID2D1Bitmap1 **))(*(_QWORD *)v6 + 88LL))(v6, &v21);
  v10 = v9;
  if ( v9 < 0 )
  {
    v20 = 165;
    goto LABEL_12;
  }
  if ( g_LockAndReadLayer )
    (*(void (__fastcall **)(_QWORD, struct ID2DContext *, struct ID2DContextOwner *))(**((_QWORD **)this + 1) + 224LL))(
      *((_QWORD *)this + 1),
      v7,
      v8);
  CFilterEffect::GetD2DEffectNoRef(*((CFilterEffect **)this + 14), v21, v7, v8, &v23);
  v11 = v23;
  if ( !v23 )
    goto LABEL_9;
  v12 = *((float *)this + 31);
  v13 = *((float *)this + 32);
  v14 = (float)*((int *)this + 4);
  LODWORD(v23) = *((_DWORD *)this + 30);
  v15 = *(float *)&v23 - v14;
  *((float *)&v23 + 1) = v12;
  v16 = (float)*((int *)this + 5);
  *(float *)v26 = v15;
  v17 = v12 - v16;
  v18 = *((float *)this + 33);
  *(float *)&v26[2] = v15 + v13;
  *(float *)&v26[1] = v17;
  v24 = v13 + *(float *)&v23;
  *(float *)&v26[3] = v17 + v18;
  v25 = v18 + v12;
  v9 = CDrawingContext::PushGpuClipRectInternal((__int64)a2, 0LL, (float *)&v23, 1, 1, 0);
  v10 = v9;
  if ( v9 < 0 )
  {
    v20 = 204;
LABEL_12:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, v20);
    goto LABEL_13;
  }
  v10 = CDrawingContext::FillEffect(a2, (__int64)v11, (__int64)v26, (__int64)v22);
  CDrawingContext::PopGpuClipRectInternal(a2, 0);
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0xDAu);
    goto LABEL_13;
  }
LABEL_9:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_LAYEREVENT_EndExternalLayer_Stop);
LABEL_13:
  ReleaseInterfaceNoNULL<IWICBitmap>((__int64)v21);
  return (unsigned int)v10;
}
