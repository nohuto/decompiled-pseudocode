/*
 * XREFs of ?Merge@CDirtyRegion@@AEAAXII@Z @ 0x180091550
 * Callers:
 *     ?PreRender@CDesktopRenderTarget@@UEAAJXZ @ 0x180069700 (-PreRender@CDesktopRenderTarget@@UEAAJXZ.c)
 *     ?Optimize@CDirtyRegion@@QEAAXW4DirtyRegionOptimization@@@Z @ 0x180091258 (-Optimize@CDirtyRegion@@QEAAXW4DirtyRegionOptimization@@@Z.c)
 *     ?_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180091DA0 (-_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeede.c)
 * Callees:
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x18006FD70 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 */

void __fastcall CDirtyRegion::Merge(CDirtyRegion *this, unsigned int a2, unsigned int a3)
{
  __int64 v3; // r14
  __int64 v4; // rdi
  __int64 v5; // rbp
  _QWORD *v6; // rdx
  __int64 v7; // r9
  __int64 v8; // r10
  __int64 v9; // r11
  float v10; // xmm5_4
  float v11; // xmm2_4
  float v12; // xmm4_4
  float v13; // xmm3_4
  bool v14; // cc
  bool v15; // al
  float v16; // xmm2_4
  float v17; // xmm3_4
  unsigned int v18; // r8d
  __int64 v19; // rcx
  float *v20; // rdx
  unsigned int v21; // eax
  __int64 v22; // rbx
  float v23; // xmm1_4
  char v24; // al
  float v25; // xmm3_4
  float v26; // xmm3_4
  char v27; // al
  float v28; // xmm1_4
  float v29; // xmm1_4
  char v30; // al
  float v31; // xmm3_4
  float v32; // xmm1_4
  char v33; // al
  float v34; // xmm3_4
  __int64 v35; // rdx
  __int64 v36; // rcx
  float *v37; // rbx
  float v38; // xmm1_4
  char v39; // al
  float v40; // xmm3_4
  __int64 v41; // r8
  __int64 v42; // rbx
  float *v43; // rsi
  unsigned int v44; // edx
  __int64 v45; // rcx
  float v46; // xmm1_4
  char v47; // al
  float v48; // xmm3_4
  char v49; // al
  float v50; // xmm1_4
  char v51; // al
  float v52; // xmm3_4
  char v53; // al
  float v54; // xmm1_4
  char v55; // al
  float v56; // xmm1_4
  char v57; // al
  __int64 v58; // rdx
  float *v59; // rcx
  __int64 v60; // rax
  float v61; // xmm1_4
  char v62; // r8
  __int64 v63; // r9
  __int64 v64; // r11
  _QWORD *v65; // r10
  _QWORD *v66; // rdx
  float v67; // xmm3_4
  float v68; // xmm1_4
  float v69; // xmm3_4
  float v70; // xmm1_4
  float v71; // xmm3_4
  float v72; // xmm3_4
  float v73; // xmm3_4
  __m128 v74; // [rsp+20h] [rbp-28h] BYREF

  v3 = a2;
  v4 = 16LL * a3;
  v5 = a3;
  v74 = *(__m128 *)((char *)this + 16 * a2 + 24);
  TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(v74.m128_f32, (float *)((char *)this + v4 + 24));
  v10 = v74.m128_f32[0];
  v11 = v74.m128_f32[3];
  v12 = v74.m128_f32[1];
  v13 = _mm_shuffle_ps(v74, v74, 170).m128_f32[0];
  v14 = v13 <= v74.m128_f32[0];
  *(__m128 *)(v9 + v7 + 24) = v74;
  v15 = v14 || v11 <= v12;
  *(_BYTE *)(v9 + v7 + 420) = v15;
  v16 = v11 - v12;
  v17 = v13 - v10;
  v18 = 0;
  *(float *)(v9 + v7 + 416) = v16 * v17;
  *(float *)(v9 + v7 + 412) = (float)(v16 * 0.5) + v12;
  *(float *)(v9 + v7 + 408) = (float)(v17 * 0.5) + v10;
  *(_BYTE *)(v4 + v7 + 420) = 1;
  *(_DWORD *)(v7 + 16 * (v5 + 26)) = 0;
  *(_QWORD *)(v4 + v7 + 408) = 0LL;
  v6[1] = 0LL;
  *v6 = 0LL;
  if ( (unsigned int)v8 >= 4 )
  {
    v19 = v7 + 412;
    v20 = (float *)(32 * v3 + v7 + 540);
    v21 = ((unsigned int)(v8 - 4) >> 2) + 1;
    v22 = v21;
    v18 = 4 * v21;
    do
    {
      v23 = 0.0;
      v24 = *(_BYTE *)(v9 + v7 + 420);
      if ( *(_BYTE *)(v19 + 8) )
      {
        if ( !v24 )
          v23 = FLOAT_3_4028235e38;
      }
      else if ( !v24 )
      {
        v25 = (float)((float)(*(float *)v19 - *(float *)(v9 + v7 + 412))
                    * (float)(*(float *)v19 - *(float *)(v9 + v7 + 412)))
            + (float)((float)(*(float *)(v19 - 4) - *(float *)(v9 + v7 + 408))
                    * (float)(*(float *)(v19 - 4) - *(float *)(v9 + v7 + 408)));
        if ( v25 != 0.0 )
          v23 = (float)(*(float *)(v19 + 4) + *(float *)(v9 + v7 + 416)) / v25;
      }
      *(v20 - 1) = v23;
      v26 = 0.0;
      v27 = *(_BYTE *)(v9 + v7 + 420);
      if ( *(_BYTE *)(v19 + 24) )
      {
        if ( !v27 )
          v26 = FLOAT_3_4028235e38;
      }
      else if ( !v27 )
      {
        v28 = (float)((float)(*(float *)(v19 + 16) - *(float *)(v9 + v7 + 412))
                    * (float)(*(float *)(v19 + 16) - *(float *)(v9 + v7 + 412)))
            + (float)((float)(*(float *)(v19 + 12) - *(float *)(v9 + v7 + 408))
                    * (float)(*(float *)(v19 + 12) - *(float *)(v9 + v7 + 408)));
        if ( v28 != 0.0 )
          v26 = (float)(*(float *)(v19 + 20) + *(float *)(v9 + v7 + 416)) / v28;
      }
      *v20 = v26;
      v29 = 0.0;
      v30 = *(_BYTE *)(v9 + v7 + 420);
      if ( *(_BYTE *)(v19 + 40) )
      {
        if ( !v30 )
          v29 = FLOAT_3_4028235e38;
      }
      else if ( !v30 )
      {
        v31 = (float)((float)(*(float *)(v19 + 32) - *(float *)(v9 + v7 + 412))
                    * (float)(*(float *)(v19 + 32) - *(float *)(v9 + v7 + 412)))
            + (float)((float)(*(float *)(v19 + 28) - *(float *)(v9 + v7 + 408))
                    * (float)(*(float *)(v19 + 28) - *(float *)(v9 + v7 + 408)));
        if ( v31 != 0.0 )
          v29 = (float)(*(float *)(v19 + 36) + *(float *)(v9 + v7 + 416)) / v31;
      }
      v20[1] = v29;
      v32 = 0.0;
      v33 = *(_BYTE *)(v9 + v7 + 420);
      if ( *(_BYTE *)(v19 + 56) )
      {
        if ( !v33 )
          v32 = FLOAT_3_4028235e38;
      }
      else if ( !v33 )
      {
        v34 = (float)((float)(*(float *)(v19 + 48) - *(float *)(v9 + v7 + 412))
                    * (float)(*(float *)(v19 + 48) - *(float *)(v9 + v7 + 412)))
            + (float)((float)(*(float *)(v19 + 44) - *(float *)(v9 + v7 + 408))
                    * (float)(*(float *)(v19 + 44) - *(float *)(v9 + v7 + 408)));
        if ( v34 != 0.0 )
          v32 = (float)(*(float *)(v19 + 52) + *(float *)(v9 + v7 + 416)) / v34;
      }
      v20[2] = v32;
      v19 += 64LL;
      v20 += 4;
      --v22;
    }
    while ( v22 );
  }
  if ( v18 < (unsigned int)v8 )
  {
    v35 = 16LL * v18 + v7 + 412;
    v36 = (unsigned int)v8 - v18;
    v37 = (float *)(v7 + 4 * (v18 + 8 * v8 + 134));
    do
    {
      v38 = 0.0;
      v39 = *(_BYTE *)(v9 + v7 + 420);
      if ( *(_BYTE *)(v35 + 8) )
      {
        if ( !v39 )
          v38 = FLOAT_3_4028235e38;
      }
      else if ( !v39 )
      {
        v40 = (float)((float)(*(float *)v35 - *(float *)(v9 + v7 + 412))
                    * (float)(*(float *)v35 - *(float *)(v9 + v7 + 412)))
            + (float)((float)(*(float *)(v35 - 4) - *(float *)(v9 + v7 + 408))
                    * (float)(*(float *)(v35 - 4) - *(float *)(v9 + v7 + 408)));
        if ( v40 != 0.0 )
          v38 = (float)(*(float *)(v35 + 4) + *(float *)(v9 + v7 + 416)) / v40;
      }
      *v37 = v38;
      v35 += 16LL;
      ++v37;
      --v36;
    }
    while ( v36 );
  }
  v41 = (unsigned int)(v8 + 1);
  if ( (unsigned int)v41 < 8 )
  {
    if ( (unsigned int)(8 - v41) >= 6 )
    {
      v42 = 16LL * (unsigned int)v41 + v7 + 412;
      v43 = (float *)(v7 + 4 * (v3 + 142 + 8 * v41));
      v44 = (2 - (int)v41) / 6u + 1;
      v45 = v44;
      v41 = (unsigned int)v41 + 6 * v44;
      do
      {
        v46 = 0.0;
        v47 = *(_BYTE *)(v9 + v7 + 420);
        if ( *(_BYTE *)(v42 + 8) )
        {
          if ( !v47 )
            v46 = FLOAT_3_4028235e38;
        }
        else if ( !v47 )
        {
          v67 = (float)((float)(*(float *)v42 - *(float *)(v9 + v7 + 412))
                      * (float)(*(float *)v42 - *(float *)(v9 + v7 + 412)))
              + (float)((float)(*(float *)(v42 - 4) - *(float *)(v9 + v7 + 408))
                      * (float)(*(float *)(v42 - 4) - *(float *)(v9 + v7 + 408)));
          if ( v67 != 0.0 )
            v46 = (float)(*(float *)(v42 + 4) + *(float *)(v9 + v7 + 416)) / v67;
        }
        *(v43 - 8) = v46;
        v48 = 0.0;
        v49 = *(_BYTE *)(v9 + v7 + 420);
        if ( *(_BYTE *)(v42 + 24) )
        {
          if ( !v49 )
            v48 = FLOAT_3_4028235e38;
        }
        else if ( !v49 )
        {
          v68 = (float)((float)(*(float *)(v42 + 16) - *(float *)(v9 + v7 + 412))
                      * (float)(*(float *)(v42 + 16) - *(float *)(v9 + v7 + 412)))
              + (float)((float)(*(float *)(v42 + 12) - *(float *)(v9 + v7 + 408))
                      * (float)(*(float *)(v42 + 12) - *(float *)(v9 + v7 + 408)));
          if ( v68 != 0.0 )
            v48 = (float)(*(float *)(v42 + 20) + *(float *)(v9 + v7 + 416)) / v68;
        }
        *v43 = v48;
        v50 = 0.0;
        v51 = *(_BYTE *)(v9 + v7 + 420);
        if ( *(_BYTE *)(v42 + 40) )
        {
          if ( !v51 )
            v50 = FLOAT_3_4028235e38;
        }
        else if ( !v51 )
        {
          v69 = (float)((float)(*(float *)(v42 + 32) - *(float *)(v9 + v7 + 412))
                      * (float)(*(float *)(v42 + 32) - *(float *)(v9 + v7 + 412)))
              + (float)((float)(*(float *)(v42 + 28) - *(float *)(v9 + v7 + 408))
                      * (float)(*(float *)(v42 + 28) - *(float *)(v9 + v7 + 408)));
          if ( v69 != 0.0 )
            v50 = (float)(*(float *)(v42 + 36) + *(float *)(v9 + v7 + 416)) / v69;
        }
        v43[8] = v50;
        v52 = 0.0;
        v53 = *(_BYTE *)(v9 + v7 + 420);
        if ( *(_BYTE *)(v42 + 56) )
        {
          if ( !v53 )
            v52 = FLOAT_3_4028235e38;
        }
        else if ( !v53 )
        {
          v70 = (float)((float)(*(float *)(v42 + 48) - *(float *)(v9 + v7 + 412))
                      * (float)(*(float *)(v42 + 48) - *(float *)(v9 + v7 + 412)))
              + (float)((float)(*(float *)(v42 + 44) - *(float *)(v9 + v7 + 408))
                      * (float)(*(float *)(v42 + 44) - *(float *)(v9 + v7 + 408)));
          if ( v70 != 0.0 )
            v52 = (float)(*(float *)(v42 + 52) + *(float *)(v9 + v7 + 416)) / v70;
        }
        v43[16] = v52;
        v54 = 0.0;
        v55 = *(_BYTE *)(v9 + v7 + 420);
        if ( *(_BYTE *)(v42 + 72) )
        {
          if ( !v55 )
            v54 = FLOAT_3_4028235e38;
        }
        else if ( !v55 )
        {
          v71 = (float)((float)(*(float *)(v42 + 64) - *(float *)(v9 + v7 + 412))
                      * (float)(*(float *)(v42 + 64) - *(float *)(v9 + v7 + 412)))
              + (float)((float)(*(float *)(v42 + 60) - *(float *)(v9 + v7 + 408))
                      * (float)(*(float *)(v42 + 60) - *(float *)(v9 + v7 + 408)));
          if ( v71 != 0.0 )
            v54 = (float)(*(float *)(v42 + 68) + *(float *)(v9 + v7 + 416)) / v71;
        }
        v43[24] = v54;
        v56 = 0.0;
        v57 = *(_BYTE *)(v9 + v7 + 420);
        if ( *(_BYTE *)(v42 + 88) )
        {
          if ( !v57 )
            v56 = FLOAT_3_4028235e38;
        }
        else if ( !v57 )
        {
          v72 = (float)((float)(*(float *)(v42 + 80) - *(float *)(v9 + v7 + 412))
                      * (float)(*(float *)(v42 + 80) - *(float *)(v9 + v7 + 412)))
              + (float)((float)(*(float *)(v42 + 76) - *(float *)(v9 + v7 + 408))
                      * (float)(*(float *)(v42 + 76) - *(float *)(v9 + v7 + 408)));
          if ( v72 != 0.0 )
            v56 = (float)(*(float *)(v42 + 84) + *(float *)(v9 + v7 + 416)) / v72;
        }
        v43[32] = v56;
        v42 += 96LL;
        v43 += 48;
        --v45;
      }
      while ( v45 );
    }
    if ( (unsigned int)v41 < 8 )
    {
      v58 = 16LL * (unsigned int)v41 + v7 + 412;
      v59 = (float *)(v7 + 4 * (v3 + 134 + 8 * v41));
      v60 = (unsigned int)(8 - v41);
      do
      {
        v61 = 0.0;
        v62 = *(_BYTE *)(v9 + v7 + 420);
        if ( *(_BYTE *)(v58 + 8) )
        {
          if ( !v62 )
            v61 = FLOAT_3_4028235e38;
        }
        else if ( !v62 )
        {
          v73 = (float)((float)(*(float *)v58 - *(float *)(v9 + v7 + 412))
                      * (float)(*(float *)v58 - *(float *)(v9 + v7 + 412)))
              + (float)((float)(*(float *)(v58 - 4) - *(float *)(v9 + v7 + 408))
                      * (float)(*(float *)(v58 - 4) - *(float *)(v9 + v7 + 408)));
          if ( v73 != 0.0 )
            v61 = (float)(*(float *)(v58 + 4) + *(float *)(v9 + v7 + 416)) / v73;
        }
        *v59 = v61;
        v58 += 16LL;
        v59 += 8;
        --v60;
      }
      while ( v60 );
    }
  }
  TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe((float *)(v9 + v7 + 152), (float *)(v4 + v7 + 152));
  v65 = (_QWORD *)(v4 + v63 + 280);
  v66[1] = 0LL;
  *v66 = 0LL;
  if ( (_QWORD *)*v65 != v65 )
  {
    **(_QWORD **)(v63 + 16 * (v3 + 18)) = *v65;
    *(_QWORD *)(*v65 + 8LL) = *(_QWORD *)(v63 + 16 * (v3 + 18));
    **(_QWORD **)(v63 + 16 * (v5 + 18)) = v64 + v63 + 280;
    *(_QWORD *)(v63 + 16 * (v3 + 18)) = *(_QWORD *)(v63 + 16 * (v5 + 18));
    v65[1] = v65;
    *v65 = v65;
  }
}
