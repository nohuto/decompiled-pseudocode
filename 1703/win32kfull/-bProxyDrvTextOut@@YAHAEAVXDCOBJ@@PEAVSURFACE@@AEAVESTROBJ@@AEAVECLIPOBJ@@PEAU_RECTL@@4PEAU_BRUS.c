/*
 * XREFs of ?bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@K4@Z @ 0x1C010E810
 * Callers:
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C0078C70 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 * Callees:
 *     ?bAdjusBaseLine@@YAHAEAVRFONTOBJ@@0PEAU_POINTL@@@Z @ 0x1C0007AC8 (-bAdjusBaseLine@@YAHAEAVRFONTOBJ@@0PEAU_POINTL@@@Z.c)
 *     ?pfnTextOut@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@ZXZ @ 0x1C00843A4 (-pfnTextOut@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@.c)
 *     ?pdcoAA@SURFACE@@QEAAXPEAVXDCOBJ@@@Z @ 0x1C00843C8 (-pdcoAA@SURFACE@@QEAAXPEAVXDCOBJ@@@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008F468 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?PostTextOut@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C008FE88 (-PostTextOut@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?PreTextOut@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C008FEB8 (-PreTextOut@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1C009B524 (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEAH@Z @ 0x1C009B6D4 (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEAH@Z.c)
 *     STROBJ_bEnum @ 0x1C00DF3C0 (STROBJ_bEnum.c)
 *     ?TextOutBitBlt@@YAXPEAVSURFACE@@AEAVRFONTOBJ@@PEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@6PEAU_BRUSHOBJ@@6K@Z @ 0x1C00E7B84 (-TextOutBitBlt@@YAXPEAVSURFACE@@AEAVRFONTOBJ@@PEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_R.c)
 *     ?bSimpleStroke@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C012438C (-bSimpleStroke@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSH.c)
 *     ?bSimpleFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C0124688 (-bSimpleFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 *     ?ptlBaseLineAdjustSet@ESTROBJ@@QEAAXAEAU_POINTL@@@Z @ 0x1C028629C (-ptlBaseLineAdjustSet@ESTROBJ@@QEAAXAEAU_POINTL@@@Z.c)
 *     ?bTextToPathWorkhorse@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z @ 0x1C0299FC8 (-bTextToPathWorkhorse@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z.c)
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
  struct RFONTOBJ *v14; // r12
  struct _RECTL *v15; // r13
  struct _RECTL *v17; // rsi
  SURFACE *v18; // r15
  _WORD *v19; // r10
  unsigned __int64 v20; // r9
  unsigned int v21; // r14d
  __int64 v22; // rax
  _WORD *v23; // rax
  _DWORD *v24; // rdx
  int v25; // r11d
  __int64 v26; // r8
  unsigned int v27; // edx
  unsigned int v28; // r14d
  int v29; // eax
  __int64 v30; // rdx
  __int64 result; // rax
  RFONTOBJ *v32; // r13
  _DWORD *v33; // r8
  unsigned int v34; // r14d
  _WORD *v35; // r9
  _WORD *v36; // rbx
  unsigned __int64 v37; // r10
  _WORD *v38; // rdx
  unsigned __int64 v39; // rcx
  __int64 v40; // rdx
  __int128 v41; // xmm0
  __int64 v42; // rcx
  float v43; // xmm0_4
  SURFACE *v44; // rcx
  BOOL (__stdcall *v45)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX); // rsi
  int v46; // edx
  struct XDCOBJ *v47; // rbx
  int v48; // eax
  int *v49; // rcx
  int v50; // edx
  PGLYPHPOS v51; // rbx
  unsigned int v52; // r14d
  int v53; // r15d
  struct _RECTL *v54; // r9
  int v55; // eax
  __int128 v56; // xmm0
  __int64 v57; // rax
  struct _RECTL *v58; // rcx
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
  BOOL v69; // eax
  int v70; // r10d
  GLYPHBITS *pgb; // rdx
  int v72; // ecx
  int v73; // r8d
  int v74; // eax
  BRUSHOBJ *pbo; // [rsp+28h] [rbp-D8h]
  POINTL *v76; // [rsp+38h] [rbp-C8h]
  POINTL *v77; // [rsp+40h] [rbp-C0h]
  __int64 v78; // [rsp+60h] [rbp-A0h] BYREF
  int v79; // [rsp+68h] [rbp-98h]
  unsigned int v80; // [rsp+6Ch] [rbp-94h] BYREF
  SURFACE *v81; // [rsp+70h] [rbp-90h]
  unsigned int v82; // [rsp+78h] [rbp-88h]
  struct _RECTL *v83; // [rsp+80h] [rbp-80h]
  PGLYPHPOS ppgpos; // [rsp+88h] [rbp-78h] BYREF
  int v85; // [rsp+90h] [rbp-70h]
  struct XDCOBJ *v86; // [rsp+98h] [rbp-68h]
  unsigned int v87; // [rsp+A0h] [rbp-60h] BYREF
  int v88; // [rsp+A4h] [rbp-5Ch]
  struct RFONTOBJ *v89; // [rsp+A8h] [rbp-58h]
  POINTL *v90; // [rsp+B0h] [rbp-50h]
  CLIPOBJ *pco; // [rsp+B8h] [rbp-48h]
  ULONG pc; // [rsp+C0h] [rbp-40h] BYREF
  unsigned int v93; // [rsp+C4h] [rbp-3Ch] BYREF
  BRUSHOBJ *v94; // [rsp+C8h] [rbp-38h]
  struct _SURFOBJ *v95; // [rsp+D0h] [rbp-30h]
  struct PDEVOBJ *v96; // [rsp+D8h] [rbp-28h]
  struct _BRUSHOBJ *v97; // [rsp+E0h] [rbp-20h]
  _WORD *v98; // [rsp+E8h] [rbp-18h]
  RECTL v99; // [rsp+F0h] [rbp-10h]
  _WORD *v100; // [rsp+100h] [rbp+0h]
  struct _POINTL v101; // [rsp+108h] [rbp+8h] BYREF
  struct _RECTL *v102; // [rsp+110h] [rbp+10h]
  struct _RECTL *v103; // [rsp+118h] [rbp+18h]
  __int64 v104; // [rsp+120h] [rbp+20h]
  LINEATTRS v105; // [rsp+128h] [rbp+28h] BYREF
  PATHOBJ ppo; // [rsp+150h] [rbp+50h] BYREF
  __int64 v107; // [rsp+158h] [rbp+58h]
  int v108[10]; // [rsp+1D0h] [rbp+D0h] BYREF
  int v109[10]; // [rsp+1F8h] [rbp+F8h] BYREF

  v14 = a10;
  v15 = a13;
  v17 = a6;
  v18 = a2;
  v19 = (_WORD *)*((_QWORD *)a3 + 5);
  v20 = 0LL;
  v102 = a5;
  v21 = 1;
  v94 = a7;
  v97 = a8;
  v90 = a9;
  v96 = a11;
  v82 = *(_DWORD *)a3;
  v22 = *((_QWORD *)a3 + 7);
  *((_QWORD *)a3 + 4) = 0LL;
  v104 = v22;
  v23 = (_WORD *)*((_QWORD *)a3 + 26);
  v81 = a2;
  v24 = *(_DWORD **)a10;
  v100 = v23;
  pco = a4;
  v86 = a1;
  LODWORD(v23) = v24[122];
  v103 = a13;
  v83 = a6;
  v89 = a10;
  v85 = 0;
  v79 = 1;
  v98 = v19;
  v95 = 0LL;
  if ( ((unsigned __int8)v23 & 4) != 0 )
  {
    v95 = 0LL;
    if ( v24[50] == 1 )
    {
      v20 = *(_DWORD *)(*(_QWORD *)a1 + 2188LL) != v24[97];
      v95 = (struct _SURFOBJ *)v20;
    }
  }
  *(_QWORD *)((char *)a3 + 4) = 0LL;
  v25 = 0;
  v88 = 0;
  v26 = *(_QWORD *)a10;
  v27 = *(_DWORD *)(*(_QWORD *)a10 + 848LL);
  if ( (int)(v27 + 4) > 0 )
  {
    v28 = v82;
    while ( 1 )
    {
      v29 = 0;
      v78 = 0LL;
      if ( v25 )
      {
        switch ( v25 )
        {
          case 1:
            if ( !v20 && *((_DWORD *)a3 + 63) )
            {
              v57 = *(_QWORD *)(v26 + 728);
              goto LABEL_77;
            }
            break;
          case 2:
            if ( !v20 && *((_DWORD *)a3 + 64) )
            {
              v57 = *(_QWORD *)(v26 + 736);
              goto LABEL_77;
            }
            break;
          case 3:
            if ( !v20 && *((_DWORD *)a3 + 65) )
            {
              v57 = *(_QWORD *)(v26 + 744);
LABEL_77:
              v78 = v57;
              goto LABEL_18;
            }
            break;
          default:
            if ( !v20 )
            {
              v30 = *((_QWORD *)a3 + 34);
              if ( v30 )
                v29 = *(_DWORD *)(v30 + 4LL * (unsigned int)(v25 - 4));
              if ( v29 )
              {
                v78 = *(_QWORD *)(*(_QWORD *)(v26 + 752) + 8LL * (unsigned int)(v25 - 4));
LABEL_18:
                v32 = (RFONTOBJ *)&v78;
                goto LABEL_19;
              }
            }
            break;
        }
        v78 = 0LL;
      }
      else
      {
        v48 = *((_DWORD *)a3 + 63) + *((_DWORD *)a3 + 64) + *((_DWORD *)a3 + 65);
        if ( v27 )
        {
          v49 = (int *)*((_QWORD *)a3 + 34);
          v20 = v27;
          do
          {
            if ( *((_QWORD *)a3 + 34) )
              v50 = *v49;
            else
              v50 = 0;
            v48 += v50;
            ++v49;
            --v20;
          }
          while ( v20 );
          v18 = v81;
        }
        if ( v48 != v28 )
        {
          v32 = v14;
LABEL_19:
          v33 = (_DWORD *)*((_QWORD *)a3 + 27);
          v34 = 0;
          v35 = v19;
          v36 = v100;
          v37 = 0LL;
          v38 = v100;
          v39 = (4 * (unsigned __int64)v82 + 3) >> 2;
          if ( v33 > &v33[v82] )
            v39 = 0LL;
          if ( v39 )
          {
            do
            {
              if ( *v33 == v25 )
                *v38++ = *v35;
              ++v35;
              ++v33;
              ++v37;
            }
            while ( v37 < v39 );
          }
          *((_QWORD *)a3 + 5) = v36;
          v40 = v38 - v36;
          v85 += v40;
          *(_DWORD *)a3 = v40;
          *((_DWORD *)a3 + 60) = v25;
          *((_DWORD *)a3 + 12) = 0;
          if ( v25 && (unsigned int)bAdjusBaseLine(v14, (struct RFONTOBJ *)&v78, &v101) )
            ESTROBJ::ptlBaseLineAdjustSet(a3, &v101);
          v41 = *(_OWORD *)((char *)a3 + 12);
          *((_QWORD *)a3 + 7) = v32;
          *(_OWORD *)((char *)a3 + 188) = v41;
          v42 = *(_QWORD *)v32;
          if ( (*(_DWORD *)(*(_QWORD *)v32 + 72LL) & 2) != 0 )
          {
            PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)&ppo);
            if ( v107 )
            {
              v63 = *((_QWORD *)v18 + 6);
              v64 = (PGLYPHPOS)v108;
              ppgpos = (PGLYPHPOS)v108;
              v87 = 0;
              v80 = 0;
              v65 = 0;
              v66 = 0;
              v79 = ESTROBJ::bTextToPathWorkhorse((STROBJ *)a3, (struct EPATHOBJ *)&ppo);
              if ( v79 )
              {
                if ( (*(_DWORD *)(v63 + 32) & 0x8000) != 0 )
                {
                  v67 = UMPDReleaseRFONTSem(v89, 0LL, &v87, &v80, (void **)&ppgpos);
                  v34 = v87;
                  v66 = v67;
                  v65 = v80;
                  v64 = ppgpos;
                }
                if ( (*(_DWORD *)(*(_QWORD *)v32 + 488LL) & 0x8000) != 0 )
                {
                  if ( ppo.cCurves > 1 )
                    v79 = EPATHOBJ::bSimpleFill(&ppo, a12, v96, v81, pco, v94, v90, 0xD0Du, 2u);
                }
                else
                {
                  v105 = glaSimpleStroke;
                  v79 = EPATHOBJ::bSimpleStroke(&ppo, a12, v96, v81, pco, 0LL, v94, v90, &v105, 0xD0Du);
                }
                v68 = v66 == 0;
                v14 = v89;
                if ( !v68 )
                {
                  UMPDAcquireRFONTSem(v89, 0LL, v34, v65, (int *)v64);
                  if ( v64 )
                  {
                    if ( v64 != (PGLYPHPOS)v108 )
                      Win32FreePool(v64);
                  }
                }
              }
              else
              {
                v14 = v89;
              }
              v18 = v81;
              v17 = v83;
            }
            else
            {
              EngSetLastError(8u);
              v79 = 0;
            }
            PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)&ppo);
          }
          else
          {
            v43 = *(float *)(v42 + 132);
            ppgpos = 0LL;
            if ( v43 == 0.0 && *(float *)(v42 + 136) == 0.0 )
              goto LABEL_31;
            do
            {
              v69 = STROBJ_bEnum((STROBJ *)a3, &pc, &ppgpos);
              if ( pc )
              {
                v70 = 0;
                while ( 1 )
                {
                  pgb = ppgpos[v70].pgdf->pgb;
                  if ( pgb )
                  {
                    v72 = pgb->ptlOrigin.x + ppgpos[v70].ptl.x;
                    v73 = ppgpos[v70].ptl.y + pgb->ptlOrigin.y;
                    if ( v72 < *((_DWORD *)a3 + 3)
                      || pgb->sizlBitmap.cx + v72 > *((_DWORD *)a3 + 5)
                      || v73 < *((_DWORD *)a3 + 4)
                      || v73 + pgb->sizlBitmap.cy > *((_DWORD *)a3 + 6) )
                    {
                      break;
                    }
                  }
                  if ( ++v70 >= pc )
                    goto LABEL_114;
                }
                v34 = 1;
              }
LABEL_114:
              ;
            }
            while ( v69 );
            *((_QWORD *)a3 + 6) = 0LL;
            if ( !v34 )
            {
LABEL_31:
              v45 = SURFACE::pfnTextOut(v18);
              if ( (char *)v45 == (char *)SpTextOut
                || (char *)v45 == (char *)MulTextOut
                || (char *)v45 == (char *)BmpDevTextOut )
              {
                if ( (*(_DWORD *)(*(_QWORD *)v32 + 12LL) & 0x10010000) == 0 )
                  goto LABEL_39;
                v47 = v86;
                SURFACE::pdcoAA(v44, v86);
              }
              else
              {
                v46 = *(_DWORD *)(*(_QWORD *)v32 + 12LL);
                if ( (v46 & 0x10000) == 0 )
                  goto LABEL_39;
                if ( (*(_DWORD *)(*(_QWORD *)v86 + 72LL) & 0x1000000) != 0 && (v46 & 0x10000000) == 0 )
                {
                  v47 = v86;
                }
                else
                {
                  if ( v45 != EngTextOut )
                    SURFACE::pdcoAA(v18, v86);
                  v45 = (BOOL (__stdcall *)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX))SpTextOut;
LABEL_39:
                  v47 = v86;
                }
              }
              RFONTOBJ::PreTextOut(v32, v47);
              v51 = (PGLYPHPOS)v109;
              v80 = 0;
              v52 = 0;
              ppgpos = (PGLYPHPOS)v109;
              v53 = 0;
              if ( v32 != v14 && (*(_DWORD *)(*((_QWORD *)v81 + 6) + 32LL) & 0x8080) == 0x8080 )
              {
                v74 = UMPDReleaseRFONTSem(v14, 0LL, &v93, &v80, (void **)&ppgpos);
                v52 = v80;
                v53 = v74;
                v51 = ppgpos;
              }
              v54 = v102;
              if ( v85 != v82 )
                v54 = 0LL;
              v77 = v90;
              v76 = (POINTL *)v97;
              pbo = (BRUSHOBJ *)v83;
              v55 = ((__int64 (__fastcall *)(unsigned __int64, struct ESTROBJ *, _QWORD, CLIPOBJ *, struct _RECTL *))v45)(
                      ((unsigned __int64)v81 + 24) & -(__int64)(v81 != 0LL),
                      a3,
                      *(_QWORD *)v32,
                      pco,
                      v54);
              v79 = v55 != 0 ? v79 : 0;
              if ( v53 )
              {
                UMPDAcquireRFONTSem(v14, 0LL, v93, v52, (int *)v51);
                if ( v51 )
                {
                  if ( v51 != (PGLYPHPOS)v109 )
                    Win32FreePool(v51);
                }
              }
              RFONTOBJ::PostTextOut(v32, v86);
              v18 = v81;
              SURFACE::pdcoAA(v81, 0LL);
            }
            v17 = 0LL;
            v83 = 0LL;
          }
          v56 = *(_OWORD *)((char *)a3 + 188);
          v78 = 0LL;
          *(_OWORD *)((char *)a3 + 12) = v56;
          RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v78);
          a4 = pco;
          v15 = v103;
          v28 = v82;
          goto LABEL_14;
        }
        if ( v17 )
        {
          v58 = v17;
          if ( v15->left > v17->left )
            v58 = v15;
          a4->rclBounds.left = v58->left;
          right = v17->right;
          if ( v15->right < right )
            right = v15->right;
          a4->rclBounds.right = right;
          top = v17->top;
          if ( v15->top > top )
            top = v15->top;
          a4->rclBounds.top = top;
          bottom = v17->bottom;
          if ( v15->bottom < bottom )
            bottom = v15->bottom;
          a4->rclBounds.bottom = bottom;
        }
        if ( a4->rclBounds.left < a4->rclBounds.right && a4->rclBounds.top < a4->rclBounds.bottom && v17 )
        {
          v62 = v90;
          ++*((_DWORD *)v18 + 23);
          TextOutBitBlt(v18, v14, 0LL, (struct _SURFOBJ *)v20, a4, (struct _XLATEOBJ *)pbo, v17, v76, v77, v97, v62);
        }
        v17 = 0LL;
        v99 = *v15;
        v83 = 0LL;
        v78 = 0LL;
        a4->rclBounds = v99;
      }
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v78);
LABEL_14:
      v26 = *(_QWORD *)v14;
      v25 = v88 + 1;
      v20 = (unsigned __int64)v95;
      v19 = v98;
      v88 = v25;
      v27 = *(_DWORD *)(v26 + 848);
      if ( v25 >= (int)(v27 + 4) )
      {
        v21 = v79;
        break;
      }
    }
  }
  *((_QWORD *)a3 + 7) = v104;
  result = v21;
  *((_QWORD *)a3 + 5) = v19;
  return result;
}
