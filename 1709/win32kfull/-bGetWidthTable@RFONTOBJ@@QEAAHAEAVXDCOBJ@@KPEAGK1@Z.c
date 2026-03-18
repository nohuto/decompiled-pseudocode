/*
 * XREFs of ?bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z @ 0x1C00329AC
 * Callers:
 *     NtGdiGetWidthTable @ 0x1C00F4990 (NtGdiGetWidthTable.c)
 * Callees:
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEAGIPEAKKH@Z @ 0x1C0031EA0 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEAGIPEAKKH@Z.c)
 *     ?bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z @ 0x1C0033408 (-bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z.c)
 *     ?gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z @ 0x1C00337B4 (-gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z.c)
 *     ?bInsertMetrics@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x1C0033A60 (-bInsertMetrics@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z.c)
 *     ?bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z @ 0x1C0034518 (-bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z.c)
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEAG2KPEAHH@Z @ 0x1C0034CC8 (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEAG2KPEAHH@Z.c)
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C00361C8 (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ??0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z @ 0x1C00392BC (--0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z.c)
 *     EngUnmapFontFileFD @ 0x1C010CBB0 (EngUnmapFontFileFD.c)
 *     ?pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ @ 0x1C0135730 (-pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RFONTOBJ::bGetWidthTable(
        RFONTOBJ *this,
        struct XDCOBJ *a2,
        unsigned int a3,
        unsigned __int16 *a4,
        unsigned int a5,
        unsigned __int16 *a6)
{
  __int64 v6; // rax
  unsigned __int16 *v8; // r10
  unsigned int v9; // r12d
  unsigned __int16 *v10; // r11
  __int64 v11; // rcx
  unsigned int v12; // r15d
  unsigned __int16 *v13; // rdi
  unsigned int v14; // r14d
  unsigned int v15; // ecx
  unsigned int v16; // esi
  unsigned int v17; // eax
  __int64 v18; // r13
  struct _GLYPHPOS *v19; // rax
  __int64 (__fastcall *v20)(struct _GLYPHPOS *, __int64, __int64, unsigned int *, unsigned __int16 *, unsigned int); // rdi
  int v21; // eax
  __int64 v22; // rdi
  int i; // r13d
  int v24; // eax
  unsigned __int64 v25; // rax
  unsigned int v26; // eax
  __int64 j; // r13
  unsigned int v28; // eax
  unsigned __int16 *v29; // r14
  __int64 v30; // rax
  _DWORD *v31; // rsi
  struct GPRUN *v32; // rsi
  unsigned __int16 v33; // r9
  __int64 v34; // rdi
  struct GPRUN *Run; // rax
  struct _GLYPHDATA *LinkMetricsPlus; // r8
  struct _GLYPHPOS *v37; // rcx
  unsigned int v38; // edx
  __int16 v39; // r9
  unsigned __int16 *v40; // r13
  unsigned int *v41; // r8
  struct _GLYPHPOS *v42; // rdi
  unsigned __int16 v43; // ax
  unsigned __int16 v45; // ax
  __int64 v46; // rcx
  unsigned __int16 *v47; // rdi
  unsigned __int16 v48; // [rsp+40h] [rbp-C0h]
  __int16 v49; // [rsp+40h] [rbp-C0h]
  unsigned int v50; // [rsp+44h] [rbp-BCh]
  int v51; // [rsp+48h] [rbp-B8h]
  unsigned int v52; // [rsp+4Ch] [rbp-B4h]
  int v53; // [rsp+4Ch] [rbp-B4h]
  int v54; // [rsp+50h] [rbp-B0h] BYREF
  struct _GLYPHPOS *v55; // [rsp+58h] [rbp-A8h]
  unsigned int *v56; // [rsp+60h] [rbp-A0h]
  unsigned __int16 *v57; // [rsp+68h] [rbp-98h]
  unsigned __int16 *v58; // [rsp+70h] [rbp-90h]
  unsigned int v59; // [rsp+78h] [rbp-88h]
  unsigned int v60; // [rsp+7Ch] [rbp-84h]
  unsigned __int16 *v61; // [rsp+80h] [rbp-80h]
  struct XDCOBJ *v62; // [rsp+88h] [rbp-78h]
  unsigned __int16 *v63; // [rsp+90h] [rbp-70h]
  struct _GLYPHPOS v64; // [rsp+98h] [rbp-68h] BYREF
  __int64 v65; // [rsp+B0h] [rbp-50h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v67; // [rsp+F0h] [rbp-10h]
  __int64 v68; // [rsp+F8h] [rbp-8h]
  unsigned int v69; // [rsp+100h] [rbp+0h]
  char v70; // [rsp+104h] [rbp+4h]
  unsigned int v71[72]; // [rsp+110h] [rbp+10h] BYREF

  v6 = *(_QWORD *)this;
  v8 = a6;
  v9 = 1;
  v62 = a2;
  v10 = a4;
  LODWORD(a2) = 1;
  v63 = a4;
  v11 = *(_QWORD *)(v6 + 80);
  v60 = a3;
  v61 = a6;
  v51 = 1;
  if ( !*(_QWORD *)(v11 + 3128) )
  {
    v12 = a5;
    if ( a5 )
    {
      v46 = a5;
      v47 = a6;
      while ( v46 )
      {
        *v47++ = -1;
        --v46;
      }
    }
    a2 = 0LL;
    v51 = 0;
    goto LABEL_18;
  }
  v12 = a5;
  v13 = a4;
  v57 = a6;
  v14 = a5;
  v58 = a4;
  if ( a3 < a5 )
    v14 = a3;
  v15 = a5;
  v52 = a5;
  if ( a5 )
  {
    while ( 1 )
    {
      v16 = 70;
      if ( v14 )
      {
        if ( v14 < 0x46 )
          v16 = v14;
        v17 = 0;
      }
      else
      {
        v17 = 2;
        if ( v15 < 0x46 )
          v16 = v15;
      }
      v59 = v17;
      RFONTOBJ::vXlatGlyphArray(this, v13, v16, v71, v17, 0);
      v18 = *(_QWORD *)this;
      v54 = 0;
      v19 = *(struct _GLYPHPOS **)(v18 + 104);
      v65 = *(_QWORD *)(v18 + 120);
      v55 = v19;
      v20 = *(__int64 (__fastcall **)(struct _GLYPHPOS *, __int64, __int64, unsigned int *, unsigned __int16 *, unsigned int))(*(_QWORD *)(v65 + 88) + 3128LL);
      if ( gpepCSRSS )
      {
        ATTACHOBJ::ATTACHOBJ(&ApcState, (struct PFFOBJ *)&v65);
        v21 = v20(v55, v18, 1LL, v71, v57, v16);
        v22 = 0LL;
        v54 = v21;
        for ( i = v21; (unsigned int)v22 < v69; v22 = (unsigned int)(v22 + 1) )
          EngUnmapFontFileFD(*(_QWORD *)(v68 + 8 * v22));
        if ( v70 )
        {
          KeUnstackDetachProcess(&ApcState);
          PsDetachSiloFromCurrentThread(v67);
        }
        if ( i == -1 )
          break;
      }
      v24 = *(_DWORD *)(*(_QWORD *)this + 720LL);
      if ( (v24 & 0x40) != 0 )
      {
        v38 = 0;
        *(_DWORD *)(*(_QWORD *)this + 720LL) = v24 & 0xFFFFFFBF;
        v50 = 0;
        v39 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 112LL) + 32LL) + 116LL);
        v49 = v39;
        if ( v16 )
        {
          v40 = v57;
          v41 = v71;
          v42 = (struct _GLYPHPOS *)((char *)v58 - (char *)v57);
          v56 = v71;
          v55 = (struct _GLYPHPOS *)((char *)v58 - (char *)v57);
          while ( 1 )
          {
            if ( *v41 != *(_DWORD *)(*(_QWORD *)this + 456LL) )
              goto LABEL_42;
            v43 = *(unsigned __int16 *)((char *)v40 + (_QWORD)v42);
            if ( v43 == v39 )
              goto LABEL_42;
            if ( v59 == 2 )
              goto LABEL_46;
            if ( !(unsigned int)RFONTOBJ::bIsLinkedGlyph(this, v43) )
            {
              if ( !*(_DWORD *)(*(_QWORD *)this + 716LL) )
                break;
              v45 = *(unsigned __int16 *)((char *)v40 + (_QWORD)v42);
              if ( v45 < gqlTTSystem )
                break;
              if ( v45 > (unsigned __int16)word_1C032F962 )
                break;
              v42 = v55;
              if ( ((0x80000000 >> ((v45 - gqlTTSystem) % 32)) & *(_DWORD *)(qword_1C032F968
                                                                           + 4LL * ((v45 - gqlTTSystem) / 32))) == 0 )
                break;
            }
            if ( !(unsigned int)RFONTOBJ::bGetGlyphMetrics(this, 1u, &v64, &v58[v50], v62, 0LL) )
              return 0xFFFFFFFFLL;
            v38 = v50;
            v41 = v56;
            *v40 = WORD2(v64.pgdf[1].ppo);
LABEL_42:
            v39 = v49;
            ++v38;
            ++v41;
            v50 = v38;
            ++v40;
            v56 = v41;
            if ( v38 >= v16 )
              goto LABEL_14;
          }
          v41 = v56;
          v38 = v50;
LABEL_46:
          v51 = 0;
          *v40 = -1;
          goto LABEL_42;
        }
      }
LABEL_14:
      a2 = (struct XDCOBJ *)(v54 & (unsigned int)v51);
      v15 = v52 - v16;
      v25 = 2LL * v16;
      v51 &= v54;
      v57 = (unsigned __int16 *)((char *)v57 + v25);
      v13 = &v58[v25 / 2];
      v58 = (unsigned __int16 *)((char *)v58 + v25);
      v26 = v14 - v16;
      v52 -= v16;
      if ( !v14 )
        v26 = 0;
      v14 = v26;
      if ( !v15 )
      {
        a3 = v60;
        v8 = v61;
        v10 = v63;
LABEL_18:
        if ( !(_DWORD)a2 )
        {
          for ( j = 0LL; ; j = (unsigned int)(j + 1) )
          {
            v28 = v12;
            if ( a3 < v12 )
              v28 = a3;
            if ( (unsigned int)j >= v28 )
              break;
            if ( v8[j] == 0xFFFF )
            {
              v55 = &v64;
              v29 = &v10[j];
              if ( !*(_QWORD *)(*(_QWORD *)this + 480LL) )
              {
                if ( !(unsigned int)RFONTOBJ::bAllocateCache(this, a2) )
                  return 0xFFFFFFFFLL;
                v8 = v61;
              }
              v30 = *(_QWORD *)this;
              v58 = v29;
              v31 = *(_DWORD **)(v30 + 480);
              if ( *v31 )
              {
                v32 = (struct GPRUN *)(v31 + 4);
                v57 = v29 + 1;
                if ( v29 < v29 + 1 )
                {
                  while ( 1 )
                  {
                    v48 = *v29;
                    v33 = *v29;
                    v34 = (unsigned int)*v29 - *(_DWORD *)v32;
                    v53 = *v29;
                    if ( (unsigned int)v34 < *((_DWORD *)v32 + 1) )
                    {
                      _mm_lfence();
                      LinkMetricsPlus = *(struct _GLYPHDATA **)(*((_QWORD *)v32 + 1) + 8 * v34);
                    }
                    else
                    {
                      Run = RFONTOBJ::gprunFindRun(this, v48);
                      v32 = Run;
                      v34 = (unsigned int)(v53 - *(_DWORD *)Run);
                      if ( (unsigned int)v34 >= *((_DWORD *)Run + 1) )
                      {
                        LinkMetricsPlus = RFONTOBJ::wpgdGetLinkMetricsPlus(this, v62, 0LL, v29, v58, 1u, &v54, 0);
                        if ( !LinkMetricsPlus )
                          return 0xFFFFFFFFLL;
                      }
                      else
                      {
                        _mm_lfence();
                        LinkMetricsPlus = *(struct _GLYPHDATA **)(*((_QWORD *)Run + 1) + 8 * v34);
                      }
                      v33 = v48;
                    }
                    if ( !LinkMetricsPlus )
                    {
                      if ( !(unsigned int)RFONTOBJ::bInsertMetrics(
                                            this,
                                            (struct _GLYPHDATA **)(*((_QWORD *)v32 + 1) + 8 * v34),
                                            v33) )
                        return 0xFFFFFFFFLL;
                      LinkMetricsPlus = *(struct _GLYPHDATA **)(*((_QWORD *)v32 + 1) + 8 * v34);
                    }
                    v37 = v55;
                    ++v29;
                    v55->hg = LinkMetricsPlus->hg;
                    v37->pgdf = &LinkMetricsPlus->gdf;
                    v55 = v37 + 1;
                    if ( v29 >= v57 )
                      goto LABEL_33;
                  }
                }
              }
              else
              {
                v64.pgdf = (GLYPHDEF *)RFONTOBJ::pgdDefault(this);
LABEL_33:
                v8 = v61;
              }
              a3 = v60;
              v8[j] = WORD2(v64.pgdf[1].ppo);
            }
            v10 = v63;
          }
          LODWORD(a2) = v51;
        }
        goto LABEL_48;
      }
    }
    *(_DWORD *)(*(_QWORD *)this + 720LL) &= ~0x40u;
    return 0xFFFFFFFFLL;
  }
  else
  {
LABEL_48:
    if ( v12 == a3 )
    {
      if ( (_DWORD)a2 == -1 )
        return (unsigned int)-1;
      return v9;
    }
    else
    {
      return (unsigned int)a2;
    }
  }
}
