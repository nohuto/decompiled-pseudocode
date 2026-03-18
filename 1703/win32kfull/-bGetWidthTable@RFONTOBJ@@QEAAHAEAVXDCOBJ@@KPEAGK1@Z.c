/*
 * XREFs of ?bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z @ 0x1C008CAB4
 * Callers:
 *     NtGdiGetWidthTable @ 0x1C00E2570 (NtGdiGetWidthTable.c)
 * Callees:
 *     ??0ATTACHOBJ@@QEAA@PEAVPDEVOBJ@@@Z @ 0x1C0032F14 (--0ATTACHOBJ@@QEAA@PEAVPDEVOBJ@@@Z.c)
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C008A828 (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEAGIPEAKKH@Z @ 0x1C008C0B0 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEAGIPEAKKH@Z.c)
 *     ?bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z @ 0x1C008D508 (-bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z.c)
 *     ?gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z @ 0x1C008D8FC (-gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z.c)
 *     ?bInsertMetrics@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x1C008DBBC (-bInsertMetrics@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z.c)
 *     ?bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z @ 0x1C008E610 (-bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z.c)
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEAG2KPEAHH@Z @ 0x1C008EDA0 (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEAG2KPEAHH@Z.c)
 *     ?pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ @ 0x1C01308FC (-pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RFONTOBJ::bGetWidthTable(
        RFONTOBJ *this,
        struct XDCOBJ *a2,
        unsigned int a3,
        unsigned __int16 *a4,
        unsigned int a5,
        unsigned __int16 *a6)
{
  unsigned int v7; // r12d
  unsigned __int16 *v8; // r10
  unsigned __int16 *v9; // r9
  unsigned int v10; // ecx
  __int64 v11; // rax
  unsigned int v12; // r14d
  unsigned __int16 *v13; // r13
  unsigned int v14; // r15d
  unsigned int v15; // edx
  unsigned __int16 *v16; // rdi
  unsigned int v17; // esi
  unsigned int v18; // eax
  __int64 (__fastcall *v19)(GLYPHDEF *, struct _GLYPHPOS *, __int64, unsigned int *, unsigned __int16 *, unsigned int); // rdi
  int v20; // edx
  int v21; // eax
  __int64 v22; // rax
  unsigned int v23; // eax
  __int64 i; // r13
  unsigned int v25; // eax
  unsigned __int16 *v26; // r15
  __int64 v27; // rax
  _DWORD *v28; // rsi
  struct GPRUN *v29; // rsi
  unsigned __int16 v30; // r9
  __int64 v31; // rdi
  struct GPRUN *Run; // rax
  struct _GLYPHDATA *LinkMetricsPlus; // r8
  struct _GLYPHPOS *v34; // rcx
  unsigned int v35; // edx
  __int16 v36; // r9
  unsigned int *v37; // r8
  struct _GLYPHPOS *v38; // rdi
  unsigned __int16 v39; // ax
  unsigned __int16 v41; // cx
  __int64 v42; // rcx
  unsigned __int16 *v43; // rdi
  unsigned __int16 v44; // [rsp+40h] [rbp-C0h]
  __int16 v45; // [rsp+40h] [rbp-C0h]
  unsigned int v46; // [rsp+44h] [rbp-BCh]
  int v47; // [rsp+48h] [rbp-B8h]
  unsigned int v48; // [rsp+4Ch] [rbp-B4h]
  int v49; // [rsp+4Ch] [rbp-B4h]
  GLYPHDEF *pgdf; // [rsp+50h] [rbp-B0h]
  unsigned int *v51; // [rsp+50h] [rbp-B0h]
  int v52; // [rsp+58h] [rbp-A8h]
  int v53; // [rsp+5Ch] [rbp-A4h] BYREF
  struct _GLYPHPOS *v54; // [rsp+60h] [rbp-A0h]
  unsigned int v55; // [rsp+68h] [rbp-98h]
  unsigned __int16 *v56; // [rsp+70h] [rbp-90h]
  unsigned __int16 *v57; // [rsp+78h] [rbp-88h]
  unsigned __int16 *v58; // [rsp+80h] [rbp-80h]
  unsigned __int16 *v59; // [rsp+88h] [rbp-78h]
  __int64 v60; // [rsp+90h] [rbp-70h] BYREF
  struct XDCOBJ *v61; // [rsp+98h] [rbp-68h]
  unsigned __int16 *v62; // [rsp+A0h] [rbp-60h]
  struct _GLYPHPOS v63; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v64; // [rsp+C0h] [rbp-40h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v66; // [rsp+F8h] [rbp-8h]
  unsigned int v67[72]; // [rsp+100h] [rbp+0h] BYREF

  v62 = a4;
  v7 = 1;
  v55 = a3;
  v8 = a4;
  v61 = a2;
  v9 = a6;
  v10 = 1;
  v11 = *(_QWORD *)this;
  v58 = a6;
  v47 = 1;
  v60 = *(_QWORD *)(v11 + 80);
  if ( !*(_QWORD *)(v60 + 3128) )
  {
    v12 = a5;
    if ( a5 )
    {
      v42 = a5;
      v43 = a6;
      while ( v42 )
      {
        *v43++ = -1;
        --v42;
      }
    }
    v10 = 0;
    v47 = 0;
    goto LABEL_17;
  }
  v12 = a5;
  v13 = a6;
  v56 = a6;
  v14 = a5;
  v57 = v8;
  if ( a3 < a5 )
    v14 = a3;
  v15 = a5;
  v48 = a5;
  v16 = v8;
  if ( a5 )
  {
    while ( 1 )
    {
      v17 = 70;
      if ( v14 )
      {
        if ( v14 < 0x46 )
          v17 = v14;
        v18 = 0;
      }
      else
      {
        v18 = 2;
        if ( v15 < 0x46 )
          v17 = v15;
      }
      v53 = v18;
      RFONTOBJ::vXlatGlyphArray(this, v16, v17, v67, v18, 0);
      v54 = *(struct _GLYPHPOS **)this;
      v52 = 0;
      v19 = *(__int64 (__fastcall **)(GLYPHDEF *, struct _GLYPHPOS *, __int64, unsigned int *, unsigned __int16 *, unsigned int))(v60 + 3128);
      pgdf = v54[4].pgdf;
      if ( gpepCSRSS )
      {
        ATTACHOBJ::ATTACHOBJ((ATTACHOBJ *)&v64, (struct PDEVOBJ *)&v60);
        v20 = v19(pgdf, v54, 1LL, v67, v13, v17);
        v52 = v20;
        if ( v64 )
        {
          KeUnstackDetachProcess(&ApcState);
          PsDetachSiloFromCurrentThread(v66);
          v20 = v52;
        }
        if ( v20 == -1 )
          break;
      }
      v21 = *(_DWORD *)(*(_QWORD *)this + 720LL);
      if ( (v21 & 0x40) != 0 )
      {
        v35 = 0;
        *(_DWORD *)(*(_QWORD *)this + 720LL) = v21 & 0xFFFFFFBF;
        v46 = 0;
        v36 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 112LL) + 32LL) + 116LL);
        v45 = v36;
        if ( v17 )
        {
          v37 = v67;
          v38 = (struct _GLYPHPOS *)((char *)v57 - (char *)v56);
          v54 = (struct _GLYPHPOS *)((char *)v57 - (char *)v56);
          v51 = v67;
          while ( 1 )
          {
            if ( *v37 == *(_DWORD *)(*(_QWORD *)this + 456LL) )
            {
              v39 = *(unsigned __int16 *)((char *)v13 + (_QWORD)v38);
              if ( v39 != v36 )
              {
                if ( v53 != 2 )
                {
                  v59 = (unsigned __int16 *)v35;
                  if ( (unsigned int)RFONTOBJ::bIsLinkedGlyph(this, v39)
                    || (v41 = *(unsigned __int16 *)((char *)v13 + (_QWORD)v38), *(_DWORD *)(*(_QWORD *)this + 716LL))
                    && v41 >= gqlTTSystem
                    && v41 <= (unsigned __int16)word_1C032C162
                    && (v38 = v54,
                        ((0x80000000 >> ((v41 - gqlTTSystem) % 32)) & *(_DWORD *)(qword_1C032C168
                                                                                + 4LL * ((v41 - gqlTTSystem) / 32))) != 0) )
                  {
                    if ( !(unsigned int)RFONTOBJ::bGetGlyphMetrics(
                                          this,
                                          (struct RFONTOBJ *)1,
                                          &v63,
                                          &v57[(_QWORD)v59],
                                          v61,
                                          0LL) )
                      return 0xFFFFFFFFLL;
                    v35 = v46;
                    v37 = v51;
                    *v13 = WORD2(v63.pgdf[1].ppo);
                    goto LABEL_41;
                  }
                  v37 = v51;
                  v35 = v46;
                }
                v47 = 0;
                *v13 = -1;
              }
            }
LABEL_41:
            v36 = v45;
            ++v35;
            ++v37;
            v46 = v35;
            ++v13;
            v51 = v37;
            if ( v35 >= v17 )
            {
              v13 = v56;
              break;
            }
          }
        }
      }
      v10 = v52 & v47;
      v15 = v48 - v17;
      v22 = 2LL * v17;
      v47 &= v52;
      v13 = (unsigned __int16 *)((char *)v13 + v22);
      v48 -= v17;
      v16 = &v57[(unsigned __int64)v22 / 2];
      v56 = v13;
      v57 = (unsigned __int16 *)((char *)v57 + v22);
      v23 = v14 - v17;
      if ( !v14 )
        v23 = 0;
      v14 = v23;
      if ( !v15 )
      {
        a3 = v55;
        v9 = v58;
        v8 = v62;
LABEL_17:
        if ( !v10 )
        {
          for ( i = 0LL; ; i = (unsigned int)(i + 1) )
          {
            v25 = v12;
            if ( a3 < v12 )
              v25 = a3;
            if ( (unsigned int)i >= v25 )
              break;
            if ( v9[i] == 0xFFFF )
            {
              v54 = &v63;
              v26 = &v8[i];
              if ( !*(_QWORD *)(*(_QWORD *)this + 480LL) )
              {
                if ( !(unsigned int)RFONTOBJ::bAllocateCache(this, (struct RFONTOBJ *)0xFFFF) )
                  return 0xFFFFFFFFLL;
                v9 = v58;
              }
              v27 = *(_QWORD *)this;
              v59 = v26;
              v28 = *(_DWORD **)(v27 + 480);
              if ( *v28 )
              {
                v29 = (struct GPRUN *)(v28 + 4);
                v56 = v26 + 1;
                if ( v26 < v26 + 1 )
                {
                  while ( 1 )
                  {
                    v44 = *v26;
                    v30 = *v26;
                    v31 = (unsigned int)*v26 - *(_DWORD *)v29;
                    v49 = *v26;
                    if ( (unsigned int)v31 < *((_DWORD *)v29 + 1) )
                    {
                      _mm_lfence();
                      LinkMetricsPlus = *(struct _GLYPHDATA **)(*((_QWORD *)v29 + 1) + 8 * v31);
                    }
                    else
                    {
                      Run = RFONTOBJ::gprunFindRun(this, v44);
                      v29 = Run;
                      v31 = (unsigned int)(v49 - *(_DWORD *)Run);
                      if ( (unsigned int)v31 >= *((_DWORD *)Run + 1) )
                      {
                        LinkMetricsPlus = RFONTOBJ::wpgdGetLinkMetricsPlus(this, v61, 0LL, v26, v59, 1u, &v53, 0);
                        if ( !LinkMetricsPlus )
                          return 0xFFFFFFFFLL;
                      }
                      else
                      {
                        _mm_lfence();
                        LinkMetricsPlus = *(struct _GLYPHDATA **)(*((_QWORD *)Run + 1) + 8 * v31);
                      }
                      v30 = v44;
                    }
                    if ( !LinkMetricsPlus )
                    {
                      if ( !(unsigned int)RFONTOBJ::bInsertMetrics(
                                            this,
                                            (struct _GLYPHDATA **)(*((_QWORD *)v29 + 1) + 8 * v31),
                                            v30) )
                        return 0xFFFFFFFFLL;
                      LinkMetricsPlus = *(struct _GLYPHDATA **)(*((_QWORD *)v29 + 1) + 8 * v31);
                    }
                    v34 = v54;
                    ++v26;
                    v54->hg = LinkMetricsPlus->hg;
                    v34->pgdf = &LinkMetricsPlus->gdf;
                    v54 = v34 + 1;
                    if ( v26 >= v56 )
                      goto LABEL_32;
                  }
                }
              }
              else
              {
                v63.pgdf = (GLYPHDEF *)RFONTOBJ::pgdDefault(this);
LABEL_32:
                v9 = v58;
              }
              a3 = v55;
              v9[i] = WORD2(v63.pgdf[1].ppo);
            }
            v8 = v62;
          }
          v10 = v47;
        }
        goto LABEL_47;
      }
    }
    *(_DWORD *)(*(_QWORD *)this + 720LL) &= ~0x40u;
    return 0xFFFFFFFFLL;
  }
  else
  {
LABEL_47:
    if ( v12 == a3 )
    {
      if ( v10 == -1 )
        return (unsigned int)-1;
      return v7;
    }
    else
    {
      return v10;
    }
  }
}
