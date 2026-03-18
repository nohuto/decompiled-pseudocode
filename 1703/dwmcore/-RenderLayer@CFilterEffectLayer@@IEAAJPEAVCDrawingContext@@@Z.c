/*
 * XREFs of ?RenderLayer@CFilterEffectLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x18000236C
 * Callers:
 *     ?RestoreState@CFilterEffectLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180002600 (-RestoreState@CFilterEffectLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ?GetD2DEffectNoRef@CFilterEffect@@QEAAJPEAUID2D1Bitmap1@@PEAVID2DContext@@PEAVID2DContextOwner@@PEAPEAUID2D1Effect@@@Z @ 0x180002E54 (-GetD2DEffectNoRef@CFilterEffect@@QEAAJPEAUID2D1Bitmap1@@PEAVID2DContext@@PEAVID2DContextOwner@@.c)
 *     ?PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z @ 0x18000CD28 (-PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z.c)
 *     ?FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBUD2D_POINT_2F@@_N@Z @ 0x18000E0E0 (-FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N3@Z @ 0x1800A0D6C (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     TemplateEventDescriptor @ 0x1800D2908 (TemplateEventDescriptor.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFilterEffectLayer::RenderLayer(CFilterEffectLayer *this, struct CDrawingContext *a2)
{
  int v2; // xmm0_4
  int v4; // xmm1_4
  __int64 v6; // rcx
  struct ID2DContext *v7; // r14
  struct ID2DContextOwner *v8; // r15
  int v9; // eax
  int v10; // ebx
  __int64 v11; // rcx
  float v12; // xmm5_4
  float v13; // xmm4_4
  float v14; // xmm3_4
  float v15; // xmm0_4
  float v16; // xmm1_4
  float v17; // xmm0_4
  unsigned int v19; // [rsp+20h] [rbp-60h]
  struct ID2D1Bitmap1 *v20; // [rsp+30h] [rbp-50h] BYREF
  int v21; // [rsp+38h] [rbp-48h]
  int v22; // [rsp+3Ch] [rbp-44h]
  struct ID2D1Effect *v23; // [rsp+40h] [rbp-40h] BYREF
  float v24; // [rsp+48h] [rbp-38h]
  float v25; // [rsp+4Ch] [rbp-34h]
  float v26; // [rsp+50h] [rbp-30h]
  float v27; // [rsp+54h] [rbp-2Ch]
  float v28; // [rsp+58h] [rbp-28h]
  float v29; // [rsp+5Ch] [rbp-24h]

  v2 = *((_DWORD *)this + 30);
  v4 = *((_DWORD *)this + 31);
  v20 = 0LL;
  v23 = 0LL;
  v6 = *((_QWORD *)this + 1);
  v7 = (struct ID2DContext *)*((_QWORD *)a2 + 49);
  v21 = v2;
  v22 = v4;
  v8 = (struct ID2DContextOwner *)(((unsigned __int64)a2 + 8) & -(__int64)(a2 != 0LL));
  v9 = (*(__int64 (__fastcall **)(__int64, struct ID2D1Bitmap1 **))(*(_QWORD *)v6 + 112LL))(v6, &v20);
  v10 = v9;
  if ( v9 < 0 )
  {
    v19 = 166;
    goto LABEL_13;
  }
  if ( g_LockAndReadLayer )
    (*(void (__fastcall **)(_QWORD, struct ID2DContext *, unsigned __int64))(**((_QWORD **)this + 1) + 176LL))(
      *((_QWORD *)this + 1),
      v7,
      ((unsigned __int64)a2 + 8) & -(__int64)(a2 != 0LL));
  CFilterEffect::GetD2DEffectNoRef(*((CFilterEffect **)this + 14), v20, v7, v8, &v23);
  if ( !v23 )
    goto LABEL_7;
  v12 = *((float *)this + 31);
  v13 = *((float *)this + 32);
  v14 = *((float *)this + 33);
  v15 = (float)*((int *)this + 4);
  LODWORD(v23) = *((_DWORD *)this + 30);
  v16 = *(float *)&v23 - v15;
  *((float *)&v23 + 1) = v12;
  v17 = (float)*((int *)this + 5);
  v26 = v16;
  v27 = v12 - v17;
  v28 = v13 + v16;
  v24 = v13 + *(float *)&v23;
  v25 = v14 + v12;
  v29 = v14 + (float)(v12 - v17);
  v9 = CDrawingContext::PushGpuClipRectInternal((_DWORD)a2, 0, (unsigned int)&v23, 1, 1, 0);
  v10 = v9;
  if ( v9 < 0 )
  {
    v19 = 205;
LABEL_13:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, v19);
    goto LABEL_9;
  }
  v10 = CDrawingContext::FillEffect(a2, 1);
  CDrawingContext::PopGpuClipRectInternal(a2, 0);
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0xDBu);
    goto LABEL_9;
  }
LABEL_7:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    TemplateEventDescriptor(v11, &EVTDESC_ETWGUID_LAYEREVENT_EndExternalLayer_Stop);
LABEL_9:
  ReleaseInterfaceNoNULL<CD2DPencil>(v20);
  return (unsigned int)v10;
}
