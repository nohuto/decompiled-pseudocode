/*
 * XREFs of ?BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C00A9838
 * Callers:
 *     EngBitBlt @ 0x1C00769E0 (EngBitBlt.c)
 *     ?vExpandAndCopyText@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@PEAU_GLYPHPOS@@KPEAEKK00PEAU_RECTL@@4HHK44KPEAU_BRUSHOBJ@@PEAU_POINTL@@@Z @ 0x1C0083D10 (-vExpandAndCopyText@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@PEAU_GLYPHPOS@@KPEAEKK00PEAU_RECTL@@4HHK44KPE.c)
 * Callees:
 *     EngCopyBits @ 0x1C0075490 (EngCopyBits.c)
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C0075F90 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C0076190 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?BltLnkRect@@YAXPEAU_BLTLNKINFO@@PEAU_RECTL@@@Z @ 0x1C00A9FD0 (-BltLnkRect@@YAXPEAU_BLTLNKINFO@@PEAU_RECTL@@@Z.c)
 *     ?pvGetEngRbrush@@YAPEAXPEAU_BRUSHOBJ@@@Z @ 0x1C00AB680 (-pvGetEngRbrush@@YAPEAXPEAU_BRUSHOBJ@@@Z.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C00AC408 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
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
  struct _RECTL *v11; // r12
  int v13; // ecx
  XLATEOBJ *v15; // r10
  struct SURFACE *v16; // r11
  struct _BRUSHOBJ *v18; // rbx
  struct _POINTL *v19; // r9
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  int v24; // ecx
  struct _RECTL v25; // xmm0
  unsigned __int8 v26; // r13
  BOOL v27; // r8d
  unsigned int v28; // edi
  BOOL v29; // r13d
  int v30; // ecx
  int v31; // esi
  int v32; // edx
  LONG x; // r10d
  LONG y; // r8d
  unsigned int v35; // r13d
  int v36; // eax
  int v37; // r8d
  void *v38; // r11
  struct _POINTL *v39; // rdx
  XCLIPOBJ *v40; // r10
  struct _RECTL v41; // xmm0
  int v42; // esi
  unsigned int v43; // r13d
  struct _RECTL *v44; // rbx
  LONG right; // eax
  LONG v46; // eax
  LONG bottom; // eax
  LONG v48; // r14d
  LONG v49; // r15d
  LONG left; // ecx
  struct _BRUSHOBJ *EngRbrush; // rax
  int iSolidColor; // ecx
  PVOID pvRbrush; // rax
  int v55; // ecx
  unsigned int v56; // ecx
  int v57; // r9d
  int v58; // r8d
  int v59; // r10d
  int v60; // eax
  LONG top; // r9d
  int v62; // ecx
  int v63; // eax
  unsigned int v64; // r9d
  int v65; // r10d
  signed int v66; // r8d
  int flColorType; // r11d
  int v68; // eax
  unsigned __int8 v69; // [rsp+60h] [rbp-A0h]
  unsigned __int8 v70; // [rsp+61h] [rbp-9Fh]
  unsigned __int8 v71; // [rsp+62h] [rbp-9Eh]
  int v72; // [rsp+64h] [rbp-9Ch]
  BOOL v73; // [rsp+68h] [rbp-98h]
  int v74; // [rsp+68h] [rbp-98h]
  unsigned int v75; // [rsp+74h] [rbp-8Ch]
  BOOL v76; // [rsp+78h] [rbp-88h]
  unsigned int v77; // [rsp+80h] [rbp-80h]
  int v78; // [rsp+9Ch] [rbp-64h]
  __int64 v80; // [rsp+A8h] [rbp-58h] BYREF
  char v81; // [rsp+B0h] [rbp-50h]
  int v82; // [rsp+B4h] [rbp-4Ch]
  POINTL *v83; // [rsp+B8h] [rbp-48h]
  struct SURFACE *v84; // [rsp+C0h] [rbp-40h]
  POINTL pptlSrc; // [rsp+C8h] [rbp-38h] BYREF
  struct _POINTL *v86; // [rsp+D0h] [rbp-30h]
  int v87; // [rsp+D8h] [rbp-28h] BYREF
  unsigned __int64 v88; // [rsp+DCh] [rbp-24h]
  _BYTE v89[20]; // [rsp+E4h] [rbp-1Ch]
  struct _RECTL v90; // [rsp+100h] [rbp+0h] BYREF
  struct SURFACE *v91; // [rsp+110h] [rbp+10h]
  struct SURFACE *v92; // [rsp+118h] [rbp+18h]
  struct SURFACE *v93; // [rsp+120h] [rbp+20h]
  struct ECLIPOBJ *v94; // [rsp+128h] [rbp+28h]
  XLATEOBJ *v95; // [rsp+130h] [rbp+30h]
  struct _BRUSHOBJ *v96; // [rsp+138h] [rbp+38h]
  char v97; // [rsp+140h] [rbp+40h]
  unsigned int v98; // [rsp+144h] [rbp+44h]
  int v99; // [rsp+148h] [rbp+48h]
  int v100; // [rsp+14Ch] [rbp+4Ch]
  __int64 v101; // [rsp+150h] [rbp+50h]
  __int64 v102; // [rsp+158h] [rbp+58h]
  PVOID v103; // [rsp+160h] [rbp+60h]
  PVOID v104; // [rsp+168h] [rbp+68h]
  int v105; // [rsp+170h] [rbp+70h]
  int v106; // [rsp+174h] [rbp+74h]
  int v107; // [rsp+178h] [rbp+78h]
  int v108; // [rsp+17Ch] [rbp+7Ch]
  int v109; // [rsp+180h] [rbp+80h]
  int v110; // [rsp+184h] [rbp+84h]
  int v111; // [rsp+188h] [rbp+88h]
  int v112; // [rsp+18Ch] [rbp+8Ch]
  LONG v113; // [rsp+190h] [rbp+90h]
  LONG v114; // [rsp+194h] [rbp+94h]
  int v115; // [rsp+198h] [rbp+98h]
  int v116; // [rsp+19Ch] [rbp+9Ch]
  ULONG v117; // [rsp+1A0h] [rbp+A0h]
  struct _POINTL v118; // [rsp+1A4h] [rbp+A4h]
  unsigned int v119; // [rsp+1ACh] [rbp+ACh]
  int v120; // [rsp+1B0h] [rbp+B0h]
  int v121; // [rsp+1B4h] [rbp+B4h]
  int v122; // [rsp+1B8h] [rbp+B8h]
  char v123; // [rsp+1BCh] [rbp+BCh]
  unsigned int v124; // [rsp+1D4h] [rbp+D4h]
  int v125; // [rsp+1D8h] [rbp+D8h]
  BOOL v126; // [rsp+1DCh] [rbp+DCh]
  BOOL v127; // [rsp+1E0h] [rbp+E0h]
  BOOL v128; // [rsp+1E4h] [rbp+E4h]
  BOOL v129; // [rsp+1E8h] [rbp+E8h]
  struct _BRUSHOBJ *v130; // [rsp+1F0h] [rbp+F0h]
  struct _RECTL *v131; // [rsp+1F8h] [rbp+F8h]
  RECTL prclDest; // [rsp+200h] [rbp+100h] BYREF
  unsigned int v133; // [rsp+210h] [rbp+110h] BYREF
  _OWORD v134[20]; // [rsp+214h] [rbp+114h] BYREF

  v11 = a6;
  v13 = *((_DWORD *)a1 + 24);
  v15 = a5;
  v16 = a2;
  v86 = a8;
  v18 = 0LL;
  v19 = a7;
  v84 = a2;
  v131 = a6;
  v83 = a7;
  v130 = a9;
  v80 = 0LL;
  v81 = 0;
  v82 = 0;
  v20 = v13 - 1;
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
          v24 = v23 - 1;
          if ( v24 )
          {
            if ( v24 == 1 )
              v72 = 64;
            else
              v72 = v78;
          }
          else
          {
            v72 = 83;
          }
        }
        else
        {
          v72 = 126;
        }
      }
      else
      {
        v72 = 250;
      }
    }
    else
    {
      v72 = 498;
    }
  }
  else
  {
    v72 = 1986;
  }
  v25 = *a6;
  if ( !a5 )
    v15 = xloIdent;
  v95 = v15;
  v94 = a4;
  v91 = a1;
  v92 = a2;
  v96 = a9;
  v75 = a11 >> 8;
  v69 = a11 & 0xA5 | (8 * (a11 & 0xA)) | ((unsigned __int8)a11 >> 3) & 0xA;
  v70 = BYTE1(a11) & 0xC3 | (4 * (BYTE1(a11) & 0xC)) | (BYTE1(a11) >> 2) & 0xC;
  v71 = BYTE1(a11) & 0xA5 | (8 * (BYTE1(a11) & 0xA)) | (BYTE1(a11) >> 3) & 0xA;
  v90 = v25;
  v27 = (BYTE1(a11) & 0xF) != BYTE1(a11) >> 4;
  v28 = 1;
  if ( (a11 & 0xF) != (unsigned __int8)a11 >> 4 || (BYTE1(a11) & 0xF) != BYTE1(a11) >> 4 )
    v27 = 1;
  v73 = v27;
  v26 = a11 & 0xC3 | (4 * (a11 & 0xC)) | ((unsigned __int8)a11 >> 2) & 0xC;
  v76 = (v26 & 0xF) != v26 >> 4;
  v29 = (v70 & 0xF) != v70 >> 4;
  if ( v76 || (v70 & 0xF) != v70 >> 4 )
    v29 = 1;
  if ( v27 || (unsigned __int8)a11 != a11 >> 8 && !a3 )
  {
    if ( a9 && a9->iSolidColor == -1 )
    {
      EngRbrush = (struct _BRUSHOBJ *)pvGetEngRbrush(a9);
      v16 = v84;
      v18 = EngRbrush;
      v19 = v83;
    }
    else
    {
      v18 = a9;
    }
  }
  v100 = 1;
  v30 = 1;
  v99 = 1;
  v31 = 1;
  v98 = 4;
  if ( v29 )
  {
    v32 = *((_DWORD *)v16 + 22);
    x = v19->x;
    y = v19->y;
    v101 = *((_QWORD *)v16 + 10);
    v105 = v32;
    v113 = x;
    v114 = y;
    if ( v101 == *((_QWORD *)a1 + 10) )
    {
      top = a6->top;
      if ( y < top )
      {
        v31 = -1;
        v100 = -1;
        v98 = 2;
      }
      if ( y == top )
      {
        if ( x < a6->left )
          v30 = -1;
        v99 = v30;
      }
      v35 = a11 >> 8;
      if ( (unsigned __int8)a11 != v75 && v76 && (v70 & 0xF) != v70 >> 4
        || (v30 == -1 || v31 == -1) && a6->right - a6->left > v72 )
      {
        v62 = a6->right - a6->left;
        v88 = 0LL;
        *(_QWORD *)&v89[8] = 0LL;
        *(_QWORD *)v89 = 0LL;
        v63 = *((_DWORD *)v16 + 24);
        *(_QWORD *)&v89[4] = 0LL;
        v87 = v63;
        v88 = __PAIR64__(a6->bottom - top, v62);
        *(_QWORD *)&v89[12] = 1LL;
        SURFMEM::bCreateDIB((SURFMEM *)&v80, (struct _DEVBITMAPINFO *)&v87, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
        if ( !v80 )
          goto LABEL_97;
        prclDest.left = 0;
        prclDest.top = 0;
        pptlSrc = *v83;
        *(_QWORD *)&prclDest.right = v88;
        if ( !EngCopyBits(
                (SURFOBJ *)(v80 + 24),
                (SURFOBJ *)(((unsigned __int64)v84 + 24) & -(__int64)(v84 != 0LL)),
                0LL,
                xloIdent,
                &prclDest,
                &pptlSrc) )
          goto LABEL_97;
        v113 = 0;
        v114 = 0;
        v32 = *(_DWORD *)(v80 + 88);
        v101 = *(_QWORD *)(v80 + 80);
        v105 = v32;
      }
      if ( v31 != 1 )
        v32 = -v32;
    }
    else
    {
      v35 = a11 >> 8;
    }
    v109 = v32;
  }
  else
  {
    v101 = 0LL;
    v35 = a11 >> 8;
  }
  v102 = *((_QWORD *)a1 + 10);
  v36 = *((_DWORD *)a1 + 22);
  v106 = v36;
  if ( v31 != 1 )
    v36 = -v36;
  v37 = (unsigned __int8)a11;
  v110 = v36;
  if ( (unsigned __int8)a11 == v35 || !a3 )
  {
    v93 = 0LL;
    v38 = 0LL;
    v103 = 0LL;
  }
  else
  {
    if ( (unsigned int)bUMPDSecurityGateEx() && !v86 )
    {
      if ( gfUMPDDebug )
        DbgPrint("windows\\core\\ntgdi\\gre\\windows\\bltlnk.cxx:%d:BltLnk:pptlMask == NULL\n", 619);
      goto LABEL_97;
    }
    v56 = *((_DWORD *)a3 + 14);
    v57 = v86->x;
    v38 = (void *)*((_QWORD *)a3 + 10);
    v58 = *((_DWORD *)a3 + 15);
    v59 = v86->y;
    v103 = v38;
    v93 = a3;
    v119 = v56;
    v120 = v58;
    v121 = v57;
    v122 = v59;
    if ( v57 >= (int)v56 )
    {
      v121 = v57 % v56;
    }
    else if ( v57 < 0 )
    {
      v121 = v56 - (-1 - v57) % v56 - 1;
    }
    if ( v59 >= v58 )
    {
      v122 = v59 % v58;
    }
    else if ( v59 < 0 )
    {
      v122 = v58 - (-1 - v59) % v58 - 1;
    }
    v60 = *((_DWORD *)a3 + 22);
    v37 = (unsigned __int8)a11;
    v108 = v60;
    if ( v31 != 1 )
      v60 = -v60;
    v112 = v60;
  }
  if ( !v73 )
  {
    v104 = 0LL;
LABEL_26:
    v39 = a10;
    goto LABEL_27;
  }
  if ( !v130 )
    goto LABEL_97;
  iSolidColor = v130->iSolidColor;
  if ( v130->iSolidColor != -1 )
  {
    v104 = 0LL;
    switch ( *((_DWORD *)a1 + 24) )
    {
      case 1:
        if ( iSolidColor )
          iSolidColor = -1;
        goto LABEL_95;
      case 2:
        iSolidColor |= 16 * iSolidColor;
        break;
      case 3:
        break;
      case 4:
LABEL_102:
        iSolidColor |= iSolidColor << 16;
        goto LABEL_95;
      default:
LABEL_95:
        v115 = iSolidColor;
        goto LABEL_26;
    }
    iSolidColor |= iSolidColor << 8;
    goto LABEL_102;
  }
  if ( !v18 )
    goto LABEL_97;
  pvRbrush = v18[1].pvRbrush;
  v115 = -1;
  if ( !pvRbrush )
    goto LABEL_26;
  v39 = a10;
  v55 = *(&v18[1].iSolidColor + 1);
  v104 = pvRbrush;
  v116 = *(&v18->flColorType + 1);
  v117 = v18[1].iSolidColor;
  v118 = *a10;
  v107 = v55;
  if ( v31 != 1 )
    v55 = -v55;
  v111 = v55;
LABEL_27:
  if ( v37 != v35 && !v38 )
  {
    if ( !v18 || !v18[2].pvRbrush )
      goto LABEL_97;
    v64 = *(&v18[1].flColorType + 1);
    v65 = a6->top - v39->y;
    v66 = v18[2].iSolidColor;
    flColorType = v18[2].flColorType;
    v103 = v18[2].pvRbrush;
    v68 = a6->left - v39->x;
    v119 = v64;
    v120 = v66;
    v108 = flColorType;
    v121 = v68;
    v122 = v65;
    if ( v68 < (int)v64 )
    {
      if ( v68 < 0 )
        v121 = v64 - (-1 - v68) % v64 - 1;
    }
    else
    {
      v121 = v68 % v64;
    }
    if ( v65 < v66 )
    {
      if ( v65 < 0 )
        v122 = v66 - (-1 - v65) % v66 - 1;
    }
    else
    {
      v122 = v65 % v66;
    }
    if ( v31 != 1 )
      flColorType = -flColorType;
    v112 = flColorType;
  }
  v40 = a4;
  if ( a4 && *((_BYTE *)a4 + 20) )
  {
    if ( *((_BYTE *)a4 + 20) == 1 )
    {
      v41 = *(struct _RECTL *)((char *)a4 + 4);
      goto LABEL_31;
    }
    if ( *((_BYTE *)a4 + 20) == 3 )
    {
      v74 = 1;
      v42 = 1;
      XCLIPOBJ::cEnumStart(a4, 0, 0, v98, 0x14u);
      v40 = a4;
      goto LABEL_32;
    }
LABEL_97:
    v28 = 0;
    goto LABEL_54;
  }
  v41 = *a6;
LABEL_31:
  v42 = 0;
  v133 = 1;
  v74 = 0;
  v134[0] = v41;
LABEL_32:
  if ( v42 )
    goto LABEL_101;
  while ( 1 )
  {
    v43 = 0;
    v77 = 0;
    if ( v133 )
    {
      do
      {
        v44 = (struct _RECTL *)&v134[v43];
        if ( v44->left < v11->left )
          v44->left = v11->left;
        right = v11->right;
        if ( v44->right > right )
          v44->right = right;
        v46 = v11->top;
        if ( v44->top < v46 )
          v44->top = v46;
        bottom = v11->bottom;
        if ( v44->bottom > bottom )
          v44->bottom = bottom;
        if ( v44->top < v44->bottom && v44->right - v44->left > 0 )
        {
          do
          {
            v48 = v44->right;
            v49 = v48;
            left = v44->left;
            if ( v48 - v44->left > v72 )
            {
              v48 = left + v72;
              v44->right = left + v72;
            }
            if ( (_BYTE)a11 != 0xAA )
            {
              v97 = a11;
              v124 = a11 & 0xC3 | (unsigned __int8)((4 * (a11 & 0xC)) | ((unsigned __int8)a11 >> 2) & 0xC);
              v125 = v69;
              v126 = v76;
              v127 = (v69 & 0xF) != v69 >> 4;
              v128 = (a11 & 0xF) != (unsigned __int8)a11 >> 4;
              v129 = (unsigned __int8)a11 != a11 >> 8;
              v123 = 0;
              BltLnkRect((struct _BLTLNKINFO *)&v90, v44);
            }
            if ( (unsigned __int8)a11 != v75 && BYTE1(a11) != 0xAA )
            {
              v124 = v70;
              v125 = v71;
              v127 = (v71 & 0xF) != v71 >> 4;
              v128 = (BYTE1(a11) & 0xF) != BYTE1(a11) >> 4;
              v129 = (unsigned __int8)a11 != a11 >> 8;
              v97 = BYTE1(a11);
              v126 = (v70 & 0xF) != v70 >> 4;
              v123 = -1;
              BltLnkRect((struct _BLTLNKINFO *)&v90, v44);
            }
            v44->right = v49;
            v44->left = v48;
          }
          while ( v49 - v48 > 0 );
          v11 = v131;
          v28 = 1;
          v43 = v77;
        }
        v77 = ++v43;
      }
      while ( v43 < v133 );
      v42 = v74;
    }
    v40 = a4;
    if ( !v42 )
      break;
LABEL_101:
    v42 = XCLIPOBJ::bEnum(v40, 0x144u, (char *)&v133, 0LL);
    v74 = v42;
  }
LABEL_54:
  SURFMEM::~SURFMEM((SURFMEM *)&v80);
  return v28;
}
