/*
 * XREFs of ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C0025620
 * Callers:
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C002EA10 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 *     GreGetTextExtentW @ 0x1C0108E28 (GreGetTextExtentW.c)
 *     GreGetTextExtentExW @ 0x1C0145118 (GreGetTextExtentExW.c)
 * Callees:
 *     ?vCharPos_G2@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJPEAJ@Z @ 0x1C000948C (-vCharPos_G2@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJPEAJ@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C0018340 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?vCharPos_H3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJVEFLOAT@@PEAH@Z @ 0x1C0024D08 (-vCharPos_H3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJVEFLOAT@@PEAH@Z.c)
 *     ?vCharPos_H1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJVEFLOAT@@@Z @ 0x1C0025170 (-vCharPos_H1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJVEFLOAT@@@Z.c)
 *     ?bInsertGlyphbits@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z @ 0x1C0032534 (-bInsertGlyphbits@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z.c)
 *     ?bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z @ 0x1C0033408 (-bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z.c)
 *     ?gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z @ 0x1C00337B4 (-gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z.c)
 *     ?bInsertMetricsPlus@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x1C0033A10 (-bInsertMetricsPlus@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z.c)
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEAG2KPEAHH@Z @ 0x1C0034CC8 (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEAG2KPEAHH@Z.c)
 *     ?vFixUpGlyphIndices@RFONTOBJ@@QEAAXPEAGI@Z @ 0x1C00361A8 (-vFixUpGlyphIndices@RFONTOBJ@@QEAAXPEAGI@Z.c)
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C00361C8 (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?vCharPos_H4@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJVEFLOAT@@3@Z @ 0x1C012E3E4 (-vCharPos_H4@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJVEFLOAT@@3@Z.c)
 *     ?pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ @ 0x1C0135730 (-pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ.c)
 *     ?bCalcEscapementP@RFONTOBJ@@QEAAHAEAVEXFORMOBJ@@J@Z @ 0x1C0283408 (-bCalcEscapementP@RFONTOBJ@@QEAAHAEAVEXFORMOBJ@@J@Z.c)
 *     ?vCharPos_G1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJ2@Z @ 0x1C02967F0 (-vCharPos_G1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJ2@Z.c)
 *     ?vCharPos_G3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJPEAJ2@Z @ 0x1C0296A50 (-vCharPos_G3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJPEAJ2@Z.c)
 *     ?vCharPos_G4@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJ@Z @ 0x1C0296F58 (-vCharPos_G4@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJ@Z.c)
 */

void __fastcall ESTROBJ::vInit(
        ESTROBJ *this,
        unsigned __int16 *a2,
        unsigned int a3,
        struct XDCOBJ *a4,
        struct RFONTOBJ *a5,
        unsigned int **a6,
        __m128i *a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        unsigned int a13,
        int a14,
        char a15,
        int *a16,
        void *a17,
        unsigned int a18)
{
  int v20; // r11d
  __int64 v23; // r15
  __m128i v24; // xmm6
  unsigned int v25; // xmm7_4
  int v26; // edx
  __int64 v27; // rax
  __int64 v28; // rbx
  __int64 v29; // rax
  _DWORD *v30; // rcx
  int v31; // edx
  int v32; // r9d
  unsigned int v33; // r12d
  struct RFONTOBJ *v34; // rdx
  int v35; // ebx
  struct _GLYPHPOS *v36; // rbp
  unsigned __int16 *v37; // r15
  struct _GLYPHPOS *v38; // rsi
  unsigned __int16 *v39; // rdi
  __int64 v40; // rax
  __int64 v41; // r12
  int v42; // ecx
  int v43; // ebx
  __int64 v44; // rax
  __int64 v45; // r8
  _DWORD *v46; // rbp
  struct GPRUN *v47; // rbp
  unsigned __int16 *v48; // r12
  int v49; // ebx
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // r15
  struct _GLYPHDATA **v53; // rdx
  struct _GLYPHDATA *LinkMetricsPlus; // rbx
  struct XDCOBJ *v55; // rdi
  unsigned int v56; // esi
  int v57; // eax
  GLYPHDEF *pgdf; // rcx
  __int64 v59; // rax
  int v60; // ecx
  int v61; // ebp
  int v62; // edx
  int *v63; // r8
  int v64; // ecx
  float v65; // xmm1_4
  __int64 v66; // rdx
  float v67; // r9d
  int v68; // ecx
  __int64 v69; // rdx
  __int64 v70; // rdx
  int v71; // eax
  __int64 v72; // rcx
  _DWORD *v73; // r11
  __int64 v74; // rbx
  __int64 v75; // rdx
  float v76; // r9d
  int v77; // ecx
  __int64 v78; // rdx
  __int64 v79; // rdx
  __int64 v80; // rdx
  float v81; // r9d
  int v82; // ecx
  __int64 v83; // rdx
  __int64 v84; // rdx
  __int64 v85; // rcx
  unsigned int v86; // edi
  _DWORD *v87; // r11
  __int64 v88; // rbx
  __int64 v89; // rdx
  float v90; // r9d
  int v91; // ecx
  __int64 v92; // rdx
  __int64 v93; // rdx
  float v94; // r9d
  int v95; // ecx
  __int64 v96; // rdx
  __int64 v97; // rdx
  float v98; // r9d
  int v99; // ecx
  __int64 v100; // rdx
  __int64 v101; // rdx
  float v102; // r9d
  int v103; // ecx
  __int64 v104; // rdx
  __int64 v105; // rdx
  float v106; // r9d
  int v107; // ecx
  __int64 v108; // rdx
  __int64 v109; // rdx
  float v110; // r9d
  int v111; // ecx
  __int64 v112; // rdx
  __int64 v113; // rdx
  float v114; // r9d
  int v115; // ecx
  __int64 v116; // rdx
  __int64 v117; // rdx
  __int64 v118; // rax
  int v119; // r8d
  __int64 v120; // rcx
  __int64 v121; // rdx
  __int64 v122; // rax
  struct GPRUN *Run; // rax
  __int64 v124; // rbx
  __int64 v125; // rcx
  __int64 v126; // rcx
  __int64 v127; // rdx
  int v128; // eax
  int v129; // r10d
  ERECTL *v130; // r8
  int v131; // r9d
  int v132; // r11d
  int v133; // ecx
  int v134; // edx
  __int64 v135; // r8
  __m128i *v136; // rdx
  unsigned __int64 v137; // r8
  __int64 v138; // rcx
  int *v139; // rax
  unsigned __int64 v140; // rcx
  __int64 v141; // rcx
  int *v142; // rax
  unsigned __int64 v143; // rcx
  int v144; // ecx
  int v145; // r8d
  _DWORD *v146; // rax
  __int64 v147; // rdx
  int v148; // eax
  int v149; // edx
  __int64 v150; // r8
  int v151; // [rsp+50h] [rbp-78h] BYREF
  int v152; // [rsp+54h] [rbp-74h]
  unsigned int v153; // [rsp+58h] [rbp-70h]
  int v154; // [rsp+5Ch] [rbp-6Ch]
  struct _GLYPHPOS *v155; // [rsp+60h] [rbp-68h]
  unsigned __int16 *v156; // [rsp+68h] [rbp-60h]
  int v157; // [rsp+D0h] [rbp+8h]
  int v160; // [rsp+F0h] [rbp+28h]

  v20 = a8;
  v23 = a3;
  v24 = _mm_shuffle_epi32(_mm_cvtsi32_si128(a10), 0);
  v25 = **a6;
  *(_DWORD *)this = a3;
  *((_QWORD *)this + 7) = a5;
  *((_DWORD *)this + 16) = 0;
  v26 = a8 != 0 ? 0x400 : 0;
  *((_DWORD *)this + 1) = v26;
  v27 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a5 + 112LL) + 16LL);
  if ( !v27 )
    return;
  if ( (*(_DWORD *)(v27 + 4) & 0x10) != 0 )
    *((_DWORD *)this + 1) = v26 | 0x80;
  *((_DWORD *)this + 33) = a18;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 34) = 0;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 5) = a2;
  *(_QWORD *)((char *)this + 124) = 0LL;
  if ( (*(_DWORD *)(*(_QWORD *)a5 + 68LL) & 4) != 0 )
  {
    *((_DWORD *)this + 1) |= 0x100u;
    RFONTOBJ::vFixUpGlyphIndices(a5, a2, a3);
  }
  v28 = *(_QWORD *)(*(_QWORD *)a5 + 96LL);
  if ( (*(_DWORD *)(v28 + 1840) & 0x40000) != 0 )
    *((_DWORD *)this + 16) |= 0x100u;
  v29 = (__int64)a17;
  if ( !a17 )
  {
    v29 = AllocFreeTmpBuffer((30 * (_DWORD)v23 + 7) & 0xFFFFFFF8);
    if ( !v29 )
      return;
    *((_DWORD *)this + 16) |= 1u;
    v20 = a8;
  }
  *((_QWORD *)this + 9) = v29;
  v30 = *(_DWORD **)a5;
  v31 = *(_DWORD *)(*(_QWORD *)a5 + 200LL);
  if ( v31 != 1 || (v30[122] & 4) != 0 )
    v152 = a9;
  else
    v152 = v30[97];
  v32 = a14;
  v33 = a13;
  if ( (a15 & 0x18) != 0 )
  {
    if ( (a15 & 0x18) == 8 )
    {
      v33 = a13 - v30[82];
      v32 = a14 - v30[83];
    }
  }
  else
  {
    v33 = a13 - v30[80];
    v32 = a14 - v30[81];
  }
  v157 = v33;
  v160 = v32;
  if ( a10 && a7 && v31 == 1 && (v30[122] & 4) == 0 && (*(_DWORD *)(v28 + 32) & 1) != 0 )
  {
    v136 = a7;
    v137 = 0LL;
    if ( v20 )
    {
      v141 = 2LL * (_DWORD)v23;
      v142 = &a7->m128i_i32[v141];
      v143 = (unsigned __int64)(v141 * 4) >> 3;
      if ( a7 > (__m128i *)v142 )
        v143 = 0LL;
      if ( v143 )
      {
        do
        {
          v136->m128i_i32[0] += a10;
          v136 = (__m128i *)((char *)v136 + 8);
          ++v137;
        }
        while ( v137 < v143 );
      }
    }
    else
    {
      v138 = (int)v23;
      v139 = &a7->m128i_i32[v138];
      v140 = (unsigned __int64)(v138 * 4) >> 2;
      if ( a7 > (__m128i *)v139 )
        v140 = 0LL;
      if ( v140 )
      {
        if ( v140 >= 0x10 )
        {
          do
          {
            v137 += 16LL;
            *v136 = _mm_add_epi32(_mm_loadu_si128(v136), v24);
            v136[1] = _mm_add_epi32(_mm_loadu_si128(v136 + 1), v24);
            v136[2] = _mm_add_epi32(_mm_loadu_si128(v136 + 2), v24);
            v136[3] = _mm_add_epi32(_mm_loadu_si128(v136 + 3), v24);
            v136 += 4;
          }
          while ( v137 < (v140 & 0xFFFFFFFFFFFFFFF0uLL) );
        }
        for ( ; v137 < v140; ++v137 )
        {
          v136->m128i_i32[0] += a10;
          v136 = (__m128i *)((char *)v136 + 4);
        }
      }
    }
  }
  v34 = *(struct RFONTOBJ **)a5;
  v35 = v152;
  if ( v152 | *(_DWORD *)(*(_QWORD *)a5 + 388LL)
    || ((*a6)[8] & 1) == 0
    || *((float *)*a6 + 3) < 0.0
    || *(float *)&v25 < 0.0 )
  {
    if ( v20 )
    {
      if ( v152 != *((_DWORD *)v34 + 107) )
      {
        if ( !(unsigned int)RFONTOBJ::bCalcEscapementP(a5, (struct EXFORMOBJ *)a6, v152) )
          return;
        v32 = v160;
      }
      *((_DWORD *)this + 16) |= 8u;
      ESTROBJ::vCharPos_G4(this, a4, a5, v33, v32, a7->m128i_i32);
    }
    else if ( v152 == *(_DWORD *)(*(_QWORD *)a5 + 388LL) )
    {
      if ( a7 )
        ESTROBJ::vCharPos_G1(this, a4, a5, v33, v32, a7->m128i_i32, a16);
      else
        ESTROBJ::vCharPos_G2(this, a4, a5, v33, v32, a10, a11, a12, a16);
    }
    else
    {
      if ( v152 != *((_DWORD *)v34 + 107) )
      {
        if ( !(unsigned int)RFONTOBJ::bCalcEscapementP(a5, (struct EXFORMOBJ *)a6, v152) )
          return;
        v32 = v160;
      }
      *((_DWORD *)this + 16) |= 8u;
      *((_DWORD *)this + 1) |= 0x200u;
      ESTROBJ::vCharPos_G3(this, a4, a5, v33, v32, a10, a11, a12, a7->m128i_i32, a16);
    }
    *((_QWORD *)this + 12) = *((_QWORD *)this + 11);
    if ( (a15 & 6) != 0 )
    {
      v144 = *((_DWORD *)this + 22);
      v145 = *((_DWORD *)this + 23);
      if ( (a15 & 6) == 6 )
      {
        v144 /= 2;
        v145 /= 2;
        *((_QWORD *)this + 11) = 0LL;
      }
      else
      {
        *((_DWORD *)this + 22) = -v144;
        *((_DWORD *)this + 23) = -v145;
      }
      if ( (_DWORD)v23 )
      {
        v146 = (_DWORD *)(*((_QWORD *)this + 9) + 20LL);
        v147 = v23;
        do
        {
          *(v146 - 1) -= v144;
          *v146 -= v145;
          v146 += 6;
          --v147;
        }
        while ( v147 );
      }
      v33 -= v144;
      v61 = v160 - v145;
    }
    else
    {
      v61 = v160;
    }
    v125 = *((_QWORD *)this + 9);
    *((_DWORD *)this + 20) = v33;
    *((_DWORD *)this + 21) = v61;
    if ( (_DWORD)v23 )
    {
      v126 = v125 + 20;
      v127 = v23;
      do
      {
        v128 = *(_DWORD *)(v126 - 4);
        v126 += 24LL;
        *(_DWORD *)(v126 - 28) = (v128 + 8) >> 4;
        *(_DWORD *)(v126 - 24) = (*(_DWORD *)(v126 - 24) + 8) >> 4;
        --v127;
      }
      while ( v127 );
    }
    goto LABEL_75;
  }
  if ( a7 )
  {
    if ( v20 )
    {
      if ( (a15 & 0xA0) != 0 )
      {
        if ( v152 != *((_DWORD *)v34 + 107) )
        {
          if ( !(unsigned int)RFONTOBJ::bCalcEscapementP(a5, (struct EXFORMOBJ *)a6, v152) )
            return;
          v32 = v160;
        }
        *((_DWORD *)this + 16) |= 8u;
      }
      ESTROBJ::vCharPos_H4(this, a4, a5, v33, v32, a7, v25, (*a6)[3]);
      v56 = 0;
    }
    else
    {
      ESTROBJ::vCharPos_H1((unsigned int *)this, a4, a5, v33, v32, a7, v25);
      v56 = 0;
    }
    goto LABEL_47;
  }
  if ( !*((_DWORD *)v34 + 76) || a11 | a10 )
  {
    ESTROBJ::vCharPos_H3((unsigned int *)this, a4, a5, v33, v32, a10, a11, a12, v25, 0LL);
    v56 = 0;
    goto LABEL_47;
  }
  v36 = (struct _GLYPHPOS *)*((_QWORD *)this + 9);
  v37 = (unsigned __int16 *)*((_QWORD *)this + 5);
  v38 = v36;
  v39 = v37;
  v155 = v36;
  v36->ptl.x = (int)(v33 + 8) >> 4;
  v36->ptl.y = (v32 + 8) >> 4;
  v40 = *(_QWORD *)a5;
  v41 = *(unsigned int *)this;
  v156 = v37;
  v153 = v41;
  *((_DWORD *)this + 1) |= *(_DWORD *)(v40 + 268) & 0x71 | 2;
  v42 = *(_DWORD *)(*(_QWORD *)a5 + 304LL);
  *((_DWORD *)this + 2) = v42;
  v43 = 16 * v42 * v41;
  *((_DWORD *)this + 30) = v43;
  v44 = *(_QWORD *)a5;
  v154 = v43;
  if ( !*(_QWORD *)(v44 + 480) && !(unsigned int)RFONTOBJ::bAllocateCache(a5, v34) )
  {
LABEL_190:
    v56 = 0;
    goto LABEL_44;
  }
  v45 = *(_QWORD *)a5;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a5 + 96LL) + 1840LL) & 0x40000000) == 0 || *(_DWORD *)(v45 + 72) != 1 )
  {
    v46 = *(_DWORD **)(v45 + 480);
    v151 = 1;
    if ( *v46 )
    {
      v47 = (struct GPRUN *)(v46 + 4);
      v48 = &v37[v41];
      if ( v37 < v48 )
      {
        while ( 1 )
        {
          v49 = *v39;
          v50 = (unsigned int)(v49 - *(_DWORD *)v47);
          if ( (unsigned int)v50 >= *((_DWORD *)v47 + 1) )
          {
            Run = RFONTOBJ::gprunFindRun(a5, v49);
            v47 = Run;
            v124 = (unsigned int)(v49 - *(_DWORD *)Run);
            if ( (unsigned int)v124 >= *((_DWORD *)Run + 1) )
            {
              LinkMetricsPlus = RFONTOBJ::wpgdGetLinkMetricsPlus(a5, a4, this, v39, v37, v153, &v151, 1);
              if ( !LinkMetricsPlus )
                goto LABEL_190;
              goto LABEL_32;
            }
            _mm_lfence();
            v51 = *((_QWORD *)Run + 1);
            v52 = 8 * v124;
          }
          else
          {
            _mm_lfence();
            v51 = *((_QWORD *)v47 + 1);
            v52 = 8 * v50;
          }
          v53 = (struct _GLYPHDATA **)(v52 + v51);
          LinkMetricsPlus = *v53;
          if ( !*v53 )
          {
            if ( !(unsigned int)RFONTOBJ::bInsertMetricsPlus(a5, v53, *v39) )
              goto LABEL_190;
            LinkMetricsPlus = *(struct _GLYPHDATA **)(v52 + *((_QWORD *)v47 + 1));
          }
          v37 = v156;
LABEL_32:
          if ( !LinkMetricsPlus->gdf.pgb
            && v151
            && *(_DWORD *)(*(_QWORD *)a5 + 72LL)
            && !(unsigned int)RFONTOBJ::bInsertGlyphbits(a5, LinkMetricsPlus, v39 == v37) )
          {
            v151 = 0;
          }
          ++v39;
          v38->hg = LinkMetricsPlus->hg;
          v38->pgdf = &LinkMetricsPlus->gdf;
          ++v38;
          if ( v39 >= v48 )
          {
            v43 = v154;
            v36 = v155;
            goto LABEL_35;
          }
        }
      }
    }
    else if ( (_DWORD)v41 )
    {
      do
      {
        v38->hg = *(_DWORD *)(*(_QWORD *)a5 + 456LL);
        v38->pgdf = (GLYPHDEF *)RFONTOBJ::pgdDefault(a5);
        ++v38;
        LODWORD(v41) = v41 - 1;
      }
      while ( (_DWORD)v41 );
      v36 = v155;
      goto LABEL_35;
    }
    v36 = v38;
LABEL_35:
    v55 = a4;
    v56 = 0;
    goto LABEL_36;
  }
  v55 = a4;
  v56 = 0;
  v151 = 0;
  if ( !(unsigned int)RFONTOBJ::bGetGlyphMetrics(a5, v41, v36, v37, a4, this) )
  {
LABEL_44:
    LODWORD(v23) = a3;
    v33 = v157;
LABEL_47:
    v61 = v160;
    goto LABEL_48;
  }
LABEL_36:
  v57 = *((_DWORD *)this + 16);
  if ( (v57 & 0x1400) == 0 )
  {
    if ( v151 )
    {
      *((_DWORD *)this + 16) = v57 | 2;
      *((_QWORD *)this + 4) = *((_QWORD *)this + 9);
    }
    pgdf = v36->pgdf;
    if ( (*((_DWORD *)this + 1) & 0x10) != 0 )
    {
      *((_DWORD *)this + 26) = 0;
      *((_DWORD *)this + 28) = v43;
    }
    else
    {
      *((_DWORD *)this + 26) = pgdf[2].pgb;
      *((_DWORD *)this + 28) = v43 + HIDWORD(pgdf[2].ppo) - 16 * *((_DWORD *)this + 2);
    }
    v59 = *(_QWORD *)a5;
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v55 + 80LL) + 352LL) & 0x40) != 0 )
    {
      *((_DWORD *)this + 27) = -*(_DWORD *)(v59 + 312);
      v60 = -*(_DWORD *)(*(_QWORD *)a5 + 308LL);
    }
    else
    {
      *((_DWORD *)this + 27) = *(_DWORD *)(v59 + 308);
      v60 = *(_DWORD *)(*(_QWORD *)a5 + 312LL);
    }
    *((_DWORD *)this + 16) |= 4u;
    *((_DWORD *)this + 29) = v60;
    *((_DWORD *)this + 22) = v43;
    *((_DWORD *)this + 23) = 0;
    goto LABEL_44;
  }
  v33 = v157;
  v61 = v160;
  ESTROBJ::vCharPos_H3(
    (unsigned int *)this,
    v55,
    a5,
    v157,
    v160,
    0,
    0,
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v55 + 80LL) + 172LL),
    v25,
    (unsigned __int16 *)&v151);
  LODWORD(v23) = a3;
LABEL_48:
  v62 = *((_DWORD *)this + 22);
  *((_QWORD *)this + 12) = *((_QWORD *)this + 11);
  if ( (a15 & 6) != 0 )
  {
    if ( (a15 & 6) == 6 )
    {
      *((_DWORD *)this + 22) = 0;
      v62 /= 2;
    }
    else
    {
      *((_DWORD *)this + 22) = -v62;
    }
    v118 = *((_QWORD *)this + 9);
    v119 = (v62 + 8) >> 4;
    v120 = v118 + 24;
    *(_DWORD *)(v118 + 16) -= v119;
    v33 = 16 * *(_DWORD *)(v118 + 16);
    if ( !*((_DWORD *)this + 2) && (_DWORD)v23 != 1 )
    {
      v121 = (unsigned int)(v23 - 1);
      do
      {
        v122 = v120;
        v120 += 24LL;
        *(_DWORD *)(v122 + 16) -= v119;
        --v121;
      }
      while ( v121 );
    }
  }
  v63 = a16;
  if ( a16 )
  {
    v64 = *((_DWORD *)this + 2);
    v65 = *(float *)(*(_QWORD *)a5 + 404LL);
    if ( !v64 || (*((_DWORD *)this + 16) & 0x1400) != 0 )
    {
      v86 = v23 - 1;
      v87 = (_DWORD *)(*((_QWORD *)this + 9) + 24LL);
      if ( (unsigned int)(v23 - 1) >= 7 )
      {
        v56 = 7 * (((int)v23 - 8) / 7u + 1);
        v88 = ((int)v23 - 8) / 7u + 1;
        do
        {
          LODWORD(v89) = 0;
          v90 = (float)(int)(16 * v87[4] - v33) * v65;
          v91 = (unsigned __int8)(SLODWORD(v90) >> 23) - 118;
          if ( v91 <= 40 )
          {
            v92 = LODWORD(v90) & 0x7FFFFF | 0x800000LL;
            v93 = v91 < 0 ? v92 >> (118 - (unsigned __int8)(SLODWORD(v90) >> 23)) : v92 << v91;
            v89 = (v93 + 0x80000000LL) >> 32;
            if ( v90 < 0.0 )
              LODWORD(v89) = -(int)v89;
          }
          *v63 = v89;
          LODWORD(v89) = 0;
          v94 = (float)(int)(16 * v87[10] - v33) * v65;
          v95 = (unsigned __int8)(SLODWORD(v94) >> 23) - 118;
          if ( v95 <= 40 )
          {
            v96 = LODWORD(v94) & 0x7FFFFF | 0x800000LL;
            v97 = v95 < 0 ? v96 >> (118 - (unsigned __int8)(SLODWORD(v94) >> 23)) : v96 << v95;
            v89 = (v97 + 0x80000000LL) >> 32;
            if ( v94 < 0.0 )
              LODWORD(v89) = -(int)v89;
          }
          v63[1] = v89;
          LODWORD(v89) = 0;
          v98 = (float)(int)(16 * v87[16] - v33) * v65;
          v99 = (unsigned __int8)(SLODWORD(v98) >> 23) - 118;
          if ( v99 <= 40 )
          {
            v100 = LODWORD(v98) & 0x7FFFFF | 0x800000LL;
            v101 = v99 < 0 ? v100 >> (118 - (unsigned __int8)(SLODWORD(v98) >> 23)) : v100 << v99;
            v89 = (v101 + 0x80000000LL) >> 32;
            if ( v98 < 0.0 )
              LODWORD(v89) = -(int)v89;
          }
          v63[2] = v89;
          LODWORD(v89) = 0;
          v102 = (float)(int)(16 * v87[22] - v33) * v65;
          v103 = (unsigned __int8)(SLODWORD(v102) >> 23) - 118;
          if ( v103 <= 40 )
          {
            v104 = LODWORD(v102) & 0x7FFFFF | 0x800000LL;
            v105 = v103 < 0 ? v104 >> (118 - (unsigned __int8)(SLODWORD(v102) >> 23)) : v104 << v103;
            v89 = (v105 + 0x80000000LL) >> 32;
            if ( v102 < 0.0 )
              LODWORD(v89) = -(int)v89;
          }
          v63[3] = v89;
          LODWORD(v89) = 0;
          v106 = (float)(int)(16 * v87[28] - v33) * v65;
          v107 = (unsigned __int8)(SLODWORD(v106) >> 23) - 118;
          if ( v107 <= 40 )
          {
            v108 = LODWORD(v106) & 0x7FFFFF | 0x800000LL;
            v109 = v107 < 0 ? v108 >> (118 - (unsigned __int8)(SLODWORD(v106) >> 23)) : v108 << v107;
            v89 = (v109 + 0x80000000LL) >> 32;
            if ( v106 < 0.0 )
              LODWORD(v89) = -(int)v89;
          }
          v63[4] = v89;
          LODWORD(v89) = 0;
          v110 = (float)(int)(16 * v87[34] - v33) * v65;
          v111 = (unsigned __int8)(SLODWORD(v110) >> 23) - 118;
          if ( v111 <= 40 )
          {
            v112 = LODWORD(v110) & 0x7FFFFF | 0x800000LL;
            v113 = v111 < 0 ? v112 >> (118 - (unsigned __int8)(SLODWORD(v110) >> 23)) : v112 << v111;
            v89 = (v113 + 0x80000000LL) >> 32;
            if ( v110 < 0.0 )
              LODWORD(v89) = -(int)v89;
          }
          v63[5] = v89;
          LODWORD(v89) = 0;
          v114 = (float)(int)(16 * v87[40] - v33) * v65;
          v115 = (unsigned __int8)(SLODWORD(v114) >> 23) - 118;
          if ( v115 <= 40 )
          {
            v116 = LODWORD(v114) & 0x7FFFFF | 0x800000LL;
            v117 = v115 < 0 ? v116 >> (118 - (unsigned __int8)(SLODWORD(v114) >> 23)) : v116 << v115;
            v89 = (v117 + 0x80000000LL) >> 32;
            if ( v114 < 0.0 )
              LODWORD(v89) = -(int)v89;
          }
          v63[6] = v89;
          v87 += 42;
          v63 += 7;
          --v88;
        }
        while ( v88 );
      }
      if ( v56 < v86 )
      {
        v73 = v87 + 4;
        v74 = v86 - v56;
        do
        {
          LODWORD(v75) = 0;
          v76 = (float)(int)(16 * *v73 - v33) * v65;
          v77 = (unsigned __int8)(SLODWORD(v76) >> 23) - 118;
          if ( v77 <= 40 )
          {
            v78 = LODWORD(v76) & 0x7FFFFF | 0x800000LL;
            v79 = v77 < 0 ? v78 >> (118 - (unsigned __int8)(SLODWORD(v76) >> 23)) : v78 << v77;
            v75 = (v79 + 0x80000000LL) >> 32;
            if ( v76 < 0.0 )
              LODWORD(v75) = -(int)v75;
          }
          *v63 = v75;
          v73 += 6;
          ++v63;
          --v74;
        }
        while ( v74 );
      }
      LODWORD(v80) = 0;
      v81 = (float)(int)(((v33 + *((_DWORD *)this + 22)) & 0xFFFFFFF0) - v33) * v65;
      v82 = (unsigned __int8)(SLODWORD(v81) >> 23) - 118;
      if ( v82 <= 40 )
      {
        v83 = LODWORD(v81) & 0x7FFFFF | 0x800000LL;
        v84 = v82 < 0 ? v83 >> (118 - (unsigned __int8)(SLODWORD(v81) >> 23)) : v83 << v82;
        v80 = (v84 + 0x80000000LL) >> 32;
        if ( v81 < 0.0 )
          LODWORD(v80) = -(int)v80;
      }
      *v63 = v80;
    }
    else
    {
      LODWORD(v66) = 0;
      v67 = (float)(16 * v64) * v65;
      v68 = (unsigned __int8)(SLODWORD(v67) >> 23) - 118;
      if ( v68 <= 40 )
      {
        v69 = LODWORD(v67) & 0x7FFFFF | 0x800000LL;
        v70 = v68 < 0 ? v69 >> (118 - (unsigned __int8)(SLODWORD(v67) >> 23)) : v69 << v68;
        v66 = (v70 + 0x80000000LL) >> 32;
        if ( v67 < 0.0 )
          LODWORD(v66) = -(int)v66;
      }
      v71 = 0;
      if ( (_DWORD)v23 )
      {
        v72 = (unsigned int)v23;
        do
        {
          v71 += v66;
          *v63++ = v71;
          --v72;
        }
        while ( v72 );
      }
    }
  }
  v85 = *((_QWORD *)this + 9);
  v35 = v152;
  *((_DWORD *)this + 20) = 16 * *(_DWORD *)(v85 + 16);
  *((_DWORD *)this + 21) = 16 * *(_DWORD *)(v85 + 20);
LABEL_75:
  if ( (a15 & 0xA0) != 0 )
  {
    *((_DWORD *)this + 16) |= a15 & 0xA0;
    if ( !(v35 | a8 | *(_DWORD *)(*(_QWORD *)a5 + 388LL)) && ((*a6)[8] & 1) != 0 )
    {
      v129 = (int)(v33 + 8) >> 4;
      v130 = (ESTROBJ *)((char *)this + 16 * *((unsigned int *)this + 34) + 140);
      v131 = (*((_DWORD *)this + 24) + 8) >> 4;
      v132 = (v61 + 8) >> 4;
      if ( (a15 & 0x20) != 0 )
      {
        v133 = v129 + *(_DWORD *)(*(_QWORD *)a5 + 272LL);
        *(_DWORD *)v130 = v133;
        *((_DWORD *)v130 + 2) = v131 + v133;
        v134 = v132 + *(_DWORD *)(*(_QWORD *)a5 + 276LL);
        *((_DWORD *)v130 + 1) = v134;
        *((_DWORD *)v130 + 3) = v134 + *(_DWORD *)(*(_QWORD *)a5 + 292LL);
        ERECTL::vOrder(v130);
        ++*((_DWORD *)this + 34);
        v130 = (ERECTL *)(v135 + 16);
      }
      if ( a15 < 0 )
      {
        v148 = v129 + *(_DWORD *)(*(_QWORD *)a5 + 280LL);
        *(_DWORD *)v130 = v148;
        *((_DWORD *)v130 + 2) = v131 + v148;
        v149 = v132 + *(_DWORD *)(*(_QWORD *)a5 + 284LL);
        *((_DWORD *)v130 + 1) = v149;
        *((_DWORD *)v130 + 3) = v149 + *(_DWORD *)(*(_QWORD *)a5 + 300LL);
        ERECTL::vOrder(v130);
        ++*((_DWORD *)this + 34);
        v130 = (ERECTL *)(v150 + 16);
      }
      *(_QWORD *)v130 = 0LL;
      *((_QWORD *)v130 + 1) = 0LL;
    }
  }
  if ( (*(_DWORD *)(*(_QWORD *)a5 + 12LL) & 1) != 0 )
    *((_DWORD *)this + 16) |= 0x200u;
  else
    *((_DWORD *)this + 16) &= ~0x200u;
}
