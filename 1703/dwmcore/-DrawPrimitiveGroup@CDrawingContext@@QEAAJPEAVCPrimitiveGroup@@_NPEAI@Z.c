/*
 * XREFs of ?DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@_NPEAI@Z @ 0x18000EC78
 * Callers:
 *     ?DrawWorker@CPrimitiveGroup@@AEAAJ_NPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18000C420 (-DrawWorker@CPrimitiveGroup@@AEAAJ_NPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MU.c)
 * Callees:
 *     ?GetClippedD2D1CommandListForContext@CPrimitiveGroup@@QEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAVCPolygon@@PEAPEAUID2D1PrivateCompositorCommandList@@@Z @ 0x18000CBB8 (-GetClippedD2D1CommandListForContext@CPrimitiveGroup@@QEAAJPEAVID2DContextOwner@@PEAVID2DContext.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18004EC28 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?DoesContain@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18006FF1C (-DoesContain@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?GetTopGpuClipInScope@CScopedClipStack@@QEAAX_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18009339C (-GetTopGpuClipInScope@CScopedClipStack@@QEAAX_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UN.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180099040 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x180099948 (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x1800A1660 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?DrawSolidRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x1800A9330 (-DrawSolidRectangle@CDrawingContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?DrawLegacyCommandList@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1PrivateCompositorCommandList@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_DRAW_COMPOSITOR_COMMAND_LIST_OPTIONS@@I_N@Z @ 0x1800AD1A0 (-DrawLegacyCommandList@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1PrivateCompositorCommand.c)
 *     ?D2DInterpolationModeFromMilInterpolationMode@@YA?AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapInterpolationMode@@@Z @ 0x1800C22F4 (-D2DInterpolationModeFromMilInterpolationMode@@YA-AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapIn.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?DrawColorRectangle@CDrawingContext@@QEAAJAEBU_D3DCOLORVALUE@@AEBUD2D_SIZE_F@@@Z @ 0x18014B514 (-DrawColorRectangle@CDrawingContext@@QEAAJAEBU_D3DCOLORVALUE@@AEBUD2D_SIZE_F@@@Z.c)
 */

__int64 __fastcall CDrawingContext::DrawPrimitiveGroup(
        CDrawingContext *this,
        struct CPrimitiveGroup *a2,
        char a3,
        unsigned int *a4)
{
  struct D2D_SIZE_F v4; // rsi
  unsigned int v5; // r15d
  char v9; // r12
  int v10; // eax
  unsigned int v11; // ebx
  int v12; // eax
  int ClippedD2D1CommandListForContext; // eax
  int v14; // r8d
  __int64 v15; // rdx
  char v16; // cl
  int v17; // eax
  __int64 v18; // rcx
  __int64 (__fastcall *v19)(__int64, __int64, struct D2D_SIZE_F); // rax
  int v20; // eax
  const struct CMILMatrix *TopByReference; // rax
  __int64 v23; // rcx
  __int64 v24; // rdx
  int v25; // eax
  BOOL v26; // [rsp+28h] [rbp-49h]
  unsigned int v27; // [rsp+28h] [rbp-49h]
  unsigned int v28; // [rsp+28h] [rbp-49h]
  int v29; // [rsp+30h] [rbp-41h]
  char v30; // [rsp+40h] [rbp-31h]
  struct D2D_SIZE_F v31; // [rsp+58h] [rbp-19h] BYREF
  __int128 v32; // [rsp+60h] [rbp-11h] BYREF
  _BYTE v33[16]; // [rsp+70h] [rbp-1h] BYREF

  v4 = 0LL;
  v5 = 0;
  v31 = 0LL;
  v9 = 1;
  if ( *((_BYTE *)this + 3040) || *((_QWORD *)this + 838) )
  {
    v25 = (*(__int64 (__fastcall **)(struct CPrimitiveGroup *, _QWORD, _QWORD, _BYTE *))(*(_QWORD *)a2 + 152LL))(
            a2,
            0LL,
            0LL,
            v33);
    v11 = v25;
    if ( v25 < 0 )
    {
      v28 = 2651;
    }
    else
    {
      *(_QWORD *)&v32 = 0x3F8000003F800000LL;
      *((_QWORD *)&v32 + 1) = 0x3F8000003F800000LL;
      v25 = CDrawingContext::DrawSolidRectangle(this, (struct MilRectF *)v33);
      v11 = v25;
      if ( v25 >= 0 )
        return v11;
      v28 = 2654;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v25, v28);
    return v11;
  }
  if ( a3 )
  {
    v5 = *((_DWORD *)a2 + 111);
    v9 = *((_BYTE *)a2 + 448);
    v32 = *(_OWORD *)((char *)a2 + 428);
  }
  v10 = CDrawingContext::ApplyRenderStateInternal(this, 0);
  v11 = v10;
  if ( v10 < 0 )
  {
    v27 = 2666;
    goto LABEL_36;
  }
  v12 = *((_DWORD *)this + 752);
  if ( !v12 )
  {
    v11 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0xA6Cu);
    return v11;
  }
  if ( v5 )
  {
    if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(*((_QWORD *)this + 378)
                                                                     + 4LL * (unsigned int)(v12 - 1))
                                                          - 1.0)) & _xmm) < 0.0000011920929 )
    {
      if ( v9 )
        goto LABEL_8;
      TopByReference = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 472));
      if ( (unsigned __int8)CMILMatrix::Is2DAxisAlignedPreserving<1>(TopByReference) )
      {
        CMILMatrix::Transform2DBoundsHelper<1>(v23, &v32, v33);
        LOBYTE(v24) = 1;
        CScopedClipStack::GetTopGpuClipInScope((char *)this + 912, v24, &v32);
        v5 &= -((unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesContain(v33, &v32) != 0);
        goto LABEL_8;
      }
    }
    v5 = 0;
  }
LABEL_8:
  ClippedD2D1CommandListForContext = CPrimitiveGroup::GetClippedD2D1CommandListForContext(
                                       a2,
                                       (struct ID2DContextOwner *)(((unsigned __int64)this + 8) & -(__int64)(this != 0LL)),
                                       *((struct ID2DContext **)this + 49),
                                       *((struct CPolygon **)this + 405),
                                       (struct ID2D1PrivateCompositorCommandList **)&v31);
  v11 = ClippedD2D1CommandListForContext;
  if ( ClippedD2D1CommandListForContext < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, ClippedD2D1CommandListForContext, 0xA9Cu);
    v4 = v31;
    goto LABEL_19;
  }
  if ( !(unsigned int)D2DInterpolationModeFromMilInterpolationMode(*((unsigned int *)this + 65)) )
    v14 |= 4u;
  v15 = ((unsigned __int64)this + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64);
  v16 = 0;
  if ( *((_DWORD *)this + 126) )
  {
    v17 = *((_DWORD *)this + 126);
    if ( v17 )
      v16 = *(_BYTE *)((unsigned int)(v17 - 1) + *((_QWORD *)this + 65));
  }
  v4 = v31;
  v30 = v16;
  v18 = *((_QWORD *)this + 49);
  v29 = v14;
  v26 = *((_DWORD *)this + 66) != 0;
  v19 = *(__int64 (__fastcall **)(__int64, __int64, struct D2D_SIZE_F))(*(_QWORD *)v18 + 152LL);
  if ( (char *)v19 == (char *)CD2DContext::DrawLegacyCommandList )
    v20 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))CD2DContext::DrawLegacyCommandList)(v18, v15, v31);
  else
    v20 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v19)(v18, v15, v31);
  v11 = v20;
  if ( v20 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0xA43u);
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xAA1u);
    goto LABEL_19;
  }
  if ( !CCommonRegistryData::m_fRenderPathTestMode )
  {
LABEL_18:
    *a4 = v5;
    goto LABEL_19;
  }
  v10 = (*(__int64 (__fastcall **)(struct CPrimitiveGroup *, _QWORD, _QWORD, __int128 *, BOOL, int, unsigned int, char))(*(_QWORD *)a2 + 152LL))(
          a2,
          0LL,
          0LL,
          &v32,
          v26,
          v29,
          v5,
          v30);
  v11 = v10;
  if ( v10 < 0 )
  {
    v27 = 2728;
  }
  else
  {
    v31.width = *((float *)&v32 + 2) - *(float *)&v32;
    v31.height = *((float *)&v32 + 3) - *((float *)&v32 + 1);
    v10 = CDrawingContext::DrawColorRectangle(this, (const struct _D3DCOLORVALUE *)this + 422, &v31);
    v11 = v10;
    if ( v10 >= 0 )
      goto LABEL_18;
    v27 = 2731;
  }
LABEL_36:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, v27);
LABEL_19:
  if ( v4 )
    (*(void (__fastcall **)(struct D2D_SIZE_F))(**(_QWORD **)&v4 + 16LL))(v4);
  return v11;
}
