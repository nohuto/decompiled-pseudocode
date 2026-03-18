/*
 * XREFs of ??$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCDrawingContext@@W4WalkReason@@@Z @ 0x1800A0130
 * Callers:
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N33333@Z @ 0x1800D45E0 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 * Callees:
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x18000D284 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?CalcClippedNodeWorldSpaceBounds@CDrawingContext@@AEAAXPEBVCVisual@@PEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z @ 0x18000DEDC (-CalcClippedNodeWorldSpaceBounds@CDrawingContext@@AEAAXPEBVCVisual@@PEAV-$CRectF@UDeviceHPC@Coor.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18004F8CC (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?DoesContain@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18006FF1C (-DoesContain@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?IsInfinite@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18006FFCC (-IsInfinite@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?EnsureTreeData@CVisual@@QEAAJPEBVCVisualTree@@PEAPEAVCTreeData@@@Z @ 0x18008AE80 (-EnsureTreeData@CVisual@@QEAAJPEBVCVisualTree@@PEAPEAVCTreeData@@@Z.c)
 *     ??_GCRectanglesShape@@UEAAPEAXI@Z @ 0x180094110 (--_GCRectanglesShape@@UEAAPEAXI@Z.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A2960 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800BBE10 (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     ?InsertAt@CPtrArrayBase@@IEAAJ_K0@Z @ 0x1800BBE48 (-InsertAt@CPtrArrayBase@@IEAAJ_K0@Z.c)
 *     ?Pop@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAA_NPEAUStackStateEntry@CDrawingContext@@@Z @ 0x1800BF3E8 (-Pop@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAA_NPEAUStackStateEntry@.c)
 *     ?ULongLongToUInt@@YAJ_KPEAI@Z @ 0x1800C0830 (-ULongLongToUInt@@YAJ_KPEAI@Z.c)
 *     ?HrMalloc@WPF@@YAJ_K0PEAPEAX@Z @ 0x1800C14B0 (-HrMalloc@WPF@@YAJ_K0PEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1800D5396 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?RedrawVisual@CDrawingContext@@AEAAJV?$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z @ 0x18014DF10 (-RedrawVisual@CDrawingContext@@AEAAJV-$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z.c)
 *     ?Pop@CLightStack@@QEAAJXZ @ 0x18015610C (-Pop@CLightStack@@QEAAJXZ.c)
 */

__int64 __fastcall CVisualTreeIterator::WalkSubtree<CDrawingContext>(
        __int64 a1,
        const struct CVisualTree *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        int a5)
{
  const struct CVisualTree *v7; // r12
  unsigned __int64 v8; // r15
  CPtrArrayBase *Value; // rbx
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // rdx
  int v12; // eax
  int v13; // esi
  unsigned __int64 v14; // r13
  int v15; // eax
  __int64 v16; // r8
  _BYTE *v17; // rbx
  unsigned __int64 v18; // rdi
  int v19; // ecx
  _QWORD *v20; // rax
  CVisual *v21; // rbx
  int v22; // r9d
  int v23; // edx
  __int64 v24; // rcx
  __int64 v25; // r9
  __int64 v26; // rax
  unsigned __int64 v27; // rax
  __int64 v28; // rbx
  unsigned __int64 v29; // rcx
  __int64 v30; // rdi
  int v31; // r15d
  void *v32; // rsi
  __int64 v33; // rax
  unsigned int v34; // ecx
  __int64 v35; // rax
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rdx
  __int64 v38; // rbx
  unsigned __int64 v39; // rcx
  int v40; // r13d
  int v41; // eax
  __int64 v42; // rcx
  int v43; // eax
  struct CVisualTree *v44; // rcx
  int v45; // edx
  __int64 v46; // rcx
  __int64 *v47; // rdi
  __int64 v48; // r15
  __int64 v49; // rcx
  unsigned __int64 v50; // r9
  unsigned __int64 v51; // rbx
  int v52; // eax
  int v54; // eax
  int v55; // eax
  int v56; // eax
  __int64 v57; // rax
  __int64 v58; // rcx
  __int64 v59; // rax
  __int128 v60; // xmm0
  __int64 v61; // xmm1_8
  int v62; // eax
  char v63; // r12
  __int64 v64; // r15
  CRectanglesShape *v65; // rcx
  CRectanglesShape *(__fastcall *v66)(CRectanglesShape *, char); // rax
  CRectanglesShape *v67; // rcx
  __int64 v68; // rcx
  int v69; // eax
  int v70; // r8d
  int v71; // eax
  float v72; // xmm7_4
  float v73; // xmm8_4
  float v74; // xmm9_4
  float v75; // xmm6_4
  int v76; // eax
  CRectanglesShape *(__fastcall *v77)(CRectanglesShape *, char); // rax
  bool v78; // cc
  __int64 v79; // rbx
  int v80; // eax
  void **v81; // r9
  __int64 v82; // rcx
  __int64 v83; // rax
  float v84; // xmm0_4
  float v85; // xmm0_4
  float v86; // xmm0_4
  float v87; // xmm0_4
  unsigned int v88; // r12d
  SIZE_T v89; // r8
  unsigned __int64 v90; // rax
  __int64 v91; // rdx
  _QWORD *v92; // r15
  unsigned __int64 v93; // rbx
  _QWORD *v94; // rcx
  __int64 v95; // rbx
  CPtrArrayBase *v96; // rax
  DWORD v97; // ecx
  __int64 v98; // rcx
  int v99; // eax
  int v100; // eax
  int v101; // eax
  int v102; // r9d
  __int64 *v103; // rax
  DWORD v104; // ecx
  int v105; // eax
  unsigned int v106; // [rsp+28h] [rbp-E0h]
  bool v107[8]; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v108[2]; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int64 v109; // [rsp+48h] [rbp-C0h] BYREF
  const struct CVisualTree *v110; // [rsp+50h] [rbp-B8h]
  struct CVisualTree *v111[2]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v112; // [rsp+68h] [rbp-A0h]
  int v113; // [rsp+70h] [rbp-98h]
  struct CTreeData *v114; // [rsp+78h] [rbp-90h] BYREF
  struct CTreeData *v115[2]; // [rsp+80h] [rbp-88h]
  __int128 v116; // [rsp+90h] [rbp-78h]
  __m128 v117; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v118; // [rsp+B0h] [rbp-58h] BYREF

  *(_DWORD *)(a1 + 72) = a5;
  v7 = a2;
  *(_QWORD *)(a1 + 64) = a2;
  v8 = a4;
  v109 = a4;
  v110 = a2;
  *(_QWORD *)v108 = 0LL;
  Value = (CPtrArrayBase *)TlsGetValue(CThreadContext::s_dwTlsIndex);
  if ( !Value )
  {
    v96 = (CPtrArrayBase *)operator new(0x98uLL);
    Value = v96;
    if ( !v96 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x42u);
      v13 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x6Cu);
      goto LABEL_200;
    }
    v97 = CThreadContext::s_dwTlsIndex;
    *(_QWORD *)v96 = 0LL;
    *((_QWORD *)v96 + 1) = 0LL;
    *((_QWORD *)v96 + 2) = 0LL;
    *((_QWORD *)v96 + 3) = 0LL;
    *((_QWORD *)v96 + 4) = 0LL;
    *((_QWORD *)v96 + 5) = 0LL;
    *((_QWORD *)v96 + 6) = 0LL;
    *((_QWORD *)v96 + 7) = 0LL;
    *((_QWORD *)v96 + 8) = 0LL;
    *((_QWORD *)v96 + 9) = 0LL;
    *((_QWORD *)v96 + 10) = 0LL;
    *((_QWORD *)v96 + 11) = 0LL;
    *((_QWORD *)v96 + 12) = 0LL;
    *((_QWORD *)v96 + 13) = 0LL;
    *((_QWORD *)v96 + 14) = 0LL;
    *((_QWORD *)v96 + 15) = 0LL;
    *((_QWORD *)v96 + 16) = 0LL;
    *((_QWORD *)v96 + 17) = 0LL;
    *((_QWORD *)v96 + 18) = 0LL;
    TlsSetValue(v97, v96);
  }
  if ( (*(_QWORD *)Value & 2) != 0 )
    v10 = *(_QWORD *)(*(_QWORD *)Value & 0xFFFFFFFFFFFFFFFCuLL);
  else
    v10 = *(_QWORD *)Value & 1LL;
  v11 = 0LL;
  if ( v10 )
  {
    while ( a3 != CPtrArrayBase::operator[](Value, v11) )
    {
      v11 = v91 + 1;
      if ( v11 >= v10 )
        goto LABEL_5;
    }
    v13 = -2147467260;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467260, 0x77u);
  }
  else
  {
LABEL_5:
    v12 = CPtrArrayBase::InsertAt(Value, a3, v10);
    v13 = v12;
    if ( v12 >= 0 )
    {
      *(_QWORD *)v108 = a3;
      *(_DWORD *)(a1 + 4) = 0;
      v14 = a3;
      *(_QWORD *)(a1 + 16) = 0LL;
      *(_DWORD *)(a1 + 24) = 0;
      *(_QWORD *)(a1 + 8) = a3;
      goto LABEL_7;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x7Cu);
  }
LABEL_200:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x40u);
  v14 = *(_QWORD *)v108;
LABEL_7:
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0xC1u);
    goto LABEL_88;
  }
  v13 = CVisual::EnsureTreeData(*(CVisual **)(a1 + 8), v7, &v114);
  if ( v13 < 0 )
  {
LABEL_236:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0xCFu);
    goto LABEL_88;
  }
  while ( 1 )
  {
    v15 = CDrawingContext::PreSubgraph((CDrawingContext *)v8, v7, v107);
    v13 = v15;
    if ( v15 < 0 )
      break;
    if ( !v107[0] )
      goto LABEL_11;
    v21 = 0LL;
    v30 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL);
    if ( (v30 & 2) != 0 )
      v30 = *(_QWORD *)(v30 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      LODWORD(v30) = v30 & 1;
    if ( !(_DWORD)v30 )
    {
      v13 = 1;
      goto LABEL_67;
    }
    v31 = 0;
    v115[0] = *(struct CTreeData **)(a1 + 16);
    v32 = 0LL;
    LODWORD(v115[1]) = *(_DWORD *)(a1 + 24);
    v33 = *(unsigned int *)(a1 + 36);
    if ( *(_DWORD *)(a1 + 32) != (_DWORD)v33 )
      goto LABEL_52;
    v88 = 2 * v33;
    if ( (unsigned __int64)(2 * v33) > 0xFFFFFFFF )
    {
      v31 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x4Cu);
      v7 = v110;
      v13 = -2147024362;
LABEL_208:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v31, 0x87u);
      v8 = v109;
      goto LABEL_67;
    }
    if ( v88 <= 0x40 )
      v88 = 64;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v88 <= 0x10 )
    {
      v31 = -2147024809;
    }
    else
    {
      v89 = 16LL * v88;
      if ( !v89 )
        v89 = 1LL;
      v32 = HeapAlloc(WPF::g_processHeap, 0, v89);
      if ( !v32 )
        v31 = -2147024882;
    }
    if ( v31 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v31, 0x54u);
    }
    else
    {
      v90 = 16LL * *(unsigned int *)(a1 + 32);
      if ( v90 <= 0xFFFFFFFF )
      {
        v31 = 0;
        memcpy_0(v32, *(const void **)(a1 + 48), (unsigned int)v90);
        WPF::ProcessHeapImpl::Free(*(void **)(a1 + 48));
        *(_DWORD *)(a1 + 36) = v88;
        v7 = v110;
        *(_QWORD *)(a1 + 48) = v32;
LABEL_52:
        *(_OWORD *)(*(_QWORD *)(a1 + 48) + 16LL * (unsigned int)(*(_DWORD *)(a1 + 32))++) = *(_OWORD *)v115;
        v34 = *(_DWORD *)(a1 + 32);
        if ( *(_DWORD *)(a1 + 56) > v34 )
          v34 = *(_DWORD *)(a1 + 56);
        *(_DWORD *)(a1 + 56) = v34;
        goto LABEL_55;
      }
      v31 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x56u);
    }
    if ( v32 )
      HeapFree(WPF::g_processHeap, 0, v32);
    v7 = v110;
LABEL_55:
    v13 = v31;
    if ( v31 < 0 )
      goto LABEL_208;
    if ( *(_DWORD *)(a1 + 28) == 1 )
      *(_DWORD *)(a1 + 24) = 0;
    else
      *(_DWORD *)(a1 + 24) = v30 - 1;
    v16 = *(_QWORD *)(a1 + 8);
    v35 = *(_QWORD *)(v16 + 72);
    if ( (v35 & 2) != 0 )
      v36 = *(_QWORD *)(v35 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      v36 = *(_QWORD *)(v16 + 72) & 1LL;
    v37 = *(unsigned int *)(a1 + 24);
    if ( v36 > v37 )
    {
      v38 = *(_QWORD *)(v16 + 72);
      if ( (v38 & 2) != 0 )
        v39 = *(_QWORD *)(v38 & 0xFFFFFFFFFFFFFFFCuLL);
      else
        v39 = *(_QWORD *)(v16 + 72) & 1LL;
      if ( v37 >= v39 )
      {
        v21 = 0LL;
      }
      else
      {
        v21 = (CVisual *)(v38 & 0xFFFFFFFFFFFFFFFCuLL);
        if ( v39 != 1 )
          v21 = (CVisual *)*((_QWORD *)v21 + v37 + 2);
      }
    }
    ++*(_DWORD *)(a1 + 4);
    v8 = v109;
    *(_QWORD *)(a1 + 16) = v16;
    *(_QWORD *)(a1 + 8) = v21;
LABEL_67:
    if ( v13 < 0 )
    {
      v106 = 218;
LABEL_233:
      v102 = v13;
      goto LABEL_235;
    }
    if ( !v21 )
    {
      while ( 1 )
      {
LABEL_11:
        v13 = 0;
        v17 = 0LL;
        if ( *(_BYTE *)(v8 + 6456) )
        {
          if ( *(_BYTE *)(v8 + 6457) )
            v17 = *(_BYTE **)(v8 + 3064);
          else
            v17 = *(_BYTE **)(*(_QWORD *)(v8 + 6464) + 24LL);
        }
        if ( (v17[90] & 0x20) == 0 && (v17[88] & 0x20) == 0 )
        {
          if ( v17[89] >= 0x80u )
          {
            v98 = *(_QWORD *)(v8 + 32);
            v99 = *(_DWORD *)(v98 + 1232);
            if ( v99 )
              *(_DWORD *)(v98 + 1232) = v99 - 1;
          }
          v18 = v8 + 440;
          while ( *(_DWORD *)v18
               && (_BYTE *)_mm_srli_si128(
                             *(__m128i *)(*(_QWORD *)(v18 + 16) + 16LL * (unsigned int)(*(_DWORD *)v18 - 1)),
                             8).m128i_i64[0] == v17 )
          {
            if ( *(_DWORD *)v18 )
            {
              v40 = 0;
              v116 = *(_OWORD *)(*(_QWORD *)(v18 + 16) + 16LL * (unsigned int)(*(_DWORD *)v18 - 1));
            }
            else
            {
              v40 = -2147467259;
              MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x1B2Eu);
            }
            if ( (_DWORD)v116 == 4 )
            {
              if ( *(_DWORD *)v18 )
                --*(_DWORD *)v18;
              v54 = *(_DWORD *)(v8 + 472);
              if ( v54 )
                *(_DWORD *)(v8 + 472) = v54 - 1;
              v55 = *(_DWORD *)(v8 + 504);
              if ( v55 )
                *(_DWORD *)(v8 + 504) = v55 - 1;
              *(_BYTE *)(v8 + 6768) = 1;
            }
            else if ( (_DWORD)v116 == 8 )
            {
              if ( *(_DWORD *)v18 )
                --*(_DWORD *)v18;
              v56 = *(_DWORD *)(v8 + 880);
              if ( v56 )
              {
                v57 = (unsigned int)(v56 - 1);
                v58 = 28 * v57;
                *(_DWORD *)(v8 + 880) = v57;
                v59 = *(_QWORD *)(v8 + 896);
                v60 = *(_OWORD *)(v58 + v59);
                v61 = *(_QWORD *)(v58 + v59 + 16);
                LODWORD(v59) = *(_DWORD *)(v58 + v59 + 24);
                *(_OWORD *)v111 = v60;
                v113 = v59;
                v112 = v61;
              }
              *(_BYTE *)(v8 + 280) = v113;
              *(struct CVisualTree **)(v8 + 260) = v111[0];
              *(_DWORD *)(v8 + 288) = v111[1];
              *(_DWORD *)(v8 + 268) = HIDWORD(v111[1]);
              *(_QWORD *)(v8 + 272) = v112;
            }
            else
            {
              switch ( (int)v116 )
              {
                case 1:
                  if ( *(_DWORD *)v18 )
                    --*(_DWORD *)v18;
                  v41 = *(_DWORD *)(v8 + 2976);
                  if ( v41 )
                    *(_DWORD *)(v8 + 2976) = v41 - 1;
                  v42 = 10LL * (unsigned int)(*(_DWORD *)(v8 + 936) - 1);
                  --*(_DWORD *)(*(_QWORD *)(v8 + 912) + 8 * v42 + 4);
                  *(_BYTE *)(v8 + 6769) = 1;
                  break;
                case 2:
                  if ( *(_DWORD *)v18 )
                    --*(_DWORD *)v18;
                  v63 = *(_BYTE *)(120LL * (unsigned int)(*(_DWORD *)(v8 + 1768) - 1) + *(_QWORD *)(v8 + 1744) + 112);
                  v64 = *(_QWORD *)(v109 + 1744) + 120LL * (unsigned int)(*(_DWORD *)(v8 + 1768) - 1);
                  if ( *(_BYTE *)(v64 + 8) )
                  {
                    v65 = *(CRectanglesShape **)v64;
                    if ( *(_QWORD *)v64 )
                    {
                      v66 = **(CRectanglesShape *(__fastcall ***)(CRectanglesShape *, char))v65;
                      if ( v66 == CRectanglesShape::`scalar deleting destructor' )
                        CRectanglesShape::`scalar deleting destructor'(v65, 1);
                      else
                        v66(v65, 1);
                    }
                  }
                  *(_QWORD *)v64 = 0LL;
                  *(_BYTE *)(v64 + 8) = 0;
                  v67 = *(CRectanglesShape **)(v64 + 88);
                  if ( v67 )
                  {
                    v77 = **(CRectanglesShape *(__fastcall ***)(CRectanglesShape *, char))v67;
                    if ( v77 == CRectanglesShape::`scalar deleting destructor' )
                      CRectanglesShape::`scalar deleting destructor'(v67, 1);
                    else
                      v77(v67, 1);
                  }
                  v8 = v109;
                  --*(_DWORD *)(v109 + 1768);
                  v68 = 10LL * (unsigned int)(*(_DWORD *)(v8 + 936) - 1);
                  --*(_DWORD *)(*(_QWORD *)(v8 + 912) + 8 * v68 + 8);
                  if ( v63 )
                  {
                    if ( *(_BYTE *)(v8 + 6770) )
                    {
                      v69 = *(_DWORD *)(v8 + 936);
                      if ( !v69
                        || !*(_DWORD *)(*(_QWORD *)(v8 + 912) + 80LL * (unsigned int)(v69 - 1) + 8)
                        || TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsInfinite((float *)(*(_QWORD *)(v8 + 1744)
                                                                                                  + 96LL
                                                                                                  + 120LL * (unsigned int)(*(_DWORD *)(v8 + 1768) - 1))) )
                      {
                        *(_BYTE *)(v8 + 6770) = 0;
                      }
                    }
                    v70 = *(_DWORD *)(v8 + 936);
                    if ( v70
                      && *(_DWORD *)(*(_QWORD *)(v8 + 912) + 80LL * (unsigned int)(v70 - 1) + 4)
                      && (v71 = *(_DWORD *)(v8 + 2976)) != 0 )
                    {
                      v117 = *(__m128 *)(*(_QWORD *)(v8 + 2992) + 16LL * (unsigned int)(v71 - 1));
                      v72 = v117.m128_f32[2];
                      v73 = v117.m128_f32[1];
                      v74 = v117.m128_f32[0];
                      LODWORD(v75) = _mm_shuffle_ps(v117, v117, 255).m128_u32[0];
                    }
                    else
                    {
                      v75 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3);
                      v72 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2);
                      v73 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1);
                      v74 = *(float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
                      v117 = (__m128)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
                    }
                    if ( v70 && *(_DWORD *)(*(_QWORD *)(v8 + 912) + 80LL * (unsigned int)(v70 - 1) + 8) )
                    {
                      v82 = 120LL * (unsigned int)(*(_DWORD *)(v8 + 1768) - 1);
                      v83 = *(_QWORD *)(v8 + 1744);
                      v84 = *(float *)(v82 + v83 + 96);
                      if ( v84 > v74 )
                      {
                        v117.m128_i32[0] = *(_DWORD *)(v82 + v83 + 96);
                        v74 = v84;
                      }
                      v85 = *(float *)(v82 + v83 + 100);
                      if ( v85 > v73 )
                      {
                        v117.m128_i32[1] = *(_DWORD *)(v82 + v83 + 100);
                        v73 = v85;
                      }
                      v86 = *(float *)(v82 + v83 + 104);
                      if ( v72 > v86 )
                      {
                        v117.m128_i32[2] = *(_DWORD *)(v82 + v83 + 104);
                        v72 = v86;
                      }
                      v87 = *(float *)(v82 + v83 + 108);
                      if ( v75 > v87 )
                      {
                        v117.m128_i32[3] = *(_DWORD *)(v82 + v83 + 108);
                        v75 = v87;
                      }
                      if ( v72 <= v74 || v75 <= v73 )
                        v117 = 0uLL;
                    }
                    if ( !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesContain(
                            (float *)(v8 + 156),
                            v117.m128_f32) )
                      *(_BYTE *)(v8 + 6769) = 1;
                  }
                  break;
                case 3:
                  if ( *(_DWORD *)v18 )
                    --*(_DWORD *)v18;
                  --*(_DWORD *)(v8 + 936);
                  break;
                case 5:
                case 6:
                  v76 = CDrawingContext::PopLayer((CDrawingContext *)v8);
                  v40 = v76;
                  if ( v76 >= 0 )
                    continue;
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v76, 0x1B42u);
                  break;
                case 7:
                  if ( *(_DWORD *)v18 )
                    --*(_DWORD *)v18;
                  v62 = *(_DWORD *)(v8 + 3008);
                  if ( v62 )
                    *(_DWORD *)(v8 + 3008) = v62 - 1;
                  break;
                case 9:
                  CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop(v18, v111, v16);
                  v100 = CLightStack::Pop((CLightStack *)(v8 + 664));
                  v40 = v100;
                  if ( v100 < 0 )
                    MilInstrumentationCheckHR(0x14u, 0LL, 0, v100, 0x2878u);
                  if ( v40 >= 0 )
                    continue;
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v40, 0x1B52u);
                  break;
                case 10:
                  CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop(v18, v111, v16);
                  --*(_DWORD *)(v8 + 840);
                  break;
                default:
                  break;
              }
            }
            if ( v40 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v40, 0x16F0u);
              break;
            }
          }
          if ( *(_BYTE **)(v8 + 6704) == v17 )
            *(_QWORD *)(v8 + 6704) = 0LL;
          v19 = *(_DWORD *)(v8 + 3208);
          v20 = 0LL;
          if ( v19 )
            v20 = (_QWORD *)(*(_QWORD *)(v8 + 3224) + 16LL * (unsigned int)(v19 - 1));
          if ( (_BYTE *)*v20 == v17 && v19 )
            *(_DWORD *)(v8 + 3208) = v19 - 1;
          if ( (v17[89] & 0x40) != 0 )
          {
            if ( *(_BYTE *)(*(_QWORD *)(v8 + 6464) + 32LL) )
            {
              CDrawingContext::CalcClippedNodeWorldSpaceBounds(v8, (__int64)v17, &v118);
              *(_OWORD *)v111 = v118;
              v101 = CDrawingContext::RedrawVisual((CDrawingContext *)v8);
              v13 = v101;
              if ( v101 < 0 )
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v101, 0x245Fu);
            }
          }
        }
        if ( v13 < 0 )
          break;
        v16 = *(_QWORD *)(a1 + 16);
        v13 = 0;
        v21 = 0LL;
        if ( v16
          && ((v22 = *(_DWORD *)(a1 + 28), v22 == 1)
           && (v23 = *(_DWORD *)(a1 + 24), v23 != -1)
           && ((v24 = *(_QWORD *)(v16 + 72), (v24 & 2) == 0)
             ? (LODWORD(v24) = v24 & 1)
             : (v24 = *(_QWORD *)(v24 & 0xFFFFFFFFFFFFFFFCuLL)),
               v23 + 1 < (unsigned int)v24)
           || !v22 && (v23 = *(_DWORD *)(a1 + 24)) != 0) )
        {
          if ( v22 == 1 )
            v25 = (unsigned int)(v23 + 1);
          else
            v25 = (unsigned int)(v23 - 1);
          v26 = *(_QWORD *)(v16 + 72);
          if ( (v26 & 2) != 0 )
            v27 = *(_QWORD *)(v26 & 0xFFFFFFFFFFFFFFFCuLL);
          else
            v27 = *(_QWORD *)(v16 + 72) & 1LL;
          if ( v27 > (unsigned int)v25 )
          {
            v28 = *(_QWORD *)(v16 + 72);
            if ( (v28 & 2) != 0 )
              v29 = *(_QWORD *)(v28 & 0xFFFFFFFFFFFFFFFCuLL);
            else
              v29 = *(_QWORD *)(v16 + 72) & 1LL;
            if ( (unsigned int)v25 >= v29 )
            {
              v21 = 0LL;
            }
            else
            {
              v21 = (CVisual *)(v28 & 0xFFFFFFFFFFFFFFFCuLL);
              if ( v29 != 1 )
                v21 = (CVisual *)*((_QWORD *)v21 + v25 + 2);
            }
          }
          *(_QWORD *)(a1 + 8) = v21;
          *(_DWORD *)(a1 + 24) = v25;
        }
        else
        {
          v13 = 1;
        }
        if ( v21 )
        {
          v7 = v110;
          goto LABEL_46;
        }
        if ( *(_DWORD *)(a1 + 4) )
        {
          v43 = *(_DWORD *)(a1 + 32);
          v44 = 0LL;
          v45 = 0;
          if ( v43 )
          {
            v46 = (unsigned int)(v43 - 1);
            *(_DWORD *)(a1 + 32) = v46;
            *(_OWORD *)v111 = *(_OWORD *)(*(_QWORD *)(a1 + 48) + 16 * v46);
            v45 = (int)v111[1];
            v44 = v111[0];
          }
          --*(_DWORD *)(a1 + 4);
          *(_QWORD *)(a1 + 8) = v16;
          *(_QWORD *)(a1 + 16) = v44;
          *(_DWORD *)(a1 + 24) = v45;
          if ( v16 )
            continue;
        }
        goto LABEL_87;
      }
      v106 = 244;
      goto LABEL_233;
    }
LABEL_46:
    v13 = CVisual::EnsureTreeData(v21, v7, &v114);
    if ( v13 < 0 )
    {
      v14 = *(_QWORD *)v108;
      goto LABEL_236;
    }
  }
  v106 = 211;
  v102 = v15;
LABEL_235:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v102, v106);
LABEL_87:
  v14 = *(_QWORD *)v108;
LABEL_88:
  if ( v13 == 1 || v13 == -2147467260 )
    v13 = 0;
  if ( v14 )
  {
    v47 = (__int64 *)TlsGetValue(CThreadContext::s_dwTlsIndex);
    if ( v47 )
    {
LABEL_92:
      v48 = *v47;
      if ( (*v47 & 2) != 0 )
        v49 = *(_QWORD *)(v48 & 0xFFFFFFFFFFFFFFFCuLL);
      else
        v49 = *v47 & 1;
      v50 = v49 - 1;
      if ( (*v47 & 2) != 0 )
        v51 = *(_QWORD *)(v48 & 0xFFFFFFFFFFFFFFFCuLL);
      else
        v51 = *v47 & 1;
      if ( v50 < v51 )
      {
        if ( v51 == 1 )
        {
          *v47 = 0LL;
        }
        else
        {
          v92 = (_QWORD *)(v48 & 0xFFFFFFFFFFFFFFFCuLL);
          v93 = v51 - 1;
          v94 = v92 + 2;
          if ( v93 == 1 )
          {
            v95 = v94[-v50 + 1];
            WPF::ProcessHeapImpl::Free(v92);
            *v47 = v95 | 1;
          }
          else
          {
            if ( v50 < v93 )
              memmove(&v94[v50], &v94[v50 + 1], 8 * (v93 - v50));
            *v92 = v93;
          }
        }
      }
    }
    else
    {
      v103 = (__int64 *)operator new(0x98uLL);
      v47 = v103;
      if ( v103 )
      {
        v104 = CThreadContext::s_dwTlsIndex;
        *v103 = 0LL;
        v103[1] = 0LL;
        v103[2] = 0LL;
        v103[3] = 0LL;
        v103[4] = 0LL;
        v103[5] = 0LL;
        v103[6] = 0LL;
        v103[7] = 0LL;
        v103[8] = 0LL;
        v103[9] = 0LL;
        v103[10] = 0LL;
        v103[11] = 0LL;
        v103[12] = 0LL;
        v103[13] = 0LL;
        v103[14] = 0LL;
        v103[15] = 0LL;
        v103[16] = 0LL;
        v103[17] = 0LL;
        v103[18] = 0LL;
        TlsSetValue(v104, v103);
        goto LABEL_92;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x42u);
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x8Du);
    }
  }
  *(_DWORD *)(a1 + 4) = 0;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)(a1 + 32) = 0;
  v52 = *(_DWORD *)(a1 + 40);
  if ( v52 == 10 )
  {
    v78 = *(_DWORD *)(a1 + 56) <= 0x40u;
    v79 = 64LL;
    v108[0] = 0;
    if ( !v78 )
      v79 = *(unsigned int *)(a1 + 56);
    v80 = ULongLongToUInt(3 * v79, v108);
    if ( v80 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v80, 0xE2u);
    }
    else if ( v108[0] <= *(_DWORD *)(a1 + 36) )
    {
      v109 = 0LL;
      v105 = WPF::HrMalloc((WPF *)0x10, (unsigned __int64)v81, (unsigned __int64)&v109, v81);
      if ( v105 >= 0 )
      {
        WPF::ProcessHeapImpl::Free(*(void **)(a1 + 48));
        *(_QWORD *)(a1 + 48) = v109;
        *(_DWORD *)(a1 + 36) = v79;
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v105, 0xF3u);
      }
    }
    *(_DWORD *)(a1 + 56) = 0;
    *(_DWORD *)(a1 + 40) = 0;
  }
  else
  {
    *(_DWORD *)(a1 + 40) = v52 + 1;
  }
  return (unsigned int)v13;
}
