/*
 * XREFs of EngCopyBits @ 0x1C002C650
 * Callers:
 *     EngStretchBlt @ 0x1C00148E0 (EngStretchBlt.c)
 *     ?GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@PEAUHBITMAP__@@IIPEAEPEAUtagBITMAPINFO@@III@Z @ 0x1C00191EC (-GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@P.c)
 *     GreStretchDIBitsInternal @ 0x1C0019D78 (GreStretchDIBitsInternal.c)
 *     NtGdiAlphaBlend @ 0x1C0023600 (NtGdiAlphaBlend.c)
 *     EngBitBlt @ 0x1C002DC60 (EngBitBlt.c)
 *     EngHTBlt @ 0x1C003CCA0 (EngHTBlt.c)
 *     ?BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C00BB584 (-BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@.c)
 *     ?EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z @ 0x1C00BD910 (-EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z.c)
 *     ?vProcessCursorShape@@YAXPEAUHDEV__@@HHPEAU_SURFOBJ@@1PEAVPALETTE@@PEAU_RECTL@@PEAPEAUHBITMAP__@@@Z @ 0x1C00EEAC0 (-vProcessCursorShape@@YAXPEAUHDEV__@@HHPEAU_SURFOBJ@@1PEAVPALETTE@@PEAU_RECTL@@PEAPEAUHBITMAP__@.c)
 *     ?bShadowAlphaCursor@@YAHPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@1PEAU_RECTL@@H@Z @ 0x1C00EF100 (-bShadowAlphaCursor@@YAHPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@1PEAU_RECTL@@H@Z.c)
 *     GreGetBitmapBits @ 0x1C00F30F0 (GreGetBitmapBits.c)
 *     GreSetBitmapBits @ 0x1C00F3430 (GreSetBitmapBits.c)
 *     NtGdiEngCopyBits @ 0x1C0131CB0 (NtGdiEngCopyBits.c)
 *     ?bCopySurface@@YAHPEAVSURFMEM@@PEAU_SURFOBJ@@@Z @ 0x1C024BE90 (-bCopySurface@@YAHPEAVSURFMEM@@PEAU_SURFOBJ@@@Z.c)
 *     ?bSpDwmUpdateMaskCursor@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@3PEAU_RECTL@@PEAKPEAPEAV3@@Z @ 0x1C024EC6C (-bSpDwmUpdateMaskCursor@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@3PEA.c)
 *     ?bSpUpdateCursor@@YAHPEAVSPRITE@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@@Z @ 0x1C025CEA8 (-bSpUpdateCursor@@YAHPEAVSPRITE@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0022CE0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C002D16C (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C002D380 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C00B7CB4 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     ULongLongAdd @ 0x1C010C39C (ULongLongAdd.c)
 *     ?pfnGetRLESrcCopy@@YAP6AHPEAUBLTINFO@@@ZKK@Z @ 0x1C0123EB0 (-pfnGetRLESrcCopy@@YAP6AHPEAUBLTINFO@@@ZKK@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     LongMult @ 0x1C01449EC (LongMult.c)
 *     ULongLongSub @ 0x1C0144A24 (ULongLongSub.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     ??1EXLATEOBJ@@QEAA@XZ @ 0x1C01A0B04 (--1EXLATEOBJ@@QEAA@XZ.c)
 *     LongAdd @ 0x1C0252F10 (LongAdd.c)
 *     LongSub @ 0x1C0252F44 (LongSub.c)
 */

BOOL __stdcall EngCopyBits(
        SURFOBJ *psoDest,
        SURFOBJ *psoSrc,
        CLIPOBJ *pco,
        XLATEOBJ *pxlo,
        RECTL *prclDest,
        POINTL *pptlSrc)
{
  SURFOBJ *v7; // r15
  POINTL *v9; // rdi
  __int64 v10; // rbx
  ULONGLONG v11; // rax
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(SURFOBJ *, SURFOBJ *, XCLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rsi
  LONG x; // ecx
  __int64 y; // rdx
  int v16; // r8d
  __int64 v17; // rsi
  __int64 v18; // rdi
  int v20; // ebx
  int v21; // edi
  int v22; // esi
  int v23; // edx
  LONG top; // eax
  LONG v25; // ecx
  int v26; // ebx
  int v27; // eax
  LONG lDelta; // eax
  unsigned int v29; // r9d
  XCLIPOBJ *v30; // rbx
  int v31; // r10d
  RECTL v32; // xmm0
  int (*RLESrcCopy)(struct BLTINFO *); // rsi
  int v34; // edi
  __int64 v35; // r11
  _DWORD *v36; // r11
  PVOID v37; // rcx
  int v38; // r10d
  unsigned int j; // ebx
  LONG v40; // eax
  LONG v41; // eax
  LONG v42; // eax
  int v43; // r8d
  int v44; // edx
  ULONG v45; // eax
  __int64 v46; // rcx
  void (* near *v47)(struct BLTINFO *); // r12
  unsigned int i; // ebx
  LONG left; // edi
  LONG right; // ecx
  LONG v51; // r11d
  LONG bottom; // ecx
  int v53; // r8d
  int v54; // r10d
  int v55; // r9d
  int v56; // edx
  int v57; // ecx
  int v58; // edi
  int v59; // edx
  int v60; // r10d
  __int64 v61; // rcx
  int v62; // eax
  int v63; // [rsp+60h] [rbp-2C8h]
  int v64; // [rsp+64h] [rbp-2C4h]
  unsigned int v65; // [rsp+68h] [rbp-2C0h] BYREF
  unsigned int v66; // [rsp+6Ch] [rbp-2BCh]
  XCLIPOBJ *v67; // [rsp+70h] [rbp-2B8h]
  XLATEOBJ *v68; // [rsp+78h] [rbp-2B0h] BYREF
  POINTL *v69; // [rsp+80h] [rbp-2A8h]
  int (*v70)(struct BLTINFO *); // [rsp+88h] [rbp-2A0h]
  int v71; // [rsp+90h] [rbp-298h]
  LONG v72; // [rsp+98h] [rbp-290h] BYREF
  LONG v73; // [rsp+9Ch] [rbp-28Ch]
  ULONGLONG pullResult; // [rsp+A0h] [rbp-288h] BYREF
  int v75; // [rsp+A8h] [rbp-280h] BYREF
  CLIPOBJ *v76; // [rsp+B0h] [rbp-278h]
  RECTL *v77; // [rsp+B8h] [rbp-270h]
  HDEV hdev; // [rsp+C0h] [rbp-268h] BYREF
  _QWORD v79[5]; // [rsp+C8h] [rbp-260h] BYREF
  XLATEOBJ *v80; // [rsp+F0h] [rbp-238h] BYREF
  char *pvScan0; // [rsp+F8h] [rbp-230h]
  char *v82; // [rsp+100h] [rbp-228h]
  int v83; // [rsp+108h] [rbp-220h]
  int v84; // [rsp+10Ch] [rbp-21Ch]
  int v85; // [rsp+110h] [rbp-218h]
  int v86; // [rsp+114h] [rbp-214h]
  int v87; // [rsp+118h] [rbp-210h]
  LONG v88; // [rsp+11Ch] [rbp-20Ch]
  int v89; // [rsp+120h] [rbp-208h]
  int v90; // [rsp+124h] [rbp-204h]
  int v91; // [rsp+128h] [rbp-200h]
  unsigned int v92; // [rsp+12Ch] [rbp-1FCh]
  BOOL v93; // [rsp+130h] [rbp-1F8h]
  ULONGLONG v94; // [rsp+138h] [rbp-1F0h]
  POINTL v95; // [rsp+140h] [rbp-1E8h]
  __int128 v96; // [rsp+148h] [rbp-1E0h]
  char *v97; // [rsp+158h] [rbp-1D0h]
  char *v98; // [rsp+160h] [rbp-1C8h]
  int v99; // [rsp+168h] [rbp-1C0h]
  int v100; // [rsp+16Ch] [rbp-1BCh]
  int v101; // [rsp+170h] [rbp-1B8h]
  unsigned int v102; // [rsp+174h] [rbp-1B4h]
  int v103; // [rsp+178h] [rbp-1B0h]
  _DWORD v104[84]; // [rsp+190h] [rbp-198h] BYREF

  v67 = (XCLIPOBJ *)pco;
  v7 = psoSrc;
  v79[2] = psoDest;
  v79[3] = psoSrc;
  v76 = pco;
  v77 = prclDest;
  v9 = pptlSrc;
  v69 = pptlSrc;
  v79[4] = pptlSrc;
  v10 = SURFOBJ_TO_SURFACE(psoDest);
  v11 = SURFOBJ_TO_SURFACE(v7);
  pullResult = v11;
  if ( v7->iType )
  {
    v12 = *(_QWORD *)(v11 + 48);
    v13 = *(__int64 (__fastcall **)(SURFOBJ *, SURFOBJ *, XCLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v12 + 2856);
    v68 = 0LL;
    x = pptlSrc->x;
    v72 = pptlSrc->x;
    y = (unsigned int)pptlSrc->y;
    v73 = pptlSrc->y;
    v16 = *(_DWORD *)(v11 + 112);
    if ( (v16 & 0x80000) != 0 && v12 != *(_QWORD *)(v12 + 16) )
    {
      if ( v16 < 0 )
      {
        v72 = *(_DWORD *)(v12 + 2600) + x;
        y = (unsigned int)(*(_DWORD *)(v12 + 2604) + y);
        v73 = y;
        v69 = (POINTL *)&v72;
      }
      v17 = *(_QWORD *)(v12 + 16);
      LOBYTE(y) = 5;
      v18 = HmgShareLockCheck(*(_QWORD *)(v11 + 144), y);
      if ( v18 )
      {
        if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                             (__int64 *)&v68,
                             0LL,
                             0,
                             *(_QWORD *)(v17 + 1824),
                             *(_QWORD *)(v12 + 1824),
                             (__int64)ppalDefault,
                             (__int64)ppalDefault,
                             0,
                             0,
                             0,
                             0x2000) )
        {
          pxlo = v68;
          v7 = (SURFOBJ *)(v18 + 24);
          v13 = *(__int64 (__fastcall **)(SURFOBJ *, SURFOBJ *, XCLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v17 + 2856);
          DEC_SHARE_REF_CNT(v18);
          v9 = v69;
          goto LABEL_12;
        }
        DEC_SHARE_REF_CNT(v18);
      }
LABEL_10:
      EXLATEOBJ::~EXLATEOBJ((EXLATEOBJ *)&v68);
      return 0;
    }
LABEL_12:
    if ( v13 )
    {
      v20 = v13(psoDest, v7, v67, pxlo, prclDest, v9);
      EXLATEOBJ::~EXLATEOBJ((EXLATEOBJ *)&v68);
      return v20;
    }
    goto LABEL_10;
  }
  if ( *(_DWORD *)(v11 + 96) <= 8u && *(_DWORD *)(v10 + 96) <= 8u || !(unsigned int)bUMPDSecurityGateEx() )
  {
    hdev = psoDest->hdev;
    PDEVOBJ::vSync((PDEVOBJ *)&hdev, psoDest, 0LL, 0);
    v79[0] = v7->hdev;
    PDEVOBJ::vSync((PDEVOBJ *)v79, v7, 0LL, 0);
    v63 = 0;
    v21 = 0;
    v93 = 0;
    v22 = 1;
    LODWORD(v70) = 1;
    v23 = 1;
    v64 = 1;
    if ( v7->iBitmapFormat - 7 <= 1 )
    {
      v26 = 2;
      LODWORD(v70) = 1;
      v64 = -1;
      lDelta = psoDest->lDelta;
      v87 = 0;
      v21 = 1;
    }
    else
    {
      if ( v7->pvScan0 == psoDest->pvScan0 )
      {
        top = prclDest->top;
        if ( v69->x >= prclDest->left )
        {
          if ( v69->y >= top )
          {
            v26 = 0;
          }
          else
          {
            v23 = -1;
            v64 = -1;
            v26 = 2;
          }
        }
        else
        {
          v23 = -1;
          v22 = -1;
          LODWORD(v70) = -1;
          v25 = v69->y;
          if ( v25 >= top )
            v23 = 1;
          v64 = v23;
          v26 = 3;
          if ( v25 >= top )
            v26 = 1;
        }
      }
      else
      {
        v26 = 4;
      }
      v27 = v7->lDelta;
      if ( v23 <= 0 )
        v27 = -v27;
      v87 = v27;
      lDelta = psoDest->lDelta;
      if ( v23 > 0 )
      {
LABEL_37:
        v88 = lDelta;
        memset(v104, 0, 0x144uLL);
        if ( v67 )
        {
          if ( *((_BYTE *)v67 + 20) )
          {
            if ( *((_BYTE *)v67 + 20) != 1 )
            {
              if ( *((_BYTE *)v67 + 20) == 3 )
              {
                v63 = 1;
                v29 = v26;
                v30 = v67;
                XCLIPOBJ::cEnumStart(v67, 0, 0, v29, 0x14u);
                v31 = 1;
              }
              else
              {
                v31 = 0;
                v30 = v67;
              }
              goto LABEL_48;
            }
            v30 = v67;
            v32 = *(RECTL *)((char *)v67 + 4);
LABEL_47:
            v31 = 0;
            v63 = 0;
            v104[0] = 1;
            *(RECTL *)&v104[1] = v32;
LABEL_48:
            if ( !pxlo )
              pxlo = xloIdent;
            v80 = pxlo;
            v83 = v22;
            v86 = v64;
            if ( !v21 )
            {
              v45 = 4 * (v7->iBitmapFormat | (8 * psoDest->iBitmapFormat));
              v46 = v45 + 2;
              if ( v22 >= 0 )
                v46 = v45;
              if ( (pxlo->flXlate & 1) != 0 )
              {
                v46 = (unsigned int)(v46 + 1);
                v93 = (v7->fjBitmap & 0x20) != 0;
              }
              v47 = (&SrcCopyFunctionTable)[v46];
              v79[1] = v47;
              if ( !v31 )
                goto LABEL_88;
              do
              {
                v63 = XCLIPOBJ::bEnum(v67, 0x144u, v104, 0LL);
LABEL_88:
                for ( i = 0; ; ++i )
                {
                  v66 = i;
                  if ( i >= v104[0] )
                    break;
                  left = prclDest->left;
                  if ( v104[4 * i + 1] < prclDest->left )
                    v104[4 * i + 1] = left;
                  right = prclDest->right;
                  if ( v104[4 * i + 3] > right )
                    v104[4 * i + 3] = right;
                  v51 = prclDest->top;
                  if ( v104[4 * i + 2] < v51 )
                    v104[4 * i + 2] = v51;
                  bottom = prclDest->bottom;
                  if ( v104[4 * i + 4] > bottom )
                    v104[4 * i + 4] = bottom;
                  v53 = v104[4 * i + 2];
                  v54 = v104[4 * i + 4];
                  if ( v53 < v54 )
                  {
                    v55 = v104[4 * i + 1];
                    v56 = v104[4 * i + 3];
                    if ( v55 < v56 )
                    {
                      v57 = v55 + v69->x - left;
                      v58 = v53 + v69->y - v51;
                      v59 = v56 - v55;
                      v84 = v59;
                      v60 = v54 - v53;
                      v85 = v60;
                      if ( v22 <= 0 )
                        v57 = v59 + v57 - 1;
                      v89 = v57;
                      v90 = v57 + v22 * v59;
                      if ( v22 <= 0 )
                        v91 = v59 + v55 - 1;
                      else
                        v91 = v55;
                      v92 = v53;
                      if ( v64 <= 0 )
                      {
                        v61 = v7->lDelta * (v60 + v58 - 1);
                        v62 = psoDest->lDelta * (v60 + v53 - 1);
                      }
                      else
                      {
                        v61 = v58 * v7->lDelta;
                        v62 = v53 * psoDest->lDelta;
                      }
                      pvScan0 = (char *)v7->pvScan0 + v61;
                      v82 = (char *)psoDest->pvScan0 + v62;
                      ((void (__fastcall *)(XLATEOBJ **))v47)(&v80);
                    }
                  }
                }
              }
              while ( v63 );
              return 1;
            }
            RLESrcCopy = pfnGetRLESrcCopy(v7->iBitmapFormat, psoDest->iBitmapFormat);
            v70 = RLESrcCopy;
            if ( !RLESrcCopy )
              return 0;
            v34 = 1;
            v71 = 1;
            v95 = *v69;
            v94 = pullResult;
            if ( (int)LongAdd((unsigned int)prclDest->top, (unsigned int)v7->sizlBitmap.cy, &v65) < 0 )
              return 0;
            if ( (int)LongSub(v65, *(unsigned int *)(v35 + 4), &v65) < 0 )
              return 0;
            if ( (int)LongSub(v65, 1LL, &v65) < 0 )
              return 0;
            v92 = v65;
            v91 = prclDest->left - *v36;
            v101 = v91;
            pvScan0 = (char *)v7->pvScan0;
            if ( (int)LongMult(v65, (unsigned int)psoDest->lDelta, &v75) < 0 )
              return 0;
            v37 = psoDest->pvScan0;
            if ( v75 < 0 )
            {
              if ( ULongLongSub((ULONGLONG)v37, (unsigned int)-v75, &pullResult) < 0 )
                return 0;
            }
            else if ( ULongLongAdd((ULONGLONG)v37, v75, &pullResult) < 0 )
            {
              return 0;
            }
            v82 = (char *)pullResult;
            v99 = 0;
            DWORD1(v96) = 0;
            if ( v38 )
              goto LABEL_61;
LABEL_62:
            for ( j = 0; ; ++j )
            {
              v66 = j;
              if ( j >= v104[0] )
              {
                v30 = v67;
                if ( !v63 )
                  return 1;
LABEL_61:
                v63 = XCLIPOBJ::bEnum(v30, 0x144u, v104, 0LL);
                goto LABEL_62;
              }
              if ( v104[4 * j + 1] < prclDest->left )
                v104[4 * j + 1] = prclDest->left;
              v40 = prclDest->right;
              if ( v104[4 * j + 3] > v40 )
                v104[4 * j + 3] = v40;
              v41 = prclDest->top;
              if ( v104[4 * j + 2] < v41 )
                v104[4 * j + 2] = v41;
              v42 = prclDest->bottom;
              if ( v104[4 * j + 4] > v42 )
                v104[4 * j + 4] = v42;
              v43 = v104[4 * j + 2];
              v44 = v104[4 * j + 4];
              if ( v43 < v44 && v104[4 * j + 1] < v104[4 * j + 3] )
              {
                if ( v44 <= SDWORD1(v96) )
                {
                  if ( v43 > v102 )
                    continue;
                  if ( !v34 )
                    return 1;
                  pvScan0 = v97;
                  v82 = v98;
                  v92 = v102;
                  v101 = v103;
                  v99 = v100;
                }
                v96 = *(_OWORD *)&v104[4 * j + 1];
                v34 = ((__int64 (__fastcall *)(XLATEOBJ **))RLESrcCopy)(&v80);
                v71 = v34;
              }
            }
          }
          v30 = v67;
        }
        else
        {
          v30 = 0LL;
        }
        v32 = *prclDest;
        goto LABEL_47;
      }
    }
    lDelta = -lDelta;
    goto LABEL_37;
  }
  if ( !gfUMPDDebug )
    return 0;
  DbgPrint("windows\\core\\ntgdi\\gre\\windows\\trivblt.cxx:%d:EngCopyBits:Invalid iFormat().\n", 471);
  return 0;
}
