/*
 * XREFs of ?PreComputeWorker@CVisualTree@@IEAAJPEAVCDirtyRegion@@@Z @ 0x180030CC0
 * Callers:
 *     ?PreRender@CDesktopRenderTarget@@UEAAJXZ @ 0x180015D90 (-PreRender@CDesktopRenderTarget@@UEAAJXZ.c)
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180031B0C (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 * Callees:
 *     ?AddInvalidRects@CHwndRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@@@Z @ 0x180017DC0 (-AddInvalidRects@CHwndRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@.c)
 *     ??_GCBackdropRegion@@UEAAPEAXI@Z @ 0x180030B50 (--_GCBackdropRegion@@UEAAPEAXI@Z.c)
 *     ?CalcAcceleration@CDirtyRegion@@AEAAMAEBUDirtyRegionCachedData@1@0@Z @ 0x180034134 (-CalcAcceleration@CDirtyRegion@@AEAAMAEBUDirtyRegionCachedData@1@0@Z.c)
 *     ?SetFullDirty@CDirtyRegion@@QEAAXXZ @ 0x18003458C (-SetFullDirty@CDirtyRegion@@QEAAXXZ.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180036770 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180036790 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800368B4 (-DoesIntersectUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?AddAdditionalDirtyRects@CVisual@@QEAAJPEBUMilRectF@@@Z @ 0x1800513D4 (-AddAdditionalDirtyRects@CVisual@@QEAAJPEBUMilRectF@@@Z.c)
 *     ?UpdateTransformChildren@CPreComputeContext@@AEAAJPEBVCVisualTree@@_N@Z @ 0x180055130 (-UpdateTransformChildren@CPreComputeContext@@AEAAJPEBVCVisualTree@@_N@Z.c)
 *     ?PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@@@Z @ 0x1800551E0 (-PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CalcOvehead@@YAMAEBUMilRectF@@0@Z @ 0x1800B8EA8 (-CalcOvehead@@YAMAEBUMilRectF@@0@Z.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?InflateRectF_InPlace@@YAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x180147EA4 (-InflateRectF_InPlace@@YAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquene.c)
 */

__int64 __fastcall CVisualTree::PreComputeWorker(CVisualTree *this, struct CDirtyRegion *a2)
{
  CVisualTree *v2; // rsi
  unsigned int v3; // r12d
  volatile signed __int32 *v4; // rbx
  LPVOID v6; // rax
  int v7; // edi
  __int64 v8; // rax
  unsigned int v9; // ebp
  unsigned int v10; // r8d
  unsigned int v11; // edx
  __int64 v12; // rax
  int i; // edi
  CHwndRenderTarget *v14; // rcx
  void (__fastcall *v15)(CHwndRenderTarget *, const struct CVisualTree *, struct CDirtyRegion *, struct CBackdropRegion *); // rax
  unsigned int v16; // edi
  __int64 v17; // r10
  char v18; // r15
  __int64 v19; // rsi
  char *v20; // rbp
  unsigned int v21; // eax
  char *v22; // rdx
  int v23; // r8d
  unsigned int v24; // r9d
  char v25; // dl
  CBackdropRegion *(__fastcall *v26)(CBackdropRegion *, char); // rax
  __int64 v28; // r11
  __int64 v29; // r9
  float *v30; // r8
  float *v31; // rbx
  const struct MilRectF *v32; // rdx
  __int64 v33; // rbx
  __int64 v34; // r9
  float v35; // xmm4_4
  const struct CDirtyRegion::DirtyRegionCachedData *v36; // rdx
  float v37; // xmm1_4
  float v38; // xmm3_4
  float v39; // xmm2_4
  bool v40; // cc
  bool v41; // al
  float v42; // xmm1_4
  float v43; // xmm2_4
  __int64 v44; // r11
  float *v45; // r8
  float *v46; // r10
  unsigned int v47; // edx
  __int64 v48; // rcx
  float v49; // xmm1_4
  char v50; // al
  float v51; // xmm2_4
  char v52; // al
  float v53; // xmm1_4
  char v54; // al
  float v55; // xmm2_4
  char v56; // al
  float v57; // xmm1_4
  char v58; // al
  float v59; // xmm1_4
  char v60; // al
  float *v61; // rdx
  __int64 v62; // r8
  float *v63; // rcx
  float v64; // xmm1_4
  char v65; // al
  __int64 v66; // r9
  _QWORD *v67; // r9
  int v68; // eax
  CVisual *v69; // rdi
  unsigned int v70; // eax
  __int64 v71; // rbp
  const struct MilRectF *v72; // rbp
  __int64 v73; // r14
  __int64 v74; // rax
  __int64 v75; // rcx
  __int64 v76; // rax
  __int64 v77; // rcx
  __int64 v78; // rax
  __int64 v79; // rcx
  __int64 v80; // rax
  __int64 v81; // rcx
  float v82; // xmm2_4
  float v83; // xmm1_4
  float v84; // xmm2_4
  float v85; // xmm1_4
  float v86; // xmm2_4
  float v87; // xmm2_4
  float v88; // xmm2_4
  const struct CDirtyRegion::DirtyRegionCachedData *v89; // r8
  CDirtyRegion *v90; // rcx
  float v91; // xmm0_4
  __int64 v92; // rdx
  float *v93; // rcx
  __int64 v94; // r10
  int updated; // eax
  unsigned int j; // ecx
  __int64 v97; // rax
  char *v98; // rdi
  __int64 v99; // rsi
  __int64 v100; // rcx
  unsigned int v101; // [rsp+30h] [rbp-B8h]
  float *v102; // [rsp+38h] [rbp-B0h]
  __int64 v103; // [rsp+40h] [rbp-A8h]
  volatile signed __int32 *v104; // [rsp+48h] [rbp-A0h]
  CBackdropRegion *v105; // [rsp+50h] [rbp-98h]
  __m128 v106; // [rsp+58h] [rbp-90h] BYREF
  int v108; // [rsp+100h] [rbp+18h]
  unsigned int v109; // [rsp+108h] [rbp+20h]

  v2 = this;
  v3 = 0;
  v4 = 0LL;
  v104 = 0LL;
  v105 = 0LL;
  v6 = HeapAlloc(WPF::g_processHeap, 0, 0x30uLL);
  if ( v6 )
  {
    *(_QWORD *)v6 = &CMILRefCountBase::`vftable';
    *(_QWORD *)v6 = &CBackdropRegion::`vftable';
    *((_DWORD *)v6 + 2) = 0;
    *((_QWORD *)v6 + 2) = 0LL;
    *((_QWORD *)v6 + 3) = 0LL;
    *((_QWORD *)v6 + 4) = 0LL;
    *((_DWORD *)v6 + 10) = 0;
  }
  else
  {
    v6 = 0LL;
  }
  if ( v6 )
  {
    _InterlockedIncrement((volatile signed __int32 *)v6 + 2);
    v4 = (volatile signed __int32 *)v6;
    v104 = (volatile signed __int32 *)v6;
    v105 = (CBackdropRegion *)v6;
    v7 = 0;
    v108 = 0;
  }
  else
  {
    v7 = -2147024882;
    v108 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0xFu);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0xCDu);
  }
  if ( *((_BYTE *)v2 + 33) )
  {
    v7 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003292412, 0x134u);
    goto LABEL_42;
  }
  v8 = *((_QWORD *)v2 + 3);
  *((_BYTE *)v2 + 33) = 1;
  if ( (*(_BYTE *)(v8 + 88) & 0x7F) != 0 )
  {
    v68 = CPreComputeContext::PreCompute((CVisualTree *)((char *)v2 + 64), v2, a2, (struct CBackdropRegion *)v4);
    v108 = v68;
    v7 = v68;
    if ( v68 >= 0 )
      goto LABEL_9;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v68, 0xDDu);
  }
  else if ( !*((_BYTE *)v2 + 32)
         && (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)v2 + 2) + 528LL) + 112LL))(*(_QWORD *)(*((_QWORD *)v2 + 2) + 528LL)) )
  {
    updated = CPreComputeContext::UpdateTransformChildren((CVisualTree *)((char *)v2 + 64), v2, 1);
    v108 = updated;
    v7 = updated;
    if ( updated >= 0 )
      goto LABEL_9;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0xE8u);
  }
  if ( v7 < 0 )
    goto LABEL_41;
LABEL_9:
  v9 = 1;
  if ( qword_18026EEA8 )
  {
    v10 = *((_DWORD *)qword_18026EEA8 + 18);
    v11 = 0;
    if ( v10 )
    {
      while ( !*(_BYTE *)(*(_QWORD *)(*((_QWORD *)qword_18026EEA8 + 6) + 8LL * v11) + 208LL) )
      {
        if ( ++v11 >= v10 )
          goto LABEL_13;
      }
      goto LABEL_150;
    }
  }
LABEL_13:
  if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v2 + 2) + 72LL) + 100LL) )
LABEL_150:
    v9 = 0;
  v12 = *((_QWORD *)v2 + 2);
  if ( *(_DWORD *)(v12 + 1280) )
    v9 = 0;
  if ( *(_QWORD *)(v12 + 536) )
    v9 = 2;
  for ( i = *((_DWORD *)v2 + 276); i > 0; --i )
  {
    v14 = *(CHwndRenderTarget **)(*((_QWORD *)v2 + 135) + 8LL * (unsigned int)(i - 1));
    v15 = *(void (__fastcall **)(CHwndRenderTarget *, const struct CVisualTree *, struct CDirtyRegion *, struct CBackdropRegion *))(*(_QWORD *)v14 + 32LL);
    if ( v15 == CHwndRenderTarget::AddInvalidRects )
      CHwndRenderTarget::AddInvalidRects(v14, v2, a2, (struct CBackdropRegion *)v4);
    else
      v15(v14, v2, a2, (struct CBackdropRegion *)v4);
  }
  if ( *((_BYTE *)a2 + 2722) )
  {
    *((_DWORD *)a2 + 279) = 1;
    goto LABEL_36;
  }
  memset_0((char *)a2 + 956, 0, 0x80uLL);
  if ( *((_BYTE *)a2 + 2724) )
  {
    v98 = (char *)a2 + 24;
    v99 = 8LL;
    do
    {
      if ( !(unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(v98) )
        InflateRectF_InPlace(v100);
      v98 += 16;
      --v99;
    }
    while ( v99 );
  }
  v16 = 0;
  v17 = v9;
  v103 = v9;
  do
  {
    v18 = 0;
    v19 = 16LL * v16;
    v20 = (char *)a2 + v19;
    if ( *(float *)((char *)a2 + v19 + 32) <= *(float *)((char *)a2 + v19 + 24) )
      goto LABEL_26;
    if ( *((float *)v20 + 9) <= *((float *)v20 + 7) )
      goto LABEL_26;
    v28 = v16 + 1;
    v29 = (unsigned int)v28;
    v109 = v16 + 1;
    v101 = v16 + 1;
    if ( (unsigned int)v28 >= 8 )
      goto LABEL_26;
    v30 = (float *)((char *)a2 + 16 * (unsigned int)v28 + 36);
    v102 = v30;
    v31 = (float *)((char *)a2 + 32 * v28 + 4 * v16 + 536);
    while ( 1 )
    {
      if ( *(v30 - 1) > *(v30 - 3) && *v30 > *(v30 - 2) )
      {
        if ( v17 == 2
          || (unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(
                                v20 + 24,
                                (char *)a2 + 16 * (unsigned int)v29 + 24) )
        {
          goto LABEL_57;
        }
        if ( v17 )
          break;
      }
LABEL_52:
      v29 = (unsigned int)(v29 + 1);
      v30 += 4;
      v31 += 8;
      v109 = v29;
      v102 = v30;
      if ( (unsigned int)v29 >= 8 )
        goto LABEL_26;
    }
    if ( *v31 >= 0.86000001 )
      goto LABEL_57;
    if ( CalcOvehead((const struct MilRectF *)(v20 + 24), v32) >= 50000.0 )
    {
      v30 = v102;
      LODWORD(v29) = v109;
      v17 = v103;
      goto LABEL_52;
    }
    v29 = v109;
LABEL_57:
    v33 = (unsigned int)v29;
    v106 = *(__m128 *)(v20 + 24);
    TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(&v106, (char *)a2 + 16 * v29 + 24);
    v35 = v106.m128_f32[0];
    v36 = (struct CDirtyRegion *)((char *)a2 + 408);
    v37 = v106.m128_f32[3];
    v38 = v106.m128_f32[1];
    v39 = _mm_shuffle_ps(v106, v106, 170).m128_f32[0];
    v40 = v39 <= v106.m128_f32[0];
    *(__m128 *)(v20 + 24) = v106;
    v41 = v40 || v37 <= v38;
    *((_BYTE *)v36 + v19 + 12) = v41;
    v42 = v37 - v38;
    v43 = v39 - v35;
    *(float *)((char *)v36 + v19 + 8) = v42 * v43;
    *(float *)((char *)v36 + v19 + 4) = (float)(v42 * 0.5) + v38;
    *((float *)v36 + 4 * v16) = (float)(v43 * 0.5) + v35;
    *((_BYTE *)a2 + v34 + 420) = 1;
    *((_DWORD *)a2 + 4 * v33 + 104) = 0;
    *(_QWORD *)((char *)a2 + v34 + 408) = 0LL;
    *(_QWORD *)((char *)a2 + v34 + 32) = 0LL;
    *(_QWORD *)((char *)a2 + v34 + 24) = 0LL;
    if ( v16 )
    {
      v89 = (struct CDirtyRegion *)((char *)a2 + v19 + 408);
      v90 = (struct CDirtyRegion *)((char *)a2 + 32 * v16 + 536);
      do
      {
        v91 = CDirtyRegion::CalcAcceleration(v90, v36, v89);
        v36 = (const struct CDirtyRegion::DirtyRegionCachedData *)(v92 + 16);
        *v93 = v91;
        v90 = (CDirtyRegion *)(v93 + 1);
      }
      while ( v94 != 1 );
    }
    v44 = v101;
    if ( v101 < 8 )
    {
      if ( 8 - v101 >= 6 )
      {
        v45 = (float *)((char *)a2 + 16 * v101 + 412);
        v46 = (float *)((char *)a2 + 32 * v101 + 4 * v16 + 568);
        v47 = (2 - v101) / 6 + 1;
        v48 = v47;
        v44 = v101 + 6 * v47;
        do
        {
          v49 = 0.0;
          v50 = *((_BYTE *)a2 + v19 + 420);
          if ( *((_BYTE *)v45 + 8) )
          {
            if ( !v50 )
              v49 = FLOAT_3_4028235e38;
          }
          else if ( !v50 )
          {
            v82 = (float)((float)(*v45 - *(float *)((char *)a2 + v19 + 412))
                        * (float)(*v45 - *(float *)((char *)a2 + v19 + 412)))
                + (float)((float)(*(v45 - 1) - *(float *)((char *)a2 + v19 + 408))
                        * (float)(*(v45 - 1) - *(float *)((char *)a2 + v19 + 408)));
            if ( v82 != 0.0 )
              v49 = (float)(v45[1] + *(float *)((char *)a2 + v19 + 416)) / v82;
          }
          *(v46 - 8) = v49;
          v51 = 0.0;
          v52 = *((_BYTE *)a2 + v19 + 420);
          if ( *((_BYTE *)v45 + 24) )
          {
            if ( !v52 )
              v51 = FLOAT_3_4028235e38;
          }
          else if ( !v52 )
          {
            v83 = (float)((float)(v45[4] - *(float *)((char *)a2 + v19 + 412))
                        * (float)(v45[4] - *(float *)((char *)a2 + v19 + 412)))
                + (float)((float)(v45[3] - *(float *)((char *)a2 + v19 + 408))
                        * (float)(v45[3] - *(float *)((char *)a2 + v19 + 408)));
            if ( v83 != 0.0 )
              v51 = (float)(v45[5] + *(float *)((char *)a2 + v19 + 416)) / v83;
          }
          *v46 = v51;
          v53 = 0.0;
          v54 = *((_BYTE *)a2 + v19 + 420);
          if ( *((_BYTE *)v45 + 40) )
          {
            if ( !v54 )
              v53 = FLOAT_3_4028235e38;
          }
          else if ( !v54 )
          {
            v84 = (float)((float)(v45[8] - *(float *)((char *)a2 + v19 + 412))
                        * (float)(v45[8] - *(float *)((char *)a2 + v19 + 412)))
                + (float)((float)(v45[7] - *(float *)((char *)a2 + v19 + 408))
                        * (float)(v45[7] - *(float *)((char *)a2 + v19 + 408)));
            if ( v84 != 0.0 )
              v53 = (float)(v45[9] + *(float *)((char *)a2 + v19 + 416)) / v84;
          }
          v46[8] = v53;
          v55 = 0.0;
          v56 = *((_BYTE *)a2 + v19 + 420);
          if ( *((_BYTE *)v45 + 56) )
          {
            if ( !v56 )
              v55 = FLOAT_3_4028235e38;
          }
          else if ( !v56 )
          {
            v85 = (float)((float)(v45[12] - *(float *)((char *)a2 + v19 + 412))
                        * (float)(v45[12] - *(float *)((char *)a2 + v19 + 412)))
                + (float)((float)(v45[11] - *(float *)((char *)a2 + v19 + 408))
                        * (float)(v45[11] - *(float *)((char *)a2 + v19 + 408)));
            if ( v85 != 0.0 )
              v55 = (float)(v45[13] + *(float *)((char *)a2 + v19 + 416)) / v85;
          }
          v46[16] = v55;
          v57 = 0.0;
          v58 = *((_BYTE *)a2 + v19 + 420);
          if ( *((_BYTE *)v45 + 72) )
          {
            if ( !v58 )
              v57 = FLOAT_3_4028235e38;
          }
          else if ( !v58 )
          {
            v86 = (float)((float)(v45[16] - *(float *)((char *)a2 + v19 + 412))
                        * (float)(v45[16] - *(float *)((char *)a2 + v19 + 412)))
                + (float)((float)(v45[15] - *(float *)((char *)a2 + v19 + 408))
                        * (float)(v45[15] - *(float *)((char *)a2 + v19 + 408)));
            if ( v86 != 0.0 )
              v57 = (float)(v45[17] + *(float *)((char *)a2 + v19 + 416)) / v86;
          }
          v46[24] = v57;
          v59 = 0.0;
          v60 = *((_BYTE *)a2 + v19 + 420);
          if ( *((_BYTE *)v45 + 88) )
          {
            if ( !v60 )
              v59 = FLOAT_3_4028235e38;
          }
          else if ( !v60 )
          {
            v87 = (float)((float)(v45[20] - *(float *)((char *)a2 + v19 + 412))
                        * (float)(v45[20] - *(float *)((char *)a2 + v19 + 412)))
                + (float)((float)(v45[19] - *(float *)((char *)a2 + v19 + 408))
                        * (float)(v45[19] - *(float *)((char *)a2 + v19 + 408)));
            if ( v87 != 0.0 )
              v59 = (float)(v45[21] + *(float *)((char *)a2 + v19 + 416)) / v87;
          }
          v46[32] = v59;
          v45 += 24;
          v46 += 48;
          --v48;
        }
        while ( v48 );
      }
      if ( (unsigned int)v44 < 8 )
      {
        v61 = (float *)((char *)a2 + 16 * (unsigned int)v44 + 412);
        v62 = (unsigned int)(8 - v44);
        v63 = (float *)((char *)a2 + 32 * v44 + 4 * v16 + 536);
        do
        {
          v64 = 0.0;
          v65 = *((_BYTE *)a2 + v19 + 420);
          if ( *((_BYTE *)v61 + 8) )
          {
            if ( !v65 )
              v64 = FLOAT_3_4028235e38;
          }
          else if ( !v65 )
          {
            v88 = (float)((float)(*v61 - *(float *)((char *)a2 + v19 + 412))
                        * (float)(*v61 - *(float *)((char *)a2 + v19 + 412)))
                + (float)((float)(*(v61 - 1) - *(float *)((char *)a2 + v19 + 408))
                        * (float)(*(v61 - 1) - *(float *)((char *)a2 + v19 + 408)));
            if ( v88 != 0.0 )
              v64 = (float)(v61[1] + *(float *)((char *)a2 + v19 + 416)) / v88;
          }
          *v63 = v64;
          v61 += 4;
          v63 += 8;
          --v62;
        }
        while ( v62 );
      }
    }
    TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe((char *)a2 + v19 + 152, (char *)a2 + v34 + 152);
    *(_QWORD *)((char *)a2 + v66 + 160) = 0LL;
    *(_QWORD *)((char *)a2 + v66 + 152) = 0LL;
    v67 = (_QWORD *)((char *)a2 + v66 + 280);
    if ( (_QWORD *)*v67 != v67 )
    {
      **((_QWORD **)a2 + 2 * v16 + 36) = *v67;
      *(_QWORD *)(*v67 + 8LL) = *((_QWORD *)a2 + 2 * v16 + 36);
      **((_QWORD **)a2 + 2 * v33 + 36) = (char *)a2 + v19 + 280;
      *((_QWORD *)a2 + 2 * v16 + 36) = *((_QWORD *)a2 + 2 * v33 + 36);
      v67[1] = v67;
      *v67 = v67;
    }
    v18 = 1;
LABEL_26:
    v17 = v103;
    v21 = v16 + 1;
    v16 = 0;
    if ( !v18 )
      v16 = v21;
  }
  while ( v16 < 8 );
  v4 = v104;
  v22 = (char *)a2 + 36;
  v23 = 2;
  v24 = 0;
  do
  {
    if ( *((float *)v22 - 1) > *((float *)v22 - 3) && *(float *)v22 > *((float *)v22 - 2) )
    {
      v74 = 2LL * v24;
      v75 = v24++;
      *(_OWORD *)((char *)a2 + 8 * v74 + 956) = *(_OWORD *)(v22 - 12);
      *((_DWORD *)a2 + v75 + 271) = v23 - 2;
    }
    if ( *((float *)v22 + 3) > *((float *)v22 + 1) && *((float *)v22 + 4) > *((float *)v22 + 2) )
    {
      v76 = 2LL * v24;
      v77 = v24++;
      *(_OWORD *)((char *)a2 + 8 * v76 + 956) = *(_OWORD *)(v22 + 4);
      *((_DWORD *)a2 + v77 + 271) = v23 - 1;
    }
    if ( *((float *)v22 + 7) > *((float *)v22 + 5) && *((float *)v22 + 8) > *((float *)v22 + 6) )
    {
      v78 = 2LL * v24;
      v79 = v24++;
      *(_OWORD *)((char *)a2 + 8 * v78 + 956) = *(_OWORD *)(v22 + 20);
      *((_DWORD *)a2 + v79 + 271) = v23;
    }
    if ( *((float *)v22 + 11) > *((float *)v22 + 9) && *((float *)v22 + 12) > *((float *)v22 + 10) )
    {
      v80 = 2LL * v24;
      v81 = v24++;
      *(_OWORD *)((char *)a2 + 8 * v80 + 956) = *(_OWORD *)(v22 + 36);
      *((_DWORD *)a2 + v81 + 271) = v23 + 1;
    }
    v23 += 4;
    v22 += 64;
  }
  while ( (unsigned int)(v23 - 2) < 8 );
  v2 = this;
  *((_DWORD *)a2 + 279) = v24;
LABEL_36:
  *((_BYTE *)a2 + 2725) = 1;
  if ( *((_BYTE *)a2 + 2721) )
  {
    if ( !*((_BYTE *)a2 + 2720) )
    {
      for ( j = 0;
            j < *((_DWORD *)a2 + 279);
            *(_OWORD *)((char *)a2 + 16 * v97 + 824) = *(_OWORD *)((char *)a2 + 16 * v97 + 956) )
      {
        v97 = j++;
      }
      *((_DWORD *)a2 + 238) = *((_DWORD *)a2 + 279);
      *((_BYTE *)a2 + 2720) = 1;
    }
    CDirtyRegion::SetFullDirty(a2);
    *((_BYTE *)a2 + 2721) = 0;
  }
  v25 = *((_BYTE *)a2 + 2722);
  if ( !v25 )
  {
    if ( *((_BYTE *)a2 + 2725) )
    {
      if ( !*((_DWORD *)a2 + 279) )
        goto LABEL_40;
    }
    else
    {
      while ( (unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty((char *)a2 + 16 * v3 + 24) )
      {
        if ( ++v3 >= 8 )
          goto LABEL_40;
      }
    }
  }
  v69 = *(CVisual **)(*((_QWORD *)v2 + 3) + 80LL);
  if ( v69 )
  {
    v70 = *((_DWORD *)a2 + 279);
    v71 = 2700LL;
    if ( !v25 )
      v71 = 956LL;
    v72 = (struct CDirtyRegion *)((char *)a2 + v71);
    if ( v70 )
    {
      v73 = v70;
      do
      {
        CVisual::AddAdditionalDirtyRects(v69, v72);
        v72 = (const struct MilRectF *)((char *)v72 + 16);
        --v73;
      }
      while ( v73 );
    }
  }
LABEL_40:
  v7 = v108;
LABEL_41:
  *((_BYTE *)v2 + 33) = 0;
LABEL_42:
  if ( v4 && _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 1 )
  {
    v26 = *(CBackdropRegion *(__fastcall **)(CBackdropRegion *, char))(*(_QWORD *)v105 + 16LL);
    if ( v26 == CBackdropRegion::`scalar deleting destructor' )
      CBackdropRegion::`scalar deleting destructor'(v105, 1);
    else
      v26(v105, 1);
  }
  return (unsigned int)v7;
}
