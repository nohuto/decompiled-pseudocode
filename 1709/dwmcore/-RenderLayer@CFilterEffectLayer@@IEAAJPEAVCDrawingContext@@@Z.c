/*
 * XREFs of ?RenderLayer@CFilterEffectLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x18014CA48
 * Callers:
 *     ?RestoreState@CFilterEffectLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18014CC60 (-RestoreState@CFilterEffectLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N3@Z @ 0x1800437C8 (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z @ 0x180043A30 (-PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$ReleaseInterfaceNoNULL@UID2D1Bitmap1@@@@YAXPEAUID2D1Bitmap1@@@Z @ 0x1800823A0 (--$ReleaseInterfaceNoNULL@UID2D1Bitmap1@@@@YAXPEAUID2D1Bitmap1@@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0 @ 0x180120DC8 (McTemplateU0.c)
 *     ?FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBUD2D_POINT_2F@@_N@Z @ 0x18013D8B8 (-FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 *     ?GetD2DEffectNoRef@CFilterEffect@@QEAAJPEAUID2D1Bitmap1@@PEAVID2DContext@@PEAVID2DContextOwner@@PEAPEAUID2D1Effect@@@Z @ 0x180163EC8 (-GetD2DEffectNoRef@CFilterEffect@@QEAAJPEAUID2D1Bitmap1@@PEAVID2DContext@@PEAVID2DContextOwner@@.c)
 */

__int64 __fastcall CFilterEffectLayer::RenderLayer(CFilterEffectLayer *this, struct CDrawingContext *a2)
{
  int v2; // xmm0_4
  int v4; // xmm1_4
  __int64 v6; // rcx
  struct ID2DContext *v7; // r15
  struct ID2DContextOwner *v8; // r14
  signed int v9; // eax
  signed int v10; // ebx
  struct ID2D1Effect *v11; // r14
  float v12; // xmm5_4
  float v13; // xmm4_4
  float v14; // xmm3_4
  float v15; // xmm0_4
  float v16; // xmm1_4
  float v17; // xmm0_4
  unsigned int v19; // [rsp+20h] [rbp-60h]
  struct ID2D1Bitmap1 *v20; // [rsp+30h] [rbp-50h] BYREF
  _DWORD v21[2]; // [rsp+38h] [rbp-48h] BYREF
  struct ID2D1Effect *v22; // [rsp+40h] [rbp-40h] BYREF
  float v23; // [rsp+48h] [rbp-38h]
  float v24; // [rsp+4Ch] [rbp-34h]
  _DWORD v25[4]; // [rsp+50h] [rbp-30h] BYREF

  v2 = *((_DWORD *)this + 30);
  v4 = *((_DWORD *)this + 31);
  v20 = 0LL;
  v22 = 0LL;
  v6 = *((_QWORD *)this + 1);
  v7 = (struct ID2DContext *)*((_QWORD *)a2 + 48);
  v21[0] = v2;
  v21[1] = v4;
  v8 = (struct ID2DContextOwner *)(((unsigned __int64)a2 + 8) & -(__int64)(a2 != 0LL));
  v9 = (*(__int64 (__fastcall **)(__int64, struct ID2D1Bitmap1 **))(*(_QWORD *)v6 + 96LL))(v6, &v20);
  v10 = v9;
  if ( v9 < 0 )
  {
    v19 = 165;
    goto LABEL_12;
  }
  if ( g_LockAndReadLayer )
    (*(void (__fastcall **)(_QWORD, struct ID2DContext *, struct ID2DContextOwner *))(**((_QWORD **)this + 1) + 184LL))(
      *((_QWORD *)this + 1),
      v7,
      v8);
  CFilterEffect::GetD2DEffectNoRef(*((CFilterEffect **)this + 14), v20, v7, v8, &v22);
  v11 = v22;
  if ( !v22 )
    goto LABEL_9;
  v12 = *((float *)this + 31);
  v13 = *((float *)this + 32);
  v14 = *((float *)this + 33);
  v15 = (float)*((int *)this + 4);
  LODWORD(v22) = *((_DWORD *)this + 30);
  v16 = *(float *)&v22 - v15;
  *((float *)&v22 + 1) = v12;
  v17 = (float)*((int *)this + 5);
  *(float *)v25 = v16;
  *(float *)&v25[1] = v12 - v17;
  *(float *)&v25[2] = v13 + v16;
  v23 = v13 + *(float *)&v22;
  v24 = v14 + v12;
  *(float *)&v25[3] = v14 + (float)(v12 - v17);
  v9 = CDrawingContext::PushGpuClipRectInternal((__int64)a2, 0LL, (float *)&v22, 1, 1, 0);
  v10 = v9;
  if ( v9 < 0 )
  {
    v19 = 204;
LABEL_12:
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, v19);
    goto LABEL_13;
  }
  v10 = CDrawingContext::FillEffect(a2, (__int64)v11, (__int64)v25, (__int64)v21, 1);
  CDrawingContext::PopGpuClipRectInternal(a2, 0);
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v10, 0xDAu);
    goto LABEL_13;
  }
LABEL_9:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_LAYEREVENT_EndExternalLayer_Stop);
LABEL_13:
  ReleaseInterfaceNoNULL<ID2D1Bitmap1>((__int64)v20);
  return (unsigned int)v10;
}
