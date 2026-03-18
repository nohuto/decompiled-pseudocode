/*
 * XREFs of EngCopyBits @ 0x1C0075490
 * Callers:
 *     GreSetBitmapBits @ 0x1C0023DA0 (GreSetBitmapBits.c)
 *     GreGetBitmapBits @ 0x1C0026F44 (GreGetBitmapBits.c)
 *     EngHTBlt @ 0x1C0030E00 (EngHTBlt.c)
 *     EngBitBlt @ 0x1C00769E0 (EngBitBlt.c)
 *     NtGdiAlphaBlend @ 0x1C0087620 (NtGdiAlphaBlend.c)
 *     GreStretchDIBitsInternal @ 0x1C0093B84 (GreStretchDIBitsInternal.c)
 *     EngStretchBlt @ 0x1C00986A0 (EngStretchBlt.c)
 *     ?BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C00A9838 (-BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@.c)
 *     ?EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z @ 0x1C00ACB80 (-EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z.c)
 *     ?GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@PEAUHBITMAP__@@IIPEAEPEAUtagBITMAPINFO@@III@Z @ 0x1C00DADC0 (-GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@P.c)
 *     ?vProcessCursorShape@@YAXPEAUHDEV__@@HHPEAU_SURFOBJ@@1PEAVPALETTE@@PEAU_RECTL@@PEAPEAUHBITMAP__@@@Z @ 0x1C00DD8D4 (-vProcessCursorShape@@YAXPEAUHDEV__@@HHPEAU_SURFOBJ@@1PEAVPALETTE@@PEAU_RECTL@@PEAPEAUHBITMAP__@.c)
 *     ?bShadowAlphaCursor@@YAHPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@1PEAU_RECTL@@H@Z @ 0x1C00DDF10 (-bShadowAlphaCursor@@YAHPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@1PEAU_RECTL@@H@Z.c)
 *     NtGdiEngCopyBits @ 0x1C012EC40 (NtGdiEngCopyBits.c)
 *     ?bCopySurface@@YAHPEAVSURFMEM@@PEAU_SURFOBJ@@@Z @ 0x1C024A588 (-bCopySurface@@YAHPEAVSURFMEM@@PEAU_SURFOBJ@@@Z.c)
 *     ?bSpDwmUpdateMaskCursor@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@3PEAU_RECTL@@PEAKPEAPEAV3@@Z @ 0x1C024D1F0 (-bSpDwmUpdateMaskCursor@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@3PEA.c)
 *     ?bSpUpdateCursor@@YAHPEAVSPRITE@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@@Z @ 0x1C025BDD0 (-bSpUpdateCursor@@YAHPEAVSPRITE@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C0075F90 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C0076190 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0086EE0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C00AC408 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     ULongLongAdd @ 0x1C00FFC88 (ULongLongAdd.c)
 *     ?pfnGetRLESrcCopy@@YAP6AHPEAUBLTINFO@@@ZKK@Z @ 0x1C011A484 (-pfnGetRLESrcCopy@@YAP6AHPEAUBLTINFO@@@ZKK@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     LongMult @ 0x1C013EA40 (LongMult.c)
 *     ULongLongSub @ 0x1C013EA74 (ULongLongSub.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     ??1EXLATEOBJ@@QEAA@XZ @ 0x1C01958D4 (--1EXLATEOBJ@@QEAA@XZ.c)
 *     LongAdd @ 0x1C0251420 (LongAdd.c)
 *     LongSub @ 0x1C0251454 (LongSub.c)
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
  LONG v24; // ecx
  int v25; // ebx
  int v26; // eax
  LONG lDelta; // eax
  unsigned int v28; // r9d
  XCLIPOBJ *v29; // rbx
  int v30; // r10d
  RECTL v31; // xmm0
  int (*RLESrcCopy)(struct BLTINFO *); // rsi
  int v33; // edi
  __int64 v34; // r11
  _DWORD *v35; // r11
  PVOID v36; // rcx
  int v37; // r10d
  unsigned int j; // ebx
  LONG v39; // eax
  LONG v40; // eax
  LONG v41; // eax
  int v42; // r8d
  int v43; // edx
  ULONG v44; // eax
  __int64 v45; // rcx
  void (* near *v46)(struct BLTINFO *); // r12
  unsigned int i; // ebx
  LONG left; // edi
  LONG right; // ecx
  LONG top; // r11d
  LONG bottom; // ecx
  int v52; // r8d
  int v53; // r10d
  int v54; // r9d
  int v55; // edx
  int v56; // ecx
  int v57; // edi
  int v58; // edx
  int v59; // r10d
  __int64 v60; // rcx
  int v61; // eax
  int v62; // [rsp+60h] [rbp-2C8h]
  int v63; // [rsp+64h] [rbp-2C4h]
  unsigned int v64; // [rsp+68h] [rbp-2C0h] BYREF
  unsigned int v65; // [rsp+6Ch] [rbp-2BCh]
  XCLIPOBJ *v66; // [rsp+70h] [rbp-2B8h]
  XLATEOBJ *v67; // [rsp+78h] [rbp-2B0h] BYREF
  POINTL *v68; // [rsp+80h] [rbp-2A8h]
  int (*v69)(struct BLTINFO *); // [rsp+88h] [rbp-2A0h]
  int v70; // [rsp+90h] [rbp-298h]
  LONG v71; // [rsp+98h] [rbp-290h] BYREF
  LONG v72; // [rsp+9Ch] [rbp-28Ch]
  ULONGLONG pullResult; // [rsp+A0h] [rbp-288h] BYREF
  int v74; // [rsp+A8h] [rbp-280h] BYREF
  CLIPOBJ *v75; // [rsp+B0h] [rbp-278h]
  RECTL *v76; // [rsp+B8h] [rbp-270h]
  HDEV hdev; // [rsp+C0h] [rbp-268h] BYREF
  _QWORD v78[5]; // [rsp+C8h] [rbp-260h] BYREF
  XLATEOBJ *v79; // [rsp+F0h] [rbp-238h] BYREF
  char *pvScan0; // [rsp+F8h] [rbp-230h]
  char *v81; // [rsp+100h] [rbp-228h]
  int v82; // [rsp+108h] [rbp-220h]
  int v83; // [rsp+10Ch] [rbp-21Ch]
  int v84; // [rsp+110h] [rbp-218h]
  int v85; // [rsp+114h] [rbp-214h]
  int v86; // [rsp+118h] [rbp-210h]
  LONG v87; // [rsp+11Ch] [rbp-20Ch]
  int v88; // [rsp+120h] [rbp-208h]
  int v89; // [rsp+124h] [rbp-204h]
  int v90; // [rsp+128h] [rbp-200h]
  unsigned int v91; // [rsp+12Ch] [rbp-1FCh]
  BOOL v92; // [rsp+130h] [rbp-1F8h]
  ULONGLONG v93; // [rsp+138h] [rbp-1F0h]
  POINTL v94; // [rsp+140h] [rbp-1E8h]
  __int128 v95; // [rsp+148h] [rbp-1E0h]
  char *v96; // [rsp+158h] [rbp-1D0h]
  char *v97; // [rsp+160h] [rbp-1C8h]
  int v98; // [rsp+168h] [rbp-1C0h]
  int v99; // [rsp+16Ch] [rbp-1BCh]
  int v100; // [rsp+170h] [rbp-1B8h]
  unsigned int v101; // [rsp+174h] [rbp-1B4h]
  int v102; // [rsp+178h] [rbp-1B0h]
  _DWORD v103[84]; // [rsp+190h] [rbp-198h] BYREF

  v66 = (XCLIPOBJ *)pco;
  v7 = psoSrc;
  v78[2] = psoDest;
  v78[3] = psoSrc;
  v75 = pco;
  v76 = prclDest;
  v9 = pptlSrc;
  v68 = pptlSrc;
  v78[4] = pptlSrc;
  v10 = SURFOBJ_TO_SURFACE(psoDest);
  v11 = SURFOBJ_TO_SURFACE(v7);
  pullResult = v11;
  if ( v7->iType )
  {
    v12 = *(_QWORD *)(v11 + 48);
    v13 = *(__int64 (__fastcall **)(SURFOBJ *, SURFOBJ *, XCLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v12 + 2856);
    v67 = 0LL;
    x = pptlSrc->x;
    v71 = pptlSrc->x;
    y = (unsigned int)pptlSrc->y;
    v72 = pptlSrc->y;
    v16 = *(_DWORD *)(v11 + 112);
    if ( (v16 & 0x80000) != 0 && v12 != *(_QWORD *)(v12 + 16) )
    {
      if ( v16 < 0 )
      {
        v71 = *(_DWORD *)(v12 + 2600) + x;
        y = (unsigned int)(*(_DWORD *)(v12 + 2604) + y);
        v72 = y;
        v68 = (POINTL *)&v71;
      }
      v17 = *(_QWORD *)(v12 + 16);
      LOBYTE(y) = 5;
      v18 = HmgShareLockCheck(*(_QWORD *)(v11 + 144), y);
      if ( v18 )
      {
        if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                             &v67,
                             0LL,
                             0LL,
                             *(_QWORD *)(v17 + 1824),
                             *(_QWORD *)(v12 + 1824),
                             ppalDefault,
                             ppalDefault,
                             0,
                             0,
                             0,
                             0x2000) )
        {
          pxlo = v67;
          v7 = (SURFOBJ *)(v18 + 24);
          v13 = *(__int64 (__fastcall **)(SURFOBJ *, SURFOBJ *, XCLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v17 + 2856);
          DEC_SHARE_REF_CNT(v18);
          v9 = v68;
          goto LABEL_12;
        }
        DEC_SHARE_REF_CNT(v18);
      }
LABEL_10:
      EXLATEOBJ::~EXLATEOBJ((EXLATEOBJ *)&v67);
      return 0;
    }
LABEL_12:
    if ( v13 )
    {
      v20 = v13(psoDest, v7, v66, pxlo, prclDest, v9);
      EXLATEOBJ::~EXLATEOBJ((EXLATEOBJ *)&v67);
      return v20;
    }
    goto LABEL_10;
  }
  if ( *(_DWORD *)(v11 + 96) <= 8u && *(_DWORD *)(v10 + 96) <= 8u || !(unsigned int)bUMPDSecurityGateEx() )
  {
    hdev = psoDest->hdev;
    PDEVOBJ::vSync((PDEVOBJ *)&hdev, psoDest, 0LL, 0);
    v78[0] = v7->hdev;
    PDEVOBJ::vSync((PDEVOBJ *)v78, v7, 0LL, 0);
    v62 = 0;
    v21 = 0;
    v92 = 0;
    v22 = 1;
    LODWORD(v69) = 1;
    v23 = 1;
    v63 = 1;
    if ( v7->iBitmapFormat - 7 <= 1 )
    {
      v25 = 2;
      LODWORD(v69) = 1;
      v63 = -1;
      lDelta = psoDest->lDelta;
      v86 = 0;
      v21 = 1;
    }
    else
    {
      if ( v7->pvScan0 == psoDest->pvScan0 )
      {
        if ( v68->x >= prclDest->left )
        {
          if ( v68->y >= prclDest->top )
          {
            v25 = 0;
          }
          else
          {
            v23 = -1;
            v63 = -1;
            v25 = 2;
          }
        }
        else
        {
          v23 = -1;
          v22 = -1;
          LODWORD(v69) = -1;
          v24 = v68->y;
          if ( v24 >= prclDest->top )
            v23 = 1;
          v63 = v23;
          v25 = 3;
          if ( v24 >= prclDest->top )
            v25 = 1;
        }
      }
      else
      {
        v25 = 4;
      }
      v26 = v7->lDelta;
      if ( v23 <= 0 )
        v26 = -v26;
      v86 = v26;
      lDelta = psoDest->lDelta;
      if ( v23 > 0 )
      {
LABEL_37:
        v87 = lDelta;
        memset(v103, 0, 0x144uLL);
        if ( v66 )
        {
          if ( *((_BYTE *)v66 + 20) )
          {
            if ( *((_BYTE *)v66 + 20) != 1 )
            {
              if ( *((_BYTE *)v66 + 20) == 3 )
              {
                v62 = 1;
                v28 = v25;
                v29 = v66;
                XCLIPOBJ::cEnumStart(v66, 0, 0, v28, 0x14u);
                v30 = 1;
              }
              else
              {
                v30 = 0;
                v29 = v66;
              }
              goto LABEL_48;
            }
            v29 = v66;
            v31 = *(RECTL *)((char *)v66 + 4);
LABEL_47:
            v30 = 0;
            v62 = 0;
            v103[0] = 1;
            *(RECTL *)&v103[1] = v31;
LABEL_48:
            if ( !pxlo )
              pxlo = xloIdent;
            v79 = pxlo;
            v82 = v22;
            v85 = v63;
            if ( !v21 )
            {
              v44 = 4 * (v7->iBitmapFormat | (8 * psoDest->iBitmapFormat));
              v45 = v44 + 2;
              if ( v22 >= 0 )
                v45 = v44;
              if ( (pxlo->flXlate & 1) != 0 )
              {
                v45 = (unsigned int)(v45 + 1);
                v92 = (v7->fjBitmap & 0x20) != 0;
              }
              v46 = (&SrcCopyFunctionTable)[v45];
              v78[1] = v46;
              if ( !v30 )
                goto LABEL_88;
              do
              {
                v62 = XCLIPOBJ::bEnum(v66, 0x144u, v103, 0LL);
LABEL_88:
                for ( i = 0; ; ++i )
                {
                  v65 = i;
                  if ( i >= v103[0] )
                    break;
                  left = prclDest->left;
                  if ( v103[4 * i + 1] < prclDest->left )
                    v103[4 * i + 1] = left;
                  right = prclDest->right;
                  if ( v103[4 * i + 3] > right )
                    v103[4 * i + 3] = right;
                  top = prclDest->top;
                  if ( v103[4 * i + 2] < top )
                    v103[4 * i + 2] = top;
                  bottom = prclDest->bottom;
                  if ( v103[4 * i + 4] > bottom )
                    v103[4 * i + 4] = bottom;
                  v52 = v103[4 * i + 2];
                  v53 = v103[4 * i + 4];
                  if ( v52 < v53 )
                  {
                    v54 = v103[4 * i + 1];
                    v55 = v103[4 * i + 3];
                    if ( v54 < v55 )
                    {
                      v56 = v54 + v68->x - left;
                      v57 = v52 + v68->y - top;
                      v58 = v55 - v54;
                      v83 = v58;
                      v59 = v53 - v52;
                      v84 = v59;
                      if ( v22 <= 0 )
                        v56 = v58 + v56 - 1;
                      v88 = v56;
                      v89 = v56 + v22 * v58;
                      if ( v22 <= 0 )
                        v90 = v58 + v54 - 1;
                      else
                        v90 = v54;
                      v91 = v52;
                      if ( v63 <= 0 )
                      {
                        v60 = v7->lDelta * (v59 + v57 - 1);
                        v61 = psoDest->lDelta * (v59 + v52 - 1);
                      }
                      else
                      {
                        v60 = v57 * v7->lDelta;
                        v61 = v52 * psoDest->lDelta;
                      }
                      pvScan0 = (char *)v7->pvScan0 + v60;
                      v81 = (char *)psoDest->pvScan0 + v61;
                      ((void (__fastcall *)(XLATEOBJ **))v46)(&v79);
                    }
                  }
                }
              }
              while ( v62 );
              return 1;
            }
            RLESrcCopy = pfnGetRLESrcCopy(v7->iBitmapFormat, psoDest->iBitmapFormat);
            v69 = RLESrcCopy;
            if ( !RLESrcCopy )
              return 0;
            v33 = 1;
            v70 = 1;
            v94 = *v68;
            v93 = pullResult;
            if ( (int)LongAdd((unsigned int)prclDest->top, (unsigned int)v7->sizlBitmap.cy, &v64) < 0 )
              return 0;
            if ( (int)LongSub(v64, *(unsigned int *)(v34 + 4), &v64) < 0 )
              return 0;
            if ( (int)LongSub(v64, 1LL, &v64) < 0 )
              return 0;
            v91 = v64;
            v90 = prclDest->left - *v35;
            v100 = v90;
            pvScan0 = (char *)v7->pvScan0;
            if ( (int)LongMult(v64, (unsigned int)psoDest->lDelta, &v74) < 0 )
              return 0;
            v36 = psoDest->pvScan0;
            if ( v74 < 0 )
            {
              if ( ULongLongSub((ULONGLONG)v36, (unsigned int)-v74, &pullResult) < 0 )
                return 0;
            }
            else if ( ULongLongAdd((ULONGLONG)v36, v74, &pullResult) < 0 )
            {
              return 0;
            }
            v81 = (char *)pullResult;
            v98 = 0;
            DWORD1(v95) = 0;
            if ( v37 )
              goto LABEL_61;
LABEL_62:
            for ( j = 0; ; ++j )
            {
              v65 = j;
              if ( j >= v103[0] )
              {
                v29 = v66;
                if ( !v62 )
                  return 1;
LABEL_61:
                v62 = XCLIPOBJ::bEnum(v29, 0x144u, v103, 0LL);
                goto LABEL_62;
              }
              if ( v103[4 * j + 1] < prclDest->left )
                v103[4 * j + 1] = prclDest->left;
              v39 = prclDest->right;
              if ( v103[4 * j + 3] > v39 )
                v103[4 * j + 3] = v39;
              v40 = prclDest->top;
              if ( v103[4 * j + 2] < v40 )
                v103[4 * j + 2] = v40;
              v41 = prclDest->bottom;
              if ( v103[4 * j + 4] > v41 )
                v103[4 * j + 4] = v41;
              v42 = v103[4 * j + 2];
              v43 = v103[4 * j + 4];
              if ( v42 < v43 && v103[4 * j + 1] < v103[4 * j + 3] )
              {
                if ( v43 <= SDWORD1(v95) )
                {
                  if ( v42 > v101 )
                    continue;
                  if ( !v33 )
                    return 1;
                  pvScan0 = v96;
                  v81 = v97;
                  v91 = v101;
                  v100 = v102;
                  v98 = v99;
                }
                v95 = *(_OWORD *)&v103[4 * j + 1];
                v33 = ((__int64 (__fastcall *)(XLATEOBJ **))RLESrcCopy)(&v79);
                v70 = v33;
              }
            }
          }
          v29 = v66;
        }
        else
        {
          v29 = 0LL;
        }
        v31 = *prclDest;
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
