/*
 * XREFs of ?bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C008AE30
 * Callers:
 *     ?vCharPos_G2@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJPEAJ@Z @ 0x1C0004120 (-vCharPos_G2@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJPEAJ@Z.c)
 *     ?vCharPos_H4@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJVEFLOAT@@3@Z @ 0x1C01280D4 (-vCharPos_H4@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJVEFLOAT@@3@Z.c)
 *     ?vCharPos_G1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJ2@Z @ 0x1C029A140 (-vCharPos_G1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJ2@Z.c)
 *     ?vCharPos_G3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJPEAJ2@Z @ 0x1C029A384 (-vCharPos_G3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJPEAJ2@Z.c)
 *     ?vCharPos_G4@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJ@Z @ 0x1C029A860 (-vCharPos_G4@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJ@Z.c)
 *     ?vInitSimple@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAX@Z @ 0x1C029AE38 (-vInitSimple@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAX@Z.c)
 * Callees:
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C008A828 (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z @ 0x1C008D508 (-bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z.c)
 *     ?bInsertMetricsPlus@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x1C008D8AC (-bInsertMetricsPlus@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z.c)
 *     ?gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z @ 0x1C008D8FC (-gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z.c)
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEAG2KPEAHH@Z @ 0x1C008EDA0 (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEAG2KPEAHH@Z.c)
 *     ?bInsertGlyphbits@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z @ 0x1C008FEE8 (-bInsertGlyphbits@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z.c)
 *     ?pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ @ 0x1C01308FC (-pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ.c)
 */

__int64 __fastcall RFONTOBJ::bGetGlyphMetricsPlus(
        RFONTOBJ *this,
        struct RFONTOBJ *a2,
        struct _GLYPHPOS *a3,
        unsigned __int16 *a4,
        int *a5,
        struct XDCOBJ *a6,
        struct ESTROBJ *a7)
{
  __int64 v9; // r15
  __int64 v11; // rdx
  unsigned int v12; // ebx
  _DWORD *v13; // r13
  bool v14; // zf
  struct GPRUN *v15; // r13
  int v16; // ebp
  __int64 v17; // r12
  struct _GLYPHDATA *LinkMetricsPlus; // rbp
  __int64 result; // rax
  struct GPRUN *Run; // rax
  unsigned __int16 *v21; // [rsp+40h] [rbp-38h]
  unsigned __int16 *v22; // [rsp+48h] [rbp-30h]
  unsigned __int16 *v23; // [rsp+80h] [rbp+8h]

  v9 = (unsigned int)a2;
  if ( *(_QWORD *)(*(_QWORD *)this + 480LL) || (result = RFONTOBJ::bAllocateCache(this, a2), (_DWORD)result) )
  {
    v11 = *(_QWORD *)this;
    v12 = 1;
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 96LL) + 1840LL) & 0x40000000) != 0 && *(_DWORD *)(v11 + 72) == 1 )
    {
      if ( a5 )
        *a5 = 0;
      return (unsigned int)RFONTOBJ::bGetGlyphMetrics(this, (struct RFONTOBJ *)(unsigned int)v9, a3, a4, a6, a7);
    }
    else
    {
      v13 = *(_DWORD **)(v11 + 480);
      v23 = a4;
      v21 = a4;
      v14 = *v13 == 0;
      *a5 = 1;
      if ( !v14 )
      {
        v15 = (struct GPRUN *)(v13 + 4);
        v22 = &a4[v9];
        if ( a4 >= v22 )
          return v12;
        while ( 1 )
        {
          v16 = *a4;
          v17 = (unsigned int)(v16 - *(_DWORD *)v15);
          if ( (unsigned int)v17 >= *((_DWORD *)v15 + 1) )
          {
            Run = RFONTOBJ::gprunFindRun(this, v16);
            v15 = Run;
            v17 = (unsigned int)(v16 - *(_DWORD *)Run);
            if ( (unsigned int)v17 >= *((_DWORD *)Run + 1) )
            {
              LinkMetricsPlus = RFONTOBJ::wpgdGetLinkMetricsPlus(this, a6, a7, a4, v23, v9, a5, 1);
              if ( !LinkMetricsPlus )
                return 0;
            }
            else
            {
              _mm_lfence();
              LinkMetricsPlus = *(struct _GLYPHDATA **)(*((_QWORD *)Run + 1) + 8 * v17);
            }
          }
          else
          {
            _mm_lfence();
            LinkMetricsPlus = *(struct _GLYPHDATA **)(*((_QWORD *)v15 + 1) + 8 * v17);
          }
          if ( !LinkMetricsPlus )
          {
            if ( !(unsigned int)RFONTOBJ::bInsertMetricsPlus(
                                  this,
                                  (struct _GLYPHDATA **)(*((_QWORD *)v15 + 1) + 8 * v17),
                                  *a4) )
              return 0;
            LinkMetricsPlus = *(struct _GLYPHDATA **)(*((_QWORD *)v15 + 1) + 8 * v17);
          }
          if ( !LinkMetricsPlus->gdf.pgb
            && *a5
            && *(_DWORD *)(*(_QWORD *)this + 72LL)
            && !(unsigned int)RFONTOBJ::bInsertGlyphbits(this, LinkMetricsPlus, a4 == v21) )
          {
            *a5 = 0;
          }
          ++a4;
          a3->hg = LinkMetricsPlus->hg;
          a3->pgdf = &LinkMetricsPlus->gdf;
          ++a3;
          if ( a4 >= v22 )
            return v12;
        }
      }
      for ( ; (_DWORD)v9; LODWORD(v9) = v9 - 1 )
      {
        a3->hg = *(_DWORD *)(*(_QWORD *)this + 456LL);
        a3->pgdf = (GLYPHDEF *)RFONTOBJ::pgdDefault(this);
        ++a3;
      }
    }
    return v12;
  }
  return result;
}
