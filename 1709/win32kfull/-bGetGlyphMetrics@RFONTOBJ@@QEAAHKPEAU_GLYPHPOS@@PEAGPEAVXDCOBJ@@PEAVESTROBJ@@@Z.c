/*
 * XREFs of ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C00361C8
 * Callers:
 *     ?vCharPos_H3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJVEFLOAT@@PEAH@Z @ 0x1C0024D08 (-vCharPos_H3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJVEFLOAT@@PEAH@Z.c)
 *     ?vCharPos_H1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJVEFLOAT@@@Z @ 0x1C0025170 (-vCharPos_H1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJVEFLOAT@@@Z.c)
 *     ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C0025620 (-vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 *     ?bGetWidthData@RFONTOBJ@@QEAAHPEAU_WIDTHDATA@@AEAVXDCOBJ@@@Z @ 0x1C00328B0 (-bGetWidthData@RFONTOBJ@@QEAAHPEAU_WIDTHDATA@@AEAVXDCOBJ@@@Z.c)
 *     ?bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z @ 0x1C00329AC (-bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z.c)
 *     ?bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C0035E18 (-bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?bTextExtent@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAGHJJJJIPEAUtagSIZE@@@Z @ 0x1C0035FB8 (-bTextExtent@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAGHJJJJIPEAUtagSIZE@@@Z.c)
 *     GreGetCharABCWidthsW @ 0x1C00F4284 (GreGetCharABCWidthsW.c)
 *     GreGetCharWidthW @ 0x1C0103D64 (GreGetCharWidthW.c)
 * Callees:
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEAGIPEAKKH@Z @ 0x1C0031EA0 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEAGIPEAKKH@Z.c)
 *     ?bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z @ 0x1C0033408 (-bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z.c)
 *     ?gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z @ 0x1C00337B4 (-gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z.c)
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEAG2KPEAHH@Z @ 0x1C0034CC8 (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEAG2KPEAHH@Z.c)
 *     PALLOCMEM2 @ 0x1C00B22B0 (PALLOCMEM2.c)
 *     ?MapFontFiles@@YA_NKPEAPEAU_FONTFILEVIEW@@PEAPEAXPEAK@Z @ 0x1C00B63CC (-MapFontFiles@@YA_NKPEAPEAU_FONTFILEVIEW@@PEAPEAXPEAK@Z.c)
 *     EngUnmapFontFileFD @ 0x1C010CBB0 (EngUnmapFontFileFD.c)
 *     ?pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ @ 0x1C0135730 (-pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0145A00 (memset.c)
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
  struct GPRUN *v13; // r9
  unsigned int v14; // edi
  __int64 v15; // rbx
  struct _GLYPHDATA *LinkMetricsPlus; // r8
  __int64 v18; // rbx
  unsigned int v19; // eax
  __int64 v20; // rsi
  __int64 v21; // rax
  unsigned __int64 v22; // rax
  __int64 v23; // rbx
  struct _FONTFILEVIEW **v24; // r8
  __int64 v25; // r9
  bool v26; // zf
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rbx
  __int64 (__fastcall *v30)(__int64, __int64, _QWORD, _QWORD, _OWORD *, _QWORD, _DWORD); // rdi
  unsigned int v31; // eax
  struct _FONTFILEVIEW **v32; // r10
  int v33; // ecx
  __int64 v34; // rbx
  int i; // edi
  __int64 v36; // rax
  __int64 v37; // r8
  __int64 v38; // rcx
  int v39; // eax
  struct GPRUN *Run; // rax
  _QWORD *v41; // rax
  __int64 v42; // rax
  __int64 ProcessServerSilo; // rax
  unsigned int v44; // [rsp+40h] [rbp-C0h]
  unsigned __int16 v45[2]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v46; // [rsp+50h] [rbp-B0h]
  unsigned int v47; // [rsp+58h] [rbp-A8h] BYREF
  int v48; // [rsp+5Ch] [rbp-A4h]
  struct GPRUN *v49; // [rsp+60h] [rbp-A0h]
  _OWORD *v50; // [rsp+68h] [rbp-98h]
  __int64 v51; // [rsp+70h] [rbp-90h]
  int v52; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int16 *v53; // [rsp+80h] [rbp-80h]
  struct ESTROBJ *v54; // [rsp+88h] [rbp-78h]
  struct XDCOBJ *v55; // [rsp+90h] [rbp-70h]
  __int64 v56; // [rsp+98h] [rbp-68h]
  __int64 v57; // [rsp+A0h] [rbp-60h]
  __int64 v58; // [rsp+A8h] [rbp-58h]
  unsigned __int16 *v59; // [rsp+B0h] [rbp-50h]
  struct _KAPC_STATE ApcState; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v61; // [rsp+F0h] [rbp-10h]
  __int64 v62; // [rsp+F8h] [rbp-8h]
  unsigned int v63; // [rsp+100h] [rbp+0h]
  char v64; // [rsp+104h] [rbp+4h]
  _OWORD v65[4]; // [rsp+110h] [rbp+10h] BYREF
  unsigned int v66[2]; // [rsp+150h] [rbp+50h] BYREF
  int v67; // [rsp+158h] [rbp+58h]
  void *v68[3]; // [rsp+160h] [rbp+60h] BYREF

  v55 = a5;
  v54 = a6;
  v9 = *(_QWORD *)this;
  v10 = (unsigned int)a2;
  v48 = (int)a2;
  if ( *(_QWORD *)(v9 + 480) || (unsigned int)RFONTOBJ::bAllocateCache(this, a2) )
  {
    v11 = *(_QWORD *)this;
    v53 = a4;
    v12 = *(_DWORD **)(v11 + 480);
    if ( *v12 )
    {
      v13 = (struct GPRUN *)(v12 + 4);
      v49 = (struct GPRUN *)(v12 + 4);
      v59 = &a4[v10];
      if ( a4 < v59 )
      {
        while ( 1 )
        {
          v14 = *a4;
          v44 = v14;
          v15 = v14 - *(_DWORD *)v13;
          if ( (unsigned int)v15 >= *((_DWORD *)v13 + 1) )
          {
            Run = RFONTOBJ::gprunFindRun(this, v14);
            v13 = Run;
            v49 = Run;
            v15 = v14 - *(_DWORD *)Run;
            if ( (unsigned int)v15 >= *((_DWORD *)Run + 1) )
            {
              LinkMetricsPlus = RFONTOBJ::wpgdGetLinkMetricsPlus(this, v55, v54, a4, v53, v10, &v52, 0);
              if ( !LinkMetricsPlus )
                return 0LL;
              v13 = v49;
            }
            else
            {
              _mm_lfence();
              LinkMetricsPlus = *(struct _GLYPHDATA **)(*((_QWORD *)Run + 1) + 8 * v15);
            }
          }
          else
          {
            _mm_lfence();
            LinkMetricsPlus = *(struct _GLYPHDATA **)(*((_QWORD *)v13 + 1) + 8 * v15);
          }
          if ( !LinkMetricsPlus )
            break;
LABEL_7:
          ++a4;
          a3->hg = LinkMetricsPlus->hg;
          a3->pgdf = &LinkMetricsPlus->gdf;
          ++a3;
          if ( a4 >= v59 )
            return 1LL;
        }
        v46 = (unsigned int)v15;
        v51 = *((_QWORD *)v13 + 1);
        if ( !*(_QWORD *)(*(_QWORD *)this + 480LL) && !(unsigned int)RFONTOBJ::bAllocateCache(this, a2) )
          return 0LL;
        v18 = *(_QWORD *)(*(_QWORD *)this + 480LL);
        if ( (*(_DWORD *)(*(_QWORD *)this + 68LL) & 2) != 0 )
        {
          v45[0] = v14;
          RFONTOBJ::vXlatGlyphArray(this, v45, 1, &v47, 0, 0);
          v19 = v47;
          v44 = v47;
        }
        else
        {
          v19 = v14;
        }
        v20 = *(_QWORD *)this;
        if ( v19 == *(_DWORD *)(*(_QWORD *)this + 456LL) )
        {
          v42 = *(_QWORD *)(v18 + 8);
          if ( v42 )
          {
            v37 = v46;
            *(_QWORD *)(v51 + 8 * v46) = v42;
LABEL_37:
            v39 = 1;
LABEL_38:
            if ( !v39 )
              return 0LL;
            v13 = v49;
            LODWORD(v10) = v48;
            LinkMetricsPlus = *(struct _GLYPHDATA **)(*((_QWORD *)v49 + 1) + 8 * v37);
            goto LABEL_7;
          }
        }
        v21 = *(_QWORD *)(v20 + 536);
        if ( *(_DWORD *)(v20 + 652) )
          v22 = v21 + 24;
        else
          v22 = v21 + 64;
        if ( v22 > *(_QWORD *)(v20 + 544) )
        {
          v41 = (_QWORD *)PALLOCMEM2(0x720uLL);
          if ( !v41 )
            goto LABEL_65;
          *v41 = *(_QWORD *)(v20 + 560);
          *(_QWORD *)(v20 + 560) = v41;
          *(_QWORD *)(v20 + 536) = v41 + 2;
          *(_QWORD *)(v20 + 544) = v41 + 228;
        }
        v23 = *(_QWORD *)this;
        v57 = v23;
        *(_DWORD *)v45 = (*(_DWORD *)(v23 + 72) == 2) + 1;
        memset(v65, 0, sizeof(v65));
        v26 = *(_DWORD *)(v23 + 652) == 0;
        v27 = *(_QWORD *)(v23 + 120);
        v56 = v27;
        if ( v26 )
        {
          v50 = *(_OWORD **)(v20 + 536);
        }
        else
        {
          a2 = (struct RFONTOBJ *)v65;
          v50 = v65;
        }
        v28 = *(_QWORD *)(v23 + 104);
        v29 = *(_QWORD *)(v27 + 88);
        v58 = v28;
        v30 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _OWORD *, _QWORD, _DWORD))(v29 + 2928);
        if ( gpepCSRSS )
        {
          v62 = 0LL;
          v63 = 0;
          v64 = 0;
          if ( (*(_DWORD *)(v29 + 32) & 0x2000) != 0 )
          {
            if ( (struct PDEV *)v29 == qword_1C0334158 )
            {
              v31 = *(_DWORD *)(v27 + 36);
              if ( v31 <= 3 )
              {
                v25 = 0LL;
                if ( v31 )
                {
                  v32 = *(struct _FONTFILEVIEW ***)(v27 + 152);
                  v24 = v32;
                  while ( 1 )
                  {
                    a2 = *v24;
                    v33 = *((_DWORD *)*v24 + 10);
                    if ( (v33 & 0x10) == 0 && (v33 & 8) != 0 && !*((_QWORD *)a2 + 6) )
                      break;
                    v25 = (unsigned int)(v25 + 1);
                    ++v24;
                    if ( (unsigned int)v25 >= v31 )
                      goto LABEL_26;
                  }
                  memset(v68, 0, sizeof(v68));
                  *(_QWORD *)v66 = 0LL;
                  v67 = 0;
                  if ( MapFontFiles(v31, v32, v68, v66) )
                  {
                    v62 = *(_QWORD *)(v56 + 152);
                    v63 = *(_DWORD *)(v56 + 36);
                  }
                }
              }
            }
LABEL_26:
            if ( (*(_DWORD *)(v29 + 32) & 0x2000) != 0 && (struct PDEV *)v29 != qword_1C0334158 )
            {
              v64 = 1;
              ProcessServerSilo = PsGetProcessServerSilo(gpepCSRSS, a2, v24, v25);
              v61 = PsAttachSiloToCurrentThread(ProcessServerSilo);
              KeStackAttachProcess(gpepCSRSS, &ApcState);
            }
          }
          v34 = 0LL;
          for ( i = v30(v58, v57, *(unsigned int *)v45, v44, v50, 0LL, 0);
                (unsigned int)v34 < v63;
                v34 = (unsigned int)(v34 + 1) )
          {
            EngUnmapFontFileFD(*(_QWORD *)(v62 + 8 * v34));
          }
          if ( v64 )
          {
            KeUnstackDetachProcess(&ApcState);
            PsDetachSiloFromCurrentThread(v61);
          }
          if ( i != -1 )
          {
            if ( *(_DWORD *)(*(_QWORD *)this + 652LL) )
            {
              v36 = *(_QWORD *)(v20 + 536);
              *(_OWORD *)v36 = v65[0];
              *(_QWORD *)(v36 + 16) = *(_QWORD *)&v65[1];
            }
            v37 = v46;
            v38 = v51;
            **(_QWORD **)(v20 + 536) = 0LL;
            *(_QWORD *)(v38 + 8 * v37) = *(_QWORD *)(v20 + 536);
            if ( *(_DWORD *)(*(_QWORD *)this + 652LL) )
              *(_QWORD *)(v20 + 536) += 24LL;
            else
              *(_QWORD *)(v20 + 536) += 64LL;
            goto LABEL_37;
          }
        }
LABEL_65:
        v37 = v46;
        v39 = 0;
        goto LABEL_38;
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
