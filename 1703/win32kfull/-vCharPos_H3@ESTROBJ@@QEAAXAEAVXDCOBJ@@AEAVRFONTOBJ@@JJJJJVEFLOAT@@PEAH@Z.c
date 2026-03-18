/*
 * XREFs of ?vCharPos_H3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJVEFLOAT@@PEAH@Z @ 0x1C007C130
 * Callers:
 *     ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C007CA50 (-vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 * Callees:
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C008A828 (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z @ 0x1C008D508 (-bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z.c)
 *     ?bInsertMetricsPlus@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x1C008D8AC (-bInsertMetricsPlus@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z.c)
 *     ?gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z @ 0x1C008D8FC (-gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z.c)
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEAG2KPEAHH@Z @ 0x1C008EDA0 (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEAG2KPEAHH@Z.c)
 *     ?bInsertGlyphbits@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z @ 0x1C008FEE8 (-bInsertGlyphbits@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z.c)
 *     bFToL @ 0x1C00DF104 (bFToL.c)
 *     ?bCalcBreakExtra@@YAEVEFLOAT@@JJPEAJ@Z @ 0x1C0114AF0 (-bCalcBreakExtra@@YAEVEFLOAT@@JJPEAJ@Z.c)
 *     ?pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ @ 0x1C01308FC (-pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ.c)
 */

struct _GLYPHDATA *__fastcall ESTROBJ::vCharPos_H3(
        unsigned int *a1,
        struct XDCOBJ *a2,
        RFONTOBJ *a3,
        int a4,
        int a5,
        int a6,
        int a7,
        unsigned int a8,
        unsigned int a9,
        int *a10)
{
  int v10; // r10d
  unsigned int v11; // ebx
  __int64 v12; // rax
  RFONTOBJ *v14; // r11
  struct _GLYPHPOS *v16; // r10
  int v17; // ebp
  struct RFONTOBJ *v18; // rdx
  signed int v19; // ebx
  POINTL *p_ptl; // rsi
  int v21; // r12d
  __int64 v22; // rax
  unsigned __int16 *v23; // rdi
  __int64 v24; // r13
  struct _GLYPHPOS *v25; // r14
  __int64 v26; // r8
  _DWORD *v27; // rbp
  struct GPRUN *v28; // rbp
  int v29; // ebx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // r13
  struct _GLYPHDATA **v33; // rdx
  struct _GLYPHDATA *v34; // rbx
  int v35; // r13d
  __int64 v36; // rax
  struct XDCOBJ *v37; // r14
  int v38; // r8d
  signed int v39; // r10d
  _DWORD *v40; // rdx
  int v41; // eax
  int v42; // ecx
  int v43; // ecx
  unsigned int v44; // ecx
  __int64 v45; // rax
  struct _GLYPHDATA *result; // rax
  int v47; // ecx
  struct GPRUN *Run; // rax
  __int64 v49; // rbx
  int v50; // edx
  int v51; // edx
  __m128i v52; // xmm1
  __int64 v53; // rcx
  int v54; // r8d
  char v55; // al
  unsigned int v56; // edx
  int v57; // ecx
  int v58; // eax
  int v59; // [rsp+40h] [rbp-78h]
  unsigned __int16 *v60; // [rsp+48h] [rbp-70h]
  struct _GLYPHPOS *v61; // [rsp+50h] [rbp-68h]
  LONG *p_y; // [rsp+58h] [rbp-60h]
  unsigned __int16 *v63; // [rsp+60h] [rbp-58h]
  int v64; // [rsp+C0h] [rbp+8h]
  int v67; // [rsp+D8h] [rbp+20h]

  v10 = a6;
  v11 = a7;
  v64 = 0;
  v12 = *(_QWORD *)a3;
  v14 = a3;
  if ( a7 | a6 )
  {
    v52 = (__m128i)a9;
    v53 = *(_DWORD *)(v12 + 268) & 0x40 | 2u;
    a1[1] |= v53;
    if ( v10 )
    {
      a7 = 0;
      bFToL(v53, &a7, 0LL);
      v54 = a7;
      a1[31] = a7;
      if ( v54 > 0 )
        a1[1] |= 0x800u;
    }
    v55 = bCalcBreakExtra((unsigned int)_mm_cvtsi128_si32(v52), v11, a8, a1 + 32);
    v14 = a3;
    if ( v55 )
    {
      v56 = a1[31];
      v57 = *(_DWORD *)(*(_QWORD *)a3 + 464LL);
      if ( (int)(v57 + v56 + a1[32]) < 0 )
        a1[32] = -(v56 + v57);
      v58 = *(_DWORD *)(*(_QWORD *)a3 + 460LL);
      a1[1] |= 0x1000u;
      v64 = v58;
    }
  }
  else
  {
    a1[1] |= *(_DWORD *)(v12 + 268) & 0x71 | 2;
  }
  v16 = (struct _GLYPHPOS *)*((_QWORD *)a1 + 9);
  v17 = a4 + 8;
  v18 = (struct RFONTOBJ *)*((_QWORD *)a1 + 5);
  v19 = 0;
  p_ptl = &v16->ptl;
  v16->ptl.x = v17 >> 4;
  v21 = 0;
  v16->ptl.y = (a5 + 8) >> 4;
  p_y = &v16->ptl.y;
  v61 = v16;
  v60 = (unsigned __int16 *)v18;
  v67 = v17;
  v59 = (a5 + 8) >> 4;
  if ( a10 )
  {
    v35 = *a10;
LABEL_17:
    if ( !v35 )
      goto LABEL_19;
    goto LABEL_18;
  }
  v22 = *(_QWORD *)v14;
  v23 = (unsigned __int16 *)v18;
  v24 = *a1;
  v25 = v16;
  LODWORD(a10) = *a1;
  if ( !*(_QWORD *)(v22 + 480) )
  {
    result = (struct _GLYPHDATA *)RFONTOBJ::bAllocateCache(v14, v18);
    if ( !(_DWORD)result )
      return result;
    v14 = a3;
    v18 = (struct RFONTOBJ *)v23;
    v16 = v25;
  }
  v26 = *(_QWORD *)v14;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v14 + 96LL) + 1840LL) & 0x40000000) == 0 || *(_DWORD *)(v26 + 72) != 1 )
  {
    v27 = *(_DWORD **)(v26 + 480);
    a6 = 1;
    if ( *v27 )
    {
      v28 = (struct GPRUN *)(v27 + 4);
      v63 = (unsigned __int16 *)((char *)v18 + 2 * v24);
      if ( v18 < (struct RFONTOBJ *)v63 )
      {
        while ( 1 )
        {
          v29 = *v23;
          v30 = (unsigned int)(v29 - *(_DWORD *)v28);
          if ( (unsigned int)v30 < *((_DWORD *)v28 + 1) )
            break;
          Run = RFONTOBJ::gprunFindRun(v14, v29);
          v28 = Run;
          v49 = (unsigned int)(v29 - *(_DWORD *)Run);
          if ( (unsigned int)v49 < *((_DWORD *)Run + 1) )
          {
            _mm_lfence();
            v31 = *((_QWORD *)Run + 1);
            v32 = 8 * v49;
            v14 = a3;
LABEL_13:
            v33 = (struct _GLYPHDATA **)(v32 + v31);
            v34 = *v33;
            if ( !*v33 )
            {
              result = (struct _GLYPHDATA *)RFONTOBJ::bInsertMetricsPlus(v14, v33, *v23);
              if ( !(_DWORD)result )
                return result;
              v34 = *(struct _GLYPHDATA **)(*((_QWORD *)v28 + 1) + v32);
            }
            goto LABEL_14;
          }
          result = RFONTOBJ::wpgdGetLinkMetricsPlus(a3, a2, (struct ESTROBJ *)a1, v23, v60, (unsigned int)a10, &a6, 1);
          v34 = result;
          if ( !result )
            return result;
LABEL_14:
          v35 = a6;
          if ( !v34->gdf.pgb
            && a6
            && *(_DWORD *)(*(_QWORD *)a3 + 72LL)
            && !(unsigned int)RFONTOBJ::bInsertGlyphbits(a3, v34, v23 == v60) )
          {
            v35 = 0;
            a6 = 0;
          }
          ++v23;
          v25->hg = v34->hg;
          v25->pgdf = &v34->gdf;
          ++v25;
          if ( v23 >= v63 )
          {
            v19 = 0;
            goto LABEL_17;
          }
          v14 = a3;
        }
        _mm_lfence();
        v31 = *((_QWORD *)v28 + 1);
        v32 = 8 * v30;
        goto LABEL_13;
      }
    }
    else if ( (_DWORD)v24 )
    {
      do
      {
        v25->hg = *(_DWORD *)(*(_QWORD *)a3 + 456LL);
        v25->pgdf = (GLYPHDEF *)RFONTOBJ::pgdDefault(a3);
        ++v25;
        LODWORD(v24) = v24 - 1;
      }
      while ( (_DWORD)v24 );
      v19 = 0;
    }
LABEL_18:
    v36 = *((_QWORD *)a1 + 9);
    a1[16] |= 2u;
    *((_QWORD *)a1 + 4) = v36;
LABEL_19:
    v37 = a2;
    goto LABEL_20;
  }
  v37 = a2;
  result = (struct _GLYPHDATA *)RFONTOBJ::bGetGlyphMetrics(
                                  v14,
                                  v24,
                                  v16,
                                  (unsigned __int16 *)v18,
                                  a2,
                                  (struct ESTROBJ *)a1);
  if ( !(_DWORD)result )
    return result;
LABEL_20:
  if ( (a1[1] & 0x30) != 0x30 || (v50 = a1[31], v50 < 0) || a1[32] )
  {
    v38 = *a1;
    v39 = 0;
    while ( 1 )
    {
      v40 = (_DWORD *)p_ptl[-1];
      v41 = v40[3];
      v42 = v21 + v40[4];
      if ( v42 >= v39 )
        v42 = v39;
      v39 = v42;
      v43 = v21 + v40[5];
      if ( v43 <= v19 )
        v43 = v19;
      v21 += v41;
      v19 = v43;
      v44 = a1[31];
      if ( v44 && (int)(v44 + v41) > 0 )
        v21 += v44;
      if ( p_ptl[-2].x == v64 )
        v21 += a1[32];
      if ( !--v38 )
        break;
      p_ptl += 3;
      p_ptl->y = v59;
      p_ptl->x = (v21 + v67) >> 4;
    }
    if ( v21 <= v19 )
      goto LABEL_33;
  }
  else
  {
    v21 = v50 + HIDWORD(v61->pgdf[1].ppo);
    v51 = *a1 - 1;
    if ( *a1 != 1 )
    {
      do
      {
        p_y += 6;
        *(p_y - 1) = (v21 + v67) >> 4;
        *p_y = v59;
        v21 += a1[31] + *(_DWORD *)(*(_QWORD *)(p_y - 3) + 12LL);
        --v51;
      }
      while ( v51 );
    }
    v39 = 0;
  }
  v19 = v21;
LABEL_33:
  a1[30] = v21;
  a1[22] = v21;
  a1[23] = 0;
  a1[26] = v39;
  a1[28] = v19;
  v45 = *(_QWORD *)a3;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v37 + 80LL) + 352LL) & 0x40) != 0 )
  {
    a1[27] = -*(_DWORD *)(v45 + 312);
    result = *(struct _GLYPHDATA **)a3;
    v47 = -*(_DWORD *)(*(_QWORD *)a3 + 308LL);
  }
  else
  {
    a1[27] = *(_DWORD *)(v45 + 308);
    result = *(struct _GLYPHDATA **)a3;
    v47 = *(_DWORD *)(*(_QWORD *)a3 + 312LL);
  }
  a1[16] |= 4u;
  a1[29] = v47;
  return result;
}
