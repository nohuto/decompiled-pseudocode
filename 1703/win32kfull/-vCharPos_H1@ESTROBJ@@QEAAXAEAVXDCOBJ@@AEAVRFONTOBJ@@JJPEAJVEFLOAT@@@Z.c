/*
 * XREFs of ?vCharPos_H1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJVEFLOAT@@@Z @ 0x1C007C5A0
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
 *     ?pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ @ 0x1C01308FC (-pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ.c)
 */

struct _GLYPHDATA *__fastcall ESTROBJ::vCharPos_H1(
        unsigned int *a1,
        struct RFONTOBJ *a2,
        RFONTOBJ *a3,
        int a4,
        int a5,
        _DWORD *a6,
        int a7)
{
  struct _GLYPHPOS *v8; // r14
  struct ESTROBJ *v9; // r13
  unsigned __int16 *v10; // r12
  int v11; // xmm6_4
  int v12; // r10d
  __int64 v13; // rax
  unsigned __int16 *v14; // rdi
  __int64 v15; // rbx
  struct _GLYPHPOS *v16; // rsi
  __int64 v17; // r8
  _DWORD *v18; // rbp
  struct GPRUN *v19; // rbp
  unsigned __int16 *v20; // r15
  int v21; // ebx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r14
  struct _GLYPHDATA **v25; // rdx
  struct _GLYPHDATA *v26; // rbx
  __int64 v27; // rax
  LONG *p_y; // rbx
  int v29; // r11d
  int v30; // r12d
  int v31; // r15d
  int v32; // ebp
  int v33; // edi
  __int64 v34; // r8
  int v35; // r14d
  _DWORD *v36; // rsi
  __int64 v37; // rcx
  __int64 v38; // rax
  struct _GLYPHDATA *result; // rax
  int v40; // ecx
  int v41; // r9d
  _BOOL8 v42; // r13
  _DWORD *v43; // r10
  __int64 v44; // rdx
  int v45; // ecx
  int v46; // ecx
  int v47; // ecx
  __int64 v48; // r8
  __int64 v49; // r8
  struct GPRUN *Run; // rax
  __int64 v51; // rbx
  int v52; // [rsp+40h] [rbp-78h] BYREF
  unsigned int v53; // [rsp+44h] [rbp-74h]
  _BOOL8 v54; // [rsp+48h] [rbp-70h]
  struct _GLYPHPOS *v55; // [rsp+50h] [rbp-68h]
  struct XDCOBJ *v57; // [rsp+C8h] [rbp+10h]
  int v60; // [rsp+D8h] [rbp+20h]

  v57 = a2;
  v9 = (struct ESTROBJ *)a1;
  v10 = (unsigned __int16 *)*((_QWORD *)a1 + 5);
  v11 = a7;
  v12 = *(_DWORD *)(*(_QWORD *)a3 + 268LL) & 0x40 | 2;
  v55 = (struct _GLYPHPOS *)*((_QWORD *)a1 + 9);
  v8 = v55;
  a1[1] |= v12;
  v54 = *(float *)&v11 == 16.0;
  v13 = *(_QWORD *)a3;
  v14 = v10;
  v15 = *a1;
  v16 = v8;
  v53 = *a1;
  if ( !*(_QWORD *)(v13 + 480) )
  {
    result = (struct _GLYPHDATA *)RFONTOBJ::bAllocateCache(a3, a2);
    if ( !(_DWORD)result )
      return result;
    a2 = v57;
  }
  v17 = *(_QWORD *)a3;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a3 + 96LL) + 1840LL) & 0x40000000) != 0 && *(_DWORD *)(v17 + 72) == 1 )
  {
    result = (struct _GLYPHDATA *)RFONTOBJ::bGetGlyphMetrics(a3, v15, v8, v10, a2, v9);
    if ( (_DWORD)result )
      goto LABEL_12;
    return result;
  }
  v18 = *(_DWORD **)(v17 + 480);
  a7 = 1;
  if ( *v18 )
  {
    v19 = (struct GPRUN *)(v18 + 4);
    v20 = &v10[v15];
    if ( v10 >= v20 )
      goto LABEL_11;
    while ( 1 )
    {
      v21 = *v14;
      v22 = (unsigned int)(v21 - *(_DWORD *)v19);
      if ( (unsigned int)v22 >= *((_DWORD *)v19 + 1) )
      {
        Run = RFONTOBJ::gprunFindRun(a3, v21);
        v19 = Run;
        v51 = (unsigned int)(v21 - *(_DWORD *)Run);
        if ( (unsigned int)v51 >= *((_DWORD *)Run + 1) )
        {
          result = RFONTOBJ::wpgdGetLinkMetricsPlus(a3, v57, v9, v14, v10, v53, &a7, 1);
          v26 = result;
          if ( !result )
            return result;
          goto LABEL_8;
        }
        _mm_lfence();
        v23 = *((_QWORD *)Run + 1);
        v24 = 8 * v51;
      }
      else
      {
        _mm_lfence();
        v23 = *((_QWORD *)v19 + 1);
        v24 = 8 * v22;
      }
      v25 = (struct _GLYPHDATA **)(v24 + v23);
      v26 = *v25;
      if ( !*v25 )
      {
        result = (struct _GLYPHDATA *)RFONTOBJ::bInsertMetricsPlus(a3, v25, *v14);
        if ( !(_DWORD)result )
          return result;
        v26 = *(struct _GLYPHDATA **)(v24 + *((_QWORD *)v19 + 1));
      }
LABEL_8:
      if ( !v26->gdf.pgb
        && *(float *)&a7 != 0.0
        && *(_DWORD *)(*(_QWORD *)a3 + 72LL)
        && !(unsigned int)RFONTOBJ::bInsertGlyphbits(a3, v26, v14 == v10) )
      {
        *(float *)&a7 = 0.0;
      }
      ++v14;
      v16->hg = v26->hg;
      v16->pgdf = &v26->gdf;
      ++v16;
      if ( v14 >= v20 )
      {
        v8 = v55;
        if ( *(float *)&a7 != 0.0 )
          goto LABEL_11;
        goto LABEL_12;
      }
    }
  }
  for ( ; (_DWORD)v15; LODWORD(v15) = v15 - 1 )
  {
    v16->hg = *(_DWORD *)(*(_QWORD *)a3 + 456LL);
    v16->pgdf = (GLYPHDEF *)RFONTOBJ::pgdDefault(a3);
    ++v16;
  }
LABEL_11:
  v27 = *((_QWORD *)v9 + 9);
  *((_DWORD *)v9 + 16) |= 2u;
  *((_QWORD *)v9 + 4) = v27;
LABEL_12:
  p_y = &v8->ptl.y;
  v29 = a4 + 8;
  v30 = (a5 + 8) >> 4;
  v31 = 0;
  v8->ptl.x = (a4 + 8) >> 4;
  v32 = 0;
  v8->ptl.y = v30;
  v33 = 0;
  LODWORD(v34) = 0;
  v60 = a4 + 8;
  if ( (*(_DWORD *)(*(_QWORD *)a3 + 268LL) & 0x10) == 0 || (*((_DWORD *)v9 + 16) & 0x1400) != 0 )
  {
    v41 = *(_DWORD *)v9;
    v42 = v54;
    v43 = a6;
    while ( 1 )
    {
      v44 = *(_QWORD *)(p_y - 3);
      ++v43;
      v45 = v34 + *(_DWORD *)(v44 + 16);
      if ( v45 >= v31 )
        v45 = v31;
      v31 = v45;
      v46 = v34 + *(_DWORD *)(v44 + 20);
      if ( v46 <= v32 )
        v46 = v32;
      v33 += *(v43 - 1);
      v32 = v46;
      if ( v42 )
      {
        LODWORD(v34) = 16 * v33;
      }
      else
      {
        LODWORD(v34) = 0;
        *(float *)&a7 = (float)v33 * *(float *)&v11;
        v47 = (unsigned __int8)(a7 >> 23) - 118;
        if ( v47 <= 40 )
        {
          v48 = a7 & 0x7FFFFF | 0x800000LL;
          v49 = v47 < 0 ? v48 >> (118 - (unsigned __int8)(a7 >> 23)) : v48 << v47;
          v34 = (v49 + 0x80000000LL) >> 32;
          if ( a7 < 0 )
            LODWORD(v34) = -(int)v34;
        }
      }
      if ( !--v41 )
        break;
      p_y += 6;
      *p_y = v30;
      *(p_y - 1) = ((int)v34 + v29) >> 4;
    }
    v9 = (struct ESTROBJ *)a1;
  }
  else
  {
    v35 = *(_DWORD *)v9;
    v36 = a6;
    while ( 1 )
    {
      if ( (int)v34 < v31 )
        v31 = v34;
      v37 = (unsigned int)(v34 + *(_DWORD *)(*(_QWORD *)(p_y - 3) + 12LL));
      if ( (int)v37 > v32 )
        v32 = v34 + *(_DWORD *)(*(_QWORD *)(p_y - 3) + 12LL);
      v33 += *v36++;
      if ( v54 )
      {
        LODWORD(v34) = 16 * v33;
      }
      else
      {
        v52 = 0;
        bFToL(v37, &v52, 0LL);
        v29 = v60;
        LODWORD(v34) = v52;
      }
      if ( !--v35 )
        break;
      p_y += 6;
      *p_y = v30;
      *(p_y - 1) = ((int)v34 + v29) >> 4;
    }
  }
  *((_DWORD *)v9 + 22) = v34;
  if ( (int)v34 > v32 )
    v32 = v34;
  *((_DWORD *)v9 + 28) = v32;
  *((_DWORD *)v9 + 23) = 0;
  *((_DWORD *)v9 + 26) = v31;
  v38 = *(_QWORD *)a3;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v57 + 80LL) + 352LL) & 0x40) != 0 )
  {
    *((_DWORD *)v9 + 27) = -*(_DWORD *)(v38 + 312);
    result = *(struct _GLYPHDATA **)a3;
    v40 = -*(_DWORD *)(*(_QWORD *)a3 + 308LL);
  }
  else
  {
    *((_DWORD *)v9 + 27) = *(_DWORD *)(v38 + 308);
    result = *(struct _GLYPHDATA **)a3;
    v40 = *(_DWORD *)(*(_QWORD *)a3 + 312LL);
  }
  *((_DWORD *)v9 + 16) |= 4u;
  *((_DWORD *)v9 + 29) = v40;
  return result;
}
