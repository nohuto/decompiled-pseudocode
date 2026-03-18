/*
 * XREFs of ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C007CA50
 * Callers:
 *     GreGetTextExtentW @ 0x1C000C2DC (GreGetTextExtentW.c)
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C0078C70 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 *     GreGetTextExtentExW @ 0x1C013F8F0 (GreGetTextExtentExW.c)
 * Callees:
 *     ?vCharPos_G2@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJPEAJ@Z @ 0x1C0004120 (-vCharPos_G2@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJPEAJ@Z.c)
 *     ?vCharPos_H3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJVEFLOAT@@PEAH@Z @ 0x1C007C130 (-vCharPos_H3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJVEFLOAT@@PEAH@Z.c)
 *     ?vCharPos_H1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJVEFLOAT@@@Z @ 0x1C007C5A0 (-vCharPos_H1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJVEFLOAT@@@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C0081720 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?vFixUpGlyphIndices@RFONTOBJ@@QEAAXPEAGI@Z @ 0x1C008A800 (-vFixUpGlyphIndices@RFONTOBJ@@QEAAXPEAGI@Z.c)
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C008A828 (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z @ 0x1C008D508 (-bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z.c)
 *     ?bInsertMetricsPlus@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x1C008D8AC (-bInsertMetricsPlus@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z.c)
 *     ?gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z @ 0x1C008D8FC (-gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z.c)
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEAG2KPEAHH@Z @ 0x1C008EDA0 (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEAG2KPEAHH@Z.c)
 *     ?bInsertGlyphbits@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z @ 0x1C008FEE8 (-bInsertGlyphbits@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z.c)
 *     ?vCharPos_H4@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJVEFLOAT@@3@Z @ 0x1C01280D4 (-vCharPos_H4@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJVEFLOAT@@3@Z.c)
 *     ?pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ @ 0x1C01308FC (-pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ.c)
 *     ?bCalcEscapementP@RFONTOBJ@@QEAAHAEAVEXFORMOBJ@@J@Z @ 0x1C02868B8 (-bCalcEscapementP@RFONTOBJ@@QEAAHAEAVEXFORMOBJ@@J@Z.c)
 *     ?vCharPos_G1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJ2@Z @ 0x1C029A140 (-vCharPos_G1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJ2@Z.c)
 *     ?vCharPos_G3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJPEAJ2@Z @ 0x1C029A384 (-vCharPos_G3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJPEAJ2@Z.c)
 *     ?vCharPos_G4@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJ@Z @ 0x1C029A860 (-vCharPos_G4@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJ@Z.c)
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
  __int64 v22; // r15
  __m128i v23; // xmm6
  unsigned int v24; // xmm7_4
  int v25; // edx
  __int64 v26; // rax
  __int64 v27; // rbx
  __int64 v28; // rax
  _DWORD *v29; // rcx
  int v30; // edx
  int v31; // r11d
  int v32; // r10d
  unsigned int v33; // r12d
  struct RFONTOBJ *v34; // rdx
  struct _GLYPHPOS *v35; // rbp
  unsigned __int16 *v36; // r15
  struct _GLYPHPOS *v37; // r14
  unsigned __int16 *v38; // rsi
  __int64 v39; // rax
  __int64 v40; // r12
  int v41; // ecx
  int v42; // ebx
  __int64 v43; // rax
  __int64 v44; // r8
  _DWORD *v45; // rbp
  struct GPRUN *v46; // rbp
  unsigned __int16 *v47; // r12
  int v48; // ebx
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // r15
  struct _GLYPHDATA **v52; // rdx
  struct _GLYPHDATA *LinkMetricsPlus; // rbx
  struct XDCOBJ *v54; // rsi
  int v55; // eax
  GLYPHDEF *pgdf; // rcx
  __int64 v57; // rax
  int v58; // ecx
  char v59; // r14
  int v60; // edx
  int *v61; // r8
  int v62; // ecx
  float v63; // xmm1_4
  __int64 v64; // rdx
  float v65; // r9d
  int v66; // ecx
  __int64 v67; // rdx
  __int64 v68; // rdx
  int v69; // eax
  __int64 v70; // rcx
  __int64 v71; // rcx
  int v72; // r9d
  unsigned int v73; // esi
  _DWORD *v74; // r11
  unsigned int v75; // ebp
  unsigned int v76; // ecx
  __int64 v77; // rbx
  __int64 v78; // rdx
  float v79; // r9d
  int v80; // ecx
  __int64 v81; // rdx
  __int64 v82; // rdx
  float v83; // r9d
  int v84; // ecx
  __int64 v85; // rdx
  __int64 v86; // rdx
  float v87; // r9d
  int v88; // ecx
  __int64 v89; // rdx
  __int64 v90; // rdx
  float v91; // r9d
  int v92; // ecx
  __int64 v93; // rdx
  __int64 v94; // rdx
  float v95; // r9d
  int v96; // ecx
  __int64 v97; // rdx
  __int64 v98; // rdx
  float v99; // r9d
  int v100; // ecx
  __int64 v101; // rdx
  __int64 v102; // rdx
  float v103; // r9d
  int v104; // ecx
  __int64 v105; // rdx
  __int64 v106; // rdx
  _DWORD *v107; // r11
  __int64 v108; // rbx
  __int64 v109; // rdx
  float v110; // r9d
  int v111; // ecx
  __int64 v112; // rdx
  __int64 v113; // rdx
  __int64 v114; // rdx
  float v115; // r9d
  int v116; // ecx
  __int64 v117; // rdx
  __int64 v118; // rdx
  __int64 v119; // rax
  int v120; // r8d
  __int64 v121; // rcx
  __int64 v122; // rdx
  __int64 v123; // rax
  struct GPRUN *Run; // rax
  __int64 v125; // rbx
  __int64 v126; // rcx
  __int64 v127; // rcx
  __int64 v128; // rdx
  int v129; // eax
  int v130; // r11d
  int v131; // r9d
  ERECTL *v132; // r8
  int v133; // r10d
  int v134; // r11d
  int v135; // ecx
  int v136; // edx
  __int64 v137; // r8
  __m128i *v138; // rdx
  unsigned __int64 v139; // r8
  unsigned __int64 v140; // rax
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

  v22 = a3;
  v23 = _mm_shuffle_epi32(_mm_cvtsi32_si128(a10), 0);
  v24 = **a6;
  *(_DWORD *)this = a3;
  *((_QWORD *)this + 7) = a5;
  *((_DWORD *)this + 16) = 0;
  v25 = a8 != 0 ? 0x400 : 0;
  *((_DWORD *)this + 1) = v25;
  v26 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a5 + 112LL) + 16LL);
  if ( !v26 )
    return;
  if ( (*(_DWORD *)(v26 + 4) & 0x10) != 0 )
    *((_DWORD *)this + 1) = v25 | 0x80;
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
  v27 = *(_QWORD *)(*(_QWORD *)a5 + 96LL);
  if ( (*(_DWORD *)(v27 + 1840) & 0x40000) != 0 )
    *((_DWORD *)this + 16) |= 0x100u;
  v28 = (__int64)a17;
  if ( !a17 )
  {
    v28 = AllocFreeTmpBuffer((30 * (_DWORD)v22 + 7) & 0xFFFFFFF8);
    if ( !v28 )
      return;
    *((_DWORD *)this + 16) |= 1u;
  }
  *((_QWORD *)this + 9) = v28;
  v29 = *(_DWORD **)a5;
  v30 = *(_DWORD *)(*(_QWORD *)a5 + 200LL);
  if ( v30 != 1 || (v29[122] & 4) != 0 )
    v31 = a9;
  else
    v31 = v29[97];
  v32 = a14;
  v33 = a13;
  v152 = v31;
  if ( (a15 & 0x18) != 0 )
  {
    if ( (a15 & 0x18) == 8 )
    {
      v33 = a13 - v29[82];
      v32 = a14 - v29[83];
    }
  }
  else
  {
    v33 = a13 - v29[80];
    v32 = a14 - v29[81];
  }
  v157 = v33;
  v160 = v32;
  if ( a10 && a7 && v30 == 1 && (v29[122] & 4) == 0 && (*(_DWORD *)(v27 + 32) & 1) != 0 )
  {
    v138 = a7;
    v139 = 0LL;
    if ( a8 )
    {
      v141 = 2 * (int)v22;
      v142 = &a7->m128i_i32[v141];
      v143 = (unsigned __int64)(4 * v141 + 7) >> 3;
      if ( a7 > (__m128i *)v142 )
        v143 = 0LL;
      if ( v143 )
      {
        do
        {
          v138->m128i_i32[0] += a10;
          v138 = (__m128i *)((char *)v138 + 8);
          ++v139;
        }
        while ( v139 < v143 );
      }
    }
    else
    {
      v140 = (unsigned __int64)(4LL * (int)v22 + 3) >> 2;
      if ( a7 > (__m128i *)((char *)a7 + 4 * (int)v22) )
        v140 = 0LL;
      if ( v140 )
      {
        if ( v140 >= 8 )
        {
          do
          {
            v139 += 8LL;
            *v138 = _mm_add_epi32(_mm_loadu_si128(v138), v23);
            v138[1] = _mm_add_epi32(_mm_loadu_si128(v138 + 1), v23);
            v138 += 2;
          }
          while ( v139 < (v140 & 0xFFFFFFFFFFFFFFF8uLL) );
        }
        for ( ; v139 < v140; ++v139 )
        {
          v138->m128i_i32[0] += a10;
          v138 = (__m128i *)((char *)v138 + 4);
        }
      }
    }
  }
  v34 = *(struct RFONTOBJ **)a5;
  if ( v31 | *(_DWORD *)(*(_QWORD *)a5 + 388LL)
    || ((*a6)[8] & 1) == 0
    || *((float *)*a6 + 3) < 0.0
    || *(float *)&v24 < 0.0 )
  {
    if ( a8 )
    {
      if ( v31 != *((_DWORD *)v34 + 107) )
      {
        if ( !(unsigned int)RFONTOBJ::bCalcEscapementP(a5, (struct EXFORMOBJ *)a6, v31) )
          return;
        v32 = v160;
      }
      *((_DWORD *)this + 16) |= 8u;
      ESTROBJ::vCharPos_G4(this, a4, a5, v33, v32, a7->m128i_i32);
    }
    else if ( v31 == *(_DWORD *)(*(_QWORD *)a5 + 388LL) )
    {
      if ( a7 )
        ESTROBJ::vCharPos_G1(this, a4, a5, v33, v32, a7->m128i_i32, a16);
      else
        ESTROBJ::vCharPos_G2(this, a4, a5, v33, v32, a10, a11, a12, a16);
    }
    else
    {
      if ( v31 != *((_DWORD *)v34 + 107) )
      {
        if ( !(unsigned int)RFONTOBJ::bCalcEscapementP(a5, (struct EXFORMOBJ *)a6, v31) )
          return;
        v32 = v160;
      }
      *((_DWORD *)this + 16) |= 8u;
      *((_DWORD *)this + 1) |= 0x200u;
      ESTROBJ::vCharPos_G3(this, a4, a5, v33, v32, a10, a11, a12, a7->m128i_i32, a16);
    }
    v59 = a15;
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
      if ( (_DWORD)v22 )
      {
        v146 = (_DWORD *)(*((_QWORD *)this + 9) + 20LL);
        v147 = v22;
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
      v72 = v160 - v145;
    }
    else
    {
      v72 = v160;
    }
    v126 = *((_QWORD *)this + 9);
    *((_DWORD *)this + 20) = v33;
    *((_DWORD *)this + 21) = v72;
    if ( (_DWORD)v22 )
    {
      v127 = v126 + 20;
      v128 = v22;
      do
      {
        v129 = *(_DWORD *)(v127 - 4);
        v127 += 24LL;
        *(_DWORD *)(v127 - 28) = (v129 + 8) >> 4;
        *(_DWORD *)(v127 - 24) = (*(_DWORD *)(v127 - 24) + 8) >> 4;
        --v128;
      }
      while ( v128 );
    }
    goto LABEL_59;
  }
  if ( a7 )
  {
    if ( a8 )
    {
      if ( (a15 & 0xA0) != 0 )
      {
        if ( v31 != *((_DWORD *)v34 + 107) )
        {
          if ( !(unsigned int)RFONTOBJ::bCalcEscapementP(a5, (struct EXFORMOBJ *)a6, v31) )
            return;
          v32 = v160;
        }
        *((_DWORD *)this + 16) |= 8u;
      }
      ESTROBJ::vCharPos_H4(this, a4, a5, v33, v32, a7, v24, (*a6)[3]);
    }
    else
    {
      ESTROBJ::vCharPos_H1((unsigned int *)this, a4, a5, v33, v32, a7, v24);
    }
    goto LABEL_46;
  }
  if ( *((_DWORD *)v34 + 76) && !(a11 | a10) )
  {
    v35 = (struct _GLYPHPOS *)*((_QWORD *)this + 9);
    v36 = (unsigned __int16 *)*((_QWORD *)this + 5);
    v37 = v35;
    v38 = v36;
    v155 = v35;
    v35->ptl.x = (int)(v33 + 8) >> 4;
    v35->ptl.y = (v32 + 8) >> 4;
    v39 = *(_QWORD *)a5;
    v40 = *(unsigned int *)this;
    v156 = v36;
    v153 = v40;
    *((_DWORD *)this + 1) |= *(_DWORD *)(v39 + 268) & 0x71 | 2;
    v41 = *(_DWORD *)(*(_QWORD *)a5 + 304LL);
    *((_DWORD *)this + 2) = v41;
    v42 = 16 * v41 * v40;
    *((_DWORD *)this + 30) = v42;
    v43 = *(_QWORD *)a5;
    v154 = v42;
    if ( !*(_QWORD *)(v43 + 480) && !(unsigned int)RFONTOBJ::bAllocateCache(a5, v34) )
      goto LABEL_44;
    v44 = *(_QWORD *)a5;
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a5 + 96LL) + 1840LL) & 0x40000000) != 0 && *(_DWORD *)(v44 + 72) == 1 )
    {
      v54 = a4;
      v151 = 0;
      if ( !(unsigned int)RFONTOBJ::bGetGlyphMetrics(a5, v40, v35, v36, a4, this) )
        goto LABEL_44;
      goto LABEL_36;
    }
    v45 = *(_DWORD **)(v44 + 480);
    v151 = 1;
    if ( *v45 )
    {
      v46 = (struct GPRUN *)(v45 + 4);
      v47 = &v36[v40];
      if ( v36 < v47 )
      {
        while ( 1 )
        {
          v48 = *v38;
          v49 = (unsigned int)(v48 - *(_DWORD *)v46);
          if ( (unsigned int)v49 >= *((_DWORD *)v46 + 1) )
          {
            Run = RFONTOBJ::gprunFindRun(a5, v48);
            v46 = Run;
            v125 = (unsigned int)(v48 - *(_DWORD *)Run);
            if ( (unsigned int)v125 >= *((_DWORD *)Run + 1) )
            {
              LinkMetricsPlus = RFONTOBJ::wpgdGetLinkMetricsPlus(a5, a4, this, v38, v36, v153, &v151, 1);
              if ( !LinkMetricsPlus )
                goto LABEL_44;
              goto LABEL_32;
            }
            _mm_lfence();
            v50 = *((_QWORD *)Run + 1);
            v51 = 8 * v125;
          }
          else
          {
            _mm_lfence();
            v50 = *((_QWORD *)v46 + 1);
            v51 = 8 * v49;
          }
          v52 = (struct _GLYPHDATA **)(v51 + v50);
          LinkMetricsPlus = *v52;
          if ( !*v52 )
          {
            if ( !(unsigned int)RFONTOBJ::bInsertMetricsPlus(a5, v52, *v38) )
              goto LABEL_44;
            LinkMetricsPlus = *(struct _GLYPHDATA **)(v51 + *((_QWORD *)v46 + 1));
          }
          v36 = v156;
LABEL_32:
          if ( !LinkMetricsPlus->gdf.pgb
            && v151
            && *(_DWORD *)(*(_QWORD *)a5 + 72LL)
            && !(unsigned int)RFONTOBJ::bInsertGlyphbits(a5, LinkMetricsPlus, v38 == v36) )
          {
            v151 = 0;
          }
          ++v38;
          v37->hg = LinkMetricsPlus->hg;
          v37->pgdf = &LinkMetricsPlus->gdf;
          ++v37;
          if ( v38 >= v47 )
          {
            v42 = v154;
            v35 = v155;
            goto LABEL_35;
          }
        }
      }
    }
    else if ( (_DWORD)v40 )
    {
      do
      {
        v37->hg = *(_DWORD *)(*(_QWORD *)a5 + 456LL);
        v37->pgdf = (GLYPHDEF *)RFONTOBJ::pgdDefault(a5);
        ++v37;
        LODWORD(v40) = v40 - 1;
      }
      while ( (_DWORD)v40 );
      v35 = v155;
      goto LABEL_35;
    }
    v35 = v37;
LABEL_35:
    v54 = a4;
LABEL_36:
    v55 = *((_DWORD *)this + 16);
    if ( (v55 & 0x1400) != 0 )
    {
      v33 = v157;
      ESTROBJ::vCharPos_H3(
        (unsigned int *)this,
        v54,
        a5,
        v157,
        v160,
        0,
        0,
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v54 + 80LL) + 172LL),
        v24,
        &v151);
      goto LABEL_45;
    }
    if ( v151 )
    {
      *((_DWORD *)this + 16) = v55 | 2;
      *((_QWORD *)this + 4) = *((_QWORD *)this + 9);
    }
    pgdf = v35->pgdf;
    if ( (*((_DWORD *)this + 1) & 0x10) != 0 )
    {
      *((_DWORD *)this + 26) = 0;
      *((_DWORD *)this + 28) = v42;
    }
    else
    {
      *((_DWORD *)this + 26) = pgdf[2].pgb;
      *((_DWORD *)this + 28) = v42 + HIDWORD(pgdf[2].ppo) - 16 * *((_DWORD *)this + 2);
    }
    v57 = *(_QWORD *)a5;
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v54 + 80LL) + 352LL) & 0x40) != 0 )
    {
      *((_DWORD *)this + 27) = -*(_DWORD *)(v57 + 312);
      v58 = -*(_DWORD *)(*(_QWORD *)a5 + 308LL);
    }
    else
    {
      *((_DWORD *)this + 27) = *(_DWORD *)(v57 + 308);
      v58 = *(_DWORD *)(*(_QWORD *)a5 + 312LL);
    }
    *((_DWORD *)this + 16) |= 4u;
    *((_DWORD *)this + 29) = v58;
    *((_DWORD *)this + 22) = v42;
    *((_DWORD *)this + 23) = 0;
LABEL_44:
    v33 = v157;
LABEL_45:
    LODWORD(v22) = a3;
    goto LABEL_46;
  }
  ESTROBJ::vCharPos_H3((unsigned int *)this, a4, a5, v33, v32, a10, a11, a12, v24, 0LL);
LABEL_46:
  v59 = a15;
  v60 = *((_DWORD *)this + 22);
  *((_QWORD *)this + 12) = *((_QWORD *)this + 11);
  if ( (a15 & 6) != 0 )
  {
    if ( (a15 & 6) == 6 )
    {
      *((_DWORD *)this + 22) = 0;
      v60 /= 2;
    }
    else
    {
      *((_DWORD *)this + 22) = -v60;
    }
    v119 = *((_QWORD *)this + 9);
    v120 = (v60 + 8) >> 4;
    v121 = v119 + 24;
    *(_DWORD *)(v119 + 16) -= v120;
    v33 = 16 * *(_DWORD *)(v119 + 16);
    if ( !*((_DWORD *)this + 2) && (_DWORD)v22 != 1 )
    {
      v122 = (unsigned int)(v22 - 1);
      do
      {
        v123 = v121;
        v121 += 24LL;
        *(_DWORD *)(v123 + 16) -= v120;
        --v122;
      }
      while ( v122 );
    }
  }
  v61 = a16;
  if ( a16 )
  {
    v62 = *((_DWORD *)this + 2);
    v63 = *(float *)(*(_QWORD *)a5 + 404LL);
    if ( !v62 || (*((_DWORD *)this + 16) & 0x1400) != 0 )
    {
      v73 = v22 - 1;
      v74 = (_DWORD *)(*((_QWORD *)this + 9) + 24LL);
      v75 = 0;
      if ( (unsigned int)(v22 - 1) >= 7 )
      {
        v76 = ((int)v22 - 8) / 7u + 1;
        v77 = v76;
        v75 = 7 * v76;
        do
        {
          LODWORD(v78) = 0;
          v79 = (float)(int)(16 * v74[4] - v33) * v63;
          v80 = (unsigned __int8)(SLODWORD(v79) >> 23) - 118;
          if ( v80 <= 40 )
          {
            v81 = LODWORD(v79) & 0x7FFFFF | 0x800000LL;
            v82 = v80 < 0 ? v81 >> (118 - (unsigned __int8)(SLODWORD(v79) >> 23)) : v81 << v80;
            v78 = (v82 + 0x80000000LL) >> 32;
            if ( v79 < 0.0 )
              LODWORD(v78) = -(int)v78;
          }
          *v61 = v78;
          LODWORD(v78) = 0;
          v83 = (float)(int)(16 * v74[10] - v33) * v63;
          v84 = (unsigned __int8)(SLODWORD(v83) >> 23) - 118;
          if ( v84 <= 40 )
          {
            v85 = LODWORD(v83) & 0x7FFFFF | 0x800000LL;
            v86 = v84 < 0 ? v85 >> (118 - (unsigned __int8)(SLODWORD(v83) >> 23)) : v85 << v84;
            v78 = (v86 + 0x80000000LL) >> 32;
            if ( v83 < 0.0 )
              LODWORD(v78) = -(int)v78;
          }
          v61[1] = v78;
          LODWORD(v78) = 0;
          v87 = (float)(int)(16 * v74[16] - v33) * v63;
          v88 = (unsigned __int8)(SLODWORD(v87) >> 23) - 118;
          if ( v88 <= 40 )
          {
            v89 = LODWORD(v87) & 0x7FFFFF | 0x800000LL;
            v90 = v88 < 0 ? v89 >> (118 - (unsigned __int8)(SLODWORD(v87) >> 23)) : v89 << v88;
            v78 = (v90 + 0x80000000LL) >> 32;
            if ( v87 < 0.0 )
              LODWORD(v78) = -(int)v78;
          }
          v61[2] = v78;
          LODWORD(v78) = 0;
          v91 = (float)(int)(16 * v74[22] - v33) * v63;
          v92 = (unsigned __int8)(SLODWORD(v91) >> 23) - 118;
          if ( v92 <= 40 )
          {
            v93 = LODWORD(v91) & 0x7FFFFF | 0x800000LL;
            v94 = v92 < 0 ? v93 >> (118 - (unsigned __int8)(SLODWORD(v91) >> 23)) : v93 << v92;
            v78 = (v94 + 0x80000000LL) >> 32;
            if ( v91 < 0.0 )
              LODWORD(v78) = -(int)v78;
          }
          v61[3] = v78;
          LODWORD(v78) = 0;
          v95 = (float)(int)(16 * v74[28] - v33) * v63;
          v96 = (unsigned __int8)(SLODWORD(v95) >> 23) - 118;
          if ( v96 <= 40 )
          {
            v97 = LODWORD(v95) & 0x7FFFFF | 0x800000LL;
            v98 = v96 < 0 ? v97 >> (118 - (unsigned __int8)(SLODWORD(v95) >> 23)) : v97 << v96;
            v78 = (v98 + 0x80000000LL) >> 32;
            if ( v95 < 0.0 )
              LODWORD(v78) = -(int)v78;
          }
          v61[4] = v78;
          LODWORD(v78) = 0;
          v99 = (float)(int)(16 * v74[34] - v33) * v63;
          v100 = (unsigned __int8)(SLODWORD(v99) >> 23) - 118;
          if ( v100 <= 40 )
          {
            v101 = LODWORD(v99) & 0x7FFFFF | 0x800000LL;
            v102 = v100 < 0 ? v101 >> (118 - (unsigned __int8)(SLODWORD(v99) >> 23)) : v101 << v100;
            v78 = (v102 + 0x80000000LL) >> 32;
            if ( v99 < 0.0 )
              LODWORD(v78) = -(int)v78;
          }
          v61[5] = v78;
          LODWORD(v78) = 0;
          v103 = (float)(int)(16 * v74[40] - v33) * v63;
          v104 = (unsigned __int8)(SLODWORD(v103) >> 23) - 118;
          if ( v104 <= 40 )
          {
            v105 = LODWORD(v103) & 0x7FFFFF | 0x800000LL;
            v106 = v104 < 0 ? v105 >> (118 - (unsigned __int8)(SLODWORD(v103) >> 23)) : v105 << v104;
            v78 = (v106 + 0x80000000LL) >> 32;
            if ( v103 < 0.0 )
              LODWORD(v78) = -(int)v78;
          }
          v61[6] = v78;
          v74 += 42;
          v61 += 7;
          --v77;
        }
        while ( v77 );
      }
      if ( v75 < v73 )
      {
        v107 = v74 + 4;
        v108 = v73 - v75;
        do
        {
          LODWORD(v109) = 0;
          v110 = (float)(int)(16 * *v107 - v33) * v63;
          v111 = (unsigned __int8)(SLODWORD(v110) >> 23) - 118;
          if ( v111 <= 40 )
          {
            v112 = LODWORD(v110) & 0x7FFFFF | 0x800000LL;
            v113 = v111 < 0 ? v112 >> (118 - (unsigned __int8)(SLODWORD(v110) >> 23)) : v112 << v111;
            v109 = (v113 + 0x80000000LL) >> 32;
            if ( v110 < 0.0 )
              LODWORD(v109) = -(int)v109;
          }
          *v61 = v109;
          v107 += 6;
          ++v61;
          --v108;
        }
        while ( v108 );
      }
      LODWORD(v114) = 0;
      v115 = (float)(int)(((v33 + *((_DWORD *)this + 22)) & 0xFFFFFFF0) - v33) * v63;
      v116 = (unsigned __int8)(SLODWORD(v115) >> 23) - 118;
      if ( v116 <= 40 )
      {
        v117 = LODWORD(v115) & 0x7FFFFF | 0x800000LL;
        v118 = v116 < 0 ? v117 >> (118 - (unsigned __int8)(SLODWORD(v115) >> 23)) : v117 << v116;
        v114 = (v118 + 0x80000000LL) >> 32;
        if ( v115 < 0.0 )
          LODWORD(v114) = -(int)v114;
      }
      *v61 = v114;
    }
    else
    {
      LODWORD(v64) = 0;
      v65 = (float)(16 * v62) * v63;
      v66 = (unsigned __int8)(SLODWORD(v65) >> 23) - 118;
      if ( v66 <= 40 )
      {
        v67 = LODWORD(v65) & 0x7FFFFF | 0x800000LL;
        v68 = v66 < 0 ? v67 >> (118 - (unsigned __int8)(SLODWORD(v65) >> 23)) : v67 << v66;
        v64 = (v68 + 0x80000000LL) >> 32;
        if ( v65 < 0.0 )
          LODWORD(v64) = -(int)v64;
      }
      v69 = 0;
      if ( (_DWORD)v22 )
      {
        v70 = (unsigned int)v22;
        do
        {
          v69 += v64;
          *v61++ = v69;
          --v70;
        }
        while ( v70 );
      }
    }
  }
  v71 = *((_QWORD *)this + 9);
  v72 = v160;
  *((_DWORD *)this + 20) = 16 * *(_DWORD *)(v71 + 16);
  *((_DWORD *)this + 21) = 16 * *(_DWORD *)(v71 + 20);
LABEL_59:
  if ( (v59 & 0xA0) != 0 )
  {
    *((_DWORD *)this + 16) |= v59 & 0xA0;
    if ( !(v152 | a8 | *(_DWORD *)(*(_QWORD *)a5 + 388LL)) && ((*a6)[8] & 1) != 0 )
    {
      v130 = v72 + 8;
      v131 = (*((_DWORD *)this + 24) + 8) >> 4;
      v132 = (ESTROBJ *)((char *)this + 16 * *((unsigned int *)this + 34) + 140);
      v133 = (int)(v33 + 8) >> 4;
      v134 = v130 >> 4;
      if ( (v59 & 0x20) != 0 )
      {
        v135 = v133 + *(_DWORD *)(*(_QWORD *)a5 + 272LL);
        *(_DWORD *)v132 = v135;
        *((_DWORD *)v132 + 2) = v135 + v131;
        v136 = v134 + *(_DWORD *)(*(_QWORD *)a5 + 276LL);
        *((_DWORD *)v132 + 1) = v136;
        *((_DWORD *)v132 + 3) = v136 + *(_DWORD *)(*(_QWORD *)a5 + 292LL);
        ERECTL::vOrder(v132);
        ++*((_DWORD *)this + 34);
        v132 = (ERECTL *)(v137 + 16);
      }
      if ( v59 < 0 )
      {
        v148 = v133 + *(_DWORD *)(*(_QWORD *)a5 + 280LL);
        *(_DWORD *)v132 = v148;
        *((_DWORD *)v132 + 2) = v131 + v148;
        v149 = v134 + *(_DWORD *)(*(_QWORD *)a5 + 284LL);
        *((_DWORD *)v132 + 1) = v149;
        *((_DWORD *)v132 + 3) = v149 + *(_DWORD *)(*(_QWORD *)a5 + 300LL);
        ERECTL::vOrder(v132);
        ++*((_DWORD *)this + 34);
        v132 = (ERECTL *)(v150 + 16);
      }
      *(_QWORD *)v132 = 0LL;
      *((_QWORD *)v132 + 1) = 0LL;
    }
  }
  if ( (*(_DWORD *)(*(_QWORD *)a5 + 12LL) & 1) != 0 )
    *((_DWORD *)this + 16) |= 0x200u;
  else
    *((_DWORD *)this + 16) &= ~0x200u;
}
