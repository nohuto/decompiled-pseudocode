/*
 * XREFs of ?ConvertInnerToOuterBounds@CVisual@@IEAAJXZ @ 0x18004DC40
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009F520 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?HasNonDefaultTreeEffectInternal@CLayerVisual@@UEBA_NXZ @ 0x180009D60 (-HasNonDefaultTreeEffectInternal@CLayerVisual@@UEBA_NXZ.c)
 *     ?GetBoundsWithEffects@CLayerVisual@@UEBAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x18000A140 (-GetBoundsWithEffects@CLayerVisual@@UEBAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeed.c)
 *     ?GetVisualNoRef@CVisualReferenceController@@UEBAPEAVCVisual@@XZ @ 0x180027F90 (-GetVisualNoRef@CVisualReferenceController@@UEBAPEAVCVisual@@XZ.c)
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x180029954 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?GetBoundsWithEffects@CVisual@@UEBAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180049FD0 (-GetBoundsWithEffects@CVisual@@UEBAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Re.c)
 *     ?CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z @ 0x18004EAA0 (-CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z.c)
 *     ?GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z @ 0x18004F714 (-GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z.c)
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x18004FC80 (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetBoundsSafe@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18006FC90 (-GetBoundsSafe@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UN.c)
 *     ?IsOfType@CWindowNode@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18008FE40 (-IsOfType@CWindowNode@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CSpriteVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18009D920 (-IsOfType@CSpriteVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CEffectGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18009F390 (-IsOfType@CEffectGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800A3CB8 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ??$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x1800A3F20 (--$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil.c)
 *     ?IntersectUnsafe@?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800BA0C0 (-IntersectUnsafe@-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUnique.c)
 *     ?IsOfType@CLayerVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800BE290 (-IsOfType@CLayerVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::ConvertInnerToOuterBounds(CVisual *this, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // r15d
  bool (__fastcall *v6)(__int64, int); // rax
  __int64 v7; // r9
  float *v8; // rbx
  __int64 v9; // xmm1_8
  float v10; // xmm7_4
  __int64 v11; // rdx
  int v12; // ecx
  float v13; // xmm0_4
  float v14; // xmm0_4
  int v15; // ecx
  unsigned int v16; // eax
  CTransform3D *v17; // rsi
  struct D2D_RECT_F *v18; // r8
  _OWORD *v19; // rdx
  void (__fastcall *v20)(CVisual *, _OWORD *, struct D2D_RECT_F *); // rax
  __int64 v21; // rcx
  int v23; // eax
  int BoundsSafe; // eax
  int v25; // xmm0_4
  char v26; // al
  bool (__fastcall *v27)(CLayerVisual *); // rax
  bool v28; // al
  int v29; // ecx
  int *v30; // rdx
  struct CVisual *(__fastcall *v31)(CVisualReferenceController *); // rax
  double *EffectInternal; // rsi
  unsigned __int8 (__fastcall *v34)(double *, __int64); // rax
  unsigned __int8 (__fastcall *v35)(double *, __int64); // r10
  struct CEffect *v37; // r12
  __int64 (__fastcall *v38)(struct CEffect *, __int64); // rax
  char v39; // al
  __int64 (__fastcall *v40)(struct CEffect *, __int64); // rax
  char v41; // al
  int v42; // r9d
  int *v43; // r8
  int v44; // xmm0_4
  int v45; // edx
  int *v46; // rcx
  float v47; // xmm0_4
  const struct CMILMatrix *Matrix; // rax
  __int128 v49; // xmm1
  __int128 v50; // xmm0
  __int128 v51; // xmm1
  int v52; // eax
  _BYTE v53[4]; // [rsp+38h] [rbp-D0h] BYREF
  float v54; // [rsp+3Ch] [rbp-CCh] BYREF
  _OWORD v55[4]; // [rsp+48h] [rbp-C0h] BYREF
  int v56; // [rsp+88h] [rbp-80h]
  _OWORD v57[4]; // [rsp+98h] [rbp-70h] BYREF
  int v58; // [rsp+D8h] [rbp-30h]
  __int128 v59; // [rsp+E8h] [rbp-20h] BYREF
  __int128 v60; // [rsp+F8h] [rbp-10h] BYREF
  int v61; // [rsp+108h] [rbp+0h]
  int v62; // [rsp+10Ch] [rbp+4h]

  v5 = 0;
  v6 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)this + 48LL);
  if ( v6 != CVisual::IsOfType )
  {
    if ( (char *)v6 == (char *)CSpriteVisual::IsOfType )
    {
      v26 = CSpriteVisual::IsOfType(this, 85LL);
    }
    else if ( (char *)v6 == (char *)CWindowNode::IsOfType )
    {
      v26 = CWindowNode::IsOfType(this, 85LL, a3, a4);
    }
    else
    {
      v26 = (char *)v6 == (char *)CLayerVisual::IsOfType ? CLayerVisual::IsOfType(this, 85LL) : v6((__int64)this, 85);
    }
    if ( v26 )
    {
      v27 = *(bool (__fastcall **)(CLayerVisual *))(*(_QWORD *)this + 176LL);
      v28 = v27 == CLayerVisual::HasNonDefaultTreeEffectInternal
          ? CLayerVisual::HasNonDefaultTreeEffectInternal(this)
          : v27(this);
      if ( (v28 || *((_QWORD *)this + 65)) && !*((_BYTE *)this + 536) )
      {
        CVisual::GetEffectiveSize(this, &v54, (float *)&v59);
        v44 = v59;
        *((float *)this + 43) = v54;
        *((_DWORD *)this + 44) = v44;
        *(_QWORD *)((char *)this + 164) = 0LL;
      }
    }
  }
  v7 = *((_QWORD *)this + 27);
  if ( (*(_BYTE *)(v7 + 4) & 1) != 0 )
  {
    v45 = *(_DWORD *)(v7 + 12);
    v46 = (int *)(v7 + 12);
    if ( (v45 & 0x7F000000) != 0x20000000 )
    {
      do
      {
        v46 = (int *)((char *)v46 + (v45 & 0xFFFFFF) + 4);
        v45 = *v46;
      }
      while ( (*v46 & 0x7F000000) != 0x20000000 );
    }
    *(_QWORD *)&v59 = *(_QWORD *)(v46 + 1);
    if ( (_QWORD)v59 && (int)((__int64)(*(_QWORD *)(v59 + 72) - *(_QWORD *)(v59 + 64)) >> 3) > 0 )
    {
      CVisual::GetEffectiveSize(this, (float *)&v59, &v54);
      v47 = v54;
      *((_DWORD *)this + 43) = v59;
      *((float *)this + 44) = v47;
      *(_QWORD *)((char *)this + 164) = 0LL;
    }
  }
  v8 = (float *)((char *)this + 140);
  v9 = *(_QWORD *)((char *)this + 180);
  *(_OWORD *)((char *)this + 140) = *(_OWORD *)((char *)this + 164);
  *(_QWORD *)((char *)this + 156) = v9;
  v10 = FLOAT_1_0;
  if ( (*(_DWORD *)(v7 + 4) & 0x8000000) != 0 )
  {
    EffectInternal = (double *)CVisual::GetEffectInternal(this);
    v34 = *(unsigned __int8 (__fastcall **)(double *, __int64))(*(_QWORD *)EffectInternal + 48LL);
    if ( v34 == v35 ? CEffectGroup::IsOfType(EffectInternal, 52LL) : v34(EffectInternal, 52LL) )
      v10 = EffectInternal[9];
  }
  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(fminf(1.0, fmaxf(v10, 0.0))) & _xmm) < 0.0000011920929 )
    goto LABEL_65;
  v11 = *((_QWORD *)this + 27);
  v12 = *(_DWORD *)(v11 + 4);
  if ( (v12 & 0x100000) != 0 )
  {
    v42 = *(_DWORD *)(v11 + 12);
    v43 = (int *)(v11 + 12);
    if ( (v42 & 0x7F000000) != 0xC000000 )
    {
      do
      {
        v43 = (int *)((char *)v43 + (v42 & 0xFFFFFF) + 4);
        v42 = *v43;
      }
      while ( (*v43 & 0x7F000000) != 0xC000000 );
    }
    LODWORD(v59) = v43[1];
    v13 = *(float *)&v59;
  }
  else
  {
    v13 = FLOAT_1_0;
  }
  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(fminf(1.0, fmaxf(v13, 0.0))) & _xmm) < 0.0000011920929 )
  {
LABEL_65:
    *(_QWORD *)((char *)this + 156) = 0LL;
    *(_QWORD *)((char *)this + 148) = 0LL;
    *(_QWORD *)v8 = 0LL;
  }
  else
  {
    if ( *((char *)this + 93) < 0 )
      goto LABEL_46;
    if ( (v12 & 0x10000000) != 0 )
    {
      v29 = *(_DWORD *)(v11 + 12);
      v30 = (int *)(v11 + 12);
      if ( (v29 & 0x7F000000) != 0x4000000 )
      {
        do
        {
          v30 = (int *)((char *)v30 + (v29 & 0xFFFFFF) + 4);
          v29 = *v30;
        }
        while ( (*v30 & 0x7F000000) != 0x4000000 );
      }
      *(_QWORD *)&v59 = *(_QWORD *)(v30 + 1);
      if ( (_QWORD)v59 )
      {
        v31 = *(struct CVisual *(__fastcall **)(CVisualReferenceController *))(**(_QWORD **)v59 + 152LL);
        if ( v31 == CVisualReferenceController::GetVisualNoRef
           ? CVisualReferenceController::GetVisualNoRef(*(CVisualReferenceController **)v59)
           : (struct CVisual *)((__int64 (*)(void))v31)() )
        {
          goto LABEL_46;
        }
      }
    }
    v14 = *((float *)this + 40);
    v15 = (v14 <= *((float *)this + 39)) + 1;
    if ( *((float *)this + 37) > *v8 )
      v15 = v14 <= *((float *)this + 39);
    v16 = v15 + 1;
    if ( *((float *)this + 38) > *((float *)this + 36) )
      v16 = v15;
    if ( v16 <= 1 )
    {
      v17 = 0LL;
      if ( (*(_DWORD *)(*((_QWORD *)this + 27) + 4LL) & 0x8000000) != 0 )
      {
        v37 = CVisual::GetEffectInternal(this);
        v38 = *(__int64 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)v37 + 48LL);
        if ( (char *)v38 == (char *)CEffectGroup::IsOfType )
          v39 = CEffectGroup::IsOfType(v37, 143LL);
        else
          v39 = v38(v37, 143LL);
        if ( v39 )
        {
          v17 = v37;
        }
        else
        {
          v40 = *(__int64 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)v37 + 48LL);
          if ( (char *)v40 == (char *)CEffectGroup::IsOfType )
            v41 = CEffectGroup::IsOfType(v37, 52LL);
          else
            v41 = v40(v37, 52LL);
          if ( v41 )
            v17 = (CTransform3D *)*((_QWORD *)v37 + 11);
        }
      }
      v18 = (struct D2D_RECT_F *)((char *)this + 140);
      v19 = (_OWORD *)((char *)this + 164);
      v20 = *(void (__fastcall **)(CVisual *, _OWORD *, struct D2D_RECT_F *))(*(_QWORD *)this + 288LL);
      if ( (char *)v20 == (char *)CVisual::GetBoundsWithEffects )
      {
        CVisual::GetBoundsWithEffects(this, v19, v18);
      }
      else if ( (char *)v20 == (char *)CLayerVisual::GetBoundsWithEffects )
      {
        CLayerVisual::GetBoundsWithEffects(this, (__int64)v19, v18);
      }
      else
      {
        v20(this, v19, v18);
      }
      if ( v17 )
      {
        Matrix = CTransform3D::GetMatrix(v17, (const struct D2D_SIZE_F *)((char *)this + 132));
        v49 = *((_OWORD *)Matrix + 1);
        v57[0] = *(_OWORD *)Matrix;
        v50 = *((_OWORD *)Matrix + 2);
        v57[1] = v49;
        v51 = *((_OWORD *)Matrix + 3);
        v58 = *((_DWORD *)Matrix + 16);
        v52 = *((_DWORD *)this + 25);
        v57[2] = v50;
        v57[3] = v51;
        if ( !v52 || v52 == 3 )
        {
          v55[0] = _xmm;
          LOWORD(v56) = 32095;
          v55[2] = 0LL;
          v55[1] = _xmm;
          v55[3] = _xmm;
          CMILMatrix::Multiply((CMILMatrix *)v57, (const struct CMILMatrix *)v55);
        }
        CMILMatrix::Transform3DBoundsHelper<0>(v57, (char *)this + 140, (char *)this + 140);
      }
      v21 = *((_QWORD *)this + 30);
      if ( v21 )
      {
        v23 = *((_DWORD *)this + 25);
        if ( !v23 || v23 == 3 )
        {
          BoundsSafe = CGeometry::GetBoundsSafe(v21, (char *)this + 132, &v59);
          v5 = BoundsSafe;
          if ( BoundsSafe < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, BoundsSafe, 0x5BAu);
            return v5;
          }
          v25 = *((_DWORD *)this + 39);
          v60 = v59;
          v62 = *((_DWORD *)this + 40);
          v61 = v25;
          TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::IntersectUnsafe(
            (char *)this + 140,
            &v60);
        }
      }
      v56 = 0;
      v58 = 0;
      v53[0] = 0;
      CVisual::CalcEffectiveTransform(this, 5LL, 0LL, v53, v55, v57);
      if ( v53[0] )
        CMILMatrix::Transform3DBoundsHelper<0>(v57, (char *)this + 140, (char *)this + 140);
      if ( *((float *)this + 37) < *v8
        || *((float *)this + 38) < *((float *)this + 36)
        || *((float *)this + 40) < *((float *)this + 39) )
      {
LABEL_46:
        *(_OWORD *)v8 = TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
        *(_QWORD *)((char *)this + 156) = qword_1802D5660;
      }
    }
  }
  return v5;
}
