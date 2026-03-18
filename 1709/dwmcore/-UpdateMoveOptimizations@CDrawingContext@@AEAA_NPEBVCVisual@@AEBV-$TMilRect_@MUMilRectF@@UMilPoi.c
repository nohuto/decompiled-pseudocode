/*
 * XREFs of ?UpdateMoveOptimizations@CDrawingContext@@AEAA_NPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18013F3D8
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180037630 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180090224 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?IsRectEmptyOrInvalid@@YA_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180097B78 (-IsRectEmptyOrInvalid@@YA_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquen.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ?RemoveAt@?$DynArray@PEAUTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@$0A@@@QEAAJI@Z @ 0x180134600 (-RemoveAt@-$DynArray@PEAUTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@$0A@@@QEAAJI@Z.c)
 *     ?ClipRect@CDwmMetaRegion@@SAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x18014F20C (-ClipRect@CDwmMetaRegion@@SAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqu.c)
 */

char __fastcall CDrawingContext::UpdateMoveOptimizations(__int64 a1, __int64 a2, float *a3)
{
  signed int v4; // ebx
  __int64 *v5; // r14
  __int64 v6; // rdi
  float v7; // xmm4_4
  __int64 v8; // r15
  float v9; // xmm0_4
  float v10; // xmm2_4
  float v11; // xmm1_4
  float v12; // xmm3_4
  float v13; // xmm4_4
  float v14; // xmm3_4
  float v15; // xmm2_4
  __m128i v17; // [rsp+20h] [rbp-30h] BYREF
  __int128 v18; // [rsp+30h] [rbp-20h] BYREF

  v4 = *(_DWORD *)(a1 + 6640) - 1;
  if ( v4 >= 0 )
  {
    v5 = (__int64 *)(a1 + 6616);
    v6 = 8LL * v4;
    do
    {
      v7 = *a3;
      v8 = *(_QWORD *)(v6 + *v5);
      v17 = _mm_loadu_si128((const __m128i *)(v8 + 32));
      v9 = *(float *)v17.m128i_i32 + *(float *)(v8 + 24);
      v10 = *(float *)&v17.m128i_i32[1] + *(float *)(v8 + 28);
      v11 = *(float *)&v17.m128i_i32[2] + *(float *)(v8 + 24);
      v12 = *(float *)&v17.m128i_i32[3] + *(float *)(v8 + 28);
      v17.m128i_i64[0] = __PAIR64__(LODWORD(v10), LODWORD(v9));
      v17.m128i_i64[1] = __PAIR64__(LODWORD(v12), LODWORD(v11));
      *((_QWORD *)&v18 + 1) = __PAIR64__(LODWORD(v12), LODWORD(v11));
      *(_QWORD *)&v18 = __PAIR64__(LODWORD(v10), LODWORD(v9));
      if ( v7 > v9 )
      {
        *(float *)v17.m128i_i32 = v7;
        v9 = v7;
      }
      v13 = a3[1];
      if ( v13 > v10 )
      {
        v17.m128i_i32[1] = (__int32)a3[1];
        v10 = v13;
      }
      if ( v11 > a3[2] )
      {
        v11 = a3[2];
        *(float *)&v17.m128i_i32[2] = v11;
      }
      if ( v12 > a3[3] )
      {
        v12 = a3[3];
        *(float *)&v17.m128i_i32[3] = v12;
      }
      if ( v11 > v9 && v12 > v10 )
      {
        CDwmMetaRegion::ClipRect(&v18, &v17);
        if ( IsRectEmptyOrInvalid((float *)&v18) )
        {
          CMILCOMBase::InternalRelease(*(CMILCOMBase **)(*v5 + v6));
          DynArray<CTelemetryTouchLatencyAnalysis::TouchUpdateInfo *,0>::RemoveAt(v5, v4);
        }
        else
        {
          LODWORD(v14) = *(_DWORD *)(v8 + 28) ^ _xmm;
          LODWORD(v15) = *(_DWORD *)(v8 + 24) ^ _xmm;
          *((float *)&v18 + 1) = *((float *)&v18 + 1) + v14;
          *(float *)&v18 = *(float *)&v18 + v15;
          *((float *)&v18 + 3) = *((float *)&v18 + 3) + v14;
          *((float *)&v18 + 2) = *((float *)&v18 + 2) + v15;
          *(_OWORD *)(v8 + 32) = v18;
        }
      }
      v6 -= 8LL;
      --v4;
    }
    while ( v4 >= 0 );
  }
  return 0;
}
