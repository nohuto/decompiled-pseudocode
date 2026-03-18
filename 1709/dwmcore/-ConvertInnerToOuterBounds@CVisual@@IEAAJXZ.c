/*
 * XREFs of ?ConvertInnerToOuterBounds@CVisual@@IEAAJXZ @ 0x18004FDC0
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180057590 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?IsOfType@CSpriteVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180022240 (-IsOfType@CSpriteVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z @ 0x18004DD70 (-CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z.c)
 *     ?GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ @ 0x18004EB40 (-GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ.c)
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x180050EE8 (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     ?GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z @ 0x180050F3C (-GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z.c)
 *     ?GetBoundsWithEffects@CVisual@@UEBAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1800525C0 (-GetBoundsWithEffects@CVisual@@UEBAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Re.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800597A4 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ??$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x180059A5C (--$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?HasNonDefaultTreeEffectInternal@CLayerVisual@@UEBA_NXZ @ 0x180083430 (-HasNonDefaultTreeEffectInternal@CLayerVisual@@UEBA_NXZ.c)
 *     ?IsOfType@CLayerVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180083440 (-IsOfType@CLayerVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?GetBoundsWithEffects@CLayerVisual@@UEBAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1800837C0 (-GetBoundsWithEffects@CLayerVisual@@UEBAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeed.c)
 *     ?IntersectUnsafe@?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180087A00 (-IntersectUnsafe@-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUnique.c)
 *     ?IsOfType@CEffectGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180092A80 (-IsOfType@CEffectGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x18009677C (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?GetBoundsSafe@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180096CE0 (-GetBoundsSafe@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UN.c)
 *     ?IsOfType@CWindowNode@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180098CC0 (-IsOfType@CWindowNode@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::ConvertInnerToOuterBounds(CVisual *this, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // r15d
  bool (__fastcall *v6)(__int64, int); // rax
  __int64 v7; // rax
  float *v8; // rbx
  __int64 v9; // xmm1_8
  float v10; // xmm7_4
  __int64 v11; // rax
  int v12; // r10d
  float v13; // xmm0_4
  unsigned int v14; // eax
  CTransform3D *v15; // rsi
  __int64 (__fastcall *v16)(CVisual *); // rax
  __int64 v17; // rcx
  int BoundsSafe; // eax
  int v20; // xmm0_4
  char v21; // al
  bool (__fastcall *v22)(CLayerVisual *__hidden); // rax
  bool v23; // al
  double *EffectInternal; // rsi
  unsigned __int8 (__fastcall *v25)(double *, __int64); // rax
  unsigned __int8 (__fastcall *v26)(double *, __int64); // r11
  struct CEffect *v28; // r12
  __int64 (__fastcall *v29)(struct CEffect *, __int64); // rax
  __int64 (__fastcall *v30)(struct CEffect *, __int64); // r11
  char v31; // al
  __int64 (__fastcall *v32)(struct CEffect *, __int64); // rax
  char v33; // al
  int v34; // edx
  int *v35; // rcx
  float v36; // xmm0_4
  const struct CMILMatrix *Matrix; // rax
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  int v41; // [rsp+38h] [rbp-D0h] BYREF
  float v42; // [rsp+3Ch] [rbp-CCh] BYREF
  float v43; // [rsp+40h] [rbp-C8h] BYREF
  _OWORD v44[4]; // [rsp+48h] [rbp-C0h] BYREF
  int v45; // [rsp+88h] [rbp-80h]
  _OWORD v46[4]; // [rsp+98h] [rbp-70h] BYREF
  int v47; // [rsp+D8h] [rbp-30h]
  __int128 v48; // [rsp+E8h] [rbp-20h] BYREF
  __int128 v49; // [rsp+F8h] [rbp-10h] BYREF
  int v50; // [rsp+108h] [rbp+0h]
  int v51; // [rsp+10Ch] [rbp+4h]

  v5 = 0;
  v6 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)this + 48LL);
  if ( (char *)v6 != (char *)&CVisual::IsOfType )
  {
    if ( (char *)v6 == (char *)CWindowNode::IsOfType )
    {
      v21 = CWindowNode::IsOfType(this, 79LL, a3, a4);
    }
    else if ( v6 == CSpriteVisual::IsOfType )
    {
      v21 = CSpriteVisual::IsOfType((__int64)this, 79);
    }
    else
    {
      v21 = (char *)v6 == (char *)CLayerVisual::IsOfType
          ? CLayerVisual::IsOfType(this, 79LL, a3, a4)
          : v6((__int64)this, 79);
    }
    if ( v21 )
    {
      v22 = *(bool (__fastcall **)(CLayerVisual *__hidden))(*(_QWORD *)this + 176LL);
      v23 = v22 == CLayerVisual::HasNonDefaultTreeEffectInternal
          ? CLayerVisual::HasNonDefaultTreeEffectInternal(this)
          : v22(this);
      if ( (v23 || *((_QWORD *)this + 64)) && !*((_BYTE *)this + 528) )
      {
        CVisual::GetEffectiveSize(this, &v43, &v42);
        v36 = v42;
        *((float *)this + 43) = v43;
        *((float *)this + 44) = v36;
        *(_QWORD *)((char *)this + 164) = 0LL;
      }
    }
  }
  v7 = *((_QWORD *)this + 26);
  v8 = (float *)((char *)this + 140);
  v9 = *(_QWORD *)((char *)this + 180);
  *(_OWORD *)((char *)this + 140) = *(_OWORD *)((char *)this + 164);
  *(_QWORD *)((char *)this + 156) = v9;
  v10 = FLOAT_1_0;
  if ( (*(_DWORD *)(v7 + 4) & 0x8000000) != 0 )
  {
    EffectInternal = (double *)CVisual::GetEffectInternal(this);
    v25 = *(unsigned __int8 (__fastcall **)(double *, __int64))(*(_QWORD *)EffectInternal + 48LL);
    if ( v25 == v26 ? CEffectGroup::IsOfType(EffectInternal, 47LL) : v25(EffectInternal, 47LL) )
      v10 = EffectInternal[9];
  }
  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(fminf(1.0, fmaxf(v10, 0.0))) & _xmm) < 0.0000011920929 )
    goto LABEL_59;
  v11 = *((_QWORD *)this + 26);
  v12 = *(_DWORD *)(v11 + 4);
  if ( (v12 & 0x100000) != 0 )
  {
    v34 = *(_DWORD *)(v11 + 12);
    v35 = (int *)(v11 + 12);
    if ( (v34 & 0x7F000000) != 0xC000000 )
    {
      do
      {
        v35 = (int *)((char *)v35 + (v34 & 0xFFFFFF) + 4);
        v34 = *v35;
      }
      while ( (*v35 & 0x7F000000) != 0xC000000 );
    }
    LODWORD(v42) = v35[1];
    v13 = v42;
  }
  else
  {
    v13 = FLOAT_1_0;
  }
  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(fminf(1.0, fmaxf(v13, 0.0))) & _xmm) < 0.0000011920929 )
  {
LABEL_59:
    *(_QWORD *)((char *)this + 156) = 0LL;
    *(_QWORD *)((char *)this + 148) = 0LL;
    *(_QWORD *)v8 = 0LL;
  }
  else
  {
    if ( (*((_BYTE *)this + 93) & 8) != 0
      || (v12 & 0x10000000) != 0 && *(_QWORD *)(*(_QWORD *)CVisual::GetTransformParentDataInternal(this) + 8LL) )
    {
      goto LABEL_40;
    }
    v14 = *((float *)this + 40) <= *((float *)this + 39);
    if ( *((float *)this + 37) <= *v8 )
      ++v14;
    if ( *((float *)this + 38) <= *((float *)this + 36) )
      ++v14;
    if ( v14 <= 1 )
    {
      v15 = 0LL;
      if ( (v12 & 0x8000000) != 0 )
      {
        v28 = CVisual::GetEffectInternal(this);
        v29 = *(__int64 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)v28 + 48LL);
        if ( v29 == v30 )
          v31 = CEffectGroup::IsOfType(v28, 128LL);
        else
          v31 = v29(v28, 128LL);
        if ( v31 )
        {
          v15 = v28;
        }
        else
        {
          v32 = *(__int64 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)v28 + 48LL);
          if ( (char *)v32 == (char *)CEffectGroup::IsOfType )
            v33 = CEffectGroup::IsOfType(v28, 47LL);
          else
            v33 = v32(v28, 47LL);
          if ( v33 )
            v15 = (CTransform3D *)*((_QWORD *)v28 + 11);
        }
      }
      v16 = *(__int64 (__fastcall **)(CVisual *))(*(_QWORD *)this + 280LL);
      if ( v16 == CVisual::GetBoundsWithEffects )
      {
        CVisual::GetBoundsWithEffects(this);
      }
      else if ( v16 == CLayerVisual::GetBoundsWithEffects )
      {
        CLayerVisual::GetBoundsWithEffects(this);
      }
      else
      {
        ((void (__fastcall *)(CVisual *, char *, char *))v16)(this, (char *)this + 164, (char *)this + 140);
      }
      if ( v15 )
      {
        Matrix = CTransform3D::GetMatrix(v15, (const struct D2D_SIZE_F *)((char *)this + 132));
        v38 = *((_OWORD *)Matrix + 1);
        v46[0] = *(_OWORD *)Matrix;
        v39 = *((_OWORD *)Matrix + 2);
        v46[1] = v38;
        v40 = *((_OWORD *)Matrix + 3);
        LODWORD(Matrix) = *((_DWORD *)Matrix + 16);
        v46[2] = v39;
        v46[3] = v40;
        v47 = (int)Matrix;
        if ( !*((_DWORD *)this + 25) )
        {
          v44[0] = _xmm;
          LOWORD(v45) = 32095;
          v44[2] = 0LL;
          v44[1] = _xmm;
          v44[3] = _xmm;
          CMILMatrix::Multiply((CMILMatrix *)v46, (const struct CMILMatrix *)v44);
        }
        CMILMatrix::Transform3DBoundsHelper<0>(v46, (char *)this + 140, (char *)this + 140);
      }
      v17 = *((_QWORD *)this + 29);
      if ( v17 && !*((_DWORD *)this + 25) )
      {
        BoundsSafe = CGeometry::GetBoundsSafe(v17, (char *)this + 132, &v48);
        v5 = BoundsSafe;
        if ( BoundsSafe < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, BoundsSafe, 0x53Fu);
          return v5;
        }
        v20 = *((_DWORD *)this + 39);
        v49 = v48;
        v51 = *((_DWORD *)this + 40);
        v50 = v20;
        TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::IntersectUnsafe(
          (char *)this + 140,
          &v49);
      }
      v45 = 0;
      v47 = 0;
      LOBYTE(v41) = 0;
      CVisual::CalcEffectiveTransform(
        (__int64)this,
        (const struct D2D_SIZE_F *)5,
        0LL,
        &v41,
        (CMILMatrix *)v44,
        (__int64)v46);
      if ( (_BYTE)v41 )
        CMILMatrix::Transform3DBoundsHelper<0>(v46, (char *)this + 140, (char *)this + 140);
      if ( *((float *)this + 37) < *v8
        || *((float *)this + 38) < *((float *)this + 36)
        || *((float *)this + 40) < *((float *)this + 39) )
      {
LABEL_40:
        *(_OWORD *)v8 = TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
        *(_QWORD *)((char *)this + 156) = qword_18026E1E8;
      }
    }
  }
  return v5;
}
