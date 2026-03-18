/*
 * XREFs of ?CollectAdditionalDirtyRegion@CVisual@@MEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@W4Enum@MilBitmapInterpolationMode@@PEBV?$CRectF@UPageInPixels@CoordinateSpace@@@@@Z @ 0x180087B20
 * Callers:
 *     ?CollectAdditionalDirtyRegion@CWindowNode@@UEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@W4Enum@MilBitmapInterpolationMode@@PEBV?$CRectF@UPageInPixels@CoordinateSpace@@@@@Z @ 0x180052FA0 (-CollectAdditionalDirtyRegion@CWindowNode@@UEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@W4Enum@MilBitm.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180096CB0 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsInfinite@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18006FFCC (-IsInfinite@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?SwapExisting@?$CMergedRectBase@$03@@IEAAXII@Z @ 0x18007385C (-SwapExisting@-$CMergedRectBase@$03@@IEAAXII@Z.c)
 *     ?Optimize@?$CMergedRectBase@$03@@IEAAX_N@Z @ 0x1800738D4 (-Optimize@-$CMergedRectBase@$03@@IEAAX_N@Z.c)
 *     ?AdjustWorldBounds@CVisual@@AEAAXPEAV?$CRectF@UPageInPixels@CoordinateSpace@@@@@Z @ 0x1800860F0 (-AdjustWorldBounds@CVisual@@AEAAXPEAV-$CRectF@UPageInPixels@CoordinateSpace@@@@@Z.c)
 *     ?_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180091DA0 (-_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeede.c)
 *     ?SetFullDirty@CDirtyRegion@@QEAAXXZ @ 0x180092DA8 (-SetFullDirty@CDirtyRegion@@QEAAXXZ.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180099040 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

__int64 __fastcall CVisual::CollectAdditionalDirtyRegion(__int64 a1, __int64 a2, __int64 a3, __int64 a4, float *a5)
{
  __int64 v6; // rcx
  int v7; // r15d
  __int64 i; // rcx
  unsigned int v10; // edi
  unsigned __int32 v11; // r14d
  unsigned __int32 v12; // edi
  __int64 *v13; // rbx
  float v14; // xmm3_4
  float v15; // xmm2_4
  float v16; // xmm0_4
  float v17; // xmm1_4
  float v18; // xmm4_4
  float v19; // xmm4_4
  int v20; // eax
  unsigned int v22; // r8d
  __m128i *v23; // r14
  __m128i *v25; // [rsp+38h] [rbp-28h] BYREF
  float v26; // [rsp+40h] [rbp-20h]
  float v27; // [rsp+44h] [rbp-1Ch]
  __int128 v28; // [rsp+48h] [rbp-18h] BYREF

  v6 = *(_QWORD *)(a1 + 208);
  v7 = 0;
  if ( (*(_DWORD *)(v6 + 4) & 0x20000) != 0 )
  {
    for ( i = v6 + 12; (*(_DWORD *)i & 0x7F000000) != 0xF000000; i += (*(_DWORD *)i & 0xFFFFFF) + 4LL )
      ;
    v25 = *(__m128i **)(i + 4);
    if ( v25 )
    {
      if ( v25[4].m128i_i32[2] )
      {
        v10 = 0;
        CMergedRectBase<4>::Optimize(v25, 1);
        if ( (unsigned int)(v25[4].m128i_i32[2] - 2) <= 1 )
        {
          v22 = 0;
          v23 = v25 + 4;
          do
          {
            if ( v23->m128i_i8[0] )
            {
              if ( v22 != v10 )
                CMergedRectBase<4>::SwapExisting((__int64)v25, v10, v22);
              ++v10;
            }
            ++v22;
            v23 = (__m128i *)((char *)v23 + 1);
          }
          while ( v22 < 4 );
        }
        v11 = v25[4].m128i_u32[2];
        v12 = 0;
        if ( v11 )
        {
          v13 = &v25->m128i_i64[1];
          while ( 1 )
          {
            v28 = *(_OWORD *)(v13 - 1);
            CMILMatrix::Transform2DBoundsHelper<1>(a3, &v28, &v25);
            CVisual::AdjustWorldBounds(a1, (float *)&v25);
            v14 = v26;
            v15 = *(float *)&v25;
            if ( v26 > *(float *)&v25 )
            {
              v16 = v27;
              v17 = *((float *)&v25 + 1);
              if ( v27 > *((float *)&v25 + 1) )
              {
                if ( a5 )
                {
                  v18 = *a5;
                  if ( *a5 > *(float *)&v25 )
                  {
                    *(float *)&v25 = *a5;
                    v15 = v18;
                  }
                  v19 = a5[1];
                  if ( v19 > *((float *)&v25 + 1) )
                  {
                    *((float *)&v25 + 1) = a5[1];
                    v17 = v19;
                  }
                  if ( v26 > a5[2] )
                  {
                    v14 = a5[2];
                    v26 = v14;
                  }
                  if ( v27 > a5[3] )
                  {
                    v16 = a5[3];
                    v27 = v16;
                  }
                  if ( v14 <= v15 || v16 <= v17 )
                  {
                    v16 = 0.0;
                    v14 = 0.0;
                    v17 = 0.0;
                    v27 = 0.0;
                    v15 = 0.0;
                    v26 = 0.0;
                    v25 = 0LL;
                  }
                }
                if ( v14 > v15 && v16 > v17 )
                {
                  v7 = 0;
                  if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsInfinite((float *)&v25) )
                    CDirtyRegion::SetFullDirty((CDirtyRegion *)a2);
                  if ( !*(_BYTE *)(a2 + 2724) && !*(_DWORD *)(a2 + 2704) )
                  {
                    v20 = CDirtyRegion::_Add((CDirtyRegion *)a2);
                    v7 = v20;
                    if ( v20 < 0 )
                      MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0x1C3u);
                    if ( v7 < 0 )
                      break;
                  }
                }
              }
            }
            ++v12;
            v13 += 2;
            if ( v12 >= v11 )
              goto LABEL_32;
          }
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xBF4u);
        }
        else
        {
LABEL_32:
          *(_QWORD *)(a1 + 216) = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 400LL);
        }
        *(_BYTE *)(a1 + 90) |= 1u;
      }
    }
  }
  return (unsigned int)v7;
}
