/*
 * XREFs of ?bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@K4@Z @ 0x1C000D300
 * Callers:
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C002EA10 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 * Callees:
 *     ?bAdjusBaseLine@@YAHAEAVRFONTOBJ@@0PEAU_POINTL@@@Z @ 0x1C000D0F8 (-bAdjusBaseLine@@YAHAEAVRFONTOBJ@@0PEAU_POINTL@@@Z.c)
 *     STROBJ_bEnum @ 0x1C000DCD0 (STROBJ_bEnum.c)
 *     ?pfnTextOut@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@ZXZ @ 0x1C00125E8 (-pfnTextOut@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@.c)
 *     ?pdcoAA@SURFACE@@QEAAXPEAVXDCOBJ@@@Z @ 0x1C001260C (-pdcoAA@SURFACE@@QEAAXPEAVXDCOBJ@@@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0035428 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?PreTextOut@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0035DC8 (-PreTextOut@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?PostTextOut@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0035DF0 (-PostTextOut@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1C00BAEDC (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEAH@Z @ 0x1C00BB08C (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEAH@Z.c)
 *     ?bSimpleStroke@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C00E9D88 (-bSimpleStroke@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSH.c)
 *     ?bSimpleFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C00EA084 (-bSimpleFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@.c)
 *     ?TextOutBitBlt@@YAXPEAVSURFACE@@AEAVRFONTOBJ@@PEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@6PEAU_BRUSHOBJ@@6K@Z @ 0x1C01404AC (-TextOutBitBlt@@YAXPEAVSURFACE@@AEAVRFONTOBJ@@PEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_R.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 *     ?ptlBaseLineAdjustSet@ESTROBJ@@QEAAXAEAU_POINTL@@@Z @ 0x1C0282DEC (-ptlBaseLineAdjustSet@ESTROBJ@@QEAAXAEAU_POINTL@@@Z.c)
 *     ?bTextToPathWorkhorse@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z @ 0x1C0296678 (-bTextToPathWorkhorse@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z.c)
 */

__int64 __fastcall bProxyDrvTextOut(
        struct XDCOBJ *a1,
        struct SURFACE *a2,
        struct ESTROBJ *a3,
        CLIPOBJ *a4,
        struct _RECTL *a5,
        struct _RECTL *a6,
        struct _BRUSHOBJ *a7,
        struct _BRUSHOBJ *a8,
        struct _POINTL *a9,
        struct RFONTOBJ *a10,
        struct PDEVOBJ *a11,
        unsigned int a12,
        struct _RECTL *a13)
{
  CLIPOBJ *v13; // rbx
  struct RFONTOBJ *v14; // r12
  _WORD *v15; // r10
  struct _RECTL *v17; // rsi
  SURFACE *v18; // r15
  struct _RECTL *v19; // r13
  unsigned int v20; // r14d
  _WORD *v21; // rax
  _DWORD *v22; // r8
  _BOOL8 v23; // rdx
  int v24; // r11d
  __int64 v25; // r9
  struct _SURFOBJ *v26; // r8
  unsigned int v27; // r14d
  int v28; // eax
  __int64 v29; // rdx
  __int64 result; // rax
  int v31; // eax
  RFONTOBJ *v32; // r13
  _DWORD *v33; // rdx
  unsigned int v34; // r14d
  unsigned __int64 v35; // r8
  _WORD *v36; // r9
  _WORD *v37; // rbx
  unsigned __int64 v38; // r10
  _WORD *v39; // rcx
  __int64 v40; // rcx
  __int128 v41; // xmm0
  __int64 v42; // rcx
  float v43; // xmm0_4
  SURFACE *v44; // rcx
  BOOL (__stdcall *v45)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX); // rsi
  struct XDCOBJ *v46; // rbx
  PGLYPHPOS v47; // rbx
  unsigned int v48; // r14d
  int v49; // r15d
  struct _RECTL *v50; // r9
  int v51; // eax
  __int128 v52; // xmm0
  int v53; // edx
  int *v54; // rcx
  __int64 v55; // r10
  int v56; // edx
  __int64 v57; // rax
  LONG left; // ecx
  LONG right; // ecx
  LONG top; // ecx
  LONG bottom; // ecx
  POINTL *v62; // rax
  __int64 v63; // rbx
  PGLYPHPOS v64; // rsi
  unsigned int v65; // r15d
  int v66; // r12d
  int v67; // eax
  bool v68; // zf
  __int64 v69; // rdx
  __int64 v70; // r8
  BOOL v71; // eax
  int v72; // r10d
  GLYPHBITS *pgb; // rdx
  int v74; // ecx
  int v75; // r8d
  int v76; // eax
  __int64 v77; // rdx
  __int64 v78; // r8
  BRUSHOBJ *pbo; // [rsp+28h] [rbp-D8h]
  POINTL *v80; // [rsp+38h] [rbp-C8h]
  POINTL *v81; // [rsp+40h] [rbp-C0h]
  unsigned int v82; // [rsp+58h] [rbp-A8h]
  __int64 v83; // [rsp+60h] [rbp-A0h] BYREF
  int v84; // [rsp+68h] [rbp-98h]
  unsigned int v85; // [rsp+6Ch] [rbp-94h] BYREF
  SURFACE *v86; // [rsp+70h] [rbp-90h]
  unsigned int v87; // [rsp+78h] [rbp-88h]
  struct _RECTL *v88; // [rsp+80h] [rbp-80h]
  PGLYPHPOS ppgpos; // [rsp+88h] [rbp-78h] BYREF
  int v90; // [rsp+90h] [rbp-70h]
  struct XDCOBJ *v91; // [rsp+98h] [rbp-68h]
  unsigned int v92; // [rsp+A0h] [rbp-60h] BYREF
  int v93; // [rsp+A4h] [rbp-5Ch]
  struct RFONTOBJ *v94; // [rsp+A8h] [rbp-58h]
  POINTL *v95; // [rsp+B0h] [rbp-50h]
  CLIPOBJ *pco; // [rsp+B8h] [rbp-48h]
  ULONG pc; // [rsp+C0h] [rbp-40h] BYREF
  unsigned int v98; // [rsp+C4h] [rbp-3Ch] BYREF
  BRUSHOBJ *v99; // [rsp+C8h] [rbp-38h]
  _WORD *v100; // [rsp+D0h] [rbp-30h]
  struct PDEVOBJ *v101; // [rsp+D8h] [rbp-28h]
  struct _BRUSHOBJ *v102; // [rsp+E0h] [rbp-20h]
  RECTL v103; // [rsp+E8h] [rbp-18h]
  _WORD *v104; // [rsp+F8h] [rbp-8h]
  struct _POINTL v105; // [rsp+100h] [rbp+0h] BYREF
  struct _RECTL *v106; // [rsp+108h] [rbp+8h]
  struct _RECTL *v107; // [rsp+110h] [rbp+10h]
  _BOOL8 v108; // [rsp+118h] [rbp+18h]
  __int64 v109; // [rsp+120h] [rbp+20h]
  LINEATTRS v110; // [rsp+128h] [rbp+28h] BYREF
  PATHOBJ ppo; // [rsp+150h] [rbp+50h] BYREF
  __int64 v112; // [rsp+158h] [rbp+58h]
  int v113[10]; // [rsp+1D0h] [rbp+D0h] BYREF
  int v114[10]; // [rsp+1F8h] [rbp+F8h] BYREF

  v13 = a4;
  v14 = a10;
  v15 = (_WORD *)*((_QWORD *)a3 + 5);
  v17 = a6;
  v18 = a2;
  v19 = a13;
  v106 = a5;
  v20 = 1;
  v99 = a7;
  v102 = a8;
  v95 = a9;
  v101 = a11;
  v87 = *(_DWORD *)a3;
  v109 = *((_QWORD *)a3 + 7);
  v21 = (_WORD *)*((_QWORD *)a3 + 26);
  *((_QWORD *)a3 + 4) = 0LL;
  v22 = *(_DWORD **)a10;
  v104 = v21;
  v86 = a2;
  pco = a4;
  LODWORD(v21) = v22[122];
  v91 = a1;
  v88 = a6;
  v94 = a10;
  v107 = a13;
  v90 = 0;
  v23 = 0LL;
  v84 = 1;
  v100 = v15;
  if ( ((unsigned __int8)v21 & 4) != 0 && v22[50] == 1 )
    v23 = *(_DWORD *)(*(_QWORD *)a1 + 2188LL) != v22[97];
  *(_QWORD *)((char *)a3 + 4) = 0LL;
  v24 = 0;
  v93 = 0;
  v25 = *(_QWORD *)a10;
  v26 = (struct _SURFOBJ *)*(unsigned int *)(*(_QWORD *)a10 + 848LL);
  if ( (int)v26 + 4 > 0 )
  {
    v27 = v87;
    v108 = v23;
    while ( 1 )
    {
      v28 = 0;
      v83 = 0LL;
      if ( v24 )
      {
        switch ( v24 )
        {
          case 1:
            if ( !v23 && *((_DWORD *)a3 + 63) )
            {
              v57 = *(_QWORD *)(v25 + 728);
              goto LABEL_77;
            }
            break;
          case 2:
            if ( !v23 && *((_DWORD *)a3 + 64) )
            {
              v57 = *(_QWORD *)(v25 + 736);
              goto LABEL_77;
            }
            break;
          case 3:
            if ( !v23 && *((_DWORD *)a3 + 65) )
            {
              v57 = *(_QWORD *)(v25 + 744);
LABEL_77:
              v83 = v57;
              goto LABEL_30;
            }
            break;
          default:
            if ( !v23 )
            {
              v29 = *((_QWORD *)a3 + 34);
              if ( v29 )
                v28 = *(_DWORD *)(v29 + 4LL * (unsigned int)(v24 - 4));
              if ( v28 )
              {
                v83 = *(_QWORD *)(*(_QWORD *)(v25 + 752) + 8LL * (unsigned int)(v24 - 4));
LABEL_30:
                v32 = (RFONTOBJ *)&v83;
LABEL_31:
                v33 = (_DWORD *)*((_QWORD *)a3 + 27);
                v34 = 0;
                v35 = v87;
                v36 = v15;
                v37 = v104;
                v38 = 0LL;
                v39 = v104;
                if ( v33 > &v33[v87] )
                  v35 = 0LL;
                if ( v35 )
                {
                  do
                  {
                    if ( *v33 == v24 )
                      *v39++ = *v36;
                    ++v36;
                    ++v33;
                    ++v38;
                  }
                  while ( v38 < v35 );
                }
                *((_QWORD *)a3 + 5) = v37;
                v40 = v39 - v37;
                v90 += v40;
                *(_DWORD *)a3 = v40;
                *((_DWORD *)a3 + 60) = v24;
                *((_DWORD *)a3 + 12) = 0;
                if ( v24 && (unsigned int)bAdjusBaseLine(v14, (struct RFONTOBJ *)&v83, &v105) )
                  ESTROBJ::ptlBaseLineAdjustSet(a3, &v105);
                v41 = *(_OWORD *)((char *)a3 + 12);
                *((_QWORD *)a3 + 7) = v32;
                *(_OWORD *)((char *)a3 + 188) = v41;
                v42 = *(_QWORD *)v32;
                if ( (*(_DWORD *)(*(_QWORD *)v32 + 72LL) & 2) != 0 )
                {
                  PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)&ppo);
                  if ( v112 )
                  {
                    v63 = *((_QWORD *)v18 + 6);
                    v64 = (PGLYPHPOS)v113;
                    ppgpos = (PGLYPHPOS)v113;
                    v92 = 0;
                    v85 = 0;
                    v65 = 0;
                    v66 = 0;
                    v84 = ESTROBJ::bTextToPathWorkhorse((STROBJ *)a3, (struct EPATHOBJ *)&ppo);
                    if ( v84 )
                    {
                      if ( (*(_DWORD *)(v63 + 32) & 0x8000) != 0 )
                      {
                        v67 = UMPDReleaseRFONTSem(v94, 0LL, &v92, &v85, (int **)&ppgpos);
                        v34 = v92;
                        v66 = v67;
                        v65 = v85;
                        v64 = ppgpos;
                      }
                      if ( (*(_DWORD *)(*(_QWORD *)v32 + 488LL) & 0x8000) != 0 )
                      {
                        if ( ppo.cCurves > 1 )
                          v84 = EPATHOBJ::bSimpleFill(&ppo, a12, v101, v86, pco, v99, v95, 0xD0Du, 2u);
                      }
                      else
                      {
                        v110 = glaSimpleStroke;
                        v84 = EPATHOBJ::bSimpleStroke(&ppo, a12, v101, v86, pco, 0LL, v99, v95, &v110, 0xD0Du);
                      }
                      v68 = v66 == 0;
                      v14 = v94;
                      if ( !v68 )
                      {
                        UMPDAcquireRFONTSem(v94, 0LL, v34, v65, (int *)v64);
                        if ( v64 )
                        {
                          if ( v64 != (PGLYPHPOS)v113 )
                            Win32FreePool(v64, v69, v70);
                        }
                      }
                    }
                    else
                    {
                      v14 = v94;
                    }
                    v18 = v86;
                    v17 = v88;
                  }
                  else
                  {
                    EngSetLastError(8u);
                    v84 = 0;
                  }
                  PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)&ppo);
                }
                else
                {
                  v43 = *(float *)(v42 + 132);
                  ppgpos = 0LL;
                  if ( v43 == 0.0 && *(float *)(v42 + 136) == 0.0 )
                    goto LABEL_43;
                  do
                  {
                    v71 = STROBJ_bEnum((STROBJ *)a3, &pc, &ppgpos);
                    if ( pc )
                    {
                      v72 = 0;
                      while ( 1 )
                      {
                        pgb = ppgpos[v72].pgdf->pgb;
                        if ( pgb )
                        {
                          v74 = pgb->ptlOrigin.x + ppgpos[v72].ptl.x;
                          v75 = ppgpos[v72].ptl.y + pgb->ptlOrigin.y;
                          if ( v74 < *((_DWORD *)a3 + 3)
                            || pgb->sizlBitmap.cx + v74 > *((_DWORD *)a3 + 5)
                            || v75 < *((_DWORD *)a3 + 4)
                            || v75 + pgb->sizlBitmap.cy > *((_DWORD *)a3 + 6) )
                          {
                            break;
                          }
                        }
                        if ( ++v72 >= pc )
                          goto LABEL_114;
                      }
                      v34 = 1;
                    }
LABEL_114:
                    ;
                  }
                  while ( v71 );
                  *((_QWORD *)a3 + 6) = 0LL;
                  if ( !v34 )
                  {
LABEL_43:
                    v45 = SURFACE::pfnTextOut(v18);
                    if ( (char *)v45 == (char *)SpTextOut
                      || (char *)v45 == (char *)MulTextOut
                      || (char *)v45 == (char *)BmpDevTextOut )
                    {
                      if ( (*(_DWORD *)(*(_QWORD *)v32 + 12LL) & 0x10010000) == 0 )
                        goto LABEL_62;
                      v46 = v91;
                      SURFACE::pdcoAA(v44, v91);
                    }
                    else
                    {
                      v53 = *(_DWORD *)(*(_QWORD *)v32 + 12LL);
                      if ( (v53 & 0x10000) == 0 )
                        goto LABEL_62;
                      if ( (*(_DWORD *)(*(_QWORD *)v91 + 72LL) & 0x1000000) != 0 && (v53 & 0x10000000) == 0 )
                      {
                        v46 = v91;
                      }
                      else
                      {
                        if ( v45 != EngTextOut )
                          SURFACE::pdcoAA(v18, v91);
                        v45 = (BOOL (__stdcall *)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX))SpTextOut;
LABEL_62:
                        v46 = v91;
                      }
                    }
                    RFONTOBJ::PreTextOut(v32, v46);
                    v47 = (PGLYPHPOS)v114;
                    v85 = 0;
                    v48 = 0;
                    ppgpos = (PGLYPHPOS)v114;
                    v49 = 0;
                    if ( v32 != v14 && (*(_DWORD *)(*((_QWORD *)v86 + 6) + 32LL) & 0x8080) == 0x8080 )
                    {
                      v76 = UMPDReleaseRFONTSem(v14, 0LL, &v98, &v85, (int **)&ppgpos);
                      v48 = v85;
                      v49 = v76;
                      v47 = ppgpos;
                    }
                    v50 = v106;
                    if ( v90 != v87 )
                      v50 = 0LL;
                    v81 = v95;
                    v80 = (POINTL *)v102;
                    pbo = (BRUSHOBJ *)v88;
                    v51 = ((__int64 (__fastcall *)(unsigned __int64, struct ESTROBJ *, _QWORD, CLIPOBJ *, struct _RECTL *))v45)(
                            ((unsigned __int64)v86 + 24) & -(__int64)(v86 != 0LL),
                            a3,
                            *(_QWORD *)v32,
                            pco,
                            v50);
                    v84 = v51 != 0 ? v84 : 0;
                    if ( v49 )
                    {
                      UMPDAcquireRFONTSem(v14, 0LL, v98, v48, (int *)v47);
                      if ( v47 )
                      {
                        if ( v47 != (PGLYPHPOS)v114 )
                          Win32FreePool(v47, v77, v78);
                      }
                    }
                    RFONTOBJ::PostTextOut(v32, v91);
                    v18 = v86;
                    SURFACE::pdcoAA(v86, 0LL);
                  }
                  v17 = 0LL;
                  v88 = 0LL;
                }
                v52 = *(_OWORD *)((char *)a3 + 188);
                v83 = 0LL;
                *(_OWORD *)((char *)a3 + 12) = v52;
                RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v83);
                v13 = pco;
                v19 = v107;
                v27 = v87;
                goto LABEL_14;
              }
            }
            break;
        }
        v83 = 0LL;
      }
      else
      {
        v31 = *((_DWORD *)a3 + 63) + *((_DWORD *)a3 + 64) + *((_DWORD *)a3 + 65);
        if ( (_DWORD)v26 )
        {
          v25 = *((_QWORD *)a3 + 34);
          v54 = (int *)v25;
          v55 = (unsigned int)v26;
          do
          {
            if ( v25 )
              v56 = *v54;
            else
              v56 = 0;
            v31 += v56;
            ++v54;
            --v55;
          }
          while ( v55 );
          v18 = v86;
          v15 = v100;
        }
        if ( v31 != v27 )
        {
          v32 = v14;
          goto LABEL_31;
        }
        if ( v17 )
        {
          left = v17->left;
          if ( v19->left > v17->left )
            left = v19->left;
          v13->rclBounds.left = left;
          right = v17->right;
          if ( v19->right < right )
            right = v19->right;
          v13->rclBounds.right = right;
          top = v17->top;
          if ( v19->top > top )
            top = v19->top;
          v13->rclBounds.top = top;
          bottom = v17->bottom;
          if ( v19->bottom < bottom )
            bottom = v19->bottom;
          v13->rclBounds.bottom = bottom;
        }
        if ( v13->rclBounds.left < v13->rclBounds.right && v13->rclBounds.top < v13->rclBounds.bottom && v17 )
        {
          v62 = v95;
          ++*((_DWORD *)v18 + 23);
          TextOutBitBlt(
            v18,
            v14,
            v26,
            (struct _SURFOBJ *)v25,
            v13,
            (struct _XLATEOBJ *)pbo,
            v17,
            v80,
            v81,
            v102,
            v62,
            v82);
        }
        v17 = 0LL;
        v103 = *v19;
        v88 = 0LL;
        v83 = 0LL;
        v13->rclBounds = v103;
      }
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v83);
LABEL_14:
      v25 = *(_QWORD *)v14;
      v24 = v93 + 1;
      v23 = v108;
      v15 = v100;
      v93 = v24;
      v26 = (struct _SURFOBJ *)*(unsigned int *)(v25 + 848);
      if ( v24 >= (int)v26 + 4 )
      {
        v20 = v84;
        break;
      }
    }
  }
  *((_QWORD *)a3 + 7) = v109;
  result = v20;
  *((_QWORD *)a3 + 5) = v15;
  return result;
}
