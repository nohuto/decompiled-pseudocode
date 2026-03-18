/*
 * XREFs of ?DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@_NPEAI@Z @ 0x1801608EC
 * Callers:
 *     ?DrawWorker@CPrimitiveGroup@@AEAAJ_NPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x1800973F0 (-DrawWorker@CPrimitiveGroup@@AEAAJ_NPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MU.c)
 * Callees:
 *     ?DrawSolidRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x180008CF0 (-DrawSolidRectangle@CDrawingContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x180021410 (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetTopGpuClipInScope@CScopedClipStack@@QEBAX_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180063000 (-GetTopGpuClipInScope@CScopedClipStack@@QEBAX_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UN.c)
 *     ?DoesContain@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800651F0 (-DoesContain@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?IsBounding@CDrawingContext@@QEBA_NXZ @ 0x1800665E4 (-IsBounding@CDrawingContext@@QEBA_NXZ.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180066CF0 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800A5380 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x1800A5828 (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x1800BE850 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?DrawColorRectangle@CDrawingContext@@QEAAJAEBU_D3DCOLORVALUE@@AEBUD2D_SIZE_F@@@Z @ 0x18015F254 (-DrawColorRectangle@CDrawingContext@@QEAAJAEBU_D3DCOLORVALUE@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?DrawLegacyD2DCommandList@CDrawingContext@@AEAAJPEAUID2D1PrivateCompositorCommandList@@M_NI@Z @ 0x1801601F4 (-DrawLegacyD2DCommandList@CDrawingContext@@AEAAJPEAUID2D1PrivateCompositorCommandList@@M_NI@Z.c)
 *     ?GetClippedD2D1CommandListForContext@CPrimitiveGroup@@QEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAVCPolygon@@PEAPEAUID2D1PrivateCompositorCommandList@@@Z @ 0x18019F008 (-GetClippedD2D1CommandListForContext@CPrimitiveGroup@@QEAAJPEAVID2DContextOwner@@PEAVID2DContext.c)
 */

__int64 __fastcall CDrawingContext::DrawPrimitiveGroup(
        CDrawingContext *this,
        struct CPrimitiveGroup *a2,
        __int64 a3,
        unsigned int *a4)
{
  unsigned int v7; // r14d
  char v8; // r15
  __int64 v9; // rdx
  CDrawingContext *v10; // rcx
  char v11; // r8
  int v12; // eax
  unsigned int v13; // ebx
  int v14; // eax
  int v15; // eax
  int v16; // eax
  float v17; // xmm6_4
  float v18; // xmm2_4
  const struct CMILMatrix *TopByReference; // rax
  __int64 v20; // rdx
  __int64 v21; // r11
  int ClippedD2D1CommandListForContext; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  struct ID2D1PrivateCompositorCommandList *v27; // [rsp+30h] [rbp-40h] BYREF
  struct D2D_RECT_F v28; // [rsp+38h] [rbp-38h] BYREF
  struct D2D_SIZE_F v29; // [rsp+48h] [rbp-28h] BYREF

  v27 = 0LL;
  v7 = 0;
  v8 = 1;
  if ( CDrawingContext::IsBounding(this) )
  {
    v12 = (*(__int64 (__fastcall **)(struct CPrimitiveGroup *, _QWORD, _QWORD, struct D2D_SIZE_F *))(*(_QWORD *)v9 + 168LL))(
            a2,
            0LL,
            0LL,
            &v29);
    v13 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x877u);
    }
    else
    {
      *(_QWORD *)&v28.left = 0x3F8000003F800000LL;
      *(_QWORD *)&v28.right = 0x3F8000003F800000LL;
      v14 = CDrawingContext::DrawSolidRectangle(this, (struct MilRectF *)&v29, &v28);
      v13 = v14;
      if ( v14 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x87Au);
    }
    goto LABEL_29;
  }
  if ( v11 )
  {
    v7 = *(_DWORD *)(v9 + 572);
    v8 = *(_BYTE *)(v9 + 576);
    v28 = *(struct D2D_RECT_F *)(v9 + 556);
  }
  v15 = CDrawingContext::ApplyRenderStateInternal(v10, 0);
  v13 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x886u);
    goto LABEL_29;
  }
  v16 = *((_DWORD *)this + 776);
  if ( v16 )
    v17 = *(float *)(*((_QWORD *)this + 390) + 4LL * (unsigned int)(v16 - 1));
  else
    v17 = FLOAT_1_0;
  if ( v7 )
  {
    v18 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v17 - 1.0)) & _xmm);
    if ( v18 >= 0.0000011920929 )
      goto LABEL_16;
    if ( v8 )
      goto LABEL_18;
    TopByReference = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 480));
    if ( CMILMatrix::Is2DAxisAlignedPreserving<1>((__int64)TopByReference, v20) )
    {
      CMILMatrix::Transform2DBoundsHelper<1>(v21, &v28.left, (float *)&v29);
      CScopedClipStack::GetTopGpuClipInScope((__int64 *)this + 126, 1, (__int64)&v28);
      v7 &= -TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesContain((__int64)&v29, &v28);
    }
    else
    {
LABEL_16:
      v7 = 0;
    }
  }
LABEL_18:
  ClippedD2D1CommandListForContext = CPrimitiveGroup::GetClippedD2D1CommandListForContext(
                                       a2,
                                       (struct ID2DContextOwner *)(((unsigned __int64)this + 8) & -(__int64)(this != 0LL)),
                                       *((struct ID2DContext **)this + 48),
                                       *((struct CPolygon **)this + 417),
                                       &v27);
  v13 = ClippedD2D1CommandListForContext;
  if ( ClippedD2D1CommandListForContext < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ClippedD2D1CommandListForContext, 0x8B8u);
    goto LABEL_29;
  }
  v23 = CDrawingContext::DrawLegacyD2DCommandList(this, v27, v17);
  v13 = v23;
  if ( v23 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, 0x8BDu);
    goto LABEL_29;
  }
  if ( !CCommonRegistryData::m_fRenderPathTestMode )
    goto LABEL_25;
  v24 = (*(__int64 (__fastcall **)(struct CPrimitiveGroup *, _QWORD, _QWORD, struct D2D_RECT_F *, unsigned int))(*(_QWORD *)a2 + 168LL))(
          a2,
          0LL,
          0LL,
          &v28,
          v7);
  v13 = v24;
  if ( v24 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v24, 0x8C4u);
    goto LABEL_29;
  }
  v29.width = v28.right - v28.left;
  v29.height = v28.bottom - v28.top;
  v25 = CDrawingContext::DrawColorRectangle(
          (CMILRefCountBase **)this,
          (const struct _D3DCOLORVALUE *)((char *)this + 6808),
          &v29);
  v13 = v25;
  if ( v25 >= 0 )
  {
LABEL_25:
    *a4 = v7;
    goto LABEL_29;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v25, 0x8C7u);
LABEL_29:
  ReleaseInterface<IBitmapLock>((__int64 *)&v27);
  return v13;
}
