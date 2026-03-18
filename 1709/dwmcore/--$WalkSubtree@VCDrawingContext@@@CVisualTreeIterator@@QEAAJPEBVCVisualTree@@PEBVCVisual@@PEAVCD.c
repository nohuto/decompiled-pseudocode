/*
 * XREFs of ??$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCDrawingContext@@W4WalkReason@@@Z @ 0x18005B770
 * Callers:
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N333333@Z @ 0x180043010 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ??_GCRectanglesShape@@UEAAPEAXI@Z @ 0x1800354D0 (--_GCRectanglesShape@@UEAAPEAXI@Z.c)
 *     ?IsInfinite@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180036B0C (-IsInfinite@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180037630 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x18003B6EC (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?CalcClippedNodeWorldSpaceBounds@CDrawingContext@@AEAAXPEBVCVisual@@PEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z @ 0x18003D3F0 (-CalcClippedNodeWorldSpaceBounds@CDrawingContext@@AEAAXPEBVCVisual@@PEAV-$CRectF@UDeviceHPC@Coor.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?EnsureTreeData@CVisual@@QEAAJPEBVCVisualTree@@PEAPEAVCTreeData@@@Z @ 0x18004EA40 (-EnsureTreeData@CVisual@@QEAAJPEBVCVisualTree@@PEAPEAVCTreeData@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Release@CResource@@UEAAKXZ @ 0x1800A9F20 (-Release@CResource@@UEAAKXZ.c)
 *     ?Optimize@?$CWatermarkStack@UCFrame@?$CGraphWalker@VCVisual@@@@$0EA@$01$09@@QEAAXXZ @ 0x1800B32C8 (-Optimize@-$CWatermarkStack@UCFrame@-$CGraphWalker@VCVisual@@@@$0EA@$01$09@@QEAAXXZ.c)
 *     ?RegisterGraphWalkRoot@CThreadContext@@SAJPEAX@Z @ 0x1800B336C (-RegisterGraphWalkRoot@CThreadContext@@SAJPEAX@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1800C5D86 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?RedrawVisual@CDrawingContext@@AEAAJV?$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z @ 0x18013EEC0 (-RedrawVisual@CDrawingContext@@AEAAJV-$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z.c)
 */

__int64 __fastcall CVisualTreeIterator::WalkSubtree<CDrawingContext>(
        __int64 a1,
        struct CVisualTree *a2,
        void *a3,
        __int64 a4,
        int a5)
{
  struct CVisualTree *v8; // r12
  int v9; // eax
  int v10; // esi
  void *v11; // r15
  int v12; // eax
  CVisual *v13; // rbx
  __int64 v14; // r15
  void *v15; // rsi
  __int64 v16; // rax
  unsigned int v17; // eax
  int v18; // r12d
  __int64 v19; // r9
  __int64 v20; // rbx
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // rcx
  __int64 v24; // rbx
  int v25; // edx
  int v26; // r8d
  int v27; // ecx
  _QWORD *v28; // rax
  __int64 v29; // rcx
  int v30; // eax
  int v31; // edx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rbx
  unsigned __int64 v35; // r10
  unsigned __int64 v36; // r9
  int v37; // eax
  unsigned __int64 v38; // rcx
  __int32 v39; // edx
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 *Value; // r14
  __int64 v43; // r15
  __int64 v44; // rdx
  unsigned __int64 v45; // rdx
  unsigned __int64 v46; // rbx
  int v48; // eax
  int v49; // eax
  __int64 v50; // rcx
  int v51; // eax
  int v52; // eax
  int v53; // eax
  __int64 v54; // rax
  __int64 v55; // rcx
  __int64 v56; // rax
  __m128 v57; // xmm0
  __int64 v58; // xmm1_8
  int v59; // eax
  __int64 v60; // r12
  __int64 v61; // r15
  char v62; // r13
  CRectanglesShape *v63; // rcx
  CRectanglesShape *(__fastcall *v64)(CRectanglesShape *, char); // rax
  CRectanglesShape *v65; // rcx
  __int64 v66; // rcx
  int v67; // eax
  int v68; // r8d
  int v69; // eax
  float v70; // xmm8_4
  float v71; // xmm6_4
  float v72; // xmm9_4
  float v73; // xmm7_4
  __int128 v74; // xmm0
  void (*v75)(void); // rax
  int v76; // eax
  int v77; // r15d
  CRectanglesShape *(__fastcall *v78)(CRectanglesShape *, char); // rax
  unsigned int v79; // r13d
  SIZE_T v80; // r8
  unsigned __int64 v81; // rax
  _QWORD *v82; // r15
  unsigned __int64 v83; // rbx
  _QWORD *v84; // rcx
  __int64 v85; // rbx
  __int64 v86; // rcx
  __int64 v87; // rax
  __int64 v88; // rcx
  int v89; // eax
  int v90; // eax
  int v91; // edx
  int v92; // r9d
  __int64 *v93; // rax
  DWORD v94; // ecx
  unsigned int v95; // [rsp+20h] [rbp-B1h]
  bool v96; // [rsp+30h] [rbp-A1h] BYREF
  void *v97; // [rsp+38h] [rbp-99h]
  struct CVisualTree *v98; // [rsp+40h] [rbp-91h]
  struct CTreeData *v99; // [rsp+48h] [rbp-89h] BYREF
  __int128 v100; // [rsp+50h] [rbp-81h]
  __m128 v101; // [rsp+60h] [rbp-71h]
  __int64 v102; // [rsp+70h] [rbp-61h]
  int v103; // [rsp+78h] [rbp-59h]
  __m128 v104; // [rsp+80h] [rbp-51h] BYREF

  *(_DWORD *)(a1 + 72) = a5;
  *(_QWORD *)(a1 + 64) = a2;
  v98 = a2;
  v8 = a2;
  v97 = 0LL;
  v9 = CThreadContext::RegisterGraphWalkRoot(a3);
  v10 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x40u);
    v11 = 0LL;
  }
  else
  {
    v11 = a3;
    v97 = a3;
    *(_DWORD *)(a1 + 4) = 0;
    *(_QWORD *)(a1 + 8) = a3;
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_DWORD *)(a1 + 24) = 0;
  }
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0xC1u);
    goto LABEL_67;
  }
  v10 = CVisual::EnsureTreeData(*(CVisual **)(a1 + 8), v8, &v99);
  if ( v10 < 0 )
    goto LABEL_198;
  while ( 1 )
  {
    v12 = CDrawingContext::PreSubgraph((struct CVisual **)a4, v8, &v96);
    v10 = v12;
    if ( v12 < 0 )
    {
      v95 = 211;
      v92 = v12;
      goto LABEL_197;
    }
    if ( !v96 )
      goto LABEL_28;
    v13 = 0LL;
    v14 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL);
    if ( (v14 & 2) != 0 )
      v14 = *(_QWORD *)(v14 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      LODWORD(v14) = v14 & 1;
    if ( !(_DWORD)v14 )
    {
      v10 = 1;
      goto LABEL_26;
    }
    v15 = 0LL;
    *(_QWORD *)&v100 = *(_QWORD *)(a1 + 16);
    DWORD2(v100) = *(_DWORD *)(a1 + 24);
    v16 = *(unsigned int *)(a1 + 36);
    if ( *(_DWORD *)(a1 + 32) != (_DWORD)v16 )
      goto LABEL_11;
    v79 = 2 * v16;
    if ( (unsigned __int64)(2 * v16) > 0xFFFFFFFF )
    {
      v18 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0x4Cu);
      v10 = -2147024362;
LABEL_172:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x87u);
      v8 = v98;
      goto LABEL_26;
    }
    if ( v79 <= 0x40 )
      v79 = 64;
    v18 = 0;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v79 <= 0x10 )
    {
      v18 = -2147024809;
    }
    else
    {
      v80 = 16LL * v79;
      if ( !v80 )
        v80 = 1LL;
      v15 = HeapAlloc(WPF::g_processHeap, 0, v80);
      if ( !v15 )
        v18 = -2147024882;
    }
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x54u);
    }
    else
    {
      v81 = 16LL * *(unsigned int *)(a1 + 32);
      if ( v81 <= 0xFFFFFFFF )
      {
        memcpy_0(v15, *(const void **)(a1 + 48), (unsigned int)v81);
        WPF::ProcessHeapImpl::Free(*(void **)(a1 + 48));
        *(_DWORD *)(a1 + 36) = v79;
        *(_QWORD *)(a1 + 48) = v15;
LABEL_11:
        *(_OWORD *)(*(_QWORD *)(a1 + 48) + 16LL * (unsigned int)(*(_DWORD *)(a1 + 32))++) = v100;
        v17 = *(_DWORD *)(a1 + 56);
        if ( v17 <= *(_DWORD *)(a1 + 32) )
          v17 = *(_DWORD *)(a1 + 32);
        *(_DWORD *)(a1 + 56) = v17;
        v18 = 0;
        goto LABEL_14;
      }
      v18 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0x56u);
    }
    if ( v15 )
      HeapFree(WPF::g_processHeap, 0, v15);
LABEL_14:
    v10 = v18;
    if ( v18 < 0 )
      goto LABEL_172;
    *(_DWORD *)(a1 + 24) = *(_DWORD *)(a1 + 28) == 1 ? 0 : v14 - 1;
    v19 = *(_QWORD *)(a1 + 8);
    v20 = *(_QWORD *)(v19 + 72);
    v21 = (v20 & 2) != 0 ? *(_QWORD *)(v20 & 0xFFFFFFFFFFFFFFFCuLL) : v20 & 1;
    v22 = *(unsigned int *)(a1 + 24);
    if ( v21 <= v22
      || ((*(_QWORD *)(v19 + 72) & 2LL) != 0 ? (v23 = *(_QWORD *)(v20 & 0xFFFFFFFFFFFFFFFCuLL)) : (v23 = v20 & 1),
          v22 >= v23) )
    {
      v13 = 0LL;
    }
    else
    {
      v13 = v23 == 1
          ? (CVisual *)(v20 & 0xFFFFFFFFFFFFFFFCuLL)
          : *(CVisual **)((v20 & 0xFFFFFFFFFFFFFFFCuLL) + 8 * v22 + 16);
    }
    ++*(_DWORD *)(a1 + 4);
    v8 = v98;
    *(_QWORD *)(a1 + 16) = v19;
    *(_QWORD *)(a1 + 8) = v13;
LABEL_26:
    if ( v10 < 0 )
    {
      v95 = 218;
      goto LABEL_195;
    }
    if ( !v13 )
      break;
LABEL_60:
    v10 = CVisual::EnsureTreeData(v13, v8, &v99);
    if ( v10 < 0 )
    {
      v11 = v97;
LABEL_198:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0xCFu);
      goto LABEL_67;
    }
  }
  while ( 1 )
  {
LABEL_28:
    v10 = 0;
    v24 = 0LL;
    if ( *(_BYTE *)(a4 + 6520) )
    {
      if ( *(_BYTE *)(a4 + 6521) )
        v24 = *(_QWORD *)(a4 + 3160);
      else
        v24 = *(_QWORD *)(*(_QWORD *)(a4 + 6528) + 24LL);
    }
    if ( (*(_BYTE *)(v24 + 93) & 0x20) == 0 && (*(_DWORD *)(v24 + 88) & 0x400) != 0 )
    {
      if ( *(char *)(v24 + 92) < 0 )
      {
        v88 = *(_QWORD *)(a4 + 32);
        v89 = *(_DWORD *)(v88 + 1168);
        if ( v89 )
          *(_DWORD *)(v88 + 1168) = v89 - 1;
      }
      while ( 1 )
      {
        v25 = *(_DWORD *)(a4 + 448);
        if ( !v25 )
          break;
        v26 = v25 - 1;
        if ( _mm_srli_si128(*(__m128i *)(*(_QWORD *)(a4 + 464) + 16LL * (unsigned int)(v25 - 1)), 8).m128i_u64[0] != v24 )
          break;
        v48 = *(_DWORD *)(*(_QWORD *)(a4 + 464) + 16LL * (unsigned int)(v25 - 1));
        if ( v48 == 4 )
        {
          *(_DWORD *)(a4 + 448) = v26;
          v51 = *(_DWORD *)(a4 + 480);
          if ( v51 )
            *(_DWORD *)(a4 + 480) = v51 - 1;
          v52 = *(_DWORD *)(a4 + 512);
          if ( v52 )
            *(_DWORD *)(a4 + 512) = v52 - 1;
          *(_BYTE *)(a4 + 6824) = 1;
        }
        else
        {
          if ( v48 != 8 )
          {
            switch ( v48 )
            {
              case 1:
                *(_DWORD *)(a4 + 448) = v26;
                v49 = *(_DWORD *)(a4 + 3072);
                if ( v49 )
                  *(_DWORD *)(a4 + 3072) = v49 - 1;
                v50 = 10LL * (unsigned int)(*(_DWORD *)(a4 + 1032) - 1);
                --*(_DWORD *)(*(_QWORD *)(a4 + 1008) + 8 * v50 + 4);
                *(_BYTE *)(a4 + 6825) = 1;
                continue;
              case 2:
                *(_DWORD *)(a4 + 448) = v26;
                v60 = *(_QWORD *)(a4 + 1840);
                v61 = 120LL * (unsigned int)(*(_DWORD *)(a4 + 1864) - 1);
                v62 = *(_BYTE *)(v61 + v60 + 112);
                if ( *(_BYTE *)(v61 + v60 + 8) )
                {
                  v63 = *(CRectanglesShape **)(v61 + v60);
                  if ( v63 )
                  {
                    v64 = **(CRectanglesShape *(__fastcall ***)(CRectanglesShape *, char))v63;
                    if ( v64 == CRectanglesShape::`scalar deleting destructor' )
                      CRectanglesShape::`scalar deleting destructor'(v63, 1);
                    else
                      v64(v63, 1);
                  }
                }
                *(_QWORD *)(v61 + v60) = 0LL;
                *(_BYTE *)(v61 + v60 + 8) = 0;
                v65 = *(CRectanglesShape **)(v61 + v60 + 88);
                if ( v65 )
                {
                  v78 = **(CRectanglesShape *(__fastcall ***)(CRectanglesShape *, char))v65;
                  if ( v78 == CRectanglesShape::`scalar deleting destructor' )
                    CRectanglesShape::`scalar deleting destructor'(v65, 1);
                  else
                    v78(v65, 1);
                }
                --*(_DWORD *)(a4 + 1864);
                v66 = 10LL * (unsigned int)(*(_DWORD *)(a4 + 1032) - 1);
                --*(_DWORD *)(*(_QWORD *)(a4 + 1008) + 8 * v66 + 8);
                if ( v62 )
                {
                  if ( *(_BYTE *)(a4 + 6826) )
                  {
                    v67 = *(_DWORD *)(a4 + 1032);
                    if ( !v67
                      || !*(_DWORD *)(*(_QWORD *)(a4 + 1008) + 80LL * (unsigned int)(v67 - 1) + 8)
                      || TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsInfinite((float *)(*(_QWORD *)(a4 + 1840)
                                                                                                + 96LL
                                                                                                + 120LL
                                                                                                * (unsigned int)(*(_DWORD *)(a4 + 1864) - 1))) )
                    {
                      *(_BYTE *)(a4 + 6826) = 0;
                    }
                  }
                  v68 = *(_DWORD *)(a4 + 1032);
                  if ( v68
                    && *(_DWORD *)(*(_QWORD *)(a4 + 1008) + 80LL * (unsigned int)(v68 - 1) + 4)
                    && (v69 = *(_DWORD *)(a4 + 3072)) != 0 )
                  {
                    v101 = *(__m128 *)(*(_QWORD *)(a4 + 3088) + 16LL * (unsigned int)(v69 - 1));
                    v70 = v101.m128_f32[2];
                    v71 = v101.m128_f32[1];
                    v72 = v101.m128_f32[0];
                    LODWORD(v73) = _mm_shuffle_ps(v101, v101, 255).m128_u32[0];
                  }
                  else
                  {
                    v73 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3);
                    v70 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2);
                    v71 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1);
                    v72 = *(float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
                  }
                  if ( v68 && *(_DWORD *)(*(_QWORD *)(a4 + 1008) + 80LL * (unsigned int)(v68 - 1) + 8) )
                  {
                    v86 = 120LL * (unsigned int)(*(_DWORD *)(a4 + 1864) - 1);
                    v87 = *(_QWORD *)(a4 + 1840);
                    if ( *(float *)(v86 + v87 + 96) > v72 )
                      v72 = *(float *)(v86 + v87 + 96);
                    if ( *(float *)(v86 + v87 + 100) > v71 )
                      v71 = *(float *)(v86 + v87 + 100);
                    if ( v70 > *(float *)(v86 + v87 + 104) )
                      v70 = *(float *)(v86 + v87 + 104);
                    if ( v73 > *(float *)(v86 + v87 + 108) )
                      v73 = *(float *)(v86 + v87 + 108);
                    if ( v70 <= v72 || v73 <= v71 )
                    {
                      v73 = 0.0;
                      v70 = 0.0;
                      v71 = 0.0;
                      v72 = 0.0;
                    }
                  }
                  if ( v70 > v72
                    && v73 > v71
                    && (v72 < *(float *)(a4 + 148)
                     || v71 < *(float *)(a4 + 152)
                     || *(float *)(a4 + 156) < v70
                     || *(float *)(a4 + 160) < v73) )
                  {
                    *(_BYTE *)(a4 + 6825) = 1;
                  }
                }
                continue;
              case 3:
                *(_DWORD *)(a4 + 448) = v26;
                --*(_DWORD *)(a4 + 1032);
                continue;
              case 5:
              case 6:
                v76 = CDrawingContext::PopLayer((CDrawingContext *)a4);
                v77 = v76;
                if ( v76 >= 0 )
                  continue;
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v76, 0x191Au);
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v77, 0x14F7u);
                break;
              case 7:
                *(_DWORD *)(a4 + 448) = v26;
                v59 = *(_DWORD *)(a4 + 3104);
                if ( v59 )
                  *(_DWORD *)(a4 + 3104) = v59 - 1;
                continue;
              case 9:
                *(_DWORD *)(a4 + 448) = v26;
                v74 = *(_OWORD *)(*(_QWORD *)(a4 + 672) + 16LL * (unsigned int)--*(_DWORD *)(a4 + 696));
                if ( (_QWORD)v74 )
                {
                  v75 = *(void (**)(void))(*(_QWORD *)v74 + 16LL);
                  if ( (char *)v75 == (char *)CResource::Release )
                    CResource::Release((CResource *)v74);
                  else
                    v75();
                }
                continue;
              case 10:
                *(_DWORD *)(a4 + 448) = v26;
                --*(_DWORD *)(a4 + 936);
                continue;
              default:
                continue;
            }
            break;
          }
          *(_DWORD *)(a4 + 448) = v26;
          v53 = *(_DWORD *)(a4 + 976);
          if ( v53 )
          {
            v54 = (unsigned int)(v53 - 1);
            v55 = 28 * v54;
            *(_DWORD *)(a4 + 976) = v54;
            v56 = *(_QWORD *)(a4 + 992);
            v57 = *(__m128 *)(v55 + v56);
            v58 = *(_QWORD *)(v55 + v56 + 16);
            LODWORD(v56) = *(_DWORD *)(v55 + v56 + 24);
            v101 = v57;
            v103 = v56;
            v102 = v58;
          }
          *(_BYTE *)(a4 + 272) = v103;
          *(_QWORD *)(a4 + 252) = v101.m128_u64[0];
          *(_DWORD *)(a4 + 280) = v101.m128_i32[2];
          *(_DWORD *)(a4 + 260) = v101.m128_i32[3];
          *(_QWORD *)(a4 + 264) = v102;
        }
      }
      if ( *(_QWORD *)(a4 + 6768) == v24 )
        *(_QWORD *)(a4 + 6768) = 0LL;
      v27 = *(_DWORD *)(a4 + 3304);
      v28 = 0LL;
      if ( v27 )
        v28 = (_QWORD *)(*(_QWORD *)(a4 + 3320) + 16LL * (unsigned int)(v27 - 1));
      if ( *v28 == v24 && v27 )
        *(_DWORD *)(a4 + 3304) = v27 - 1;
      if ( (*(_BYTE *)(v24 + 92) & 0x40) != 0 )
      {
        if ( *(_BYTE *)(*(_QWORD *)(a4 + 6528) + 32LL) )
        {
          CDrawingContext::CalcClippedNodeWorldSpaceBounds(a4, v24, &v104);
          v101 = v104;
          v90 = CDrawingContext::RedrawVisual((CDrawingContext *)a4);
          v10 = v90;
          if ( v90 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v90, 0x2232u);
        }
      }
    }
    if ( v10 < 0 )
      break;
    v29 = *(_QWORD *)(a1 + 16);
    v10 = 0;
    v13 = 0LL;
    if ( !v29 )
      goto LABEL_79;
    v30 = *(_DWORD *)(a1 + 28);
    if ( v30 == 1 )
    {
      v31 = *(_DWORD *)(a1 + 24);
      if ( v31 == -1
        || ((v32 = *(_QWORD *)(v29 + 72), (v32 & 2) == 0)
          ? (LODWORD(v32) = v32 & 1)
          : (v32 = *(_QWORD *)(v32 & 0xFFFFFFFFFFFFFFFCuLL)),
            v33 = (unsigned int)(v31 + 1),
            (unsigned int)v33 >= (unsigned int)v32) )
      {
LABEL_79:
        v10 = 1;
        goto LABEL_58;
      }
    }
    else
    {
      if ( v30 )
        goto LABEL_79;
      v91 = *(_DWORD *)(a1 + 24);
      if ( !v91 )
        goto LABEL_79;
      v33 = (unsigned int)(v91 - 1);
    }
    v34 = *(_QWORD *)(v29 + 72);
    if ( (v34 & 2) != 0 )
      v35 = *(_QWORD *)(v34 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      v35 = v34 & 1;
    if ( v35 <= (unsigned int)v33
      || ((*(_QWORD *)(v29 + 72) & 2LL) == 0 ? (v36 = v34 & 1) : (v36 = *(_QWORD *)(v34 & 0xFFFFFFFFFFFFFFFCuLL)),
          (unsigned int)v33 >= v36) )
    {
      v13 = 0LL;
    }
    else if ( v36 == 1 )
    {
      v13 = (CVisual *)(v34 & 0xFFFFFFFFFFFFFFFCuLL);
    }
    else
    {
      v13 = *(CVisual **)((v34 & 0xFFFFFFFFFFFFFFFCuLL) + 8 * v33 + 16);
    }
    *(_QWORD *)(a1 + 8) = v13;
    *(_DWORD *)(a1 + 24) = v33;
LABEL_58:
    if ( v13 )
    {
      v8 = v98;
      goto LABEL_60;
    }
    if ( *(_DWORD *)(a1 + 4) )
    {
      v37 = *(_DWORD *)(a1 + 32);
      v38 = 0LL;
      v39 = 0;
      if ( v37 )
      {
        v40 = (unsigned int)(v37 - 1);
        *(_DWORD *)(a1 + 32) = v40;
        v101 = *(__m128 *)(*(_QWORD *)(a1 + 48) + 16 * v40);
        v39 = v101.m128_i32[2];
        v38 = v101.m128_u64[0];
      }
      v41 = *(_QWORD *)(a1 + 16);
      --*(_DWORD *)(a1 + 4);
      *(_QWORD *)(a1 + 8) = v41;
      *(_QWORD *)(a1 + 16) = v38;
      *(_DWORD *)(a1 + 24) = v39;
      if ( v41 )
        continue;
    }
    goto LABEL_66;
  }
  v95 = 244;
LABEL_195:
  v92 = v10;
LABEL_197:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v92, v95);
LABEL_66:
  v11 = v97;
LABEL_67:
  if ( v10 == 1 || v10 == -2147467260 )
    v10 = 0;
  if ( v11 )
  {
    Value = (__int64 *)TlsGetValue(CThreadContext::s_dwTlsIndex);
    if ( Value )
    {
LABEL_71:
      v43 = *Value;
      if ( (*Value & 2) != 0 )
        v44 = *(_QWORD *)(v43 & 0xFFFFFFFFFFFFFFFCuLL);
      else
        v44 = *Value & 1;
      v45 = v44 - 1;
      if ( (*Value & 2) != 0 )
        v46 = *(_QWORD *)(v43 & 0xFFFFFFFFFFFFFFFCuLL);
      else
        v46 = *Value & 1;
      if ( v45 < v46 )
      {
        if ( v46 == 1 )
        {
          *Value = 0LL;
        }
        else
        {
          v82 = (_QWORD *)(v43 & 0xFFFFFFFFFFFFFFFCuLL);
          v83 = v46 - 1;
          v84 = v82 + 2;
          if ( v83 == 1 )
          {
            v85 = v84[-v45 + 1];
            WPF::ProcessHeapImpl::Free(v82);
            *Value = v85 | 1;
          }
          else
          {
            if ( v45 < v83 )
              memmove(&v84[v45], &v84[v45 + 1], 8 * (v83 - v45));
            *v82 = v83;
          }
        }
      }
    }
    else
    {
      v93 = (__int64 *)operator new(0xA8uLL);
      Value = v93;
      if ( v93 )
      {
        v94 = CThreadContext::s_dwTlsIndex;
        *v93 = 0LL;
        v93[1] = 0LL;
        v93[2] = 0LL;
        v93[3] = 0LL;
        v93[4] = 0LL;
        v93[5] = 0LL;
        v93[6] = 0LL;
        v93[7] = 0LL;
        v93[8] = 0LL;
        v93[9] = 0LL;
        v93[10] = 0LL;
        v93[11] = 0LL;
        v93[12] = 0LL;
        v93[13] = 0LL;
        v93[14] = 0LL;
        v93[15] = 0LL;
        v93[16] = 0LL;
        v93[17] = 0LL;
        v93[18] = 0LL;
        v93[19] = 0LL;
        v93[20] = 0LL;
        TlsSetValue(v94, v93);
        goto LABEL_71;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x42u);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x8Du);
    }
  }
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  CWatermarkStack<CGraphWalker<CVisual>::CFrame,64,2,10>::Optimize();
  return (unsigned int)v10;
}
