/*
 * XREFs of ?vCharPos_H1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJVEFLOAT@@@Z @ 0x1C0025170
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
 *     ?pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ @ 0x1C0135730 (-pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ.c)
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
  struct _GLYPHPOS *v8; // rbx
  RFONTOBJ *v9; // r15
  unsigned __int16 *v10; // r12
  struct ESTROBJ *v11; // rbp
  int v12; // xmm6_4
  int v13; // r10d
  unsigned __int16 *v14; // rdi
  __int64 v15; // r14
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
  int v28; // r13d
  int v29; // r14d
  int v30; // edi
  LONG *p_y; // rbx
  int v32; // r12d
  int v33; // esi
  __int64 v34; // r8
  int v35; // r15d
  _DWORD *v36; // rbp
  __int64 v37; // rcx
  __int64 v38; // rax
  struct _GLYPHDATA *result; // rax
  int v40; // ecx
  int v41; // r9d
  _DWORD *v42; // r10
  __int64 v43; // rdx
  int v44; // ecx
  int v45; // ecx
  struct GPRUN *Run; // rax
  __int64 v47; // rbx
  int v48; // ecx
  __int64 v49; // r8
  __int64 v50; // r8
  int v51; // [rsp+40h] [rbp-68h]
  int v52; // [rsp+44h] [rbp-64h] BYREF
  _BOOL8 v53; // [rsp+48h] [rbp-60h]
  struct _GLYPHPOS *v54; // [rsp+50h] [rbp-58h]
  struct XDCOBJ *v56; // [rsp+B8h] [rbp+10h]

  v56 = a2;
  v9 = a3;
  v10 = (unsigned __int16 *)*((_QWORD *)a1 + 5);
  v11 = (struct ESTROBJ *)a1;
  v12 = a7;
  v13 = *(_DWORD *)(*(_QWORD *)a3 + 268LL) & 0x40 | 2;
  v54 = (struct _GLYPHPOS *)*((_QWORD *)a1 + 9);
  v8 = v54;
  a1[1] |= v13;
  v53 = *(float *)&v12 == 16.0;
  v14 = v10;
  v15 = *a1;
  v16 = v8;
  v51 = *a1;
  if ( !*(_QWORD *)(*(_QWORD *)a3 + 480LL) )
  {
    result = (struct _GLYPHDATA *)RFONTOBJ::bAllocateCache(a3, a2);
    if ( !(_DWORD)result )
      return result;
    a2 = v56;
  }
  v17 = *(_QWORD *)v9;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v9 + 96LL) + 1840LL) & 0x40000000) != 0 && *(_DWORD *)(v17 + 72) == 1 )
  {
    result = (struct _GLYPHDATA *)RFONTOBJ::bGetGlyphMetrics(v9, v15, v8, v10, a2, v11);
    if ( (_DWORD)result )
      goto LABEL_13;
    return result;
  }
  v18 = *(_DWORD **)(v17 + 480);
  a7 = 1;
  if ( !*v18 )
  {
    for ( ; (_DWORD)v15; LODWORD(v15) = v15 - 1 )
    {
      v16->hg = *(_DWORD *)(*(_QWORD *)v9 + 456LL);
      v16->pgdf = (GLYPHDEF *)RFONTOBJ::pgdDefault(v9);
      ++v16;
    }
    goto LABEL_12;
  }
  v19 = (struct GPRUN *)(v18 + 4);
  v20 = &v10[v15];
  if ( v10 >= v20 )
  {
    v9 = a3;
LABEL_12:
    v11 = (struct ESTROBJ *)a1;
    v27 = *((_QWORD *)a1 + 9);
    a1[16] |= 2u;
    *((_QWORD *)a1 + 4) = v27;
    goto LABEL_13;
  }
  do
  {
    v21 = *v14;
    v22 = (unsigned int)(v21 - *(_DWORD *)v19);
    if ( (unsigned int)v22 < *((_DWORD *)v19 + 1) )
    {
      _mm_lfence();
      v23 = *((_QWORD *)v19 + 1);
      v24 = 8 * v22;
LABEL_7:
      v25 = (struct _GLYPHDATA **)(v24 + v23);
      v26 = *v25;
      if ( !*v25 )
      {
        result = (struct _GLYPHDATA *)RFONTOBJ::bInsertMetricsPlus(a3, v25, *v14);
        if ( !(_DWORD)result )
          return result;
        v26 = *(struct _GLYPHDATA **)(v24 + *((_QWORD *)v19 + 1));
      }
      LODWORD(v15) = v51;
      goto LABEL_9;
    }
    Run = RFONTOBJ::gprunFindRun(a3, v21);
    v19 = Run;
    v47 = (unsigned int)(v21 - *(_DWORD *)Run);
    if ( (unsigned int)v47 < *((_DWORD *)Run + 1) )
    {
      _mm_lfence();
      v23 = *((_QWORD *)Run + 1);
      v24 = 8 * v47;
      goto LABEL_7;
    }
    result = RFONTOBJ::wpgdGetLinkMetricsPlus(a3, v56, (struct ESTROBJ *)a1, v14, v10, v15, &a7, 1);
    v26 = result;
    if ( !result )
      return result;
LABEL_9:
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
  }
  while ( v14 < v20 );
  v8 = v54;
  v9 = a3;
  if ( *(float *)&a7 != 0.0 )
    goto LABEL_12;
  v11 = (struct ESTROBJ *)a1;
LABEL_13:
  v28 = a4 + 8;
  v29 = 0;
  v8->ptl.x = v28 >> 4;
  v30 = 0;
  p_y = &v8->ptl.y;
  v32 = (a5 + 8) >> 4;
  v33 = 0;
  LODWORD(v34) = 0;
  *p_y = v32;
  if ( (*(_DWORD *)(*(_QWORD *)v9 + 268LL) & 0x10) == 0 || (*((_DWORD *)v11 + 16) & 0x1400) != 0 )
  {
    v41 = *(_DWORD *)v11;
    v42 = a6;
    while ( 1 )
    {
      v43 = *(_QWORD *)(p_y - 3);
      ++v42;
      v44 = v34 + *(_DWORD *)(v43 + 16);
      if ( v44 >= v29 )
        v44 = v29;
      v29 = v44;
      v45 = v34 + *(_DWORD *)(v43 + 20);
      if ( v45 <= v30 )
        v45 = v30;
      v33 += *(v42 - 1);
      v30 = v45;
      if ( v53 )
      {
        LODWORD(v34) = 16 * v33;
      }
      else
      {
        LODWORD(v34) = 0;
        *(float *)&a7 = (float)v33 * *(float *)&v12;
        v48 = (unsigned __int8)(a7 >> 23) - 118;
        if ( v48 <= 40 )
        {
          v49 = a7 & 0x7FFFFF | 0x800000LL;
          v50 = v48 < 0 ? v49 >> (118 - (unsigned __int8)(a7 >> 23)) : v49 << v48;
          v34 = (v50 + 0x80000000LL) >> 32;
          if ( a7 < 0 )
            LODWORD(v34) = -(int)v34;
        }
      }
      if ( !--v41 )
        break;
      p_y += 6;
      *p_y = v32;
      *(p_y - 1) = ((int)v34 + v28) >> 4;
    }
  }
  else
  {
    v35 = *(_DWORD *)v11;
    v36 = a6;
    while ( 1 )
    {
      if ( (int)v34 < v29 )
        v29 = v34;
      v37 = (unsigned int)(v34 + *(_DWORD *)(*(_QWORD *)(p_y - 3) + 12LL));
      if ( (int)v37 > v30 )
        v30 = v34 + *(_DWORD *)(*(_QWORD *)(p_y - 3) + 12LL);
      v33 += *v36++;
      if ( v53 )
      {
        LODWORD(v34) = 16 * v33;
      }
      else
      {
        v52 = 0;
        bFToL(v37, &v52, 0LL);
        LODWORD(v34) = v52;
      }
      if ( !--v35 )
        break;
      p_y += 6;
      *p_y = v32;
      *(p_y - 1) = ((int)v34 + v28) >> 4;
    }
    v11 = (struct ESTROBJ *)a1;
    v9 = a3;
  }
  *((_DWORD *)v11 + 22) = v34;
  *((_DWORD *)v11 + 23) = 0;
  if ( (int)v34 > v30 )
    v30 = v34;
  *((_DWORD *)v11 + 28) = v30;
  *((_DWORD *)v11 + 26) = v29;
  v38 = *(_QWORD *)v9;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v56 + 80LL) + 352LL) & 0x40) != 0 )
  {
    *((_DWORD *)v11 + 27) = -*(_DWORD *)(v38 + 312);
    result = *(struct _GLYPHDATA **)v9;
    v40 = -*(_DWORD *)(*(_QWORD *)v9 + 308LL);
  }
  else
  {
    *((_DWORD *)v11 + 27) = *(_DWORD *)(v38 + 308);
    result = *(struct _GLYPHDATA **)v9;
    v40 = *(_DWORD *)(*(_QWORD *)v9 + 312LL);
  }
  *((_DWORD *)v11 + 16) |= 4u;
  *((_DWORD *)v11 + 29) = v40;
  return result;
}
