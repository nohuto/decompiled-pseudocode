/*
 * XREFs of ?CollectAdditionalDirtyRegion@CWindowNode@@UEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@W4Enum@MilBitmapInterpolationMode@@PEBV?$CRectF@UPageInPixels@CoordinateSpace@@@@@Z @ 0x180092BE0
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A0E20 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x180028194 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?CollectAdditionalDirtyRegion@CVisual@@MEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@W4Enum@MilBitmapInterpolationMode@@PEBV?$CRectF@UPageInPixels@CoordinateSpace@@@@@Z @ 0x180049C00 (-CollectAdditionalDirtyRegion@CVisual@@MEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@W4Enum@MilBitmapIn.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetFullDirty@CDirtyRegion@@QEAAXXZ @ 0x18009DF20 (-SetFullDirty@CDirtyRegion@@QEAAXXZ.c)
 *     ?_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18009E3A0 (-_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeede.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800A5380 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?GetRects@?$CMergedRectBase@$03@@QEAA_NPEAIPEAPEBUMilRectF@@@Z @ 0x1800BD684 (-GetRects@-$CMergedRectBase@$03@@QEAA_NPEAIPEAPEBUMilRectF@@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?SubmitComposeTopContent@CWindowNode@@AEAA_NAEBVCMILMatrix@@PEBVCShapePtr@@@Z @ 0x1801AA2DC (-SubmitComposeTopContent@CWindowNode@@AEAA_NAEBVCMILMatrix@@PEBVCShapePtr@@@Z.c)
 */

__int64 __fastcall CWindowNode::CollectAdditionalDirtyRegion(
        CWindowNode *this,
        CDirtyRegion *a2,
        struct CMILMatrix *a3,
        __int64 a4,
        float *a5)
{
  const struct CMILMatrix *v5; // r13
  int v6; // r14d
  int v9; // eax
  __int64 v10; // r8
  unsigned int v11; // ebx
  unsigned int v12; // r14d
  __int64 v13; // r13
  float v14; // xmm0_4
  float v15; // xmm1_4
  float v16; // xmm2_4
  float v17; // xmm3_4
  float v18; // xmm1_4
  float v19; // xmm4_4
  float v20; // xmm3_4
  float v21; // xmm2_4
  int v22; // eax
  bool v23; // zf
  float v25; // xmm0_4
  float v26; // xmm0_4
  float v27; // xmm6_4
  float v28; // xmm5_4
  float v29; // xmm0_4
  __int64 v30; // rcx
  int v31; // eax
  unsigned int v32; // [rsp+30h] [rbp-50h] BYREF
  int v33; // [rsp+34h] [rbp-4Ch]
  struct CMILMatrix *v34; // [rsp+38h] [rbp-48h]
  __int64 v35; // [rsp+40h] [rbp-40h] BYREF
  float v36; // [rsp+48h] [rbp-38h]
  float v37; // [rsp+4Ch] [rbp-34h]
  CRectanglesShape *v38; // [rsp+50h] [rbp-30h] BYREF
  float v39; // [rsp+58h] [rbp-28h]
  float v40; // [rsp+5Ch] [rbp-24h]

  v5 = a3;
  v6 = *((_DWORD *)this + 148);
  v33 = a4;
  v34 = a3;
  v9 = CVisual::CollectAdditionalDirtyRegion((__int64)this, (__int64)a2, (__int64)a3, a4, 0LL);
  v11 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x341u);
    return v11;
  }
  if ( v6 )
  {
    CMergedRectBase<4>::GetRects((char *)this + 520, &v32, &v35);
    v12 = 0;
    if ( v32 )
    {
      v13 = v35;
      while ( 1 )
      {
        v14 = *(float *)(v13 + 16LL * v12);
        v15 = *(float *)(v13 + 16LL * v12 + 4);
        v16 = *(float *)(v13 + 16LL * v12 + 8);
        v17 = *(float *)(v13 + 16LL * v12 + 12);
        v38 = (CRectanglesShape *)__PAIR64__(LODWORD(v15), LODWORD(v14));
        v39 = v16;
        v40 = v17;
        if ( v33 == 1 || v33 == 6 )
        {
          *(float *)&v38 = v14 - 0.5;
          *((float *)&v38 + 1) = v15 - 0.5;
          v39 = v16 + 0.5;
          v40 = v17 + 0.5;
        }
        CMILMatrix::Transform2DBoundsHelper<1>(v34, &v38, &v35);
        v18 = *(float *)&v35;
        if ( a5 )
        {
          v25 = *a5;
          if ( *a5 > *(float *)&v35 )
          {
            *(float *)&v35 = *a5;
            v18 = v25;
          }
          v21 = *((float *)&v35 + 1);
          v26 = a5[1];
          v27 = *((float *)&v35 + 1);
          if ( v26 > *((float *)&v35 + 1) )
          {
            *((float *)&v35 + 1) = a5[1];
            v21 = v26;
            v27 = v26;
          }
          v20 = v36;
          v28 = v36;
          if ( v36 > a5[2] )
          {
            v36 = a5[2];
            v20 = v36;
            v28 = v36;
          }
          v19 = v37;
          v29 = v37;
          if ( v37 > a5[3] )
          {
            v37 = a5[3];
            v19 = v37;
            v29 = v37;
          }
          if ( v28 <= v18 || v29 <= v27 )
          {
            v19 = 0.0;
            v20 = 0.0;
            v21 = 0.0;
            v37 = 0.0;
            v18 = 0.0;
            v36 = 0.0;
            v35 = 0LL;
          }
        }
        else
        {
          v19 = v37;
          v20 = v36;
          v21 = *((float *)&v35 + 1);
        }
        if ( *(float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite >= v18
          && v20 >= *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2)
          || *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1) >= v21
          && v19 >= *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3) )
        {
          CDirtyRegion::SetFullDirty(a2);
        }
        if ( *((_BYTE *)a2 + 2883) || *((_DWORD *)a2 + 714) )
        {
          v11 = 0;
        }
        else
        {
          v22 = CDirtyRegion::_Add(a2);
          v11 = v22;
          if ( v22 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, 0x1B3u);
          if ( (v11 & 0x80000000) != 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x379u);
            return v11;
          }
        }
        if ( ++v12 >= v32 )
        {
          v5 = v34;
          break;
        }
      }
    }
  }
  *((_BYTE *)this + 93) |= 0x10u;
  v23 = *((_BYTE *)this + 914) == 0;
  *((_QWORD *)this + 28) = *(_QWORD *)(*((_QWORD *)this + 2) + 384LL);
  if ( !v23 )
  {
    v30 = *((_QWORD *)this + 90);
    if ( v30 )
    {
      v38 = 0LL;
      LOBYTE(v39) = 0;
      LOBYTE(v10) = 1;
      v31 = (*(__int64 (__fastcall **)(__int64, CRectanglesShape **, __int64))(*(_QWORD *)v30 + 184LL))(v30, &v38, v10);
      v11 = v31;
      if ( v31 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v31, 0x386u);
      else
        CWindowNode::SubmitComposeTopContent(this, v5, (const struct CShapePtr *)&v38);
      CShapePtr::Release(&v38);
    }
  }
  return v11;
}
