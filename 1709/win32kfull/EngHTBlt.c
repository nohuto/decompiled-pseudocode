/*
 * XREFs of EngHTBlt @ 0x1C003CCA0
 * Callers:
 *     EngAlphaBlend @ 0x1C0012D70 (EngAlphaBlend.c)
 *     ?EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C00149D8 (-EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 *     ?EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z @ 0x1C00BD910 (-EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z.c)
 *     ?EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAH@Z @ 0x1C026ADBC (-EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 * Callees:
 *     ?bIsSourceBGRA@@YAHPEAVSURFACE@@@Z @ 0x1C0012D3C (-bIsSourceBGRA@@YAHPEAVSURFACE@@@Z.c)
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C00182EC (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C00183B8 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C0022CA0 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0022CE0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     EngCopyBits @ 0x1C002C650 (EngCopyBits.c)
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C002D16C (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C002D380 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     EngBitBlt @ 0x1C002DC60 (EngBitBlt.c)
 *     ?bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z @ 0x1C003D9DC (-bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z.c)
 *     ?pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ @ 0x1C003DDC0 (-pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ.c)
 *     ?vRelease@HTSEMOBJ@@QEAAXXZ @ 0x1C003E990 (-vRelease@HTSEMOBJ@@QEAAXXZ.c)
 *     ?ppalGetFromXlate@@YAPEAVPALETTE@@PEAVSURFACE@@0PEAVXLATE@@IH@Z @ 0x1C003E9D0 (-ppalGetFromXlate@@YAPEAVPALETTE@@PEAVSURFACE@@0PEAVXLATE@@IH@Z.c)
 *     ?bSetHTSurfInfo@@YAHPEAU_SURFOBJ@@PEAU_HTSURFACEINFO@@J@Z @ 0x1C003EA68 (-bSetHTSurfInfo@@YAHPEAU_SURFOBJ@@PEAU_HTSURFACEINFO@@J@Z.c)
 *     ?bSetHTSrcSurfInfo@@YAHPEAU_SURFOBJ@@VXEPALOBJ@@PEAU_HTSURFACEINFO@@PEAU_XLATEOBJ@@@Z @ 0x1C003EADC (-bSetHTSrcSurfInfo@@YAHPEAU_SURFOBJ@@VXEPALOBJ@@PEAU_HTSURFACEINFO@@PEAU_XLATEOBJ@@@Z.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C003ED08 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     HT_HalftoneBitmap @ 0x1C007A0A0 (HT_HalftoneBitmap.c)
 *     ?bEqualEntries@XEPALOBJ@@QEAAHV1@@Z @ 0x1C009BD5C (-bEqualEntries@XEPALOBJ@@QEAAHV1@@Z.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C00B7CB4 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     ??1?$AutoResource@$1?FreeTmpBuffer@@YAXPEAX@Z@@QEAA@XZ @ 0x1C010F79C (--1-$AutoResource@$1-FreeTmpBuffer@@YAXPEAX@Z@@QEAA@XZ.c)
 *     ?bCreateHTPalette@PALMEMOBJ@@QEAAHJPEAU_GDIINFO@@@Z @ 0x1C0117E8C (-bCreateHTPalette@PALMEMOBJ@@QEAAHJPEAU_GDIINFO@@@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall EngHTBlt(
        SURFOBJ *a1,
        SURFOBJ *a2,
        __int64 a3,
        CLIPOBJ *a4,
        struct XLATE *a5,
        struct tagCOLORADJUSTMENT *a6,
        __int64 *a7,
        XLATEOBJ *a8,
        XLATEOBJ *a9,
        __int64 *a10,
        int a11,
        XLATEOBJ *a12)
{
  __int64 v15; // r13
  POINTL v16; // rax
  struct SURFACE *v17; // rdx
  unsigned int v18; // esi
  unsigned int v19; // r15d
  __int64 v20; // rax
  int v21; // r14d
  bool v22; // zf
  int v23; // edi
  int v24; // edx
  int v25; // edx
  int v26; // edx
  int v27; // edx
  int v28; // edx
  LONG v29; // eax
  int v30; // r12d
  struct SURFACE *v31; // rdx
  struct XLATE *v32; // r8
  struct PALETTE *v33; // rax
  __int64 v34; // r8
  __int64 v35; // rbx
  int v36; // r10d
  __int16 v37; // dx
  __int16 v38; // r9
  LONG *p_left; // r11
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  int v42; // eax
  CLIPOBJ *v43; // r8
  struct SURFACE *v44; // rdx
  struct SURFACE *v45; // r13
  BYTE iDComplexity; // r12
  unsigned __int64 v47; // rax
  LONG v48; // ecx
  int v49; // r8d
  LONG v50; // edx
  int v51; // r12d
  LONG v52; // edx
  LONG v53; // ecx
  int v54; // r8d
  LONG v55; // edx
  unsigned __int64 v56; // rax
  int v57; // r15d
  XLATEOBJ *v58; // r12
  XLATEOBJ *v59; // r15
  HPALETTE *v60; // rax
  __int64 *v61; // r15
  __int64 *v62; // rax
  __int64 v63; // r12
  int v64; // ebx
  SURFOBJ *v65; // r15
  POINTL v66; // r9
  _BYTE *v67; // r11
  __int16 v68; // dx
  unsigned int v69; // eax
  CLIPOBJ *v70; // r13
  struct SURFACE *v71; // rax
  SURFOBJ *v72; // rcx
  int v73; // eax
  CLIPOBJ *v75; // rax
  LONG cx; // r15d
  int v77; // eax
  LONG v78; // r15d
  LONG v79; // eax
  LONG v80; // r15d
  int v81; // r8d
  int v82; // ecx
  int v83; // r15d
  int v84; // r12d
  ULONG iBitmapFormat; // ecx
  int v86; // eax
  SURFOBJ *v87; // rcx
  ULONG iUniq; // eax
  char v89; // cl
  int v90; // eax
  _DWORD *v91; // rax
  int v92; // eax
  LONG v93; // eax
  int v94; // eax
  unsigned int cEntries; // ecx
  _BYTE *v96; // r8
  __int64 v97; // r10
  __int64 v98; // r9
  char v99; // cl
  __int64 v100; // rax
  char *v101; // r15
  int v102; // edi
  int v103; // r13d
  unsigned int v104; // r12d
  int v105; // r13d
  BYTE v106; // [rsp+60h] [rbp-A0h]
  int v107; // [rsp+64h] [rbp-9Ch]
  int v108; // [rsp+68h] [rbp-98h]
  __int64 v109; // [rsp+70h] [rbp-90h] BYREF
  int v110; // [rsp+78h] [rbp-88h] BYREF
  CLIPOBJ *pco; // [rsp+80h] [rbp-80h]
  __int64 v112; // [rsp+88h] [rbp-78h] BYREF
  struct SURFACE *v113; // [rsp+90h] [rbp-70h]
  XLATEOBJ *v114; // [rsp+98h] [rbp-68h] BYREF
  POINTL pptlSrc; // [rsp+A0h] [rbp-60h] BYREF
  XLATEOBJ *v116; // [rsp+A8h] [rbp-58h]
  __int64 *v117; // [rsp+B0h] [rbp-50h]
  XLATEOBJ *v118; // [rsp+B8h] [rbp-48h] BYREF
  XLATEOBJ *v119; // [rsp+C0h] [rbp-40h] BYREF
  struct tagCOLORADJUSTMENT *v120; // [rsp+C8h] [rbp-38h]
  __int64 *v121; // [rsp+D0h] [rbp-30h]
  _BYTE *v122; // [rsp+D8h] [rbp-28h]
  struct XLATE *v123; // [rsp+E0h] [rbp-20h]
  SURFOBJ *psoDest; // [rsp+E8h] [rbp-18h]
  _BYTE v125[2]; // [rsp+F0h] [rbp-10h] BYREF
  __int16 v126; // [rsp+F2h] [rbp-Eh]
  __int64 v127; // [rsp+F8h] [rbp-8h]
  int v128; // [rsp+100h] [rbp+0h]
  __int64 v129; // [rsp+108h] [rbp+8h] BYREF
  __int64 v130; // [rsp+110h] [rbp+10h] BYREF
  char v131; // [rsp+118h] [rbp+18h]
  int v132; // [rsp+11Ch] [rbp+1Ch]
  __int64 *v133; // [rsp+120h] [rbp+20h]
  struct SURFACE *v134; // [rsp+128h] [rbp+28h] BYREF
  char v135; // [rsp+130h] [rbp+30h]
  int v136; // [rsp+134h] [rbp+34h]
  __int64 v137; // [rsp+138h] [rbp+38h] BYREF
  int v138; // [rsp+140h] [rbp+40h]
  _DWORD v139[4]; // [rsp+148h] [rbp+48h] BYREF
  _BYTE *v140; // [rsp+158h] [rbp+58h]
  _QWORD v141[4]; // [rsp+160h] [rbp+60h] BYREF
  struct PALETTE *v142; // [rsp+180h] [rbp+80h]
  _QWORD v143[4]; // [rsp+188h] [rbp+88h] BYREF
  _BYTE v144[32]; // [rsp+1A8h] [rbp+A8h] BYREF
  __int64 v145; // [rsp+1C8h] [rbp+C8h]
  _BYTE v146[32]; // [rsp+1D0h] [rbp+D0h] BYREF
  _DWORD *v147; // [rsp+1F0h] [rbp+F0h]
  _BYTE v148[40]; // [rsp+1F8h] [rbp+F8h] BYREF
  __int16 v149; // [rsp+220h] [rbp+120h] BYREF
  char v150; // [rsp+223h] [rbp+123h]
  _BYTE *v151; // [rsp+228h] [rbp+128h]
  __int128 v152; // [rsp+230h] [rbp+130h]
  __int128 v153; // [rsp+240h] [rbp+140h]
  RECTL rclBounds; // [rsp+250h] [rbp+150h]
  RECTL prclDest; // [rsp+260h] [rbp+160h] BYREF
  __int64 v156; // [rsp+270h] [rbp+170h]
  __int64 v157; // [rsp+278h] [rbp+178h]
  RECTL prclTrg; // [rsp+290h] [rbp+190h] BYREF
  RECTL v159; // [rsp+2A0h] [rbp+1A0h] BYREF
  _BYTE v160[256]; // [rsp+2B0h] [rbp+1B0h] BYREF

  v123 = a5;
  v120 = a6;
  v117 = a7;
  v119 = a9;
  psoDest = a1;
  v133 = a10;
  v118 = a8;
  v116 = a12;
  pco = a4;
  v129 = a3;
  *(_QWORD *)&prclTrg.left = a2;
  v113 = (struct SURFACE *)SURFOBJ_TO_SURFACE(a1);
  v15 = SURFOBJ_TO_SURFACE(a2);
  v16 = (POINTL)SURFOBJ_TO_SURFACE(a3);
  v17 = v113;
  v18 = 0;
  pptlSrc = v16;
  v19 = 0;
  if ( v113 )
  {
    v20 = *((_QWORD *)v113 + 6);
    v109 = v20;
    if ( !v20 )
      return v18;
    v21 = 1;
    v22 = (*(_DWORD *)(v20 + 32) & 1) == 0;
    v23 = *(_DWORD *)(v20 + 32) & 1;
    v128 = v23;
    v110 = v23;
    if ( !v22 )
    {
      GreAcquireSemaphore(ghsemHT);
      v20 = v109;
      v17 = v113;
    }
    if ( a1->iType )
    {
      v30 = *(_DWORD *)(v20 + 2392);
      if ( v30 )
      {
        switch ( v30 )
        {
          case 2:
            v107 = 2;
            v108 = 2;
            break;
          case 3:
            v108 = 255;
            v107 = 2;
            break;
          case 4:
            v108 = 254;
            v107 = 3;
            break;
          case 5:
            v108 = 253;
            v107 = 4;
            break;
          case 6:
            v108 = 5;
            v107 = 5;
            break;
          case 7:
            v108 = 6;
            v107 = 6;
            break;
          default:
            goto LABEL_96;
        }
        goto LABEL_12;
      }
    }
    else
    {
      v24 = *((_DWORD *)v17 + 24) - 1;
      if ( v24 )
      {
        v25 = v24 - 1;
        if ( v25 )
        {
          v26 = v25 - 1;
          if ( v26 )
          {
            v27 = v26 - 1;
            if ( v27 )
            {
              v28 = v27 - 1;
              if ( v28 )
              {
                if ( v28 != 1 )
                  goto LABEL_96;
                cx = a1->sizlBitmap.cx;
                v30 = 7;
                v19 = 4 * cx;
                v108 = 6;
                v107 = 6;
              }
              else
              {
                v29 = a1->sizlBitmap.cx;
                v30 = 6;
                v108 = 5;
                v107 = 5;
                v19 = (3 * (v29 + 1)) & 0xFFFFFFFC;
              }
            }
            else
            {
              v79 = a1->sizlBitmap.cx;
              v30 = 5;
              v108 = 253;
              v107 = 4;
              v19 = (2 * v79 + 2) & 0xFFFFFFFC;
            }
          }
          else
          {
            v80 = a1->sizlBitmap.cx;
            v30 = 4;
            v108 = 254;
            v19 = (v80 + 3) & 0xFFFFFFFC;
            v107 = 3;
          }
        }
        else
        {
          v81 = 2;
          v82 = *(_DWORD *)(v20 + 2392);
          v83 = (a1->sizlBitmap.cx + 7) >> 1;
          v84 = 0;
          v19 = v83 & 0xFFFFFFFC;
          v107 = 2;
          if ( v82 != 2 )
            v81 = 255;
          LOBYTE(v84) = v82 != 2;
          v108 = v81;
          v30 = v84 + 2;
        }
LABEL_12:
        v159.right = a2->sizlBitmap.cx;
        v159.bottom = a2->sizlBitmap.cy;
        *(_QWORD *)&v159.left = 0LL;
        ERECTL::operator*=(&v159, v119);
        if ( ERECTL::bEmpty((ERECTL *)&v159) )
        {
LABEL_133:
          v18 = v21;
          goto LABEL_96;
        }
        if ( !PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v109) && !(unsigned int)PDEVOBJ::bEnableHalftone((PDEVOBJ *)&v109, v120) )
        {
          v21 = -1;
          goto LABEL_133;
        }
        v130 = 0LL;
        v131 = 0;
        v132 = 0;
        HTSEMOBJ::vRelease((HTSEMOBJ *)&v110);
        if ( !v15 )
          goto LABEL_146;
        if ( (*(_DWORD *)(v15 + 112) & 0x1000) != 0 )
        {
          v114 = *(XLATEOBJ **)(v15 + 48);
          PDEVOBJ::vSync((PDEVOBJ *)&v114, a2, 0LL, 0);
        }
        if ( a2->iType || a2->iBitmapFormat - 7 <= 1 )
        {
          memset(v141, 0, sizeof(v141));
          iBitmapFormat = a2->iBitmapFormat;
          HIDWORD(v141[0]) = a2->sizlBitmap.cx;
          LODWORD(v141[1]) = a2->sizlBitmap.cy;
          v86 = *(_DWORD *)(v15 + 112) & 0x40000;
          v141[2] = 0LL;
          LODWORD(v141[3]) = v86;
          if ( iBitmapFormat == 7 )
          {
            LODWORD(v141[0]) = 2;
          }
          else if ( iBitmapFormat == 8 )
          {
            LODWORD(v141[0]) = 3;
          }
          else
          {
            LODWORD(v141[0]) = iBitmapFormat;
          }
          if ( !SURFMEM::bCreateDIB((SURFMEM *)&v130, (struct _DEVBITMAPINFO *)v141, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
            goto LABEL_144;
          v87 = 0LL;
          if ( v130 )
            v87 = (SURFOBJ *)(v130 + 24);
          if ( !EngCopyBits(v87, a2, 0LL, xloIdent, &v159, (POINTL *)&v159) )
          {
LABEL_144:
            if ( v23 )
              GreAcquireSemaphore(ghsemHT);
            goto LABEL_146;
          }
          v122 = (_BYTE *)v130;
        }
        else
        {
          v122 = (_BYTE *)v15;
        }
        if ( v23 )
          GreAcquireSemaphore(ghsemHT);
        if ( PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v109) || (unsigned int)PDEVOBJ::bEnableHalftone((PDEVOBJ *)&v109, v120) )
        {
          v142 = ppalGetFromXlate((struct SURFACE *)v15, v113, v123, 1u, 1);
          if ( !v142 )
          {
LABEL_95:
            SURFMEM::~SURFMEM((SURFMEM *)&v130);
LABEL_96:
            HTSEMOBJ::vRelease((HTSEMOBJ *)&v110);
            return v18;
          }
          v33 = ppalGetFromXlate((struct SURFACE *)v15, v31, v32, 2u, 1);
          v34 = v109;
          v35 = (__int64)v33;
          v138 = 0;
          v137 = 0LL;
          v121 = 0LL;
          if ( v30 == *(_DWORD *)(v109 + 2392) )
          {
            v36 = *(_DWORD *)(v109 + 32) & 0x200;
          }
          else
          {
            if ( !(unsigned int)PALMEMOBJ::bCreateHTPalette((PALMEMOBJ *)&v137, v30, (struct _GDIINFO *)(v109 + 2152)) )
              goto LABEL_113;
            v121 = &v137;
            v77 = XEPALOBJ::bEqualEntries(&v137, v35);
            v34 = v109;
            v36 = v77;
          }
          v37 = a11;
          LODWORD(v112) = v36;
          if ( a11 != 512 )
            goto LABEL_27;
          iUniq = v116->iUniq;
          if ( (unsigned __int8)v116->iUniq )
          {
            v37 = 0;
            a11 = 0;
            goto LABEL_27;
          }
          v125[0] = 0;
          v127 = 0LL;
          v126 = 0;
          v125[1] = BYTE2(iUniq);
          if ( HIBYTE(iUniq) != 1 || BYTE2(iUniq) != 0xFF )
          {
            v89 = 1;
LABEL_155:
            v125[0] = v89;
            if ( v35 )
            {
              v127 = *(_QWORD *)(v35 + 120);
              v126 = *(_WORD *)(v35 + 28);
              v90 = *(_DWORD *)(v35 + 24);
              if ( (v90 & 8) != 0
                || (v90 & 2) != 0
                && (v91 = *(_DWORD **)(v35 + 120), *v91 == 16711680)
                && v91[1] == 65280
                && v91[2] == 255 )
              {
                v125[0] = v89 | 2;
              }
            }
            v151 = v125;
LABEL_27:
            v38 = v37;
            p_left = (LONG *)v118;
            v149 = v37;
            v40 = *(_OWORD *)&v119->iUniq;
            v41 = *(_OWORD *)&v118->iUniq;
            v156 = *v117;
            v152 = v40;
            v153 = v41;
            v150 = *(_BYTE *)(v34 + 2384);
            if ( v123 )
              v42 = *((_DWORD *)v123 + 18);
            else
              LOBYTE(v42) = 0;
            if ( (v42 & 4) != 0 || (v42 & 0x20) == 0 && (v42 & 3) != 0 )
            {
              v38 = v37 | 0x80;
              v149 = v37 | 0x80;
            }
            v43 = pco;
            v44 = v113;
            v134 = 0LL;
            v45 = v113;
            v135 = 0;
            v136 = 0;
            LODWORD(v117) = 0;
            if ( pco )
            {
              iDComplexity = pco->iDComplexity;
              v106 = iDComplexity;
            }
            else
            {
              iDComplexity = 0;
              v106 = 0;
            }
            if ( !psoDest->iType && psoDest->lDelta == v19 && (v107 == 3 || v36) && iDComplexity != 3 )
            {
              if ( psoDest != *(SURFOBJ **)&prclTrg.left || (v92 = bIntersect(v119, v118)) == 0 )
              {
LABEL_56:
                v58 = xloIdent;
                v116 = xloIdent;
                v59 = xloIdent;
                v114 = xloIdent;
                v119 = 0LL;
                v118 = 0LL;
                v60 = (HPALETTE *)PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v109);
                if ( (_DWORD)v112 )
                  goto LABEL_68;
                EPALOBJ::EPALOBJ((EPALOBJ *)&v112, *v60);
                v61 = &v112;
                if ( v121 )
                  v61 = v121;
                if ( !v123 || (v62 = (__int64 *)((char *)v123 + 56), !*((_QWORD *)v123 + 7)) )
                  v62 = (__int64 *)ppalDefault;
                v63 = *v62;
                if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                                     (__int64 *)&v119,
                                     0LL,
                                     0,
                                     *v61,
                                     v35,
                                     *v62,
                                     *v62,
                                     0,
                                     0xFFFFFF,
                                     0xFFFFFF,
                                     0) )
                {
                  v116 = v119;
                  if ( !*(_QWORD *)&pptlSrc && a11 != 512 || !(_DWORD)v117 )
                  {
                    v59 = v114;
LABEL_65:
                    if ( v112 )
                      DEC_SHARE_REF_CNT(v112);
                    v58 = v116;
LABEL_68:
                    HTSEMOBJ::vRelease((HTSEMOBJ *)&v110);
                    PDEVOBJ::vSync((PDEVOBJ *)&v109, psoDest, 0LL, 0);
                    if ( *(_QWORD *)&pptlSrc || a11 == 512 )
                    {
                      if ( (_DWORD)v117 )
                      {
                        v93 = *((_DWORD *)v45 + 14);
                        ++*((_DWORD *)v45 + 23);
                        prclTrg.right = v93;
                        prclTrg.bottom = *((_DWORD *)v45 + 15);
                        *(_QWORD *)&prclTrg.left = 0LL;
                        v94 = (*((_DWORD *)v113 + 28) & 0x400) != 0
                            ? (*(__int64 (__fastcall **)(__int64, SURFOBJ *, _QWORD, XLATEOBJ *, RECTL *, RECTL *))(v109 + 2856))(
                                (__int64)v45 + 24,
                                psoDest,
                                0LL,
                                v59,
                                &prclTrg,
                                &prclDest)
                            : ((__int64 (__fastcall *)(char *, SURFOBJ *, _QWORD, XLATEOBJ *, RECTL *, RECTL *))EngCopyBits)(
                                (char *)v45 + 24,
                                psoDest,
                                0LL,
                                v59,
                                &prclTrg,
                                &prclDest);
                        if ( !v94
                          && !EngBitBlt(
                                (SURFOBJ *)((char *)v45 + 24),
                                0LL,
                                0LL,
                                0LL,
                                0LL,
                                &prclTrg,
                                0LL,
                                0LL,
                                0LL,
                                0LL,
                                0xFFFFu) )
                        {
                          if ( v23 )
                            GreAcquireSemaphore(ghsemHT);
LABEL_195:
                          v18 = -1;
LABEL_92:
                          EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v118);
                          EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v119);
LABEL_93:
                          SURFMEM::~SURFMEM((SURFMEM *)&v134);
LABEL_94:
                          PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v137);
                          goto LABEL_95;
                        }
                      }
                    }
                    if ( v23 )
                      GreAcquireSemaphore(ghsemHT);
                    if ( !PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v109)
                      && !(unsigned int)PDEVOBJ::bEnableHalftone((PDEVOBJ *)&v109, v120) )
                    {
                      goto LABEL_195;
                    }
                    v64 = 0;
                    v121 = (__int64 *)PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v109);
                    v145 = 0LL;
                    if ( !(unsigned int)bSetHTSrcSurfInfo(
                                          -(__int64)(v122 != 0LL) & (unsigned __int64)(v122 + 24),
                                          v142,
                                          v144,
                                          v123)
                      || (v65 = (SURFOBJ *)(((unsigned __int64)v45 + 24) & -(__int64)(v45 != 0LL)),
                          v114 = (XLATEOBJ *)v65,
                          !(unsigned int)bSetHTSurfInfo(v65, (struct _HTSURFACEINFO *)v146, v108))
                      || (v66 = pptlSrc) != 0LL
                      && !(unsigned int)bSetHTSurfInfo(
                                          (struct _SURFOBJ *)(*(_QWORD *)&pptlSrc + 24LL),
                                          (struct _HTSURFACEINFO *)v148,
                                          *(_DWORD *)(v129 + 72)) )
                    {
LABEL_89:
                      if ( v145 )
                        FreeThreadBufferWithTag(v145);
                      v18 = v64 != 0 ? 1 : -1;
                      goto LABEL_92;
                    }
                    v122 = 0LL;
                    LODWORD(v67) = 0;
                    if ( v66 )
                    {
                      if ( (unsigned int)bUMPDSecurityGateEx() && !v133 )
                      {
                        if ( gfUMPDDebug )
                          DbgPrint("windows\\core\\ntgdi\\gre\\windows\\htblt.cxx:%d:EngHTBlt:pptlMask == NULL\n", 1063);
                        if ( v145 )
                          FreeThreadBufferWithTag(v145);
                        goto LABEL_195;
                      }
                      v67 = v148;
                      v157 = *v133;
                      v122 = v148;
                    }
                    v68 = v149;
                    v69 = 256;
                    if ( (*(_DWORD *)(v109 + 2396) & 0x100) == 0 )
                    {
                      v68 = v149 | 2;
                      v149 |= 2u;
                    }
                    if ( v107 == 3 )
                    {
                      v139[0] = 65792;
                      v147 = v139;
                      v140 = v160;
                      v139[1] = 255;
                      v139[2] = 256;
                      cEntries = v58->cEntries;
                      if ( cEntries > 0x100 || (v69 = v58->cEntries, cEntries) )
                      {
                        v96 = v160;
                        v97 = v69;
                        v98 = 0LL;
                        do
                        {
                          v99 = v58->pulXlate[v98++];
                          *v96++ = v99;
                          --v97;
                        }
                        while ( v97 );
                      }
                      v58 = xloIdent;
                      v116 = xloIdent;
                    }
                    v70 = pco;
                    if ( v106 )
                    {
                      v149 = v68 | 1;
                      if ( v106 != 1 )
                      {
                        XCLIPOBJ::cEnumStart((XCLIPOBJ *)pco, 0, 0, 4u, 0x14u);
                        v64 = 1;
                        v100 = AllocFreeTmpBuffer(324LL);
                        v101 = (char *)v100;
                        if ( v100 )
                        {
                          v102 = (int)v122;
                          v129 = v100;
                          do
                          {
                            v103 = XCLIPOBJ::bEnum((XCLIPOBJ *)v70, 0x144u, v101, 0LL);
                            LODWORD(v112) = v103;
                            v104 = 0;
                            if ( *(_DWORD *)v101 )
                            {
                              v105 = (int)v121;
                              do
                              {
                                rclBounds = *(RECTL *)&v101[16 * v104++ + 4];
                                v64 = ((int)HT_HalftoneBitmap(
                                              v105,
                                              (_DWORD)v120,
                                              (unsigned int)v144,
                                              v102,
                                              (__int64)v146,
                                              (__int64)&v149) >= 0) & (unsigned __int8)v64;
                              }
                              while ( v104 < *(_DWORD *)v101 );
                              v103 = v112;
                            }
                            if ( !v103 )
                              break;
                            v70 = pco;
                          }
                          while ( v64 );
                          AutoResource<&void FreeTmpBuffer(void *)>::~AutoResource<&void FreeTmpBuffer(void *)>(&v129);
                          v23 = v128;
                          v65 = (SURFOBJ *)v114;
                          v58 = v116;
                          v70 = pco;
                        }
                        else
                        {
                          v65 = (SURFOBJ *)v114;
                          v64 = 0;
                        }
                        goto LABEL_82;
                      }
                      rclBounds = pco->rclBounds;
                    }
                    LOBYTE(v64) = (int)HT_HalftoneBitmap(
                                         (_DWORD)v121,
                                         (_DWORD)v120,
                                         (unsigned int)v144,
                                         (_DWORD)v67,
                                         (__int64)v146,
                                         (__int64)&v149) >= 0;
LABEL_82:
                    HTSEMOBJ::vRelease((HTSEMOBJ *)&v110);
                    if ( (_DWORD)v117 && v64 )
                    {
                      v71 = v113;
                      v72 = psoDest;
                      pptlSrc = 0LL;
                      ++*((_DWORD *)v113 + 23);
                      if ( v72->iType )
                      {
                        if ( (*((_DWORD *)v71 + 28) & 0x400) != 0 )
                          v73 = (*(__int64 (__fastcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v109 + 2856))(
                                  v72,
                                  v65,
                                  v70,
                                  v58,
                                  &prclDest,
                                  &pptlSrc);
                        else
                          v73 = ((__int64 (__fastcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))EngCopyBits)(
                                  v72,
                                  v65,
                                  v70,
                                  v58,
                                  &prclDest,
                                  &pptlSrc);
                      }
                      else
                      {
                        v73 = EngCopyBits(v72, v65, v70, v58, &prclDest, &pptlSrc);
                      }
                      v64 = v73;
                    }
                    if ( v23 )
                      GreAcquireSemaphore(ghsemHT);
                    goto LABEL_89;
                  }
                  if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                                       (__int64 *)&v118,
                                       0LL,
                                       0,
                                       v35,
                                       *v61,
                                       v63,
                                       v63,
                                       0,
                                       0xFFFFFF,
                                       0xFFFFFF,
                                       0) )
                  {
                    v59 = v118;
                    goto LABEL_65;
                  }
                }
                if ( v112 )
                  DEC_SHARE_REF_CNT(v112);
                goto LABEL_195;
              }
              v38 = v149;
              v44 = v45;
              p_left = (LONG *)v118;
              v43 = pco;
            }
            LODWORD(v117) = 1;
            if ( iDComplexity )
            {
              v106 = 0;
              v75 = 0LL;
              p_left = &v43->rclBounds.left;
              if ( iDComplexity != 1 )
                v75 = v43;
              pco = v75;
            }
            v47 = *((_QWORD *)v44 + 7);
            v48 = p_left[2];
            if ( v48 <= *p_left )
            {
              v49 = p_left[2];
              v48 = *p_left;
            }
            else
            {
              v49 = *p_left;
            }
            v50 = 0;
            if ( v49 >= 0 )
              v50 = v49;
            if ( v48 > (int)v47 )
              v48 = v47;
            v51 = v48 - v50;
            if ( v48 - v50 > 0 )
            {
              prclDest.left = v50;
              v52 = p_left[1];
              prclDest.right = v48;
              v53 = p_left[3];
              if ( v53 <= v52 )
              {
                v54 = p_left[3];
                v53 = v52;
              }
              else
              {
                v54 = v52;
              }
              v55 = 0;
              if ( v54 >= 0 )
                v55 = v54;
              v56 = HIDWORD(v47);
              if ( v53 > (int)v56 )
                v53 = v56;
              v57 = v53 - v55;
              if ( v53 - v55 > 0 )
              {
                prclDest.top = v55;
                prclDest.bottom = v53;
                v149 = v38 | 0x10;
                memset(v143, 0, sizeof(v143));
                LODWORD(v143[3]) = *((_DWORD *)v45 + 28) & 0x40000;
                v143[0] = __PAIR64__(v51, v107);
                LODWORD(v143[1]) = v57;
                v143[2] = 0LL;
                if ( SURFMEM::bCreateDIB(
                       (SURFMEM *)&v134,
                       (struct _DEVBITMAPINFO *)v143,
                       0LL,
                       0LL,
                       0,
                       0LL,
                       0LL,
                       0,
                       1,
                       0,
                       0) )
                {
                  v45 = v134;
                  goto LABEL_56;
                }
                v21 = -1;
              }
            }
            v18 = v21;
            goto LABEL_93;
          }
          if ( (unsigned int)bIsSourceBGRA((struct SURFACE *)v15) )
          {
            v37 = 512;
            v89 = 4;
            goto LABEL_155;
          }
LABEL_113:
          v18 = -1;
          goto LABEL_94;
        }
LABEL_146:
        v18 = -1;
        goto LABEL_95;
      }
      v78 = a1->sizlBitmap.cx;
      v30 = 0;
      v19 = ((v78 + 31) >> 3) & 0xFFFFFFFC;
    }
    v108 = 1;
    v107 = 1;
    goto LABEL_12;
  }
  return 0xFFFFFFFFLL;
}
