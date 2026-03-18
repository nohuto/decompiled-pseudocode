/*
 * XREFs of ?MulStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C0282B60
 * Callers:
 *     <none>
 * Callees:
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C0086D44 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0086EE0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     EngStretchBlt @ 0x1C00986A0 (EngStretchBlt.c)
 *     OffStretchBlt @ 0x1C01347F4 (OffStretchBlt.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     ?DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z @ 0x1C024A738 (-DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z.c)
 *     ??1ECLIPOBJTMPIFNEEDED@@QEAA@XZ @ 0x1C0256E84 (--1ECLIPOBJTMPIFNEEDED@@QEAA@XZ.c)
 *     ??1MULTISURF@@QEAA@XZ @ 0x1C0256EB0 (--1MULTISURF@@QEAA@XZ.c)
 *     ?vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z @ 0x1C025EAB8 (-vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ?IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z @ 0x1C027FD34 (-IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?IsMetaRedirectionBitmap@@YAHPEAU_SURFOBJ@@@Z @ 0x1C027FD80 (-IsMetaRedirectionBitmap@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z @ 0x1C0280F58 (-MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z.c)
 *     ?bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C028503C (-bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bLoadSource@MULTISURF@@QEAAHPEAU_DISPSURF@@@Z @ 0x1C028531C (-bLoadSource@MULTISURF@@QEAAHPEAU_DISPSURF@@@Z.c)
 *     ?bNextSurface@MSURF@@QEAAHXZ @ 0x1C0285464 (-bNextSurface@MSURF@@QEAAHXZ.c)
 *     ?vInit@MULTISURF@@AEAAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0285984 (-vInit@MULTISURF@@AEAAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 */

__int64 __fastcall MulStretchBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        XLATEOBJ *pxlo,
        struct tagCOLORADJUSTMENT *a6,
        struct _POINTL *a7,
        struct _RECTL *a8,
        RECTL *a9,
        struct _POINTL *a10,
        ULONG iMode)
{
  unsigned int v11; // edi
  struct _SURFOBJ *v12; // r15
  struct _RECTL *v13; // r13
  RECTL *prclSrc; // r14
  __int64 v16; // rcx
  __int64 v17; // rax
  LONG right; // eax
  __int64 *v19; // r12
  LONG v20; // edx
  LONG top; // ebx
  LONG bottom; // ecx
  int v23; // r15d
  __int64 v24; // rax
  LONG v25; // eax
  LONG v26; // ecx
  LONG v27; // edx
  LONG left; // r9d
  LONG v29; // r8d
  LONG v30; // r10d
  LONG v31; // eax
  LONG v32; // ecx
  SURFOBJ *v33; // rax
  int v34; // ebx
  int Surface; // eax
  SURFOBJ *v36; // r12
  int v37; // r15d
  int v38; // ebx
  BOOL v39; // r14d
  XLATEOBJ *v40; // r15
  ULONG *pulXlate; // rbx
  __int64 v42; // rcx
  __int64 v43; // rcx
  struct PALETTE *v44; // r8
  int v45; // r9d
  ULONG iUniq; // r15d
  int v47; // r11d
  FLONG flXlate; // r10d
  ULONG v49; // r8d
  ULONG *v50; // rdx
  BOOL (__stdcall *v51)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG); // rbx
  SURFOBJ *v52; // r8
  __int64 v53; // r9
  RECTL *v54; // rcx
  LONG *v55; // rdx
  int v56; // eax
  SURFOBJ *psoSrc; // [rsp+70h] [rbp-90h]
  struct PALETTE *psoSrca; // [rsp+70h] [rbp-90h]
  SURFOBJ *psoSrcb; // [rsp+70h] [rbp-90h]
  int v61; // [rsp+78h] [rbp-88h]
  __int64 v62; // [rsp+80h] [rbp-80h]
  __int64 v64; // [rsp+90h] [rbp-70h]
  XLATEOBJ *v66; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v67; // [rsp+A8h] [rbp-58h] BYREF
  char v68; // [rsp+B0h] [rbp-50h]
  int v69; // [rsp+B4h] [rbp-4Ch]
  POINTL *pptlMask; // [rsp+B8h] [rbp-48h]
  POINTL *pptlHTOrg; // [rsp+C0h] [rbp-40h]
  COLORADJUSTMENT *pca; // [rsp+C8h] [rbp-38h]
  SURFOBJ *psoMask; // [rsp+D0h] [rbp-30h]
  __int64 v74; // [rsp+D8h] [rbp-28h] BYREF
  char v75; // [rsp+E0h] [rbp-20h]
  int v76; // [rsp+E4h] [rbp-1Ch]
  _QWORD v77[5]; // [rsp+E8h] [rbp-18h] BYREF
  _BYTE v78[64]; // [rsp+110h] [rbp+10h] BYREF
  struct _DISPSURF *v79; // [rsp+150h] [rbp+50h]
  int v80[2]; // [rsp+158h] [rbp+58h]
  __int64 v81; // [rsp+160h] [rbp+60h]
  int v82[2]; // [rsp+168h] [rbp+68h]
  _BYTE v83[56]; // [rsp+180h] [rbp+80h] BYREF
  __int64 v84; // [rsp+1B8h] [rbp+B8h]
  char v85; // [rsp+1C0h] [rbp+C0h]
  int v86; // [rsp+1C4h] [rbp+C4h]
  SURFOBJ *v87; // [rsp+1E0h] [rbp+E0h]
  RECTL *v88; // [rsp+1E8h] [rbp+E8h]
  RECTL prclDest; // [rsp+1F0h] [rbp+F0h] BYREF
  struct _RECTL v90; // [rsp+200h] [rbp+100h] BYREF
  LONG v91; // [rsp+210h] [rbp+110h] BYREF
  LONG v92; // [rsp+214h] [rbp+114h]
  LONG v93; // [rsp+218h] [rbp+118h]
  LONG v94; // [rsp+21Ch] [rbp+11Ch]
  REGION *v95[7]; // [rsp+220h] [rbp+120h] BYREF
  __int64 v96; // [rsp+258h] [rbp+158h]
  char v97; // [rsp+260h] [rbp+160h]
  int v98; // [rsp+264h] [rbp+164h]
  __int64 v99; // [rsp+270h] [rbp+170h]
  int v100; // [rsp+278h] [rbp+178h]
  SURFOBJ *psoDest; // [rsp+280h] [rbp+180h]
  RECTL *v102; // [rsp+288h] [rbp+188h]
  int v103; // [rsp+2A0h] [rbp+1A0h]
  __int64 v104; // [rsp+2B0h] [rbp+1B0h]
  int v105; // [rsp+2B8h] [rbp+1B8h]

  v11 = 0;
  v12 = a1;
  v13 = a8;
  prclSrc = a9;
  pca = a6;
  pptlHTOrg = a7;
  pptlMask = a10;
  psoMask = a3;
  psoSrc = a2;
  v74 = 0LL;
  v75 = 0;
  v76 = 0;
  v62 = SURFOBJ_TO_SURFACE_NOT_NULL(a2);
  v16 = v62;
  v17 = *(_QWORD *)(v62 + 48);
  v90 = *a9;
  if ( a2->iType != 1 || !v17 || (*(_DWORD *)(v17 + 32) & 0x20000) == 0 )
    goto LABEL_8;
  if ( (unsigned int)MulCopyDeviceToDIB(a2, (struct SURFMEM *)&v74, &v90) )
  {
    if ( !v74 )
    {
      v11 = 1;
      goto LABEL_114;
    }
    prclSrc = &v90;
    psoSrc = (SURFOBJ *)(v74 + 24);
    v16 = SURFOBJ_TO_SURFACE_NOT_NULL(v74 + 24);
    v62 = v16;
LABEL_8:
    right = a8->right;
    v67 = 0LL;
    v68 = 0;
    v69 = 0;
    v19 = *(__int64 **)(v16 + 128);
    if ( (a8->left >= right || a8->top >= a8->bottom) && !(unsigned int)IsMetaRedirectionBitmap(v12) )
    {
      memset(v77, 0, 0x20uLL);
      prclDest = *prclSrc;
      v20 = prclDest.right;
      top = prclDest.top;
      bottom = prclDest.bottom;
      v23 = _mm_cvtsi128_si32((__m128i)prclDest);
      if ( v23 < 0 )
        v23 = 0;
      if ( prclDest.right > *(_DWORD *)(v62 + 56) )
        v20 = *(_DWORD *)(v62 + 56);
      if ( prclDest.top < 0 )
        top = 0;
      if ( prclDest.bottom > *(_DWORD *)(v62 + 60) )
        bottom = *(_DWORD *)(v62 + 60);
      if ( v20 <= v23 || bottom <= top )
      {
        v11 = 1;
        goto LABEL_113;
      }
      HIDWORD(v77[0]) = v20 - v23;
      LODWORD(v77[1]) = bottom - top;
      if ( v19 )
        v24 = *v19;
      else
        v24 = 0LL;
      v77[2] = v24;
      LODWORD(v77[0]) = *(_DWORD *)(v62 + 96);
      LODWORD(v77[3]) = *(_DWORD *)(v62 + 112) & 0x40000;
      SURFMEM::bCreateDIB((SURFMEM *)&v67, (struct _DEVBITMAPINFO *)v77, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
      if ( !v67 )
        goto LABEL_113;
      v25 = v90.left - v23;
      v26 = v90.right - v23;
      v27 = v90.top - top;
      left = a8->left;
      v29 = v90.bottom - top;
      v30 = a8->right;
      v90.left -= v23;
      v90.right -= v23;
      v90.top -= top;
      v90.bottom -= top;
      if ( left < v30 )
      {
        v91 = left;
        v93 = v30;
        prclDest.left = v25;
        prclDest.right = v26;
      }
      else
      {
        v91 = v30;
        v93 = left;
        prclDest.left = v26;
        prclDest.right = v25;
      }
      v31 = a8->top;
      v32 = a8->bottom;
      if ( v31 < v32 )
      {
        v92 = a8->top;
        v94 = v32;
        prclDest.top = v27;
        prclDest.bottom = v29;
      }
      else
      {
        v92 = a8->bottom;
        v94 = v31;
        prclDest.top = v29;
        prclDest.bottom = v27;
      }
      if ( !EngStretchBlt((SURFOBJ *)(v67 + 24), psoSrc, 0LL, 0LL, xloIdent, 0LL, 0LL, &prclDest, prclSrc, 0LL, 3u) )
        goto LABEL_113;
      prclSrc = &v90;
      v13 = (struct _RECTL *)&v91;
      if ( v67 )
        v33 = (SURFOBJ *)(v67 + 24);
      else
        v33 = 0LL;
      psoSrc = v33;
      v12 = a1;
      v62 = SURFOBJ_TO_SURFACE_NOT_NULL(v33);
    }
    v61 = 1;
    v34 = IsMetaDevBitmapForMirroring(v12);
    Surface = MSURF::bFindSurface((MSURF *)v78, v12, a4, v13);
    v36 = psoSrc;
    v84 = 0LL;
    v85 = 0;
    v37 = Surface;
    v86 = 0;
    MULTISURF::vInit((MULTISURF *)v83, psoSrc, prclSrc);
    if ( v34 )
    {
      v96 = 0LL;
      v97 = 0;
      v98 = 0;
      MULTISURF::vInit((MULTISURF *)v95, a1, v13);
      v61 = EngStretchBlt(psoDest, v87, psoMask, a4, pxlo, pca, pptlHTOrg, v102, v88, pptlMask, iMode);
      v38 = v61;
      MULTISURF::~MULTISURF((MULTISURF *)v95);
    }
    else
    {
      v38 = 1;
    }
    if ( v37 )
    {
      while ( 1 )
      {
        v66 = 0LL;
        v64 = SURFOBJ_TO_SURFACE_NOT_NULL(*(_QWORD *)v80);
        if ( !(unsigned int)MULTISURF::bLoadSource((MULTISURF *)v83, v79) )
        {
LABEL_42:
          v39 = 1;
          v40 = pxlo;
          goto LABEL_81;
        }
        v39 = 0;
        v40 = pxlo;
        v62 = SURFOBJ_TO_SURFACE_NOT_NULL(v87);
        pulXlate = *(ULONG **)(v62 + 128);
        if ( *((_DWORD *)v79 + 6) )
          break;
LABEL_81:
        if ( !v39 )
        {
          v103 = 1;
          psoSrcb = (SURFOBJ *)v81;
          v99 = 0LL;
          v100 = 0;
          v104 = 0LL;
          v96 = 0LL;
          v105 = 0;
          if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*(_QWORD *)v80) + 112) & 2) != 0 )
            v51 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG))(*((_QWORD *)v79 + 7) + 2864LL);
          else
            v51 = EngStretchBlt;
          v52 = v87;
          if ( v87->iType == 1 && *(_QWORD *)(v62 + 48) != *(_QWORD *)(v64 + 48) )
            v51 = EngStretchBlt;
          v53 = iMode;
          if ( iMode == 4 && (*(_BYTE *)(*(_QWORD *)(v64 + 48) + 1840LL) & 0x10) == 0 )
            v51 = EngStretchBlt;
          v54 = v88;
          if ( v88->left < 0 || v88->top < 0 || v88->right > v87->sizlBitmap.cx || v88->bottom > v87->sizlBitmap.cy )
            v51 = EngStretchBlt;
          if ( v51 == EngStretchBlt && iMode == 4 && a4 && a4->iDComplexity )
          {
            v55 = *(LONG **)v82;
            if ( **(_DWORD **)v82 || *(_DWORD *)(*(_QWORD *)v82 + 4LL) )
            {
              ECLIPOBJTMPIFNEEDED::vSetup(
                (ECLIPOBJTMPIFNEEDED *)v95,
                1,
                *(struct REGION **)(v81 + 56),
                (struct ERECTL *)(v81 + 4),
                1);
              v39 = v96 == 0;
              if ( v96 )
              {
                v39 = 0;
                psoSrcb = (SURFOBJ *)v95;
              }
              if ( !v39 )
              {
                v54 = v88;
                v52 = v87;
                v53 = iMode;
                goto LABEL_106;
              }
LABEL_108:
              ECLIPOBJTMPIFNEEDED::~ECLIPOBJTMPIFNEEDED(v95);
              goto LABEL_109;
            }
          }
          else
          {
LABEL_106:
            v55 = *(LONG **)v82;
          }
          v61 &= OffStretchBlt(
                   (__int64 (__fastcall *)(__int64, __int64, __int64, struct _CLIPOBJ *, __int64, __int64, _DWORD *, _DWORD *, _DWORD *, __int64, int))v51,
                   v55,
                   *(__int64 *)v80,
                   v53,
                   (__int64)v52,
                   (__int64)psoMask,
                   (struct _CLIPOBJ *)psoSrcb,
                   (__int64)v40,
                   (__int64)pca,
                   pptlHTOrg,
                   v13,
                   v54,
                   (__int64)pptlMask,
                   v53);
          goto LABEL_108;
        }
LABEL_109:
        EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v66);
        v56 = 0;
        if ( !v39 )
          v56 = v61;
        v38 = v56;
        v61 = v56;
        if ( !(unsigned int)MSURF::bNextSurface((MSURF *)v78) )
          goto LABEL_112;
      }
      v42 = *((_QWORD *)v79 + 6);
      psoSrca = ppalDefault;
      if ( (*(_DWORD *)(v42 + 2188) & 0x100) != 0 )
        psoSrca = DrvRealizeHalftonePalette((_QWORD *)v42, 0);
      if ( !pulXlate )
      {
        if ( pxlo && pxlo[1].pulXlate )
        {
          pulXlate = pxlo[1].pulXlate;
LABEL_59:
          v44 = psoSrca;
LABEL_60:
          v45 = 0;
          if ( pulXlate )
          {
            if ( (pulXlate[6] & 0x800) != 0 )
            {
              v45 = 0x4000;
              if ( v44 == ppalDefault )
                v45 = 0x2000;
            }
          }
          if ( pxlo )
            iUniq = pxlo[1].iUniq;
          else
            iUniq = 0;
          if ( pxlo )
            v47 = *(_DWORD *)&pxlo[1].iSrcType;
          else
            v47 = 0;
          if ( pxlo )
            flXlate = pxlo[1].flXlate;
          else
            flXlate = 0;
          if ( pxlo )
            v49 = pxlo[3].iUniq;
          else
            v49 = 0;
          if ( pxlo )
            v50 = pxlo[2].pulXlate;
          else
            v50 = 0LL;
          if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(
                                (__int64 *)&v66,
                                (__int64)v50,
                                v49,
                                (__int64)pulXlate,
                                *(_QWORD *)(v64 + 128),
                                (__int64)ppalDefault,
                                (__int64)psoSrca,
                                flXlate,
                                v47,
                                iUniq,
                                v45) )
            goto LABEL_42;
          v40 = v66;
          goto LABEL_81;
        }
        v43 = SURFOBJ_TO_SURFACE_NOT_NULL(a1);
        if ( !pxlo || (pxlo->flXlate & 1) != 0 )
        {
          if ( v87 == v36 )
            pulXlate = *(ULONG **)(v43 + 128);
        }
        else
        {
          if ( *(_QWORD *)&pxlo[2].iSrcType )
          {
            v44 = *(struct PALETTE **)&pxlo[2].iSrcType;
            psoSrca = v44;
            if ( *(_DWORD *)(v62 + 96) == *(_DWORD *)(v43 + 96) )
              pulXlate = *(ULONG **)(v43 + 128);
            goto LABEL_60;
          }
          v39 = 1;
        }
      }
      if ( v39 )
        goto LABEL_109;
      goto LABEL_59;
    }
LABEL_112:
    v11 = v38;
    MULTISURF::~MULTISURF((MULTISURF *)v83);
LABEL_113:
    SURFMEM::~SURFMEM((SURFMEM *)&v67);
  }
LABEL_114:
  SURFMEM::~SURFMEM((SURFMEM *)&v74);
  return v11;
}
