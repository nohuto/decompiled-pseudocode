/*
 * XREFs of ?DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@_NPEAI@Z @ 0x18003EAB0
 * Callers:
 *     ?DrawWorker@CPrimitiveGroup@@AEAAJ_NPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x180027B58 (-DrawWorker@CPrimitiveGroup@@AEAAJ_NPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MU.c)
 * Callees:
 *     ?GetClippedD2D1CommandListForContext@CPrimitiveGroup@@QEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAVCPolygon@@PEAPEAUID2D1PrivateCompositorCommandList@@@Z @ 0x180025F10 (-GetClippedD2D1CommandListForContext@CPrimitiveGroup@@QEAAJPEAVID2DContextOwner@@PEAVID2DContext.c)
 *     ?GetTopGpuClipInScope@CScopedClipStack@@QEAAX_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180031D18 (-GetTopGpuClipInScope@CScopedClipStack@@QEAAX_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UN.c)
 *     ?DoesContain@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180036948 (-DoesContain@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?DrawSolidRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x180040290 (-DrawSolidRectangle@CDrawingContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180041600 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?DrawLegacyCommandList@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1PrivateCompositorCommandList@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_DRAW_COMPOSITOR_COMMAND_LIST_OPTIONS@@I_N@Z @ 0x180044710 (-DrawLegacyCommandList@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1PrivateCompositorCommand.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180059BA0 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x18005A460 (--$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18007B3D4 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?DrawColorRectangle@CDrawingContext@@QEAAJAEBU_D3DCOLORVALUE@@AEBUD2D_SIZE_F@@@Z @ 0x18013C970 (-DrawColorRectangle@CDrawingContext@@QEAAJAEBU_D3DCOLORVALUE@@AEBUD2D_SIZE_F@@@Z.c)
 */

__int64 __fastcall CDrawingContext::DrawPrimitiveGroup(
        CDrawingContext *this,
        struct CPrimitiveGroup *a2,
        char a3,
        unsigned int *a4)
{
  struct D2D_SIZE_F v4; // rsi
  unsigned int v5; // r14d
  char v9; // r12
  int v10; // eax
  unsigned int v11; // ebx
  int v12; // eax
  float v13; // xmm7_4
  int ClippedD2D1CommandListForContext; // eax
  int v15; // ecx
  int v16; // eax
  int v17; // ecx
  int v18; // edx
  int v19; // eax
  int v20; // r8d
  bool v21; // zf
  char v22; // cl
  int v23; // eax
  __int64 v24; // rcx
  __int64 (__fastcall *v25)(__int64, unsigned __int64, struct D2D_SIZE_F); // rax
  unsigned __int64 v26; // rdx
  int v27; // eax
  const struct CMILMatrix *TopByReference; // rax
  __int64 v30; // rdx
  float *v31; // rcx
  float v32; // xmm1_4
  int v33; // eax
  int v34; // eax
  BOOL v35; // [rsp+28h] [rbp-59h]
  unsigned int v36; // [rsp+28h] [rbp-59h]
  int v37; // [rsp+30h] [rbp-51h]
  char v38; // [rsp+40h] [rbp-41h]
  struct D2D_SIZE_F v39; // [rsp+58h] [rbp-29h] BYREF
  __int128 v40; // [rsp+60h] [rbp-21h] BYREF
  float v41[4]; // [rsp+70h] [rbp-11h] BYREF

  v4 = 0LL;
  v5 = 0;
  v39 = 0LL;
  v9 = 1;
  if ( !*((_BYTE *)this + 3136) && !*((_QWORD *)this + 846) )
  {
    if ( a3 )
    {
      v5 = *((_DWORD *)a2 + 143);
      v9 = *((_BYTE *)a2 + 576);
      v40 = *(_OWORD *)((char *)a2 + 556);
    }
    v10 = CDrawingContext::ApplyRenderStateInternal(this, 0);
    v11 = v10;
    if ( v10 < 0 )
    {
      v36 = 2302;
LABEL_60:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, v36);
LABEL_25:
      if ( v4 )
        (*(void (__fastcall **)(struct D2D_SIZE_F))(**(_QWORD **)&v4 + 16LL))(v4);
      return v11;
    }
    v12 = *((_DWORD *)this + 776);
    if ( v12 )
      v13 = *(float *)(*((_QWORD *)this + 390) + 4LL * (unsigned int)(v12 - 1));
    else
      v13 = FLOAT_1_0;
    if ( v5 )
    {
      if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v13 - 1.0)) & _xmm) >= 0.0000011920929 )
        goto LABEL_37;
      if ( v9 )
        goto LABEL_9;
      if ( (TopByReference = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 480)),
            LOBYTE(v30) = 1,
            (unsigned __int8)CMILMatrix::Is2DAffine<1>(TopByReference, v30))
        && (v32 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v31[1]) & _xmm), v32 < 0.000081380211)
        && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v31[4]) & _xmm) < 0.000081380211
        || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*v31) & _xmm) < 0.000081380211
        && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v31[5]) & _xmm) < 0.000081380211 )
      {
        CMILMatrix::Transform2DBoundsHelper<1>(v31, &v40, v41);
        CScopedClipStack::GetTopGpuClipInScope((CDrawingContext *)((char *)this + 1008), 1);
        v5 &= -TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesContain(v41, (float *)&v40);
      }
      else
      {
LABEL_37:
        v5 = 0;
      }
    }
LABEL_9:
    ClippedD2D1CommandListForContext = CPrimitiveGroup::GetClippedD2D1CommandListForContext(
                                         a2,
                                         (struct ID2DContextOwner *)(((unsigned __int64)this + 8) & -(__int64)(this != 0LL)),
                                         *((struct ID2DContext **)this + 48),
                                         *((struct CPolygon **)this + 417),
                                         (struct ID2D1PrivateCompositorCommandList **)&v39);
    v11 = ClippedD2D1CommandListForContext;
    if ( ClippedD2D1CommandListForContext < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ClippedD2D1CommandListForContext, 0x930u);
      v4 = v39;
      goto LABEL_25;
    }
    v15 = *((_DWORD *)this + 65);
    v16 = 0;
    if ( v15 )
    {
      if ( v15 == 2 )
      {
        v16 = 1;
      }
      else if ( v15 == 4 )
      {
        v16 = 8;
      }
    }
    v17 = 0;
    v18 = v16 | 2;
    if ( !*((_BYTE *)a2 + 578) )
      v18 = v16;
    v19 = *((_DWORD *)this + 63);
    if ( v19 == 1 )
    {
      v17 = 1;
    }
    else if ( v19 > 1 )
    {
      if ( v19 <= 3 )
      {
        v17 = 2;
        goto LABEL_15;
      }
      switch ( v19 )
      {
        case 4:
          goto LABEL_49;
        case 5:
          v17 = 4;
          break;
        case 6:
LABEL_49:
          v17 = 3;
          break;
      }
    }
LABEL_15:
    v20 = v18 | 4;
    v21 = v17 == 0;
    v22 = 0;
    if ( !v21 )
      v20 = v18;
    if ( *((_DWORD *)this + 128) )
    {
      v23 = *((_DWORD *)this + 128);
      if ( v23 )
        v22 = *(_BYTE *)((unsigned int)(v23 - 1) + *((_QWORD *)this + 66));
    }
    v4 = v39;
    v38 = v22;
    v24 = *((_QWORD *)this + 48);
    v37 = v20;
    v35 = *((_DWORD *)this + 64) != 0;
    v25 = *(__int64 (__fastcall **)(__int64, unsigned __int64, struct D2D_SIZE_F))(*(_QWORD *)v24 + 128LL);
    v26 = ((unsigned __int64)this + 8) & -(__int64)(this != 0LL);
    if ( (char *)v25 == (char *)CD2DContext::DrawLegacyCommandList )
      v27 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))CD2DContext::DrawLegacyCommandList)(v24, v26, v39);
    else
      v27 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v25)(v24, v26, v39);
    v11 = v27;
    if ( v27 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v27, 0x8D8u);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x935u);
      goto LABEL_25;
    }
    if ( !CCommonRegistryData::m_fRenderPathTestMode )
    {
LABEL_24:
      *a4 = v5;
      goto LABEL_25;
    }
    v10 = (*(__int64 (__fastcall **)(struct CPrimitiveGroup *, _QWORD, _QWORD, __int128 *, BOOL, int, unsigned int, char))(*(_QWORD *)a2 + 168LL))(
            a2,
            0LL,
            0LL,
            &v40,
            v35,
            v37,
            v5,
            v38);
    v11 = v10;
    if ( v10 < 0 )
    {
      v36 = 2364;
    }
    else
    {
      v39.width = *((float *)&v40 + 2) - *(float *)&v40;
      v39.height = *((float *)&v40 + 3) - *((float *)&v40 + 1);
      v10 = CDrawingContext::DrawColorRectangle(this, (const struct _D3DCOLORVALUE *)((char *)this + 6808), &v39);
      v11 = v10;
      if ( v10 >= 0 )
        goto LABEL_24;
      v36 = 2367;
    }
    goto LABEL_60;
  }
  v33 = (*(__int64 (__fastcall **)(struct CPrimitiveGroup *, _QWORD, _QWORD, float *))(*(_QWORD *)a2 + 168LL))(
          a2,
          0LL,
          0LL,
          v41);
  v11 = v33;
  if ( v33 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v33, 0x8EFu);
  }
  else
  {
    *(_QWORD *)&v40 = 0x3F8000003F800000LL;
    *((_QWORD *)&v40 + 1) = 0x3F8000003F800000LL;
    v34 = CDrawingContext::DrawSolidRectangle(this, (struct MilRectF *)v41);
    v11 = v34;
    if ( v34 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v34, 0x8F2u);
  }
  return v11;
}
