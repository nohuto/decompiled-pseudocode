/*
 * XREFs of EngTransparentBlt @ 0x1C00A8840
 * Callers:
 *     EngBitBlt @ 0x1C00769E0 (EngBitBlt.c)
 *     ?SpTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z @ 0x1C00A4BE0 (-SpTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z.c)
 *     ?PanTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z @ 0x1C0275C90 (-PanTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z.c)
 *     ?RedirTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z @ 0x1C027C990 (-RedirTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z.c)
 *     ?MulTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z @ 0x1C0283D60 (-MulTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z.c)
 *     NtGdiEngTransparentBlt @ 0x1C0292950 (NtGdiEngTransparentBlt.c)
 * Callees:
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C0075F90 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C0076190 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?psSetupTransparentSrcSurface@@YAPEAVSURFACE@@PEAV1@0PEAU_RECTL@@PEAU_XLATEOBJ@@1AEAVSURFMEM@@KK@Z @ 0x1C0085AE4 (-psSetupTransparentSrcSurface@@YAPEAVSURFACE@@PEAV1@0PEAU_RECTL@@PEAU_XLATEOBJ@@1AEAVSURFMEM@@KK.c)
 *     ?psSetupDstSurface@@YAPEAVSURFACE@@PEAV1@PEAU_RECTL@@AEAVSURFMEM@@HH@Z @ 0x1C00ABA84 (-psSetupDstSurface@@YAPEAVSURFACE@@PEAV1@PEAU_RECTL@@AEAVSURFMEM@@HH@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 *     ?GreTransparentBltPS@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3K@Z @ 0x1C0271744 (-GreTransparentBltPS@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3K@Z.c)
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
  unsigned int iBitmapFormat; // r8d
  unsigned int v22; // edx
  unsigned int i; // ebx
  int v24; // r10d
  int v25; // r11d
  int v26; // r9d
  __int64 v27; // rax
  HDEV v28; // rax
  unsigned int v30; // [rsp+60h] [rbp-328h]
  struct SURFACE *v32; // [rsp+68h] [rbp-320h]
  int v34; // [rsp+78h] [rbp-310h]
  __int64 v35; // [rsp+80h] [rbp-308h] BYREF
  char v36; // [rsp+88h] [rbp-300h]
  int v37; // [rsp+8Ch] [rbp-2FCh]
  struct SURFACE *v38; // [rsp+90h] [rbp-2F8h]
  SURFOBJ *v39; // [rsp+98h] [rbp-2F0h]
  CLIPOBJ *v40; // [rsp+A0h] [rbp-2E8h]
  __int64 v41; // [rsp+A8h] [rbp-2E0h] BYREF
  char v42; // [rsp+B0h] [rbp-2D8h]
  int v43; // [rsp+B4h] [rbp-2D4h]
  HDEV hdev; // [rsp+B8h] [rbp-2D0h] BYREF
  HDEV v45; // [rsp+C0h] [rbp-2C8h] BYREF
  struct _RECTL *v46; // [rsp+C8h] [rbp-2C0h]
  char *v47; // [rsp+D0h] [rbp-2B8h]
  struct SURFACE *v48; // [rsp+D8h] [rbp-2B0h]
  CLIPOBJ *v49; // [rsp+E0h] [rbp-2A8h]
  ULONG v50; // [rsp+E8h] [rbp-2A0h]
  __int64 v51; // [rsp+F0h] [rbp-298h]
  int v52; // [rsp+F8h] [rbp-290h]
  HDEV v53; // [rsp+100h] [rbp-288h]
  XLATEOBJ *v54; // [rsp+110h] [rbp-278h]
  __int64 v55; // [rsp+118h] [rbp-270h]
  char *v56; // [rsp+120h] [rbp-268h]
  int v57; // [rsp+128h] [rbp-260h]
  int v58; // [rsp+12Ch] [rbp-25Ch]
  int v59; // [rsp+130h] [rbp-258h]
  int v60; // [rsp+134h] [rbp-254h]
  LONG lDelta; // [rsp+138h] [rbp-250h]
  LONG v62; // [rsp+13Ch] [rbp-24Ch]
  int v63; // [rsp+140h] [rbp-248h]
  int v64; // [rsp+144h] [rbp-244h]
  int v65; // [rsp+148h] [rbp-240h]
  int v66; // [rsp+14Ch] [rbp-23Ch]
  int v67; // [rsp+150h] [rbp-238h]
  struct SURFACE *v68; // [rsp+158h] [rbp-230h]
  unsigned int v69; // [rsp+19Ch] [rbp-1ECh]
  unsigned int v70; // [rsp+1A0h] [rbp-1E8h]
  ULONG v71; // [rsp+1A4h] [rbp-1E4h]
  struct _RECTL v72; // [rsp+1B0h] [rbp-1D8h] BYREF
  RECTL v73; // [rsp+1C8h] [rbp-1C0h] BYREF
  struct _RECTL v74; // [rsp+1D8h] [rbp-1B0h]
  unsigned int v75; // [rsp+1F0h] [rbp-198h] BYREF
  _OWORD v76[20]; // [rsp+1F4h] [rbp-194h]

  v8 = pco;
  v10 = psoDst;
  v39 = psoDst;
  v40 = pco;
  v30 = iTransColor;
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
    v46 = &v72;
    hdev = v10->hdev;
    PDEVOBJ::vSync((PDEVOBJ *)&hdev, v10, 0LL, 0);
    v45 = psoSrc->hdev;
    PDEVOBJ::vSync((PDEVOBJ *)&v45, psoSrc, 0LL, 0);
    v49 = v8;
    v41 = 0LL;
    v42 = 0;
    v43 = 0;
    v14 = psSetupTransparentSrcSurface(v13, v12, &v72, 0LL, &v73, (struct SURFMEM *)&v41, 1u, iTransColor);
    v32 = v14;
    if ( v14 )
    {
      if ( v72.left != v72.right )
      {
        v15 = (struct _SURFOBJ *)((char *)v14 + 24);
        v47 = (char *)v14 + 24;
        v35 = 0LL;
        v36 = 0;
        v37 = 0;
        v48 = v12;
        v74 = v72;
        v16 = v10->hdev;
        v53 = v16;
        if ( *((_WORD *)v12 + 50) && (*((_DWORD *)v16 + 8) & 0x80u) != 0 )
        {
          v11 = GreTransparentBltPS(v10, v15, v8, pxlo, &v72, &v73, iTransColor);
          goto LABEL_53;
        }
        v17 = psSetupDstSurface(v12, &v72, (struct SURFMEM *)&v35, 0, 1);
        v18 = v17;
        v38 = v17;
        if ( !v17 )
        {
LABEL_53:
          SURFMEM::~SURFMEM((SURFMEM *)&v35);
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
        v68 = v32;
        if ( v8 && v8->iDComplexity )
        {
          if ( v8->iDComplexity != 1 )
          {
            if ( v8->iDComplexity == 3 )
            {
              v30 = 1;
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
        v30 = 0;
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
        if ( v30 )
          goto LABEL_51;
        while ( v22 <= 6 && iBitmapFormat <= 6 || !v75 )
        {
          for ( i = 0; i < v75; ++i )
          {
            if ( SLODWORD(v76[i]) < v46->left )
              LODWORD(v76[i]) = v72.left;
            if ( SDWORD2(v76[i]) > v72.right )
              DWORD2(v76[i]) = v72.right;
            if ( SDWORD1(v76[i]) < v72.top )
              DWORD1(v76[i]) = v72.top;
            if ( SHIDWORD(v76[i]) > v72.bottom )
              HIDWORD(v76[i]) = v72.bottom;
            v24 = DWORD1(v76[i]);
            v34 = HIDWORD(v76[i]);
            if ( v24 < v34 )
            {
              v25 = v76[i];
              v26 = DWORD2(v76[i]);
              if ( v25 < v26 )
              {
                v58 = v26 - v25;
                v59 = v34 - v24;
                v63 = v25 + v73.left - v72.left;
                v64 = v26 + v73.left - v72.left;
                v65 = v25;
                v66 = v24;
                v55 = *((_QWORD *)v47 + 7) + (v24 + v73.top - v72.top) * *((_DWORD *)v47 + 16);
                v56 = (char *)v10->pvScan0 + v24 * v10->lDelta;
                v18 = v38;
                _guard_dispatch_icall_fptr();
              }
            }
          }
          if ( !v30 )
          {
            if ( v12 != v18 )
              _guard_dispatch_icall_fptr();
            SURFMEM::~SURFMEM((SURFMEM *)&v35);
            SURFMEM::~SURFMEM((SURFMEM *)&v41);
            LODWORD(v27) = 1;
            return v27;
          }
LABEL_51:
          v30 = XCLIPOBJ::bEnum((XCLIPOBJ *)v8, 0x144u, (char *)&v75, 0LL);
          iBitmapFormat = v70;
          v22 = v69;
        }
        goto LABEL_53;
      }
      v11 = 1;
    }
LABEL_54:
    SURFMEM::~SURFMEM((SURFMEM *)&v41);
    LODWORD(v27) = v11;
    return v27;
  }
  v28 = psoDst->hdev;
  if ( !v28 )
    v28 = psoSrc->hdev;
  v50 = iTransColor;
  v52 = 0;
  v51 = 0LL;
  v27 = *((_QWORD *)v28 + 356);
  if ( v27 )
    LODWORD(v27) = _guard_dispatch_icall_fptr();
  return v27;
}
