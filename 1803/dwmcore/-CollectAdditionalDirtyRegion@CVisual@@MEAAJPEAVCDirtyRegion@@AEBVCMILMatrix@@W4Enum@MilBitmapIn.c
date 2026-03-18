/*
 * XREFs of ?CollectAdditionalDirtyRegion@CVisual@@MEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@W4Enum@MilBitmapInterpolationMode@@PEBV?$CRectF@UPageInPixels@CoordinateSpace@@@@@Z @ 0x180049C00
 * Callers:
 *     ?CollectAdditionalDirtyRegion@CWindowNode@@UEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@W4Enum@MilBitmapInterpolationMode@@PEBV?$CRectF@UPageInPixels@CoordinateSpace@@@@@Z @ 0x180092BE0 (-CollectAdditionalDirtyRegion@CWindowNode@@UEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@W4Enum@MilBitm.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A0E20 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?AdjustWorldBounds@CVisual@@AEAAXPEAV?$CRectF@UPageInPixels@CoordinateSpace@@@@@Z @ 0x18004CF44 (-AdjustWorldBounds@CVisual@@AEAAXPEAV-$CRectF@UPageInPixels@CoordinateSpace@@@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsInfinite@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180064E8C (-IsInfinite@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?SetFullDirty@CDirtyRegion@@QEAAXXZ @ 0x18009DF20 (-SetFullDirty@CDirtyRegion@@QEAAXXZ.c)
 *     ?_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18009E3A0 (-_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeede.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800A5380 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?SwapExisting@?$CMergedRectBase@$03@@IEAAXII@Z @ 0x1800BD710 (-SwapExisting@-$CMergedRectBase@$03@@IEAAXII@Z.c)
 *     ?Optimize@?$CMergedRectBase@$03@@IEAAX_N@Z @ 0x1800BD788 (-Optimize@-$CMergedRectBase@$03@@IEAAX_N@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

__int64 __fastcall CVisual::CollectAdditionalDirtyRegion(__int64 a1, __int64 a2, __int64 a3, __int64 a4, float *a5)
{
  float *v5; // r14
  __int64 v7; // rcx
  unsigned int v8; // r12d
  unsigned int *i; // rcx
  __int64 v11; // rdx
  unsigned int v12; // esi
  unsigned int v13; // eax
  unsigned int v14; // edi
  unsigned int v15; // esi
  __int64 v16; // rbx
  float v17; // xmm3_4
  float v18; // xmm1_4
  float v19; // xmm2_4
  float v20; // xmm0_4
  float v21; // xmm4_4
  float v22; // xmm4_4
  float v23; // xmm6_4
  float v24; // xmm5_4
  float v25; // xmm4_4
  int v26; // eax
  unsigned int v28; // edi
  _BYTE *v29; // r14
  float *v31; // [rsp+38h] [rbp-38h] BYREF
  float v32; // [rsp+40h] [rbp-30h]
  float v33; // [rsp+44h] [rbp-2Ch]
  __int128 v34; // [rsp+48h] [rbp-28h] BYREF

  v5 = a5;
  v7 = *(_QWORD *)(a1 + 216);
  v8 = 0;
  v31 = a5;
  if ( (*(_DWORD *)(v7 + 4) & 0x20000) == 0 )
    return v8;
  for ( i = (unsigned int *)(v7 + 12); ; i = (unsigned int *)((char *)i + (v11 & 0xFFFFFF) + 4) )
  {
    v11 = *i;
    if ( (*i & 0x7F000000) == 0xF000000 )
      break;
  }
  *(_QWORD *)&v34 = *(_QWORD *)(i + 1);
  if ( !(_QWORD)v34 || !*(_DWORD *)(v34 + 72) )
    return v8;
  LOBYTE(v11) = 1;
  v12 = 0;
  CMergedRectBase<4>::Optimize(v34, v11, 2130706432LL, 251658240LL);
  v13 = *(_DWORD *)(v34 + 72);
  v14 = v13;
  if ( v13 > 1 && v13 < 4 )
  {
    v28 = 0;
    v29 = (_BYTE *)(v34 + 64);
    do
    {
      if ( *v29 )
      {
        if ( v28 != v12 )
          CMergedRectBase<4>::SwapExisting(v34, v12, v28);
        ++v12;
      }
      ++v28;
      ++v29;
    }
    while ( v28 < 4 );
    v14 = *(_DWORD *)(v34 + 72);
    v5 = v31;
  }
  v15 = 0;
  if ( !v14 )
  {
LABEL_32:
    *(_QWORD *)(a1 + 224) = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 384LL);
    goto LABEL_33;
  }
  v16 = v34 + 8;
  while ( 1 )
  {
    v34 = *(_OWORD *)(v16 - 8);
    CMILMatrix::Transform2DBoundsHelper<1>(a3, &v34, &v31);
    CVisual::AdjustWorldBounds(a1, &v31);
    v17 = v32;
    v18 = *(float *)&v31;
    if ( v32 <= *(float *)&v31 )
      goto LABEL_31;
    v19 = v33;
    v20 = *((float *)&v31 + 1);
    if ( v33 <= *((float *)&v31 + 1) )
      goto LABEL_31;
    if ( v5 )
    {
      v21 = *v5;
      if ( *v5 > *(float *)&v31 )
      {
        *(float *)&v31 = *v5;
        v18 = v21;
      }
      v22 = v5[1];
      v23 = *((float *)&v31 + 1);
      if ( v22 > *((float *)&v31 + 1) )
      {
        *((float *)&v31 + 1) = v5[1];
        v20 = v22;
        v23 = v22;
      }
      v24 = v32;
      if ( v32 > v5[2] )
      {
        v32 = v5[2];
        v17 = v32;
        v24 = v32;
      }
      v25 = v33;
      if ( v33 > v5[3] )
      {
        v33 = v5[3];
        v19 = v33;
        v25 = v33;
      }
      if ( v24 <= v18 || v25 <= v23 )
      {
        v19 = 0.0;
        v17 = 0.0;
        v20 = 0.0;
        v33 = 0.0;
        v18 = 0.0;
        v32 = 0.0;
        v31 = 0LL;
      }
    }
    if ( v17 <= v18 || v19 <= v20 )
      goto LABEL_31;
    if ( (unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsInfinite(&v31) )
      CDirtyRegion::SetFullDirty((CDirtyRegion *)a2);
    if ( !*(_BYTE *)(a2 + 2883) && !*(_DWORD *)(a2 + 2856) )
      break;
    v8 = 0;
LABEL_31:
    ++v15;
    v16 += 16LL;
    if ( v15 >= v14 )
      goto LABEL_32;
  }
  v26 = CDirtyRegion::_Add((CDirtyRegion *)a2);
  v8 = v26;
  if ( v26 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v26, 0x1B3u);
  if ( (v8 & 0x80000000) == 0 )
    goto LABEL_31;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0xD20u);
LABEL_33:
  *(_BYTE *)(a1 + 93) |= 0x10u;
  return v8;
}
