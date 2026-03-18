/*
 * XREFs of EngTransparentBlt @ 0x1C00ED7C0
 * Callers:
 *     EngBitBlt @ 0x1C002DC60 (EngBitBlt.c)
 *     ?SpTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z @ 0x1C00EB790 (-SpTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z.c)
 *     ?PanTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z @ 0x1C0272660 (-PanTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z.c)
 *     ?RedirTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z @ 0x1C0279380 (-RedirTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z.c)
 *     ?MulTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z @ 0x1C02808E0 (-MulTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z.c)
 *     NtGdiEngTransparentBlt @ 0x1C028F060 (NtGdiEngTransparentBlt.c)
 * Callees:
 *     ?psSetupTransparentSrcSurface@@YAPEAVSURFACE@@PEAV1@0PEAU_RECTL@@PEAU_XLATEOBJ@@1AEAVSURFMEM@@KK@Z @ 0x1C0013884 (-psSetupTransparentSrcSurface@@YAPEAVSURFACE@@PEAV1@0PEAU_RECTL@@PEAU_XLATEOBJ@@1AEAVSURFMEM@@KK.c)
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C002D16C (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C002D380 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?psSetupDstSurface@@YAPEAVSURFACE@@PEAV1@PEAU_RECTL@@AEAVSURFMEM@@HH@Z @ 0x1C00B7284 (-psSetupDstSurface@@YAPEAVSURFACE@@PEAV1@PEAU_RECTL@@AEAVSURFMEM@@HH@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 *     ?GreTransparentBltPS@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3K@Z @ 0x1C026DE48 (-GreTransparentBltPS@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3K@Z.c)
 */

BOOL __stdcall EngTransparentBlt(
        SURFOBJ *psoDst,
        SURFOBJ *psoSrc,
        CLIPOBJ *pco,
        XLATEOBJ *pxlo,
        RECTL *prclDst,
        RECTL *prclSrc,
        ULONG iTransColor,
        ULONG ulReserved)
{
  CLIPOBJ *v8; // r15
  SURFOBJ *v10; // rsi
  int v11; // edi
  struct SURFACE *v12; // r13
  struct SURFACE *v13; // rbx
  struct SURFACE *v14; // rcx
  struct _SURFOBJ *v15; // rbx
  HDEV v16; // rax
  struct SURFACE *v17; // rax
  struct SURFACE *v18; // r12
  struct _RECTL rclBounds; // xmm0
  XLATEOBJ *v20; // rcx
  unsigned int iBitmapFormat; // r10d
  unsigned int v22; // r9d
  unsigned int i; // ebx
  LONG left; // r8d
  int v25; // r11d
  int v26; // ecx
  int v27; // eax
  __int64 v28; // rax
  HDEV v29; // rax
  unsigned int v31; // [rsp+60h] [rbp-318h]
  struct SURFACE *v33; // [rsp+68h] [rbp-310h]
  int v35; // [rsp+80h] [rbp-2F8h]
  __int64 v36; // [rsp+88h] [rbp-2F0h] BYREF
  char v37; // [rsp+90h] [rbp-2E8h]
  int v38; // [rsp+94h] [rbp-2E4h]
  SURFOBJ *v39; // [rsp+98h] [rbp-2E0h]
  CLIPOBJ *v40; // [rsp+A0h] [rbp-2D8h]
  __int64 v41; // [rsp+A8h] [rbp-2D0h] BYREF
  char v42; // [rsp+B0h] [rbp-2C8h]
  int v43; // [rsp+B4h] [rbp-2C4h]
  HDEV hdev; // [rsp+B8h] [rbp-2C0h] BYREF
  HDEV v45; // [rsp+C0h] [rbp-2B8h] BYREF
  char *v46; // [rsp+C8h] [rbp-2B0h]
  struct SURFACE *v47; // [rsp+D0h] [rbp-2A8h]
  struct SURFACE *v48; // [rsp+D8h] [rbp-2A0h]
  CLIPOBJ *v49; // [rsp+E0h] [rbp-298h]
  ULONG v50; // [rsp+E8h] [rbp-290h]
  __int64 v51; // [rsp+F0h] [rbp-288h]
  int v52; // [rsp+F8h] [rbp-280h]
  HDEV v53; // [rsp+100h] [rbp-278h]
  XLATEOBJ *v54; // [rsp+110h] [rbp-268h]
  __int64 v55; // [rsp+118h] [rbp-260h]
  char *v56; // [rsp+120h] [rbp-258h]
  int v57; // [rsp+128h] [rbp-250h]
  int v58; // [rsp+12Ch] [rbp-24Ch]
  int v59; // [rsp+130h] [rbp-248h]
  int v60; // [rsp+134h] [rbp-244h]
  LONG lDelta; // [rsp+138h] [rbp-240h]
  LONG v62; // [rsp+13Ch] [rbp-23Ch]
  int v63; // [rsp+140h] [rbp-238h]
  int v64; // [rsp+144h] [rbp-234h]
  int v65; // [rsp+148h] [rbp-230h]
  int v66; // [rsp+14Ch] [rbp-22Ch]
  int v67; // [rsp+150h] [rbp-228h]
  struct SURFACE *v68; // [rsp+158h] [rbp-220h]
  unsigned int v69; // [rsp+19Ch] [rbp-1DCh]
  unsigned int v70; // [rsp+1A0h] [rbp-1D8h]
  ULONG v71; // [rsp+1A4h] [rbp-1D4h]
  struct _RECTL v72; // [rsp+1B0h] [rbp-1C8h] BYREF
  RECTL v73; // [rsp+1C0h] [rbp-1B8h] BYREF
  struct _RECTL v74; // [rsp+1D0h] [rbp-1A8h]
  unsigned int v75; // [rsp+1E0h] [rbp-198h] BYREF
  _OWORD v76[20]; // [rsp+1E4h] [rbp-194h]

  v8 = pco;
  v10 = psoDst;
  v39 = psoDst;
  v40 = pco;
  v31 = iTransColor;
  v11 = 0;
  if ( !psoDst->iType && !psoSrc->iType
    || ulReserved
    || prclDst->right - prclDst->left != prclSrc->right - prclSrc->left
    || prclDst->bottom - prclDst->top != prclSrc->bottom - prclSrc->top )
  {
    v12 = (struct SURFACE *)SURFOBJ_TO_SURFACE(psoDst);
    v13 = (struct SURFACE *)SURFOBJ_TO_SURFACE(psoSrc);
    v72 = *prclDst;
    v73 = *prclSrc;
    hdev = v10->hdev;
    PDEVOBJ::vSync((PDEVOBJ *)&hdev, v10, 0LL, 0);
    v45 = psoSrc->hdev;
    PDEVOBJ::vSync((PDEVOBJ *)&v45, psoSrc, 0LL, 0);
    v49 = v8;
    v41 = 0LL;
    v42 = 0;
    v43 = 0;
    v14 = psSetupTransparentSrcSurface(v13, v12, &v72, 0LL, &v73, (struct SURFMEM *)&v41, 1u, iTransColor);
    v33 = v14;
    if ( v14 )
    {
      if ( v72.left != v72.right )
      {
        v15 = (struct _SURFOBJ *)((char *)v14 + 24);
        v46 = (char *)v14 + 24;
        v36 = 0LL;
        v37 = 0;
        v38 = 0;
        v48 = v12;
        v74 = v72;
        v16 = v10->hdev;
        v53 = v16;
        if ( *((_WORD *)v12 + 50) && (*((_DWORD *)v16 + 8) & 0x80u) != 0 )
        {
          v11 = GreTransparentBltPS(v10, v15, v8, pxlo, &v72, &v73, iTransColor);
          goto LABEL_53;
        }
        v17 = psSetupDstSurface(v12, &v72, (struct SURFMEM *)&v36, 0, 1);
        v18 = v17;
        v47 = v17;
        if ( !v17 )
        {
LABEL_53:
          SURFMEM::~SURFMEM((SURFMEM *)&v36);
          goto LABEL_54;
        }
        if ( v17 != v12 )
        {
          v10 = (SURFOBJ *)((char *)v17 + 24);
          v39 = (SURFOBJ *)((char *)v17 + 24);
          v8 = 0LL;
          v40 = 0LL;
        }
        v67 = 0;
        v71 = iTransColor;
        lDelta = v15->lDelta;
        v62 = v10->lDelta;
        v68 = v33;
        if ( v8 && v8->iDComplexity )
        {
          if ( v8->iDComplexity != 1 )
          {
            if ( v8->iDComplexity == 3 )
            {
              v31 = 1;
              XCLIPOBJ::cEnumStart((XCLIPOBJ *)v8, 0, 0, 4u, 0x14u);
            }
            goto LABEL_13;
          }
          rclBounds = v8->rclBounds;
        }
        else
        {
          rclBounds = v72;
        }
        v31 = 0;
        v75 = 1;
        v76[0] = rclBounds;
LABEL_13:
        v20 = pxlo;
        if ( !pxlo )
          v20 = xloIdent;
        v54 = v20;
        v57 = 1;
        v60 = 1;
        iBitmapFormat = v10->iBitmapFormat;
        v70 = iBitmapFormat;
        v22 = v15->iBitmapFormat;
        v69 = v22;
        if ( v31 )
          goto LABEL_51;
        while ( v22 <= 6 && iBitmapFormat <= 6 || !v75 )
        {
          for ( i = 0; i < v75; ++i )
          {
            left = v72.left;
            if ( SLODWORD(v76[i]) < v72.left )
              LODWORD(v76[i]) = v72.left;
            if ( SDWORD2(v76[i]) > v72.right )
              DWORD2(v76[i]) = v72.right;
            if ( SDWORD1(v76[i]) < v72.top )
              DWORD1(v76[i]) = v72.top;
            if ( SHIDWORD(v76[i]) > v72.bottom )
              HIDWORD(v76[i]) = v72.bottom;
            v25 = DWORD1(v76[i]);
            v35 = HIDWORD(v76[i]);
            if ( v25 < v35 )
            {
              v26 = v76[i];
              v27 = DWORD2(v76[i]);
              if ( v26 < v27 )
              {
                v58 = v27 - v26;
                v59 = v35 - v25;
                v63 = v73.left - left + v26;
                v64 = v73.left - left + v27;
                v65 = v26;
                v66 = v25;
                v55 = *((_QWORD *)v46 + 7) + (v25 + v73.top - v72.top) * *((_DWORD *)v46 + 16);
                v56 = (char *)v10->pvScan0 + v25 * v10->lDelta;
                _guard_dispatch_icall_fptr();
              }
            }
          }
          if ( !v31 )
          {
            if ( v12 != v18 )
              _guard_dispatch_icall_fptr();
            SURFMEM::~SURFMEM((SURFMEM *)&v36);
            SURFMEM::~SURFMEM((SURFMEM *)&v41);
            LODWORD(v28) = 1;
            return v28;
          }
LABEL_51:
          v31 = XCLIPOBJ::bEnum((XCLIPOBJ *)v8, 0x144u, (char *)&v75, 0LL);
          iBitmapFormat = v70;
          v22 = v69;
        }
        goto LABEL_53;
      }
      v11 = 1;
    }
LABEL_54:
    SURFMEM::~SURFMEM((SURFMEM *)&v41);
    LODWORD(v28) = v11;
    return v28;
  }
  v29 = psoDst->hdev;
  if ( !v29 )
    v29 = psoSrc->hdev;
  v50 = iTransColor;
  v52 = 0;
  v51 = 0LL;
  v28 = *((_QWORD *)v29 + 356);
  if ( v28 )
    LODWORD(v28) = _guard_dispatch_icall_fptr();
  return v28;
}
