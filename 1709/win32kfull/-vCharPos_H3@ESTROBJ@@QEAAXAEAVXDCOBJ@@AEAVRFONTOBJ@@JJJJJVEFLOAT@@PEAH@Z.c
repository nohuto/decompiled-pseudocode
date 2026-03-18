/*
 * XREFs of ?vCharPos_H3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJVEFLOAT@@PEAH@Z @ 0x1C0024D08
 * Callers:
 *     ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C0025620 (-vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 * Callees:
 *     ?bInsertGlyphbits@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z @ 0x1C0032534 (-bInsertGlyphbits@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z.c)
 *     ?bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z @ 0x1C0033408 (-bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z.c)
 *     ?gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z @ 0x1C00337B4 (-gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z.c)
 *     ?bInsertMetricsPlus@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x1C0033A10 (-bInsertMetricsPlus@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z.c)
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEAG2KPEAHH@Z @ 0x1C0034CC8 (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEAG2KPEAHH@Z.c)
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C00361C8 (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     bFToL @ 0x1C00F1FA8 (bFToL.c)
 *     ?bCalcBreakExtra@@YAEVEFLOAT@@JJPEAJ@Z @ 0x1C011C5F4 (-bCalcBreakExtra@@YAEVEFLOAT@@JJPEAJ@Z.c)
 *     ?pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ @ 0x1C0135730 (-pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ.c)
 */

__int64 __fastcall ESTROBJ::vCharPos_H3(
        unsigned int *a1,
        struct XDCOBJ *a2,
        RFONTOBJ *a3,
        int a4,
        int a5,
        int a6,
        int a7,
        unsigned int a8,
        unsigned int a9,
        unsigned __int16 *a10)
{
  int v11; // r8d
  __int64 v15; // rax
  struct _GLYPHPOS *v16; // r10
  int v17; // ebp
  unsigned __int16 *v18; // rdx
  int v19; // edi
  LONG *p_y; // r14
  unsigned __int16 *v21; // rax
  __int64 v22; // rax
  unsigned __int16 *v23; // r9
  __int64 v24; // r13
  struct _GLYPHPOS *v25; // r12
  __int64 v26; // r8
  _DWORD *v27; // r15
  int v28; // ebp
  struct GPRUN *v29; // r15
  int v30; // r14d
  __int64 v31; // rbp
  struct _GLYPHDATA *v32; // r14
  __int64 result; // rax
  __int64 v34; // rax
  int v35; // r8d
  signed int v36; // r9d
  signed int v37; // r10d
  int *i; // r11
  _DWORD *v39; // rdx
  int v40; // eax
  int v41; // ecx
  int v42; // ecx
  unsigned int v43; // ecx
  __int64 v44; // rax
  int v45; // ecx
  int v46; // edx
  int v47; // edx
  struct GPRUN *Run; // rax
  __m128i v49; // xmm1
  __int64 v50; // rcx
  int v51; // r8d
  _DWORD *v52; // rdi
  unsigned int v53; // edx
  int v54; // ecx
  int v55; // eax
  unsigned __int16 *v56; // [rsp+48h] [rbp-60h]
  struct _GLYPHPOS *v57; // [rsp+50h] [rbp-58h]
  unsigned __int16 *v58; // [rsp+58h] [rbp-50h]
  LONG *v59; // [rsp+60h] [rbp-48h]
  POINTL *p_ptl; // [rsp+68h] [rbp-40h]
  int v61; // [rsp+B0h] [rbp+8h]
  int v63; // [rsp+C8h] [rbp+20h]
  int v64; // [rsp+D0h] [rbp+28h]

  v61 = 0;
  v11 = a6;
  v15 = *(_QWORD *)a3;
  if ( a7 | a6 )
  {
    v49 = (__m128i)a9;
    v50 = *(_DWORD *)(v15 + 268) & 0x40 | 2u;
    a1[1] |= v50;
    if ( v11 )
    {
      a6 = 0;
      bFToL(v50, &a6, 0LL);
      v51 = a6;
      a1[31] = a6;
      if ( v51 > 0 )
        a1[1] |= 0x800u;
    }
    v52 = a1 + 32;
    if ( (unsigned __int8)bCalcBreakExtra((unsigned int)_mm_cvtsi128_si32(v49), (unsigned int)a7, a8, a1 + 32) )
    {
      v53 = a1[31];
      v54 = *(_DWORD *)(*(_QWORD *)a3 + 464LL);
      if ( (int)(v54 + v53 + *v52) < 0 )
        *v52 = -(v53 + v54);
      v55 = *(_DWORD *)(*(_QWORD *)a3 + 460LL);
      a1[1] |= 0x1000u;
      v61 = v55;
    }
  }
  else
  {
    a1[1] |= *(_DWORD *)(v15 + 268) & 0x71 | 2;
  }
  v16 = (struct _GLYPHPOS *)*((_QWORD *)a1 + 9);
  v17 = a4 + 8;
  v18 = (unsigned __int16 *)*((_QWORD *)a1 + 5);
  v19 = 0;
  p_y = &v16->ptl.y;
  v16->ptl.x = v17 >> 4;
  v21 = a10;
  v57 = v16;
  v56 = v18;
  v63 = v17;
  v64 = (a5 + 8) >> 4;
  p_ptl = &v16->ptl;
  v59 = &v16->ptl.y;
  v16->ptl.y = v64;
  if ( v21 )
  {
    v28 = *(_DWORD *)v21;
  }
  else
  {
    v22 = *(_QWORD *)a3;
    v23 = v18;
    v24 = *a1;
    v25 = v16;
    a10 = v18;
    if ( !*(_QWORD *)(v22 + 480) )
    {
      result = RFONTOBJ::bAllocateCache(a3, (struct RFONTOBJ *)v18);
      if ( !(_DWORD)result )
        return result;
      v23 = a10;
      v16 = v25;
      v18 = a10;
    }
    v26 = *(_QWORD *)a3;
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a3 + 96LL) + 1840LL) & 0x40000000) != 0 && *(_DWORD *)(v26 + 72) == 1 )
    {
      v28 = 0;
      result = RFONTOBJ::bGetGlyphMetrics(a3, v24, v16, v18, a2, (struct ESTROBJ *)a1);
    }
    else
    {
      v27 = *(_DWORD **)(v26 + 480);
      v28 = 1;
      a7 = 1;
      if ( !*v27 )
      {
        for ( ; (_DWORD)v24; LODWORD(v24) = v24 - 1 )
        {
          v25->hg = *(_DWORD *)(*(_QWORD *)a3 + 456LL);
          v25->pgdf = (GLYPHDEF *)RFONTOBJ::pgdDefault(a3);
          ++v25;
        }
        goto LABEL_18;
      }
      v29 = (struct GPRUN *)(v27 + 4);
      v58 = &v18[v24];
      if ( v18 < v58 )
      {
        do
        {
          v30 = *v23;
          v31 = (unsigned int)(v30 - *(_DWORD *)v29);
          if ( (unsigned int)v31 >= *((_DWORD *)v29 + 1) )
          {
            Run = RFONTOBJ::gprunFindRun(a3, v30);
            v23 = a10;
            v29 = Run;
            v31 = (unsigned int)(v30 - *(_DWORD *)Run);
            if ( (unsigned int)v31 >= *((_DWORD *)Run + 1) )
            {
              result = (__int64)RFONTOBJ::wpgdGetLinkMetricsPlus(a3, a2, (struct ESTROBJ *)a1, a10, v56, v24, &a7, 1);
              v32 = (struct _GLYPHDATA *)result;
              if ( !result )
                return result;
              v23 = a10;
            }
            else
            {
              _mm_lfence();
              v32 = *(struct _GLYPHDATA **)(*((_QWORD *)Run + 1) + 8 * v31);
            }
          }
          else
          {
            _mm_lfence();
            v32 = *(struct _GLYPHDATA **)(*((_QWORD *)v29 + 1) + 8 * v31);
          }
          if ( !v32 )
          {
            result = RFONTOBJ::bInsertMetricsPlus(a3, (struct _GLYPHDATA **)(*((_QWORD *)v29 + 1) + 8 * v31), *v23);
            if ( !(_DWORD)result )
              return result;
            v32 = *(struct _GLYPHDATA **)(*((_QWORD *)v29 + 1) + 8 * v31);
          }
          v28 = a7;
          if ( !v32->gdf.pgb && a7 && *(_DWORD *)(*(_QWORD *)a3 + 72LL) )
          {
            v28 &= -((unsigned int)RFONTOBJ::bInsertGlyphbits(a3, v32, a10 == v56) != 0);
            a7 = v28;
          }
          v23 = a10 + 1;
          v25->hg = v32->hg;
          v25->pgdf = &v32->gdf;
          ++v25;
          a10 = v23;
        }
        while ( v23 < v58 );
        p_y = v59;
      }
      result = 1LL;
    }
    if ( !(_DWORD)result )
      return result;
  }
  if ( v28 )
  {
LABEL_18:
    v34 = *((_QWORD *)a1 + 9);
    a1[16] |= 2u;
    *((_QWORD *)a1 + 4) = v34;
  }
  if ( (a1[1] & 0x30) != 0x30 || (v46 = a1[31], v46 < 0) || a1[32] )
  {
    v35 = *a1;
    v36 = 0;
    v37 = 0;
    for ( i = (int *)p_ptl; ; *i = (v19 + v63) >> 4 )
    {
      v39 = (_DWORD *)*((_QWORD *)i - 1);
      v40 = v39[3];
      v41 = v19 + v39[4];
      if ( v41 >= v36 )
        v41 = v36;
      v36 = v41;
      v42 = v19 + v39[5];
      if ( v42 <= v37 )
        v42 = v37;
      v19 += v40;
      v37 = v42;
      v43 = a1[31];
      if ( v43 && (int)(v43 + v40) > 0 )
        v19 += v43;
      if ( *(i - 4) == v61 )
        v19 += a1[32];
      if ( !--v35 )
        break;
      i += 6;
      i[1] = v64;
    }
    if ( v19 <= v37 )
      goto LABEL_32;
  }
  else
  {
    v19 = v46 + HIDWORD(v57->pgdf[1].ppo);
    v47 = *a1 - 1;
    if ( *a1 != 1 )
    {
      do
      {
        p_y += 6;
        *(p_y - 1) = (v19 + v63) >> 4;
        *p_y = v64;
        v19 += a1[31] + *(_DWORD *)(*(_QWORD *)(p_y - 3) + 12LL);
        --v47;
      }
      while ( v47 );
    }
    v36 = 0;
  }
  v37 = v19;
LABEL_32:
  a1[23] = 0;
  a1[30] = v19;
  a1[22] = v19;
  a1[26] = v36;
  a1[28] = v37;
  v44 = *(_QWORD *)a3;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 80LL) + 352LL) & 0x40) != 0 )
  {
    a1[27] = -*(_DWORD *)(v44 + 312);
    result = *(_QWORD *)a3;
    v45 = -*(_DWORD *)(*(_QWORD *)a3 + 308LL);
  }
  else
  {
    a1[27] = *(_DWORD *)(v44 + 308);
    result = *(_QWORD *)a3;
    v45 = *(_DWORD *)(*(_QWORD *)a3 + 312LL);
  }
  a1[16] |= 4u;
  a1[29] = v45;
  return result;
}
