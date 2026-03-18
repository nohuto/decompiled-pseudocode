/*
 * XREFs of ?ConvertInnerToOuterBounds@CVisual@@IEAAJXZ @ 0x180088340
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180096CB0 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?GetBounds@CFilterEffect@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1800034B0 (-GetBounds@CFilterEffect@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUni.c)
 *     ?GetBounds@CEffectBrush@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@PEAV2@@Z @ 0x180010AC0 (-GetBounds@CEffectBrush@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 *     ?GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z @ 0x180012FCC (-GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z.c)
 *     ?GetTreeEffectInternal@CVisual@@QEBAPEAVCTreeEffect@@XZ @ 0x1800136BC (-GetTreeEffectInternal@CVisual@@QEBAPEAVCTreeEffect@@XZ.c)
 *     ?GetBoundsWithEffects@CLayerVisual@@UEBAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180014040 (-GetBoundsWithEffects@CLayerVisual@@UEBAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeed.c)
 *     ?GetBoundsSafe@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180029A4C (-GetBoundsSafe@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UN.c)
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x18002B258 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsInfinite@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18006FFCC (-IsInfinite@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ @ 0x180085500 (-GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ.c)
 *     ?CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z @ 0x18008A2F0 (-CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z.c)
 *     ?IsOfType@CEffectGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800931E0 (-IsOfType@CEffectGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x180098D54 (--$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x18009A87C (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?IntersectUnsafe@?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800B4190 (-IntersectUnsafe@-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUnique.c)
 *     ?IsOfType@CLayerVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800C1AC0 (-IsOfType@CLayerVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::ConvertInnerToOuterBounds(CVisual *this)
{
  unsigned int v1; // r14d
  __int64 v3; // rax
  float *v4; // rbx
  __int64 v5; // xmm1_8
  __int64 (__fastcall *v6)(_QWORD, _QWORD); // r8
  float v7; // xmm7_4
  __int64 v8; // r11
  int v9; // r10d
  float v10; // xmm0_4
  unsigned int v11; // eax
  CTransform3D *v12; // rsi
  void (__fastcall *v13)(CVisual *, char *, __int128 *); // rax
  __int64 v14; // rcx
  int v15; // eax
  CGeometry *v16; // rcx
  int BoundsSafe; // eax
  int v19; // xmm0_4
  int v20; // edx
  int *v21; // rcx
  int v22; // edx
  int *v23; // rcx
  __int64 v24; // rsi
  __int64 (__fastcall *v25)(_QWORD, _QWORD); // rax
  char v26; // al
  int v27; // edx
  int *v28; // rcx
  CTransform3D *v29; // r15
  __int64 (__fastcall *v30)(_QWORD, _QWORD); // rax
  char v31; // al
  __int64 (__fastcall *v32)(CTransform3D *, __int64); // rax
  char v33; // al
  int v34; // edx
  int *v35; // rcx
  __int64 v36; // r15
  __int64 (__fastcall *v37)(_QWORD, _QWORD); // rax
  char v38; // al
  int Bounds; // eax
  __int128 *v40; // r8
  char *v41; // rdx
  __int64 (__fastcall *v42)(CVisual *, __int64); // rax
  char v43; // al
  __int64 (__fastcall *v44)(_QWORD, _QWORD); // rax
  char v45; // r15
  char v46; // al
  CVisual *v47; // rcx
  __int64 v48; // rcx
  int v49; // eax
  int v50; // xmm1_4
  const struct CMILMatrix *Matrix; // rax
  __int128 v52; // xmm1
  __int128 v53; // xmm0
  __int128 v54; // xmm1
  _BYTE v55[4]; // [rsp+38h] [rbp-D0h] BYREF
  float v56; // [rsp+3Ch] [rbp-CCh] BYREF
  _OWORD v57[4]; // [rsp+48h] [rbp-C0h] BYREF
  int v58; // [rsp+88h] [rbp-80h]
  _OWORD v59[4]; // [rsp+98h] [rbp-70h] BYREF
  int v60; // [rsp+D8h] [rbp-30h]
  __int128 v61; // [rsp+E8h] [rbp-20h] BYREF
  __int128 v62; // [rsp+F8h] [rbp-10h] BYREF
  int v63; // [rsp+108h] [rbp+0h]
  int v64; // [rsp+10Ch] [rbp+4h]

  v1 = 0;
  if ( (*(_DWORD *)(*((_QWORD *)this + 26) + 4LL) & 0x10000) != 0 )
  {
    v42 = *(__int64 (__fastcall **)(CVisual *, __int64))(*(_QWORD *)this + 48LL);
    v43 = (char *)v42 == (char *)CLayerVisual::IsOfType ? CLayerVisual::IsOfType(this, 33LL) : v42(this, 33LL);
    if ( !v43 || !*((_BYTE *)this + 504) )
    {
      CVisual::GetEffectiveSize(this, &v56, (float *)&v61);
      v50 = v61;
      *((float *)this + 42) = v56;
      *((_DWORD *)this + 43) = v50;
      *((_QWORD *)this + 20) = 0LL;
    }
  }
  v3 = *((_QWORD *)this + 26);
  v4 = (float *)((char *)this + 136);
  v5 = *((_QWORD *)this + 22);
  v6 = CEffectGroup::IsOfType;
  *(_OWORD *)((char *)this + 136) = *((_OWORD *)this + 10);
  *((_QWORD *)this + 19) = v5;
  v7 = FLOAT_1_0;
  if ( (*(_DWORD *)(v3 + 4) & 0x8000000) != 0 )
  {
    v22 = *(_DWORD *)(v3 + 12);
    v23 = (int *)(v3 + 12);
    if ( (v22 & 0x7F000000) != 0x5000000 )
    {
      do
      {
        v23 = (int *)((char *)v23 + (v22 & 0xFFFFFF) + 4);
        v22 = *v23;
      }
      while ( (*v23 & 0x7F000000) != 0x5000000 );
    }
    *(_QWORD *)&v61 = *(_QWORD *)(v23 + 1);
    v24 = v61;
    v25 = *(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v61 + 48LL);
    if ( v25 == CEffectGroup::IsOfType )
      v26 = CEffectGroup::IsOfType(v61, 7LL);
    else
      v26 = ((__int64 (__fastcall *)(_QWORD, __int64, __int64 (__fastcall *)(_QWORD, _QWORD)))v25)(
              v61,
              7LL,
              CEffectGroup::IsOfType);
    if ( v26 )
      v7 = *(double *)(v24 + 72);
  }
  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(fminf(1.0, fmaxf(v7, 0.0))) & _xmm) < 0.0000011920929 )
    goto LABEL_31;
  v8 = *((_QWORD *)this + 26);
  v9 = *(_DWORD *)(v8 + 4);
  if ( (v9 & 0x100000) != 0 )
  {
    v20 = *(_DWORD *)(v8 + 12);
    v21 = (int *)(v8 + 12);
    if ( (v20 & 0x7F000000) != 0xC000000 )
    {
      do
      {
        v21 = (int *)((char *)v21 + (v20 & 0xFFFFFF) + 4);
        v20 = *v21;
      }
      while ( (*v21 & 0x7F000000) != 0xC000000 );
    }
    LODWORD(v61) = v21[1];
    v10 = *(float *)&v61;
  }
  else
  {
    v10 = FLOAT_1_0;
  }
  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(fminf(1.0, fmaxf(v10, 0.0))) & _xmm) < 0.0000011920929 )
  {
LABEL_31:
    *((_QWORD *)this + 19) = 0LL;
    *((_QWORD *)this + 18) = 0LL;
    *(_QWORD *)v4 = 0LL;
  }
  else
  {
    if ( (*((_BYTE *)this + 90) & 8) != 0
      || (v9 & 0x10000000) != 0 && *(_QWORD *)(*(_QWORD *)CVisual::GetTransformParentDataInternal(this) + 8LL) )
    {
      goto LABEL_33;
    }
    v11 = *((float *)this + 39) <= *((float *)this + 38);
    if ( *((float *)this + 36) <= *v4 )
      ++v11;
    if ( *((float *)this + 37) <= *((float *)this + 35) )
      ++v11;
    if ( v11 <= 1 )
    {
      v12 = 0LL;
      if ( (v9 & 0x8000000) != 0 )
      {
        v27 = *(_DWORD *)(v8 + 12);
        v28 = (int *)(v8 + 12);
        if ( (v27 & 0x7F000000) != 0x5000000 )
        {
          do
          {
            v28 = (int *)((char *)v28 + (v27 & 0xFFFFFF) + 4);
            v27 = *v28;
          }
          while ( (*v28 & 0x7F000000) != 0x5000000 );
        }
        *(_QWORD *)&v61 = *(_QWORD *)(v28 + 1);
        v29 = (CTransform3D *)v61;
        v30 = *(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v61 + 48LL);
        if ( v30 == CEffectGroup::IsOfType )
          v31 = CEffectGroup::IsOfType(v61, 23LL);
        else
          v31 = ((__int64 (__fastcall *)(_QWORD, __int64, __int64 (__fastcall *)(_QWORD, _QWORD)))v30)(v61, 23LL, v6);
        if ( v31 )
        {
          v12 = v29;
        }
        else
        {
          v32 = *(__int64 (__fastcall **)(CTransform3D *, __int64))(*(_QWORD *)v29 + 48LL);
          if ( (char *)v32 == (char *)CEffectGroup::IsOfType )
            v33 = CEffectGroup::IsOfType(v29, 7LL);
          else
            v33 = v32(v29, 7LL);
          if ( v33 )
            v12 = (CTransform3D *)*((_QWORD *)v29 + 11);
        }
      }
      v13 = *(void (__fastcall **)(CVisual *, char *, __int128 *))(*(_QWORD *)this + 240LL);
      if ( (char *)v13 == (char *)CVisual::GetBoundsWithEffects )
      {
        v14 = *((_QWORD *)this + 26);
        v15 = *(_DWORD *)(v14 + 4);
        if ( (v15 & 0x8000000) != 0 )
        {
          v34 = *(_DWORD *)(v14 + 12);
          v35 = (int *)(v14 + 12);
          if ( (v34 & 0x7F000000) != 0x5000000 )
          {
            do
            {
              v35 = (int *)((char *)v35 + (v34 & 0xFFFFFF) + 4);
              v34 = *v35;
            }
            while ( (*v35 & 0x7F000000) != 0x5000000 );
          }
          *(_QWORD *)&v61 = *(_QWORD *)(v35 + 1);
          v36 = v61;
          v37 = *(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v61 + 48LL);
          if ( v37 == CEffectGroup::IsOfType )
            v38 = CEffectGroup::IsOfType(v61, 8LL);
          else
            v38 = ((__int64 (__fastcall *)(_QWORD, __int64, __int64 (__fastcall *)(_QWORD, _QWORD)))v37)(v61, 8LL, v6);
          if ( v38 )
          {
            Bounds = CFilterEffect::GetBounds(v36, (__int128 *)this + 10, (__int64)this + 136);
            if ( Bounds < 0 )
              MilInstrumentationCheckHR(0x14u, 0LL, 0, Bounds, 0x1528u);
          }
        }
        else if ( (v15 & 0x10000) != 0 )
        {
          v44 = *(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)this + 48LL);
          v45 = 0;
          if ( v44 == CLayerVisual::IsOfType )
            v46 = CLayerVisual::IsOfType(this, 33LL);
          else
            v46 = ((__int64 (__fastcall *)(CVisual *, __int64, __int64 (__fastcall *)(_QWORD, _QWORD)))v44)(
                    this,
                    33LL,
                    v6);
          if ( v46 )
            v45 = *((_BYTE *)this + 504);
          if ( (CVisual::GetEffectiveSize(this, (float *)&v61, &v56) || v45)
            && (*((float *)&v61 + 1) = v56, (v48 = *(_QWORD *)CVisual::GetTreeEffectInternal(v47)) != 0)
            && (v49 = CEffectBrush::GetBounds(v48, (_OWORD *)this + 10, (__int64)&v61, (CVisual *)((char *)this + 136)),
                v49 < 0) )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v49, 0x153Eu);
          }
          else if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsInfinite((float *)this + 34) )
          {
            *(_OWORD *)v4 = *((_OWORD *)this + 10);
          }
        }
      }
      else
      {
        v40 = (__int128 *)((char *)this + 136);
        v41 = (char *)this + 160;
        if ( (char *)v13 == (char *)CLayerVisual::GetBoundsWithEffects )
          CLayerVisual::GetBoundsWithEffects(this, (__int64)v41, v40);
        else
          v13(this, v41, v40);
      }
      if ( v12 )
      {
        Matrix = CTransform3D::GetMatrix(v12, (const struct D2D_SIZE_F *)this + 16);
        v52 = *((_OWORD *)Matrix + 1);
        v59[0] = *(_OWORD *)Matrix;
        v53 = *((_OWORD *)Matrix + 2);
        v59[1] = v52;
        v54 = *((_OWORD *)Matrix + 3);
        LODWORD(Matrix) = *((_DWORD *)Matrix + 16);
        v59[2] = v53;
        v59[3] = v54;
        v60 = (int)Matrix;
        if ( !*((_DWORD *)this + 24) )
        {
          v57[0] = _xmm;
          LOWORD(v58) = 32095;
          v57[2] = 0LL;
          v57[1] = _xmm;
          v57[3] = _xmm;
          CMILMatrix::Multiply((CMILMatrix *)v59, (const struct CMILMatrix *)v57);
        }
        CMILMatrix::Transform3DBoundsHelper<0>(v59, (char *)this + 136, (char *)this + 136);
      }
      v16 = (CGeometry *)*((_QWORD *)this + 29);
      if ( v16 && !*((_DWORD *)this + 24) )
      {
        BoundsSafe = CGeometry::GetBoundsSafe(v16, (struct D2D_SIZE_F *)this + 16, &v61);
        v1 = BoundsSafe;
        if ( BoundsSafe < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, BoundsSafe, 0x514u);
          return v1;
        }
        v19 = *((_DWORD *)this + 38);
        v62 = v61;
        v64 = *((_DWORD *)this + 39);
        v63 = v19;
        TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::IntersectUnsafe(
          (char *)this + 136,
          &v62);
      }
      v58 = 0;
      v60 = 0;
      v55[0] = 0;
      ((void (__fastcall *)(CVisual *, __int64, _QWORD, _BYTE *, _OWORD *, _OWORD *))CVisual::CalcEffectiveTransform)(
        this,
        5LL,
        0LL,
        v55,
        v57,
        v59);
      if ( v55[0] )
        CMILMatrix::Transform3DBoundsHelper<0>(v59, (char *)this + 136, (char *)this + 136);
      if ( *((float *)this + 36) < *v4
        || *((float *)this + 37) < *((float *)this + 35)
        || *((float *)this + 39) < *((float *)this + 38) )
      {
LABEL_33:
        *(_OWORD *)v4 = TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
        *((_QWORD *)this + 19) = qword_18023DC68;
      }
    }
  }
  return v1;
}
