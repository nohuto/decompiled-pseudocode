/*
 * XREFs of ?CollectAdditionalDirtyRegion@CWindowNode@@UEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@W4Enum@MilBitmapInterpolationMode@@PEBV?$CRectF@UPageInPixels@CoordinateSpace@@@@@Z @ 0x18009B960
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180055B70 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?Add@CDirtyRegion@@QEAAJPEAVCVisual@@_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180034434 (-Add@CDirtyRegion@@QEAAJPEAVCVisual@@_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ?CollectAdditionalDirtyRegion@CVisual@@MEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@W4Enum@MilBitmapInterpolationMode@@PEBV?$CRectF@UPageInPixels@CoordinateSpace@@@@@Z @ 0x180054460 (-CollectAdditionalDirtyRegion@CVisual@@MEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@W4Enum@MilBitmapIn.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180059BA0 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x180097FE4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?GetRects@?$CMergedRectBase@$03@@QEAA_NPEAIPEAPEBUMilRectF@@@Z @ 0x180098074 (-GetRects@-$CMergedRectBase@$03@@QEAA_NPEAIPEAPEBUMilRectF@@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?SubmitComposeTopContent@CWindowNode@@AEAA_NAEBVCMILMatrix@@PEBVCShapePtr@@@Z @ 0x180179DE0 (-SubmitComposeTopContent@CWindowNode@@AEAA_NAEBVCMILMatrix@@PEBVCShapePtr@@@Z.c)
 */

__int64 __fastcall CWindowNode::CollectAdditionalDirtyRegion(
        CWindowNode *this,
        CDirtyRegion *a2,
        const struct CMILMatrix *a3,
        __int64 a4,
        __int64 a5)
{
  int v6; // r14d
  signed int v8; // eax
  __int64 v9; // r8
  unsigned int v10; // ebx
  unsigned int v11; // r14d
  unsigned __int64 v12; // r15
  float v13; // xmm0_4
  float v14; // xmm1_4
  float v15; // xmm2_4
  float v16; // xmm3_4
  signed int v17; // eax
  bool v18; // zf
  __int32 v20; // xmm1_4
  float v21; // xmm0_4
  float v22; // xmm1_4
  float v23; // xmm2_4
  float v24; // xmm3_4
  float v25; // xmm1_4
  __int64 v26; // rcx
  signed int v27; // eax
  unsigned int v28; // [rsp+30h] [rbp-40h] BYREF
  int v29; // [rsp+34h] [rbp-3Ch]
  CDirtyRegion *v30; // [rsp+38h] [rbp-38h]
  __m128 v31; // [rsp+40h] [rbp-30h] BYREF
  CRegionShape *v32; // [rsp+50h] [rbp-20h] BYREF
  float v33; // [rsp+58h] [rbp-18h]
  float v34; // [rsp+5Ch] [rbp-14h]

  v6 = *((_DWORD *)this + 146);
  v29 = a4;
  v30 = a2;
  v8 = CVisual::CollectAdditionalDirtyRegion((__int64)this, (__int64)a2, (unsigned __int64)a3, a4, 0LL);
  v10 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0x46Eu);
  }
  else if ( v6 && (CMergedRectBase<4>::GetRects((__int64)this + 512, &v28, &v31), v11 = 0, v28) )
  {
    v12 = v31.m128_u64[0];
    while ( 1 )
    {
      v13 = *(float *)(v12 + 16LL * v11);
      v14 = *(float *)(v12 + 16LL * v11 + 4);
      v15 = *(float *)(v12 + 16LL * v11 + 8);
      v16 = *(float *)(v12 + 16LL * v11 + 12);
      v32 = (CRegionShape *)__PAIR64__(LODWORD(v14), LODWORD(v13));
      v33 = v15;
      v34 = v16;
      if ( v29 == 1 || v29 == 6 )
      {
        *(float *)&v32 = v13 + -0.5;
        *((float *)&v32 + 1) = v14 + -0.5;
        v33 = v15 + 0.5;
        v34 = v16 + 0.5;
      }
      CMILMatrix::Transform2DBoundsHelper<1>((__int64)a3, (__int64)&v32, v31.m128_f32);
      if ( a5 )
      {
        v20 = *(__int32 *)a5;
        v21 = v31.m128_f32[0];
        if ( *(float *)a5 > v31.m128_f32[0] )
        {
          v31.m128_i32[0] = *(_DWORD *)a5;
          v21 = *(float *)&v20;
        }
        v22 = *(float *)(a5 + 4);
        v23 = v31.m128_f32[1];
        if ( v22 > v31.m128_f32[1] )
        {
          v31.m128_i32[1] = *(_DWORD *)(a5 + 4);
          v23 = v22;
        }
        v24 = v31.m128_f32[2];
        if ( v31.m128_f32[2] > *(float *)(a5 + 8) )
        {
          v24 = *(float *)(a5 + 8);
          v31.m128_f32[2] = v24;
        }
        v25 = v31.m128_f32[3];
        if ( v31.m128_f32[3] > *(float *)(a5 + 12) )
        {
          v25 = *(float *)(a5 + 12);
          v31.m128_f32[3] = v25;
        }
        if ( v24 <= v21 || v25 <= v23 )
          v31 = 0uLL;
      }
      v17 = CDirtyRegion::Add(v30, (__int64)this, 0, &v31);
      v10 = v17;
      if ( v17 < 0 )
        break;
      if ( ++v11 >= v28 )
        goto LABEL_10;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v17, 0x4A6u);
  }
  else
  {
LABEL_10:
    *((_BYTE *)this + 93) |= 1u;
    v18 = *((_BYTE *)this + 1010) == 0;
    *((_QWORD *)this + 27) = *(_QWORD *)(*((_QWORD *)this + 2) + 360LL);
    if ( !v18 )
    {
      v26 = *((_QWORD *)this + 98);
      if ( v26 )
      {
        v32 = 0LL;
        LOBYTE(v33) = 0;
        LOBYTE(v9) = 1;
        v27 = (*(__int64 (__fastcall **)(__int64, CRegionShape **, __int64))(*(_QWORD *)v26 + 184LL))(v26, &v32, v9);
        v10 = v27;
        if ( v27 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v27, 0x4B3u);
        else
          CWindowNode::SubmitComposeTopContent(this, a3, (const struct CShapePtr *)&v32);
        CShapePtr::Release(&v32);
      }
    }
  }
  return v10;
}
