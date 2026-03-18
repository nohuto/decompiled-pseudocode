/*
 * XREFs of ?CollectAdditionalDirtyRegion@CWindowNode@@UEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@W4Enum@MilBitmapInterpolationMode@@PEBV?$CRectF@UPageInPixels@CoordinateSpace@@@@@Z @ 0x180052FA0
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180096CB0 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsInfinite@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18006FFCC (-IsInfinite@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?GetRects@?$CMergedRectBase@$03@@QEAA_NPEAIPEAPEBUMilRectF@@@Z @ 0x1800737D0 (-GetRects@-$CMergedRectBase@$03@@QEAA_NPEAIPEAPEBUMilRectF@@@Z.c)
 *     ?CollectAdditionalDirtyRegion@CVisual@@MEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@W4Enum@MilBitmapInterpolationMode@@PEBV?$CRectF@UPageInPixels@CoordinateSpace@@@@@Z @ 0x180087B20 (-CollectAdditionalDirtyRegion@CVisual@@MEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@W4Enum@MilBitmapIn.c)
 *     ?_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180091DA0 (-_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeede.c)
 *     ?SetFullDirty@CDirtyRegion@@QEAAXXZ @ 0x180092DA8 (-SetFullDirty@CDirtyRegion@@QEAAXXZ.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180099040 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C0CC4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?SubmitComposeTopContent@CWindowNode@@AEAA_NAEBVCMILMatrix@@PEBVCShapePtr@@@Z @ 0x180162F24 (-SubmitComposeTopContent@CWindowNode@@AEAA_NAEBVCMILMatrix@@PEBVCShapePtr@@@Z.c)
 */

__int64 __fastcall CWindowNode::CollectAdditionalDirtyRegion(
        CWindowNode *this,
        CDirtyRegion *a2,
        struct CMILMatrix *a3,
        int a4,
        float *a5)
{
  const struct CMILMatrix *v5; // r13
  bool v7; // r14
  int v9; // eax
  __int64 v10; // r8
  unsigned int v11; // ebx
  unsigned int v12; // r13d
  unsigned int v13; // r14d
  float v14; // xmm0_4
  float v15; // xmm1_4
  float v16; // xmm2_4
  float v17; // xmm3_4
  int v18; // eax
  bool v19; // zf
  float v21; // xmm1_4
  float v22; // xmm0_4
  float v23; // xmm1_4
  float v24; // xmm3_4
  float v25; // xmm2_4
  float v26; // xmm1_4
  __int64 v27; // rcx
  int v28; // eax
  unsigned int v29; // [rsp+30h] [rbp-40h] BYREF
  int v30; // [rsp+34h] [rbp-3Ch]
  struct CMILMatrix *v31; // [rsp+38h] [rbp-38h]
  __int64 v32; // [rsp+40h] [rbp-30h] BYREF
  float v33; // [rsp+48h] [rbp-28h] BYREF
  float v34; // [rsp+4Ch] [rbp-24h]
  float v35; // [rsp+50h] [rbp-20h]
  float v36; // [rsp+54h] [rbp-1Ch]
  unsigned __int64 v37; // [rsp+58h] [rbp-18h] BYREF
  float v38; // [rsp+60h] [rbp-10h]
  float v39; // [rsp+64h] [rbp-Ch]

  v5 = a3;
  v7 = *((_DWORD *)this + 142) != 0;
  v30 = a4;
  v31 = a3;
  v9 = CVisual::CollectAdditionalDirtyRegion(this);
  v11 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x480u);
    return v11;
  }
  if ( !v7 )
    goto LABEL_16;
  CMergedRectBase<4>::GetRects((char *)this + 496, &v29, &v32);
  v12 = v29;
  v13 = 0;
  if ( !v29 )
  {
LABEL_15:
    v5 = v31;
LABEL_16:
    *((_BYTE *)this + 90) |= 1u;
    v19 = *((_BYTE *)this + 986) == 0;
    *((_QWORD *)this + 27) = *(_QWORD *)(*((_QWORD *)this + 2) + 400LL);
    if ( !v19 )
    {
      v27 = *((_QWORD *)this + 95);
      if ( v27 )
      {
        v37 = 0LL;
        LOBYTE(v38) = 0;
        LOBYTE(v10) = 1;
        v28 = (*(__int64 (__fastcall **)(__int64, unsigned __int64 *, __int64))(*(_QWORD *)v27 + 176LL))(v27, &v37, v10);
        v11 = v28;
        if ( v28 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v28, 0x4C5u);
        else
          CWindowNode::SubmitComposeTopContent(this, v5, (const struct CShapePtr *)&v37);
        CShapePtr::Release((CShapePtr *)&v37);
      }
    }
    return v11;
  }
  while ( 1 )
  {
    v14 = *(float *)(v32 + 16LL * v13);
    v15 = *(float *)(v32 + 16LL * v13 + 4);
    v16 = *(float *)(v32 + 16LL * v13 + 8);
    v17 = *(float *)(v32 + 16LL * v13 + 12);
    v37 = __PAIR64__(LODWORD(v15), LODWORD(v14));
    v38 = v16;
    v39 = v17;
    if ( v30 == 1 || v30 == 6 )
    {
      *(float *)&v37 = v14 + -0.5;
      *((float *)&v37 + 1) = v15 + -0.5;
      v38 = v16 + 0.5;
      v39 = v17 + 0.5;
    }
    CMILMatrix::Transform2DBoundsHelper<1>(v31, &v37, &v33);
    if ( a5 )
    {
      v21 = *a5;
      v22 = v33;
      if ( *a5 > v33 )
      {
        v33 = *a5;
        v22 = v21;
      }
      v23 = a5[1];
      v24 = v34;
      if ( v23 > v34 )
      {
        v34 = a5[1];
        v24 = v23;
      }
      v25 = v35;
      if ( v35 > a5[2] )
      {
        v25 = a5[2];
        v35 = v25;
      }
      v26 = v36;
      if ( v36 > a5[3] )
      {
        v26 = a5[3];
        v36 = v26;
      }
      if ( v25 <= v22 || v26 <= v24 )
      {
        v36 = 0.0;
        v35 = 0.0;
        v34 = 0.0;
        v33 = 0.0;
      }
    }
    v11 = 0;
    if ( (unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsInfinite(&v33) )
      CDirtyRegion::SetFullDirty(a2);
    if ( !*((_BYTE *)a2 + 2724) && !*((_DWORD *)a2 + 676) )
    {
      v18 = CDirtyRegion::_Add(a2);
      v11 = v18;
      if ( v18 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x1C3u);
      if ( (v11 & 0x80000000) != 0 )
        break;
    }
    if ( ++v13 >= v12 )
      goto LABEL_15;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x4B8u);
  return v11;
}
