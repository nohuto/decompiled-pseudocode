/*
 * XREFs of ?CollectAdditionalDirtyRegion@CVisual@@MEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@W4Enum@MilBitmapInterpolationMode@@PEBV?$CRectF@UPageInPixels@CoordinateSpace@@@@@Z @ 0x180054460
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180055B70 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?CollectAdditionalDirtyRegion@CWindowNode@@UEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@W4Enum@MilBitmapInterpolationMode@@PEBV?$CRectF@UPageInPixels@CoordinateSpace@@@@@Z @ 0x18009B960 (-CollectAdditionalDirtyRegion@CWindowNode@@UEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@W4Enum@MilBitm.c)
 * Callees:
 *     ?IsOfType@CSurfaceBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180024FA0 (-IsOfType@CSurfaceBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CCompositionSurfaceBitmap@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800298A0 (-IsOfType@CCompositionSurfaceBitmap@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180033400 (-_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeede.c)
 *     ?SetFullDirty@CDirtyRegion@@QEAAXXZ @ 0x18003458C (-SetFullDirty@CDirtyRegion@@QEAAXXZ.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180036770 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180036790 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800368B4 (-DoesIntersectUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?AreaUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBAMXZ @ 0x1800368FC (-AreaUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBAMXZ.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180059BA0 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SwapExisting@?$CMergedRectBase@$03@@IEAAXII@Z @ 0x180098100 (-SwapExisting@-$CMergedRectBase@$03@@IEAAXII@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::CollectAdditionalDirtyRegion(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v6; // rcx
  unsigned int v7; // r12d
  __int64 v8; // r15
  __int64 i; // rcx
  unsigned int v10; // eax
  unsigned int v11; // r14d
  __int64 v12; // r9
  __m128i *v13; // r11
  __m128i *v14; // rax
  __int8 v15; // dl
  __m128i v16; // xmm1
  unsigned __int32 v17; // esi
  unsigned __int32 v18; // edi
  unsigned __int64 v19; // r14
  __int64 *v20; // rbx
  __int64 v21; // rcx
  bool (__fastcall *v22)(__int64, int); // rax
  bool v23; // al
  float v24; // xmm4_4
  float v25; // xmm2_4
  float v26; // xmm3_4
  float v27; // xmm1_4
  float v28; // xmm0_4
  float v29; // xmm0_4
  int v30; // eax
  __int64 v32; // r10
  char v33; // r15
  float *v34; // rcx
  double v35; // xmm0_8
  float v36; // xmm4_4
  unsigned int v37; // r8d
  __int8 *v38; // rdi
  __int64 v39; // rsi
  float *v40; // rdx
  unsigned int v41; // eax
  __int64 v42; // r8
  __m128i *v43; // rdi
  __m128i *v44; // [rsp+30h] [rbp-40h]
  __m128 v45; // [rsp+38h] [rbp-38h] BYREF
  __int128 v46; // [rsp+48h] [rbp-28h] BYREF
  __m128i v47; // [rsp+58h] [rbp-18h]

  v6 = *(_QWORD *)(a1 + 208);
  v7 = 0;
  v45.m128_u64[0] = a3;
  v8 = a2;
  *(_QWORD *)&v46 = a2;
  v47.m128i_i64[0] = a5;
  if ( (*(_DWORD *)(v6 + 4) & 0x20000) == 0 )
    return v7;
  for ( i = v6 + 12; (*(_DWORD *)i & 0x7F000000) != 0xF000000; i += (*(_DWORD *)i & 0xFFFFFF) + 4LL )
    ;
  v44 = *(__m128i **)(i + 4);
  if ( !v44 )
    return v7;
  v10 = v44[4].m128i_u32[2];
  if ( !v10 )
    return v7;
  v11 = 0;
  v44[4].m128i_i32[1] = 1;
  v12 = 0LL;
  if ( v10 > 1 )
  {
    v13 = v44 + 4;
    v32 = 0LL;
    do
    {
      v33 = 0;
      if ( v13->m128i_i8[v32] )
      {
        v35 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::AreaUnsafe((float *)v44[(unsigned int)v32].m128i_i32);
        if ( *(float *)&v35 > v36 )
          v12 = (unsigned int)v32;
        v37 = v32 + 1;
        if ( (unsigned int)(v32 + 1) < 4 )
        {
          v38 = &v44[4].m128i_i8[v37];
          while ( 1 )
          {
            if ( *v38 )
            {
              v39 = v37;
              if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(
                     v34,
                     (float *)v44[v37].m128i_i32) )
              {
                break;
              }
            }
            ++v37;
            ++v38;
            if ( v37 >= 4 )
              goto LABEL_67;
          }
          TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(v34, v40);
          v13->m128i_i8[v39] = 0;
          v33 = 1;
          --v44[4].m128i_i32[2];
        }
      }
LABEL_67:
      v41 = v32 + 1;
      v32 = 0LL;
      if ( !v33 )
        v32 = v41;
    }
    while ( (unsigned int)v32 < 4 );
    v8 = v46;
  }
  else
  {
    v13 = v44 + 4;
    v14 = v44 + 4;
    while ( !v14->m128i_i8[0] )
    {
      v12 = (unsigned int)(v12 + 1);
      v14 = (__m128i *)((char *)v14 + 1);
      if ( (unsigned int)v12 >= 4 )
        goto LABEL_16;
    }
  }
  if ( (_DWORD)v12 )
  {
    v15 = v13->m128i_i8[0];
    if ( v13->m128i_i8[0] )
      v16 = _mm_loadu_si128(v44);
    else
      v16 = v47;
    *v44 = v44[(unsigned int)v12];
    v13->m128i_i8[0] = 1;
    if ( v15 )
    {
      v44[(unsigned int)v12] = v16;
      v44[4].m128i_i8[(unsigned int)v12] = 1;
    }
    else
    {
      v44[4].m128i_i8[(unsigned int)v12] = 0;
    }
  }
LABEL_16:
  if ( (unsigned int)(v44[4].m128i_i32[2] - 2) <= 1 )
  {
    v42 = 0LL;
    v43 = v44 + 4;
    do
    {
      if ( v43->m128i_i8[0] )
      {
        if ( (_DWORD)v42 != v11 )
          CMergedRectBase<4>::SwapExisting(v44, v11, v42, v12);
        ++v11;
      }
      v42 = (unsigned int)(v42 + 1);
      v43 = (__m128i *)((char *)v43 + 1);
    }
    while ( (unsigned int)v42 < 4 );
  }
  v17 = v44[4].m128i_u32[2];
  v18 = 0;
  if ( !v17 )
  {
LABEL_47:
    *(_QWORD *)(a1 + 216) = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 360LL);
    goto LABEL_48;
  }
  v19 = v45.m128_u64[0];
  v20 = &v44->m128i_i64[1];
  while ( 1 )
  {
    v46 = *(_OWORD *)(v20 - 1);
    CMILMatrix::Transform2DBoundsHelper<1>(v19, &v46, &v45);
    v21 = *(_QWORD *)(a1 + 240);
    if ( v21
      && ((v22 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v21 + 48LL), v22 != CSurfaceBrush::IsOfType)
        ? (v22 != CCompositionSurfaceBitmap::IsOfType
         ? (v23 = v22(v21, 98))
         : (v23 = CCompositionSurfaceBitmap::IsOfType(v21, 98)))
        : (v23 = CSurfaceBrush::IsOfType(v21, 98)),
          v23 && !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(v45.m128_f32)) )
    {
      v27 = v45.m128_f32[0] + -0.5;
      v26 = v45.m128_f32[1] + -0.5;
      v25 = v45.m128_f32[2] + 0.5;
      v24 = v45.m128_f32[3] + 0.5;
      v45.m128_f32[0] = v45.m128_f32[0] + -0.5;
      v45.m128_f32[1] = v45.m128_f32[1] + -0.5;
      v45.m128_f32[2] = v45.m128_f32[2] + 0.5;
      v45.m128_f32[3] = v45.m128_f32[3] + 0.5;
    }
    else
    {
      v24 = v45.m128_f32[3];
      v25 = v45.m128_f32[2];
      v26 = v45.m128_f32[1];
      v27 = v45.m128_f32[0];
    }
    if ( v25 <= v27 || v24 <= v26 )
      goto LABEL_46;
    if ( v47.m128i_i64[0] )
    {
      v28 = *(float *)v47.m128i_i64[0];
      if ( *(float *)v47.m128i_i64[0] > v27 )
      {
        v45.m128_i32[0] = *(_DWORD *)v47.m128i_i64[0];
        v27 = v28;
      }
      v29 = *(float *)(v47.m128i_i64[0] + 4);
      if ( v29 > v26 )
      {
        v45.m128_i32[1] = *(_DWORD *)(v47.m128i_i64[0] + 4);
        v26 = v29;
      }
      if ( v25 > *(float *)(v47.m128i_i64[0] + 8) )
      {
        v25 = *(float *)(v47.m128i_i64[0] + 8);
        v45.m128_f32[2] = v25;
      }
      if ( v24 > *(float *)(v47.m128i_i64[0] + 12) )
      {
        v24 = *(float *)(v47.m128i_i64[0] + 12);
        v45.m128_f32[3] = v24;
      }
      if ( v25 <= v27 || v24 <= v26 )
      {
        v24 = 0.0;
        v25 = 0.0;
        v26 = 0.0;
        v27 = 0.0;
        v45 = 0uLL;
      }
    }
    if ( v25 <= v27 || v24 <= v26 )
      goto LABEL_46;
    if ( *(float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite >= v27
      && v25 >= *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2)
      || *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1) >= v26
      && v24 >= *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3) )
    {
      CDirtyRegion::SetFullDirty((CDirtyRegion *)v8);
    }
    if ( !*(_BYTE *)(v8 + 2722) && !*(_DWORD *)(v8 + 2696) )
      break;
    v7 = 0;
LABEL_46:
    ++v18;
    v20 += 2;
    if ( v18 >= v17 )
      goto LABEL_47;
  }
  v30 = CDirtyRegion::_Add((CDirtyRegion *)v8, a1, 1, &v45);
  v7 = v30;
  if ( v30 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v30, 0x1A7u);
  if ( (v7 & 0x80000000) == 0 )
    goto LABEL_46;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0xC2Du);
LABEL_48:
  *(_BYTE *)(a1 + 93) |= 1u;
  return v7;
}
