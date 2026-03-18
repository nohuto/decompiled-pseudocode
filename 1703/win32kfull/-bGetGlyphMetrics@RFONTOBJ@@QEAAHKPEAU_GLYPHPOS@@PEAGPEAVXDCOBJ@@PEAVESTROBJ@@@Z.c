/*
 * XREFs of ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C008A828
 * Callers:
 *     ?vCharPos_H3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJVEFLOAT@@PEAH@Z @ 0x1C007C130 (-vCharPos_H3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJVEFLOAT@@PEAH@Z.c)
 *     ?vCharPos_H1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJVEFLOAT@@@Z @ 0x1C007C5A0 (-vCharPos_H1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJVEFLOAT@@@Z.c)
 *     ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C007CA50 (-vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 *     ?bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C008AE30 (-bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?bTextExtent@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAGHJJJJIPEAUtagSIZE@@@Z @ 0x1C008AFD0 (-bTextExtent@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAGHJJJJIPEAUtagSIZE@@@Z.c)
 *     ?bGetWidthData@RFONTOBJ@@QEAAHPEAU_WIDTHDATA@@AEAVXDCOBJ@@@Z @ 0x1C008C9B8 (-bGetWidthData@RFONTOBJ@@QEAAHPEAU_WIDTHDATA@@AEAVXDCOBJ@@@Z.c)
 *     ?bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z @ 0x1C008CAB4 (-bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z.c)
 *     GreGetCharABCWidthsW @ 0x1C00E1F64 (GreGetCharABCWidthsW.c)
 *     GreGetCharWidthW @ 0x1C00F5BE4 (GreGetCharWidthW.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C002CB34 (PALLOCMEM2.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEAGIPEAKKH@Z @ 0x1C008C0B0 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEAGIPEAKKH@Z.c)
 *     ?bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z @ 0x1C008D508 (-bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z.c)
 *     ?gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z @ 0x1C008D8FC (-gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z.c)
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEAG2KPEAHH@Z @ 0x1C008EDA0 (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEAG2KPEAHH@Z.c)
 *     ?pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ @ 0x1C01308FC (-pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall RFONTOBJ::bGetGlyphMetrics(
        RFONTOBJ *this,
        struct RFONTOBJ *a2,
        struct _GLYPHPOS *a3,
        unsigned __int16 *a4,
        struct XDCOBJ *a5,
        struct ESTROBJ *a6)
{
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rax
  _DWORD *v12; // rcx
  struct GPRUN *v13; // rdi
  __int64 v14; // rbx
  struct _GLYPHDATA *LinkMetricsPlus; // r8
  __int64 v17; // rbx
  unsigned int v18; // eax
  __int64 v19; // rsi
  __int64 v20; // rax
  unsigned __int64 v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rbx
  _OWORD *v24; // rax
  __int64 v25; // rax
  __int64 (__fastcall *v26)(__int64, __int64, _QWORD, _QWORD, _OWORD *, _QWORD, _DWORD); // rdi
  int v27; // ebx
  __int64 v28; // rax
  __int64 v29; // r8
  __int64 v30; // rcx
  int v31; // eax
  struct GPRUN *Run; // rax
  _QWORD *v33; // rax
  __int64 v34; // rax
  __int64 ProcessServerSilo; // rax
  unsigned int v36; // [rsp+40h] [rbp-C0h]
  unsigned __int16 v37; // [rsp+44h] [rbp-BCh]
  unsigned __int16 v38[2]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v39; // [rsp+50h] [rbp-B0h]
  unsigned int v40; // [rsp+58h] [rbp-A8h] BYREF
  int v41; // [rsp+5Ch] [rbp-A4h]
  struct GPRUN *v42; // [rsp+60h] [rbp-A0h]
  _OWORD *v43; // [rsp+68h] [rbp-98h]
  __int64 v44; // [rsp+70h] [rbp-90h]
  int v45; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int16 *v46; // [rsp+80h] [rbp-80h]
  struct ESTROBJ *v47; // [rsp+88h] [rbp-78h]
  struct XDCOBJ *v48; // [rsp+90h] [rbp-70h]
  __int64 v49; // [rsp+98h] [rbp-68h] BYREF
  __int64 v50; // [rsp+A0h] [rbp-60h]
  __int64 v51; // [rsp+A8h] [rbp-58h]
  unsigned __int16 *v52; // [rsp+B0h] [rbp-50h]
  _OWORD v53[4]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 *v54; // [rsp+100h] [rbp+0h]
  struct _KAPC_STATE ApcState; // [rsp+108h] [rbp+8h] BYREF
  __int64 v56; // [rsp+138h] [rbp+38h]

  v48 = a5;
  v47 = a6;
  v9 = *(_QWORD *)this;
  v10 = (unsigned int)a2;
  v41 = (int)a2;
  if ( *(_QWORD *)(v9 + 480) || (unsigned int)RFONTOBJ::bAllocateCache(this, a2) )
  {
    v11 = *(_QWORD *)this;
    v46 = a4;
    v12 = *(_DWORD **)(v11 + 480);
    if ( *v12 )
    {
      v13 = (struct GPRUN *)(v12 + 4);
      v42 = (struct GPRUN *)(v12 + 4);
      v52 = &a4[v10];
      if ( a4 < v52 )
      {
        while ( 1 )
        {
          v37 = *a4;
          v14 = (unsigned int)*a4 - *(_DWORD *)v13;
          v36 = *a4;
          if ( (unsigned int)v14 >= *((_DWORD *)v13 + 1) )
          {
            Run = RFONTOBJ::gprunFindRun(this, v37);
            v13 = Run;
            v42 = Run;
            v14 = v36 - *(_DWORD *)Run;
            if ( (unsigned int)v14 >= *((_DWORD *)Run + 1) )
            {
              LinkMetricsPlus = RFONTOBJ::wpgdGetLinkMetricsPlus(this, v48, v47, a4, v46, v10, &v45, 0);
              if ( !LinkMetricsPlus )
                return 0LL;
            }
            else
            {
              _mm_lfence();
              LinkMetricsPlus = *(struct _GLYPHDATA **)(*((_QWORD *)Run + 1) + 8 * v14);
            }
          }
          else
          {
            _mm_lfence();
            LinkMetricsPlus = *(struct _GLYPHDATA **)(*((_QWORD *)v13 + 1) + 8 * v14);
          }
          if ( !LinkMetricsPlus )
            break;
LABEL_7:
          ++a4;
          a3->hg = LinkMetricsPlus->hg;
          a3->pgdf = &LinkMetricsPlus->gdf;
          ++a3;
          if ( a4 >= v52 )
            return 1LL;
        }
        v39 = (unsigned int)v14;
        v44 = *((_QWORD *)v13 + 1);
        if ( !*(_QWORD *)(*(_QWORD *)this + 480LL) && !(unsigned int)RFONTOBJ::bAllocateCache(this, a2) )
          return 0LL;
        v17 = *(_QWORD *)(*(_QWORD *)this + 480LL);
        if ( (*(_DWORD *)(*(_QWORD *)this + 68LL) & 2) != 0 )
        {
          v38[0] = v37;
          RFONTOBJ::vXlatGlyphArray(this, v38, 1u, &v40, 0, 0);
          v18 = v40;
          v36 = v40;
        }
        else
        {
          v18 = v36;
        }
        v19 = *(_QWORD *)this;
        if ( v18 == *(_DWORD *)(*(_QWORD *)this + 456LL) )
        {
          v34 = *(_QWORD *)(v17 + 8);
          if ( v34 )
          {
            v29 = v39;
            *(_QWORD *)(v44 + 8 * v39) = v34;
            v31 = 1;
LABEL_30:
            if ( !v31 )
              return 0LL;
            LODWORD(v10) = v41;
            LinkMetricsPlus = *(struct _GLYPHDATA **)(*((_QWORD *)v13 + 1) + 8 * v29);
            goto LABEL_7;
          }
        }
        v20 = *(_QWORD *)(v19 + 536);
        if ( *(_DWORD *)(v19 + 652) )
          v21 = v20 + 24;
        else
          v21 = v20 + 64;
        if ( v21 > *(_QWORD *)(v19 + 544) )
        {
          v33 = PALLOCMEM2(0x720uLL, 1667326791LL, 0);
          if ( !v33 )
          {
LABEL_52:
            v29 = v39;
            v31 = 0;
            goto LABEL_30;
          }
          *v33 = *(_QWORD *)(v19 + 560);
          *(_QWORD *)(v19 + 560) = v33;
          *(_QWORD *)(v19 + 536) = v33 + 2;
          *(_QWORD *)(v19 + 544) = v33 + 228;
        }
        v22 = *(_QWORD *)this;
        v50 = v22;
        v23 = *(_QWORD *)(v22 + 80);
        v49 = v23;
        *(_DWORD *)v38 = (*(_DWORD *)(v22 + 72) == 2) + 1;
        memset(v53, 0, sizeof(v53));
        v24 = v53;
        if ( !*(_DWORD *)(v22 + 652) )
          v24 = *(_OWORD **)(v19 + 536);
        v43 = v24;
        v25 = *(_QWORD *)(v22 + 104);
        v26 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _OWORD *, _QWORD, _DWORD))(v23 + 2928);
        v51 = v25;
        if ( gpepCSRSS )
        {
          if ( (*(_DWORD *)(v23 + 32) & 0x2000) != 0 && (struct PDEV *)v23 != qword_1C0338A40 )
          {
            v54 = &v49;
            ProcessServerSilo = PsGetProcessServerSilo(gpepCSRSS);
            v56 = PsAttachSiloToCurrentThread(ProcessServerSilo);
            KeStackAttachProcess(gpepCSRSS, &ApcState);
          }
          else
          {
            v54 = 0LL;
          }
          v27 = v26(v51, v50, *(unsigned int *)v38, v36, v43, 0LL, 0);
          if ( v54 )
          {
            KeUnstackDetachProcess(&ApcState);
            PsDetachSiloFromCurrentThread(v56);
          }
          if ( v27 != -1 )
          {
            if ( *(_DWORD *)(*(_QWORD *)this + 652LL) )
            {
              v28 = *(_QWORD *)(v19 + 536);
              *(_OWORD *)v28 = v53[0];
              *(_QWORD *)(v28 + 16) = *(_QWORD *)&v53[1];
            }
            v29 = v39;
            v30 = v44;
            **(_QWORD **)(v19 + 536) = 0LL;
            *(_QWORD *)(v30 + 8 * v29) = *(_QWORD *)(v19 + 536);
            if ( *(_DWORD *)(*(_QWORD *)this + 652LL) )
              *(_QWORD *)(v19 + 536) += 24LL;
            else
              *(_QWORD *)(v19 + 536) += 64LL;
            v13 = v42;
            v31 = 1;
            goto LABEL_30;
          }
        }
        v13 = v42;
        goto LABEL_52;
      }
    }
    else
    {
      for ( ; (_DWORD)v10; LODWORD(v10) = v10 - 1 )
      {
        a3->hg = *(_DWORD *)(*(_QWORD *)this + 456LL);
        a3->pgdf = (GLYPHDEF *)RFONTOBJ::pgdDefault(this);
        ++a3;
      }
    }
    return 1LL;
  }
  return 0LL;
}
