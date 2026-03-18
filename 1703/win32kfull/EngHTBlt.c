/*
 * XREFs of EngHTBlt @ 0x1C0030E00
 * Callers:
 *     EngAlphaBlend @ 0x1C0085010 (EngAlphaBlend.c)
 *     ?EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C0098798 (-EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 *     ?EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z @ 0x1C00ACB80 (-EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z.c)
 *     ?EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAH@Z @ 0x1C026E634 (-EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 * Callees:
 *     ?pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ @ 0x1C0032890 (-pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ.c)
 *     ?bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z @ 0x1C0032934 (-bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z.c)
 *     ?vRelease@HTSEMOBJ@@QEAAXXZ @ 0x1C0032E3C (-vRelease@HTSEMOBJ@@QEAAXXZ.c)
 *     ?ppalGetFromXlate@@YAPEAVPALETTE@@PEAVSURFACE@@0PEAVXLATE@@IH@Z @ 0x1C0032E7C (-ppalGetFromXlate@@YAPEAVPALETTE@@PEAVSURFACE@@0PEAVXLATE@@IH@Z.c)
 *     HT_HalftoneBitmap @ 0x1C0032F6C (HT_HalftoneBitmap.c)
 *     EngCopyBits @ 0x1C0075490 (EngCopyBits.c)
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C0075F90 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C0076190 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     EngBitBlt @ 0x1C00769E0 (EngBitBlt.c)
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C0081670 (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C0081778 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C0086D44 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0086EE0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?bEqualEntries@XEPALOBJ@@QEAAHV1@@Z @ 0x1C0096470 (-bEqualEntries@XEPALOBJ@@QEAAHV1@@Z.c)
 *     ??1?$AutoResource@$1?FreeTmpBuffer@@YAXPEAX@Z@@QEAA@XZ @ 0x1C009BE4C (--1-$AutoResource@$1-FreeTmpBuffer@@YAXPEAX@Z@@QEAA@XZ.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C009FD28 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C00AC408 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     ?bSetHTSrcSurfInfo@@YAHPEAU_SURFOBJ@@VXEPALOBJ@@PEAU_HTSURFACEINFO@@PEAU_XLATEOBJ@@@Z @ 0x1C00E9C18 (-bSetHTSrcSurfInfo@@YAHPEAU_SURFOBJ@@VXEPALOBJ@@PEAU_HTSURFACEINFO@@PEAU_XLATEOBJ@@@Z.c)
 *     ?bIsSourceBGRA@@YAHPEAVSURFACE@@@Z @ 0x1C00E9E44 (-bIsSourceBGRA@@YAHPEAVSURFACE@@@Z.c)
 *     ?bSetHTSurfInfo@@YAHPEAU_SURFOBJ@@PEAU_HTSURFACEINFO@@J@Z @ 0x1C00F17FC (-bSetHTSurfInfo@@YAHPEAU_SURFOBJ@@PEAU_HTSURFACEINFO@@J@Z.c)
 *     ?bCreateHTPalette@PALMEMOBJ@@QEAAHJPEAU_GDIINFO@@@Z @ 0x1C010EE7C (-bCreateHTPalette@PALMEMOBJ@@QEAAHJPEAU_GDIINFO@@@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall EngHTBlt(
        SURFOBJ *a1,
        SURFOBJ *a2,
        __int64 a3,
        CLIPOBJ *a4,
        struct XLATE *a5,
        struct tagCOLORADJUSTMENT *a6,
        XLATEOBJ *a7,
        XLATEOBJ *a8,
        XLATEOBJ *a9,
        __int64 *a10,
        int a11,
        XLATEOBJ *a12)
{
  __int64 v15; // r13
  POINTL v16; // rax
  __int64 v17; // r8
  struct SURFACE *v18; // rdx
  unsigned int v19; // r14d
  unsigned int v20; // ebx
  __int64 v21; // rax
  int v22; // r15d
  bool v23; // zf
  int v24; // esi
  int v25; // edx
  int v26; // edx
  int v27; // edx
  int v28; // edx
  int v29; // edx
  LONG v30; // eax
  int v31; // r12d
  struct SURFACE *v32; // rdx
  struct XLATE *v33; // r8
  struct PALETTE *v34; // rax
  __int64 v35; // r8
  struct PALETTE *v36; // rdi
  int v37; // r10d
  unsigned __int16 v38; // dx
  __int64 v39; // r9
  __int128 v40; // xmm0
  int v41; // eax
  CLIPOBJ *v42; // r8
  struct SURFACE *v43; // rdx
  struct SURFACE *v44; // r13
  BYTE iDComplexity; // r12
  int v46; // r11d
  XLATEOBJ *p_rclBounds; // rbx
  unsigned __int64 v48; // rax
  LONG *p_iSrcType; // r8
  int v50; // ecx
  LONG v51; // edx
  LONG v52; // r8d
  int v53; // r10d
  LONG v54; // ecx
  signed int flXlate; // edx
  int v56; // r8d
  LONG v57; // edx
  unsigned __int64 v58; // rax
  int v59; // eax
  XLATEOBJ *v60; // r12
  HPALETTE *v61; // rax
  SURFOBJ *v62; // r12
  struct PALETTE *v63; // rbx
  XLATEOBJ *v64; // rdi
  int v65; // ebx
  SURFOBJ *v66; // rdi
  POINTL v67; // r9
  _BYTE *v68; // r11
  __int16 v69; // dx
  unsigned int v70; // eax
  CLIPOBJ *v71; // r13
  struct SURFACE *v72; // rax
  SURFOBJ *v73; // rcx
  int v74; // eax
  CLIPOBJ *v76; // rax
  LONG cx; // ebx
  int v78; // eax
  LONG v79; // ebx
  LONG v80; // eax
  LONG v81; // ebx
  int v82; // ecx
  int v83; // ebx
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
  unsigned int *v101; // rdi
  int v102; // esi
  int v103; // r13d
  unsigned int v104; // r12d
  int v105; // r13d
  int v106; // [rsp+60h] [rbp-A0h]
  BYTE v107; // [rsp+64h] [rbp-9Ch]
  int v108; // [rsp+68h] [rbp-98h]
  __int64 v109; // [rsp+70h] [rbp-90h] BYREF
  XLATEOBJ *pxlo; // [rsp+78h] [rbp-88h]
  int v111; // [rsp+80h] [rbp-80h]
  int v112; // [rsp+84h] [rbp-7Ch] BYREF
  __int64 v113; // [rsp+88h] [rbp-78h] BYREF
  XLATEOBJ *v114; // [rsp+90h] [rbp-70h]
  CLIPOBJ *pco; // [rsp+98h] [rbp-68h]
  struct SURFACE *v116; // [rsp+A0h] [rbp-60h]
  POINTL pptlSrc; // [rsp+A8h] [rbp-58h] BYREF
  SURFOBJ *v118; // [rsp+B0h] [rbp-50h] BYREF
  XLATEOBJ *v119; // [rsp+B8h] [rbp-48h] BYREF
  struct tagCOLORADJUSTMENT *v120; // [rsp+C0h] [rbp-40h]
  XLATEOBJ *v121; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE *v122; // [rsp+D0h] [rbp-30h]
  struct XLATE *v123; // [rsp+D8h] [rbp-28h]
  SURFOBJ *psoDest; // [rsp+E0h] [rbp-20h]
  _BYTE v125[2]; // [rsp+E8h] [rbp-18h] BYREF
  __int16 v126; // [rsp+EAh] [rbp-16h]
  __int64 v127; // [rsp+F0h] [rbp-10h]
  int v128; // [rsp+F8h] [rbp-8h]
  __int64 v129; // [rsp+100h] [rbp+0h] BYREF
  __int64 v130; // [rsp+108h] [rbp+8h] BYREF
  char v131; // [rsp+110h] [rbp+10h]
  int v132; // [rsp+114h] [rbp+14h]
  __int64 *v133; // [rsp+118h] [rbp+18h]
  struct SURFACE *v134; // [rsp+120h] [rbp+20h] BYREF
  char v135; // [rsp+128h] [rbp+28h]
  int v136; // [rsp+12Ch] [rbp+2Ch]
  __int64 v137; // [rsp+130h] [rbp+30h] BYREF
  int v138; // [rsp+138h] [rbp+38h]
  int v139; // [rsp+140h] [rbp+40h] BYREF
  SIZEL sizlBitmap; // [rsp+144h] [rbp+44h]
  __int128 v141; // [rsp+14Ch] [rbp+4Ch]
  int v142; // [rsp+15Ch] [rbp+5Ch]
  _DWORD v143[4]; // [rsp+160h] [rbp+60h] BYREF
  _BYTE *v144; // [rsp+170h] [rbp+70h]
  int v145; // [rsp+178h] [rbp+78h] BYREF
  int v146; // [rsp+17Ch] [rbp+7Ch]
  int v147; // [rsp+180h] [rbp+80h]
  int v148; // [rsp+184h] [rbp+84h]
  _BYTE v149[12]; // [rsp+188h] [rbp+88h]
  int v150; // [rsp+194h] [rbp+94h]
  struct PALETTE *v151; // [rsp+198h] [rbp+98h]
  _BYTE v152[32]; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 v153; // [rsp+1C0h] [rbp+C0h]
  _BYTE v154[32]; // [rsp+1C8h] [rbp+C8h] BYREF
  _DWORD *v155; // [rsp+1E8h] [rbp+E8h]
  _BYTE v156[48]; // [rsp+1F0h] [rbp+F0h] BYREF
  __int16 v157; // [rsp+220h] [rbp+120h] BYREF
  char v158; // [rsp+223h] [rbp+123h]
  _BYTE *v159; // [rsp+228h] [rbp+128h]
  __int128 v160; // [rsp+230h] [rbp+130h]
  __int128 v161; // [rsp+240h] [rbp+140h]
  RECTL rclBounds; // [rsp+250h] [rbp+150h]
  RECTL prclDest; // [rsp+260h] [rbp+160h] BYREF
  __int64 v164; // [rsp+270h] [rbp+170h]
  __int64 v165; // [rsp+278h] [rbp+178h]
  RECTL prclTrg; // [rsp+290h] [rbp+190h] BYREF
  RECTL v167; // [rsp+2A0h] [rbp+1A0h] BYREF
  _BYTE v168[256]; // [rsp+2B0h] [rbp+1B0h] BYREF

  v123 = a5;
  v120 = a6;
  v114 = a7;
  pxlo = a8;
  v119 = a9;
  v133 = a10;
  v121 = a12;
  pco = a4;
  v129 = a3;
  *(_QWORD *)&prclTrg.left = a2;
  psoDest = a1;
  v116 = (struct SURFACE *)SURFOBJ_TO_SURFACE(a1);
  v15 = SURFOBJ_TO_SURFACE(a2);
  v16 = (POINTL)SURFOBJ_TO_SURFACE(a3);
  v18 = v116;
  v19 = 0;
  pptlSrc = v16;
  v20 = 0;
  if ( v116 )
  {
    v21 = *((_QWORD *)v116 + 6);
    v109 = v21;
    if ( !v21 )
      return v19;
    v22 = 1;
    v23 = (*(_DWORD *)(v21 + 32) & 1) == 0;
    v24 = *(_DWORD *)(v21 + 32) & 1;
    v128 = v24;
    v112 = v24;
    if ( !v23 )
    {
      GreAcquireSemaphore(ghsemHT);
      v21 = v109;
      v18 = v116;
    }
    if ( a1->iType )
    {
      v31 = *(_DWORD *)(v21 + 2392);
      if ( v31 )
      {
        switch ( v31 )
        {
          case 2:
            v106 = 2;
            v108 = 2;
            break;
          case 3:
            v108 = 255;
            v106 = 2;
            break;
          case 4:
            v108 = 254;
            v106 = 3;
            break;
          case 5:
            v108 = 253;
            v106 = 4;
            break;
          case 6:
            v108 = 5;
            v106 = 5;
            break;
          case 7:
            v108 = 6;
            v106 = 6;
            break;
          default:
            goto LABEL_97;
        }
        goto LABEL_12;
      }
    }
    else
    {
      v25 = *((_DWORD *)v18 + 24) - 1;
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
              v29 = v28 - 1;
              if ( v29 )
              {
                if ( v29 != 1 )
                  goto LABEL_97;
                cx = a1->sizlBitmap.cx;
                v31 = 7;
                v20 = 4 * cx;
                v108 = 6;
                v106 = 6;
              }
              else
              {
                v30 = a1->sizlBitmap.cx;
                v31 = 6;
                v108 = 5;
                v106 = 5;
                v20 = (3 * (v30 + 1)) & 0xFFFFFFFC;
              }
            }
            else
            {
              v80 = a1->sizlBitmap.cx;
              v31 = 5;
              v108 = 253;
              v106 = 4;
              v20 = (2 * v80 + 2) & 0xFFFFFFFC;
            }
          }
          else
          {
            v81 = a1->sizlBitmap.cx;
            v31 = 4;
            v108 = 254;
            v20 = (v81 + 3) & 0xFFFFFFFC;
            v106 = 3;
          }
        }
        else
        {
          v17 = 2LL;
          v82 = *(_DWORD *)(v21 + 2392);
          v83 = (a1->sizlBitmap.cx + 7) >> 1;
          v84 = 0;
          v20 = v83 & 0xFFFFFFFC;
          v106 = 2;
          if ( v82 != 2 )
            v17 = 255LL;
          LOBYTE(v84) = v82 != 2;
          v108 = v17;
          v31 = v84 + 2;
        }
LABEL_12:
        v167.right = a2->sizlBitmap.cx;
        v167.bottom = a2->sizlBitmap.cy;
        *(_QWORD *)&v167.left = 0LL;
        ERECTL::operator*=(&v167, v119, v17, 2LL);
        if ( (unsigned int)ERECTL::bEmpty((ERECTL *)&v167) )
        {
LABEL_135:
          v19 = v22;
          goto LABEL_97;
        }
        if ( !PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v109) && !(unsigned int)PDEVOBJ::bEnableHalftone((PDEVOBJ *)&v109, v120) )
        {
          v22 = -1;
          goto LABEL_135;
        }
        v130 = 0LL;
        v131 = 0;
        v132 = 0;
        HTSEMOBJ::vRelease((HTSEMOBJ *)&v112);
        if ( !v15 )
          goto LABEL_148;
        if ( (*(_DWORD *)(v15 + 112) & 0x1000) != 0 )
        {
          v118 = *(SURFOBJ **)(v15 + 48);
          PDEVOBJ::vSync((PDEVOBJ *)&v118, a2, 0LL, 0);
        }
        if ( a2->iType || a2->iBitmapFormat - 7 <= 1 )
        {
          iBitmapFormat = a2->iBitmapFormat;
          sizlBitmap = 0LL;
          v141 = 0uLL;
          v142 = 0;
          sizlBitmap = a2->sizlBitmap;
          v86 = *(_DWORD *)(v15 + 112) & 0x40000;
          *(_QWORD *)((char *)&v141 + 4) = 0LL;
          HIDWORD(v141) = v86;
          if ( iBitmapFormat == 7 )
          {
            v139 = 2;
          }
          else if ( iBitmapFormat == 8 )
          {
            v139 = 3;
          }
          else
          {
            v139 = iBitmapFormat;
          }
          if ( !SURFMEM::bCreateDIB((SURFMEM *)&v130, (struct _DEVBITMAPINFO *)&v139, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
            goto LABEL_146;
          v87 = 0LL;
          if ( v130 )
            v87 = (SURFOBJ *)(v130 + 24);
          if ( !EngCopyBits(v87, a2, 0LL, xloIdent, &v167, (POINTL *)&v167) )
          {
LABEL_146:
            if ( v24 )
              GreAcquireSemaphore(ghsemHT);
            goto LABEL_148;
          }
          v122 = (_BYTE *)v130;
        }
        else
        {
          v122 = (_BYTE *)v15;
        }
        if ( v24 )
          GreAcquireSemaphore(ghsemHT);
        if ( PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v109) || (unsigned int)PDEVOBJ::bEnableHalftone((PDEVOBJ *)&v109, v120) )
        {
          v151 = ppalGetFromXlate((struct SURFACE *)v15, v116, v123, 1u, 1);
          if ( !v151 )
          {
LABEL_96:
            SURFMEM::~SURFMEM((SURFMEM *)&v130);
LABEL_97:
            HTSEMOBJ::vRelease((HTSEMOBJ *)&v112);
            return v19;
          }
          v34 = ppalGetFromXlate((struct SURFACE *)v15, v32, v33, 2u, 1);
          v35 = v109;
          v36 = v34;
          v138 = 0;
          v137 = 0LL;
          v118 = 0LL;
          if ( v31 == *(_DWORD *)(v109 + 2392) )
          {
            v37 = *(_DWORD *)(v109 + 32) & 0x200;
          }
          else
          {
            if ( !(unsigned int)PALMEMOBJ::bCreateHTPalette((PALMEMOBJ *)&v137, v31, (struct _GDIINFO *)(v109 + 2152)) )
              goto LABEL_115;
            v118 = (SURFOBJ *)&v137;
            v78 = XEPALOBJ::bEqualEntries(&v137, v36);
            v35 = v109;
            v37 = v78;
          }
          v38 = a11;
          LODWORD(v113) = v37;
          if ( a11 != 512 )
            goto LABEL_27;
          iUniq = v121->iUniq;
          if ( (unsigned __int8)v121->iUniq )
          {
            v38 = 0;
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
LABEL_157:
            v125[0] = v89;
            if ( v36 )
            {
              v127 = *((_QWORD *)v36 + 15);
              v126 = *((_WORD *)v36 + 14);
              v90 = *((_DWORD *)v36 + 6);
              if ( (v90 & 8) != 0
                || (v90 & 2) != 0
                && (v91 = (_DWORD *)*((_QWORD *)v36 + 15), *v91 == 16711680)
                && v91[1] == 65280
                && v91[2] == 255 )
              {
                v125[0] = v89 | 2;
              }
            }
            v159 = v125;
LABEL_27:
            v39 = v38;
            v157 = v38;
            v40 = *(_OWORD *)&v119->iUniq;
            v161 = *(_OWORD *)&pxlo->iUniq;
            v164 = *(_QWORD *)&v114->iUniq;
            v160 = v40;
            v158 = *(_BYTE *)(v35 + 2384);
            if ( v123 )
              v41 = *((_DWORD *)v123 + 18);
            else
              LOBYTE(v41) = 0;
            if ( (v41 & 4) != 0 || (v41 & 0x20) == 0 && (v41 & 3) != 0 )
            {
              v39 = v38;
              LOWORD(v39) = v38 | 0x80;
              v157 = v38 | 0x80;
            }
            v42 = pco;
            v43 = v116;
            v134 = 0LL;
            v44 = v116;
            v135 = 0;
            v136 = 0;
            v111 = 0;
            if ( pco )
            {
              iDComplexity = pco->iDComplexity;
              v107 = iDComplexity;
            }
            else
            {
              iDComplexity = 0;
              v107 = 0;
            }
            v46 = v106;
            if ( !psoDest->iType && psoDest->lDelta == v20 && (v106 == 3 || v37) && iDComplexity != 3 )
            {
              if ( psoDest != *(SURFOBJ **)&prclTrg.left
                || (p_rclBounds = pxlo, v92 = bIntersect(v119, pxlo, pco, v39), !v92) )
              {
LABEL_57:
                v60 = xloIdent;
                pxlo = xloIdent;
                v114 = xloIdent;
                v119 = 0LL;
                v121 = 0LL;
                v61 = (HPALETTE *)PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v109);
                if ( (_DWORD)v113 )
                {
                  v64 = xloIdent;
                  goto LABEL_69;
                }
                EPALOBJ::EPALOBJ((EPALOBJ *)&v113, *v61);
                v62 = (SURFOBJ *)&v113;
                if ( v118 )
                  v62 = v118;
                if ( !v123 || (v63 = (struct PALETTE *)*((_QWORD *)v123 + 7)) == 0LL )
                  v63 = ppalDefault;
                if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                                     &v119,
                                     0LL,
                                     0LL,
                                     v62->dhsurf,
                                     v36,
                                     v63,
                                     v63,
                                     0,
                                     0xFFFFFF,
                                     0xFFFFFF,
                                     0) )
                {
                  pxlo = v119;
                  if ( !*(_QWORD *)&pptlSrc && a11 != 512 || !v111 )
                  {
                    v64 = v114;
LABEL_66:
                    if ( v113 )
                      DEC_SHARE_REF_CNT(v113);
                    v60 = pxlo;
LABEL_69:
                    HTSEMOBJ::vRelease((HTSEMOBJ *)&v112);
                    PDEVOBJ::vSync((PDEVOBJ *)&v109, psoDest, 0LL, 0);
                    if ( *(_QWORD *)&pptlSrc || a11 == 512 )
                    {
                      if ( v111 )
                      {
                        v93 = *((_DWORD *)v44 + 14);
                        ++*((_DWORD *)v44 + 23);
                        prclTrg.right = v93;
                        prclTrg.bottom = *((_DWORD *)v44 + 15);
                        *(_QWORD *)&prclTrg.left = 0LL;
                        v94 = (*((_DWORD *)v116 + 28) & 0x400) != 0
                            ? (*(__int64 (__fastcall **)(__int64, SURFOBJ *, _QWORD, XLATEOBJ *, RECTL *, RECTL *))(v109 + 2856))(
                                (__int64)v44 + 24,
                                psoDest,
                                0LL,
                                v64,
                                &prclTrg,
                                &prclDest)
                            : ((__int64 (__fastcall *)(char *, SURFOBJ *, _QWORD, XLATEOBJ *, RECTL *, RECTL *))EngCopyBits)(
                                (char *)v44 + 24,
                                psoDest,
                                0LL,
                                v64,
                                &prclTrg,
                                &prclDest);
                        if ( !v94
                          && !EngBitBlt(
                                (SURFOBJ *)((char *)v44 + 24),
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
                          if ( v24 )
                            GreAcquireSemaphore(ghsemHT);
LABEL_196:
                          v19 = -1;
LABEL_93:
                          EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v121);
                          EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v119);
LABEL_94:
                          SURFMEM::~SURFMEM((SURFMEM *)&v134);
LABEL_95:
                          PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v137);
                          goto LABEL_96;
                        }
                      }
                    }
                    if ( v24 )
                      GreAcquireSemaphore(ghsemHT);
                    if ( !PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v109)
                      && !(unsigned int)PDEVOBJ::bEnableHalftone((PDEVOBJ *)&v109, v120) )
                    {
                      goto LABEL_196;
                    }
                    v65 = 0;
                    v114 = (XLATEOBJ *)PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v109);
                    v153 = 0LL;
                    if ( !(unsigned int)bSetHTSrcSurfInfo(
                                          -(__int64)(v122 != 0LL) & (unsigned __int64)(v122 + 24),
                                          v151,
                                          v152,
                                          v123)
                      || (v66 = (SURFOBJ *)(((unsigned __int64)v44 + 24) & -(__int64)(v44 != 0LL)),
                          v118 = v66,
                          !(unsigned int)bSetHTSurfInfo(v66, (struct _HTSURFACEINFO *)v154, v108))
                      || (v67 = pptlSrc) != 0LL
                      && !(unsigned int)bSetHTSurfInfo(
                                          (struct _SURFOBJ *)(*(_QWORD *)&pptlSrc + 24LL),
                                          (struct _HTSURFACEINFO *)v156,
                                          *(_DWORD *)(v129 + 72)) )
                    {
LABEL_90:
                      if ( v153 )
                        FreeThreadBufferWithTag();
                      v19 = v65 != 0 ? 1 : -1;
                      goto LABEL_93;
                    }
                    v122 = 0LL;
                    LODWORD(v68) = 0;
                    if ( v67 )
                    {
                      if ( (unsigned int)bUMPDSecurityGateEx() && !v133 )
                      {
                        if ( gfUMPDDebug )
                          DbgPrint("windows\\core\\ntgdi\\gre\\windows\\htblt.cxx:%d:EngHTBlt:pptlMask == NULL\n", 1063);
                        if ( v153 )
                          FreeThreadBufferWithTag();
                        goto LABEL_196;
                      }
                      v68 = v156;
                      v165 = *v133;
                      v122 = v156;
                    }
                    v69 = v157;
                    v70 = 256;
                    if ( (*(_DWORD *)(v109 + 2396) & 0x100) == 0 )
                    {
                      v69 = v157 | 2;
                      v157 |= 2u;
                    }
                    if ( v106 == 3 )
                    {
                      v143[0] = 65792;
                      v155 = v143;
                      v144 = v168;
                      v143[1] = 255;
                      v143[2] = 256;
                      cEntries = v60->cEntries;
                      if ( cEntries > 0x100 || (v70 = v60->cEntries, cEntries) )
                      {
                        v96 = v168;
                        v97 = v70;
                        v98 = 0LL;
                        do
                        {
                          v99 = v60->pulXlate[v98++];
                          *v96++ = v99;
                          --v97;
                        }
                        while ( v97 );
                      }
                      v60 = xloIdent;
                      pxlo = xloIdent;
                    }
                    v71 = pco;
                    if ( v107 )
                    {
                      v157 = v69 | 1;
                      if ( v107 != 1 )
                      {
                        XCLIPOBJ::cEnumStart((XCLIPOBJ *)pco, 0, 0, 4u, 0x14u);
                        v65 = 1;
                        v100 = AllocFreeTmpBuffer(324LL);
                        v101 = (unsigned int *)v100;
                        if ( v100 )
                        {
                          v102 = (int)v122;
                          v129 = v100;
                          do
                          {
                            v103 = XCLIPOBJ::bEnum((XCLIPOBJ *)v71, 0x144u, v101, 0LL);
                            LODWORD(v113) = v103;
                            v104 = 0;
                            if ( *v101 )
                            {
                              v105 = (int)v114;
                              do
                              {
                                rclBounds = *(RECTL *)&v101[4 * v104++ + 1];
                                v65 = ((int)HT_HalftoneBitmap(
                                              v105,
                                              (_DWORD)v120,
                                              (unsigned int)v152,
                                              v102,
                                              (__int64)v154,
                                              (__int64)&v157) >= 0) & (unsigned __int8)v65;
                              }
                              while ( v104 < *v101 );
                              v103 = v113;
                            }
                            if ( !v103 )
                              break;
                            v71 = pco;
                          }
                          while ( v65 );
                          AutoResource<&void FreeTmpBuffer(void *)>::~AutoResource<&void FreeTmpBuffer(void *)>(&v129);
                          v24 = v128;
                          v66 = v118;
                          v60 = pxlo;
                          v71 = pco;
                        }
                        else
                        {
                          v66 = v118;
                          v65 = 0;
                        }
                        goto LABEL_83;
                      }
                      rclBounds = pco->rclBounds;
                    }
                    LOBYTE(v65) = (int)HT_HalftoneBitmap(
                                         (_DWORD)v114,
                                         (_DWORD)v120,
                                         (unsigned int)v152,
                                         (_DWORD)v68,
                                         (__int64)v154,
                                         (__int64)&v157) >= 0;
LABEL_83:
                    HTSEMOBJ::vRelease((HTSEMOBJ *)&v112);
                    if ( v111 && v65 )
                    {
                      v72 = v116;
                      v73 = psoDest;
                      pptlSrc = 0LL;
                      ++*((_DWORD *)v116 + 23);
                      if ( v73->iType )
                      {
                        if ( (*((_DWORD *)v72 + 28) & 0x400) != 0 )
                          v74 = (*(__int64 (__fastcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v109 + 2856))(
                                  v73,
                                  v66,
                                  v71,
                                  v60,
                                  &prclDest,
                                  &pptlSrc);
                        else
                          v74 = ((__int64 (__fastcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))EngCopyBits)(
                                  v73,
                                  v66,
                                  v71,
                                  v60,
                                  &prclDest,
                                  &pptlSrc);
                      }
                      else
                      {
                        v74 = EngCopyBits(v73, v66, v71, v60, &prclDest, &pptlSrc);
                      }
                      v65 = v74;
                    }
                    if ( v24 )
                      GreAcquireSemaphore(ghsemHT);
                    goto LABEL_90;
                  }
                  if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                                       &v121,
                                       0LL,
                                       0LL,
                                       v36,
                                       v62->dhsurf,
                                       v63,
                                       v63,
                                       0,
                                       0xFFFFFF,
                                       0xFFFFFF,
                                       0) )
                  {
                    v64 = v121;
                    goto LABEL_66;
                  }
                }
                if ( v113 )
                  DEC_SHARE_REF_CNT(v113);
                goto LABEL_196;
              }
              LOWORD(v39) = v157;
              v43 = v44;
              v46 = v106;
              v42 = pco;
            }
            else
            {
              p_rclBounds = pxlo;
            }
            v111 = 1;
            if ( iDComplexity )
            {
              v107 = 0;
              v76 = 0LL;
              p_rclBounds = (XLATEOBJ *)&v42->rclBounds;
              if ( iDComplexity != 1 )
                v76 = v42;
              pco = v76;
            }
            v48 = *((_QWORD *)v43 + 7);
            p_iSrcType = (LONG *)&p_rclBounds->iSrcType;
            v50 = p_rclBounds->iUniq;
            if ( *(_DWORD *)&p_rclBounds->iSrcType <= (signed int)p_rclBounds->iUniq )
            {
              v50 = *(_DWORD *)&p_rclBounds->iSrcType;
              p_iSrcType = (LONG *)p_rclBounds;
            }
            v51 = *p_iSrcType;
            v52 = 0;
            if ( v50 >= 0 )
              v52 = v50;
            if ( v51 > (int)v48 )
              v51 = v48;
            v53 = v51 - v52;
            if ( v51 - v52 > 0 )
            {
              v54 = p_rclBounds->cEntries;
              prclDest.right = v51;
              flXlate = p_rclBounds->flXlate;
              prclDest.left = v52;
              if ( v54 <= flXlate )
              {
                v56 = v54;
                v54 = flXlate;
              }
              else
              {
                v56 = flXlate;
              }
              v57 = 0;
              if ( v56 >= 0 )
                v57 = v56;
              v58 = HIDWORD(v48);
              if ( v54 > (int)v58 )
                v54 = v58;
              if ( v54 - v57 > 0 )
              {
                prclDest.bottom = v54;
                v146 = 0;
                *(_QWORD *)&v149[4] = 0LL;
                v147 = v54 - v57;
                prclDest.top = v57;
                v157 = v39 | 0x10;
                v59 = *((_DWORD *)v44 + 28) & 0x40000;
                v148 = 0;
                v150 = 0;
                *(_DWORD *)&v149[8] = v59;
                v146 = v53;
                *(_QWORD *)v149 = 0LL;
                v145 = v46;
                if ( SURFMEM::bCreateDIB(
                       (SURFMEM *)&v134,
                       (struct _DEVBITMAPINFO *)&v145,
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
                  v44 = v134;
                  goto LABEL_57;
                }
                v22 = -1;
              }
            }
            v19 = v22;
            goto LABEL_94;
          }
          if ( (unsigned int)bIsSourceBGRA((struct SURFACE *)v15) )
          {
            v38 = 512;
            v89 = 4;
            goto LABEL_157;
          }
LABEL_115:
          v19 = -1;
          goto LABEL_95;
        }
LABEL_148:
        v19 = -1;
        goto LABEL_96;
      }
      v79 = a1->sizlBitmap.cx;
      v31 = 0;
      v20 = ((v79 + 31) >> 3) & 0xFFFFFFFC;
    }
    v108 = 1;
    v106 = 1;
    goto LABEL_12;
  }
  return 0xFFFFFFFFLL;
}
