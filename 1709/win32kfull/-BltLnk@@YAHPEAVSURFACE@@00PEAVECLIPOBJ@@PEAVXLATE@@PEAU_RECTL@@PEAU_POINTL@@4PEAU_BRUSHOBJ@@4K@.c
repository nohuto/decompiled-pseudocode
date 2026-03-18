/*
 * XREFs of ?BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C00BB584
 * Callers:
 *     ?vExpandAndCopyText@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@PEAU_GLYPHPOS@@KPEAEKK00PEAU_RECTL@@4HHK44KPEAU_BRUSHOBJ@@PEAU_POINTL@@@Z @ 0x1C0011FE0 (-vExpandAndCopyText@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@PEAU_GLYPHPOS@@KPEAEKK00PEAU_RECTL@@4HHK44KPE.c)
 *     EngBitBlt @ 0x1C002DC60 (EngBitBlt.c)
 * Callees:
 *     EngCopyBits @ 0x1C002C650 (EngCopyBits.c)
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C002D16C (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C002D380 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C00B7CB4 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     ?BltLnkRect@@YAXPEAU_BLTLNKINFO@@PEAU_RECTL@@@Z @ 0x1C00BBD30 (-BltLnkRect@@YAXPEAU_BLTLNKINFO@@PEAU_RECTL@@@Z.c)
 *     ?pvGetEngRbrush@@YAPEAXPEAU_BRUSHOBJ@@@Z @ 0x1C00BD20C (-pvGetEngRbrush@@YAPEAXPEAU_BRUSHOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall BltLnk(
        struct SURFACE *a1,
        struct SURFACE *a2,
        struct SURFACE *a3,
        struct ECLIPOBJ *a4,
        XLATEOBJ *a5,
        struct _RECTL *a6,
        struct _POINTL *a7,
        struct _POINTL *a8,
        struct _BRUSHOBJ *a9,
        struct _POINTL *a10,
        unsigned int a11)
{
  struct _RECTL *v11; // r15
  struct SURFACE *v14; // r11
  struct _BRUSHOBJ *v15; // rbx
  struct SURFACE *v16; // r9
  int v17; // ecx
  XLATEOBJ *v18; // r8
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  struct _RECTL v24; // xmm0
  unsigned __int8 v25; // r14
  unsigned int v26; // edi
  __int64 v27; // rdx
  char v28; // r8
  char v29; // r13
  char v30; // r14
  char v31; // r12
  __int64 v32; // rcx
  int v33; // esi
  LONG x; // r11d
  LONG y; // r10d
  int v36; // eax
  unsigned int v37; // r8d
  int v38; // r10d
  void *v39; // r11
  struct _POINTL *v40; // rdx
  XCLIPOBJ *v41; // r10
  struct _RECTL v42; // xmm0
  int v43; // r14d
  unsigned int v44; // r13d
  struct _RECTL *v45; // rbx
  LONG right; // eax
  LONG v47; // eax
  LONG bottom; // eax
  LONG v49; // esi
  LONG v50; // r12d
  LONG left; // ecx
  struct _BRUSHOBJ *EngRbrush; // rax
  int iSolidColor; // ecx
  PVOID pvRbrush; // rax
  int v56; // ecx
  struct SURFACE *v57; // r14
  unsigned int v58; // r8d
  int v59; // r10d
  int v60; // ecx
  int v61; // r9d
  int v62; // eax
  int v63; // edx
  int v64; // edx
  int v65; // edx
  int v66; // edx
  LONG top; // eax
  bool v68; // zf
  int v69; // ecx
  POINTL v70; // r14
  int v71; // eax
  unsigned int v72; // r10d
  int v73; // r8d
  signed int v74; // r9d
  int flColorType; // r11d
  int v76; // eax
  unsigned __int8 v77; // [rsp+60h] [rbp-A0h]
  unsigned __int8 v78; // [rsp+61h] [rbp-9Fh]
  BOOL v79; // [rsp+64h] [rbp-9Ch]
  int v80; // [rsp+64h] [rbp-9Ch]
  LONG v81; // [rsp+64h] [rbp-9Ch]
  int v82; // [rsp+68h] [rbp-98h]
  char v83; // [rsp+6Ch] [rbp-94h]
  unsigned int v84; // [rsp+74h] [rbp-8Ch]
  int v85; // [rsp+78h] [rbp-88h]
  unsigned int v86; // [rsp+78h] [rbp-88h]
  int v87; // [rsp+88h] [rbp-78h]
  POINTL pptlSrc; // [rsp+90h] [rbp-70h] BYREF
  struct SURFACE *v89; // [rsp+98h] [rbp-68h]
  struct _POINTL *v90; // [rsp+A0h] [rbp-60h]
  BOOL v91; // [rsp+A8h] [rbp-58h]
  BOOL v92; // [rsp+ACh] [rbp-54h]
  BOOL v93; // [rsp+B0h] [rbp-50h]
  XCLIPOBJ *v94; // [rsp+B8h] [rbp-48h]
  __int64 v95; // [rsp+C0h] [rbp-40h] BYREF
  char v96; // [rsp+C8h] [rbp-38h]
  int v97; // [rsp+CCh] [rbp-34h]
  POINTL *v98; // [rsp+D0h] [rbp-30h]
  struct _POINTL *v99; // [rsp+D8h] [rbp-28h]
  struct _RECTL v100; // [rsp+E0h] [rbp-20h] BYREF
  struct SURFACE *v101; // [rsp+F0h] [rbp-10h]
  struct SURFACE *v102; // [rsp+F8h] [rbp-8h]
  struct SURFACE *v103; // [rsp+100h] [rbp+0h]
  struct ECLIPOBJ *v104; // [rsp+108h] [rbp+8h]
  XLATEOBJ *v105; // [rsp+110h] [rbp+10h]
  struct _BRUSHOBJ *v106; // [rsp+118h] [rbp+18h]
  char v107; // [rsp+120h] [rbp+20h]
  unsigned int v108; // [rsp+124h] [rbp+24h]
  int v109; // [rsp+128h] [rbp+28h]
  int v110; // [rsp+12Ch] [rbp+2Ch]
  __int64 v111; // [rsp+130h] [rbp+30h]
  __int64 v112; // [rsp+138h] [rbp+38h]
  PVOID v113; // [rsp+140h] [rbp+40h]
  PVOID v114; // [rsp+148h] [rbp+48h]
  int v115; // [rsp+150h] [rbp+50h]
  int v116; // [rsp+154h] [rbp+54h]
  int v117; // [rsp+158h] [rbp+58h]
  int v118; // [rsp+15Ch] [rbp+5Ch]
  int v119; // [rsp+160h] [rbp+60h]
  int v120; // [rsp+164h] [rbp+64h]
  int v121; // [rsp+168h] [rbp+68h]
  int v122; // [rsp+16Ch] [rbp+6Ch]
  unsigned __int64 v123; // [rsp+170h] [rbp+70h]
  int v124; // [rsp+178h] [rbp+78h]
  int v125; // [rsp+17Ch] [rbp+7Ch]
  ULONG v126; // [rsp+180h] [rbp+80h]
  LONG v127; // [rsp+184h] [rbp+84h]
  LONG v128; // [rsp+188h] [rbp+88h]
  unsigned int v129; // [rsp+18Ch] [rbp+8Ch]
  int v130; // [rsp+190h] [rbp+90h]
  int v131; // [rsp+194h] [rbp+94h]
  int v132; // [rsp+198h] [rbp+98h]
  char v133; // [rsp+19Ch] [rbp+9Ch]
  unsigned int v134; // [rsp+1B4h] [rbp+B4h]
  int v135; // [rsp+1B8h] [rbp+B8h]
  BOOL v136; // [rsp+1BCh] [rbp+BCh]
  BOOL v137; // [rsp+1C0h] [rbp+C0h]
  BOOL v138; // [rsp+1C4h] [rbp+C4h]
  BOOL v139; // [rsp+1C8h] [rbp+C8h]
  _QWORD v140[4]; // [rsp+1D0h] [rbp+D0h] BYREF
  struct SURFACE *v141; // [rsp+1F0h] [rbp+F0h]
  struct _BRUSHOBJ *v142; // [rsp+1F8h] [rbp+F8h]
  struct _RECTL *v143; // [rsp+200h] [rbp+100h]
  RECTL prclDest; // [rsp+208h] [rbp+108h] BYREF
  unsigned int v145; // [rsp+220h] [rbp+120h] BYREF
  _OWORD v146[20]; // [rsp+224h] [rbp+124h] BYREF

  v11 = a6;
  v89 = a1;
  v14 = a2;
  v94 = a4;
  v15 = 0LL;
  v16 = a1;
  v98 = a7;
  v99 = a8;
  v17 = *((_DWORD *)a1 + 24);
  v141 = a3;
  v18 = a5;
  pptlSrc = (POINTL)a2;
  v143 = a6;
  v142 = a9;
  v90 = a10;
  v95 = 0LL;
  v96 = 0;
  v97 = 0;
  v19 = v17 - 1;
  if ( v19 )
  {
    v20 = v19 - 1;
    if ( v20 )
    {
      v21 = v20 - 1;
      if ( v21 )
      {
        v22 = v21 - 1;
        if ( v22 )
        {
          v23 = v22 - 1;
          if ( v23 )
          {
            if ( v23 == 1 )
              v82 = 64;
            else
              v82 = v87;
          }
          else
          {
            v82 = 83;
          }
        }
        else
        {
          v82 = 126;
        }
      }
      else
      {
        v82 = 250;
      }
    }
    else
    {
      v82 = 498;
    }
  }
  else
  {
    v82 = 1986;
  }
  v24 = *a6;
  if ( !a5 )
    v18 = xloIdent;
  v104 = a4;
  v105 = v18;
  v101 = v16;
  v84 = a11 >> 8;
  v102 = a2;
  v106 = a9;
  v25 = a11 & 0xC3 | (4 * (a11 & 0xC)) | ((unsigned __int8)a11 >> 2) & 0xC;
  v77 = a11 & 0xA5 | (8 * (a11 & 0xA)) | ((unsigned __int8)a11 >> 3) & 0xA;
  v78 = BYTE1(a11) & 0xA5 | (8 * (BYTE1(a11) & 0xA)) | (BYTE1(a11) >> 3) & 0xA;
  v100 = v24;
  v92 = (a11 & 0xF) != (unsigned __int8)a11 >> 4;
  v26 = 1;
  v27 = (a11 & 0xF) != (unsigned __int8)a11 >> 4 || (BYTE1(a11) & 0xF) != BYTE1(a11) >> 4;
  v85 = v27;
  v28 = v25 >> 4;
  v29 = a11 & 3 | (4 * (a11 & 0xC)) & 0xF | ((unsigned __int8)a11 >> 2) & 0xC;
  v68 = (v25 & 0xF) == v25 >> 4;
  v83 = v28;
  v30 = BYTE1(a11) & 3 | (4 * (BYTE1(a11) & 0xC)) & 0xF | (BYTE1(a11) >> 2) & 0xC;
  v91 = !v68;
  v31 = (unsigned __int8)(BYTE1(a11) & 0xC3 | (4 * (BYTE1(a11) & 0xC)) | (BYTE1(a11) >> 2) & 0xC) >> 4;
  v93 = v30 != v31;
  v79 = v29 != v28 || v30 != v31;
  if ( (_DWORD)v27 || (unsigned __int8)a11 != v84 && !a3 )
  {
    if ( a9 && a9->iSolidColor == -1 )
    {
      EngRbrush = (struct _BRUSHOBJ *)pvGetEngRbrush(a9);
      v28 = v83;
      v15 = EngRbrush;
      v16 = v89;
      v14 = (struct SURFACE *)pptlSrc;
    }
    else
    {
      v15 = a9;
    }
  }
  v32 = 1LL;
  v109 = 1;
  v33 = 1;
  v110 = 1;
  v108 = 4;
  if ( v79 )
  {
    v27 = *((unsigned int *)v14 + 22);
    v111 = *((_QWORD *)v14 + 10);
    v115 = v27;
    x = v98->x;
    y = v98->y;
    v123 = __PAIR64__(y, v98->x);
    if ( v111 != *((_QWORD *)v16 + 10) )
      goto LABEL_19;
    top = a6->top;
    v81 = top;
    v68 = y == top;
    if ( y < top )
    {
      v33 = -1;
      v108 = 2;
      v110 = -1;
      v68 = y == top;
    }
    if ( v68 )
    {
      if ( x < a6->left )
        v32 = 0xFFFFFFFFLL;
      v109 = v32;
    }
    if ( (unsigned __int8)a11 != v84 && v29 != v28 && v30 != v31
      || ((_DWORD)v32 == -1 || v33 == -1) && (v32 = (unsigned int)(a6->right - a6->left), (int)v32 > v82) )
    {
      memset(v140, 0, sizeof(v140));
      v69 = a6->right - a6->left;
      v70 = pptlSrc;
      LODWORD(v140[0]) = *(_DWORD *)(*(_QWORD *)&pptlSrc + 96LL);
      v71 = a6->bottom - v81;
      HIDWORD(v140[0]) = v69;
      LODWORD(v140[1]) = v71;
      v140[2] = 0LL;
      LODWORD(v140[3]) = 1;
      SURFMEM::bCreateDIB((SURFMEM *)&v95, (struct _DEVBITMAPINFO *)v140, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
      if ( !v95 )
        goto LABEL_96;
      *(_QWORD *)&prclDest.left = 0LL;
      pptlSrc = *v98;
      prclDest.right = HIDWORD(v140[0]);
      prclDest.bottom = v140[1];
      if ( !EngCopyBits(
              (SURFOBJ *)(v95 + 24),
              (SURFOBJ *)((*(_QWORD *)&v70 + 24LL) & -(__int64)(v70 != 0LL)),
              0LL,
              xloIdent,
              &prclDest,
              &pptlSrc) )
        goto LABEL_96;
      v32 = v95;
      v16 = v89;
      v123 = 0LL;
      v27 = *(unsigned int *)(v95 + 88);
      v111 = *(_QWORD *)(v95 + 80);
      v115 = v27;
    }
    if ( v33 == 1 )
    {
LABEL_19:
      v119 = v27;
    }
    else
    {
      v27 = (unsigned int)-(int)v27;
      v119 = v27;
    }
  }
  else
  {
    v111 = 0LL;
  }
  v112 = *((_QWORD *)v16 + 10);
  v36 = *((_DWORD *)v16 + 22);
  v116 = v36;
  if ( v33 != 1 )
    v36 = -v36;
  v37 = a11 >> 8;
  v38 = (unsigned __int8)a11;
  v120 = v36;
  if ( (unsigned __int8)a11 == v84 || (v57 = v141) == 0LL )
  {
    v103 = 0LL;
    v39 = 0LL;
    v113 = 0LL;
  }
  else
  {
    if ( bUMPDSecurityGateEx(v32, v27, v84, (__int64)v16) && !v99 )
    {
      if ( gfUMPDDebug )
        DbgPrint("windows\\core\\ntgdi\\gre\\windows\\bltlnk.cxx:%d:BltLnk:pptlMask == NULL\n", 619);
      goto LABEL_96;
    }
    v58 = *((_DWORD *)v57 + 14);
    v59 = v99->x;
    v39 = (void *)*((_QWORD *)v57 + 10);
    v60 = *((_DWORD *)v57 + 15);
    v61 = v99->y;
    v113 = v39;
    v103 = v57;
    v129 = v58;
    v130 = v60;
    v131 = v59;
    v132 = v61;
    if ( v59 >= (int)v58 )
    {
      v131 = v59 % v58;
    }
    else if ( v59 < 0 )
    {
      v131 = v58 - (-1 - v59) % v58 - 1;
    }
    if ( v61 >= v60 )
    {
      v132 = v61 % v60;
    }
    else if ( v61 < 0 )
    {
      v132 = v60 - ~v61 % v60 - 1;
    }
    v62 = *((_DWORD *)v57 + 22);
    v16 = v89;
    v37 = a11 >> 8;
    v38 = (unsigned __int8)a11;
    v118 = v62;
    if ( v33 != 1 )
      v62 = -v62;
    v122 = v62;
  }
  if ( !v85 )
  {
    v114 = 0LL;
LABEL_26:
    v40 = v90;
    goto LABEL_27;
  }
  if ( !v142 )
    goto LABEL_96;
  iSolidColor = v142->iSolidColor;
  if ( v142->iSolidColor != -1 )
  {
    v63 = *((_DWORD *)v16 + 24);
    v114 = 0LL;
    v64 = v63 - 1;
    if ( !v64 )
    {
      if ( iSolidColor )
        iSolidColor = -1;
      goto LABEL_95;
    }
    v65 = v64 - 1;
    if ( v65 )
    {
      v66 = v65 - 1;
      if ( v66 )
      {
        if ( v66 != 1 )
        {
LABEL_95:
          v124 = iSolidColor;
          goto LABEL_26;
        }
LABEL_102:
        iSolidColor |= iSolidColor << 16;
        goto LABEL_95;
      }
    }
    else
    {
      iSolidColor |= 16 * iSolidColor;
    }
    iSolidColor |= iSolidColor << 8;
    goto LABEL_102;
  }
  if ( !v15 )
    goto LABEL_96;
  pvRbrush = v15[1].pvRbrush;
  v124 = -1;
  if ( !pvRbrush )
    goto LABEL_26;
  v40 = v90;
  v56 = *(&v15[1].iSolidColor + 1);
  v114 = pvRbrush;
  v125 = *(&v15->flColorType + 1);
  v126 = v15[1].iSolidColor;
  v127 = v90->x;
  v128 = v90->y;
  v117 = v56;
  if ( v33 != 1 )
    v56 = -v56;
  v121 = v56;
LABEL_27:
  if ( v38 != v37 && !v39 )
  {
    if ( !v15 || !v15[2].pvRbrush )
      goto LABEL_96;
    v72 = *(&v15[1].flColorType + 1);
    v73 = a6->top - v40->y;
    v74 = v15[2].iSolidColor;
    flColorType = v15[2].flColorType;
    v113 = v15[2].pvRbrush;
    v76 = a6->left - v40->x;
    v129 = v72;
    v130 = v74;
    v118 = flColorType;
    v131 = v76;
    v132 = v73;
    if ( v76 < (int)v72 )
    {
      if ( v76 < 0 )
        v131 = v72 - ~v76 % v72 - 1;
    }
    else
    {
      v131 = v76 % v72;
    }
    if ( v73 < v74 )
    {
      if ( v73 < 0 )
        v132 = v74 - ~v73 % v74 - 1;
    }
    else
    {
      v132 = v73 % v74;
    }
    if ( v33 != 1 )
      flColorType = -flColorType;
    v122 = flColorType;
  }
  v41 = v94;
  if ( v94 && *((_BYTE *)v94 + 20) )
  {
    if ( *((_BYTE *)v94 + 20) == 1 )
    {
      v42 = *(struct _RECTL *)((char *)v94 + 4);
      goto LABEL_31;
    }
    if ( *((_BYTE *)v94 + 20) == 3 )
    {
      v80 = 1;
      v43 = 1;
      XCLIPOBJ::cEnumStart(v94, 0, 0, v108, 0x14u);
      v41 = v94;
      goto LABEL_32;
    }
LABEL_96:
    v26 = 0;
    goto LABEL_54;
  }
  v42 = *a6;
LABEL_31:
  v43 = 0;
  v80 = 0;
  v145 = 1;
  v146[0] = v42;
LABEL_32:
  if ( v43 )
    goto LABEL_101;
  while ( 1 )
  {
    v44 = 0;
    v86 = 0;
    if ( v145 )
    {
      do
      {
        v45 = (struct _RECTL *)&v146[v44];
        if ( v45->left < v11->left )
          v45->left = v11->left;
        right = v11->right;
        if ( v45->right > right )
          v45->right = right;
        v47 = v11->top;
        if ( v45->top < v47 )
          v45->top = v47;
        bottom = v11->bottom;
        if ( v45->bottom > bottom )
          v45->bottom = bottom;
        if ( v45->top < v45->bottom && v45->right - v45->left > 0 )
        {
          do
          {
            v49 = v45->right;
            v50 = v49;
            left = v45->left;
            if ( v49 - v45->left > v82 )
            {
              v49 = left + v82;
              v45->right = left + v82;
            }
            if ( (_BYTE)a11 != 0xAA )
            {
              v107 = a11;
              v134 = a11 & 0xC3 | (unsigned __int8)((4 * (a11 & 0xC)) | ((unsigned __int8)a11 >> 2) & 0xC);
              v135 = v77;
              v136 = v91;
              v137 = (v77 & 0xF) != v77 >> 4;
              v138 = v92;
              v139 = (unsigned __int8)a11 != a11 >> 8;
              v133 = 0;
              BltLnkRect((struct _BLTLNKINFO *)&v100, v45);
            }
            if ( (unsigned __int8)a11 != v84 && BYTE1(a11) != 0xAA )
            {
              v134 = BYTE1(a11) & 0xC3 | (unsigned __int8)((4 * (BYTE1(a11) & 0xC)) | (BYTE1(a11) >> 2) & 0xC);
              v135 = v78;
              v136 = v93;
              v137 = (v78 & 0xF) != v78 >> 4;
              v138 = (BYTE1(a11) & 0xF) != BYTE1(a11) >> 4;
              v139 = (unsigned __int8)a11 != a11 >> 8;
              v107 = BYTE1(a11);
              v133 = -1;
              BltLnkRect((struct _BLTLNKINFO *)&v100, v45);
            }
            v45->right = v50;
            v45->left = v49;
          }
          while ( v50 - v49 > 0 );
          v11 = v143;
          v26 = 1;
          v44 = v86;
        }
        v86 = ++v44;
      }
      while ( v44 < v145 );
      v43 = v80;
    }
    v41 = v94;
    if ( !v43 )
      break;
LABEL_101:
    v43 = XCLIPOBJ::bEnum(v41, 0x144u, (char *)&v145, 0LL);
    v80 = v43;
  }
LABEL_54:
  SURFMEM::~SURFMEM((SURFMEM *)&v95);
  return v26;
}
