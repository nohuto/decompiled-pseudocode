/*
 * XREFs of EngStretchBlt @ 0x1C00148E0
 * Callers:
 *     ?psSetupTransparentSrcSurface@@YAPEAVSURFACE@@PEAV1@0PEAU_RECTL@@PEAU_XLATEOBJ@@1AEAVSURFMEM@@KK@Z @ 0x1C0013884 (-psSetupTransparentSrcSurface@@YAPEAVSURFACE@@PEAV1@0PEAU_RECTL@@PEAU_XLATEOBJ@@1AEAVSURFMEM@@KK.c)
 *     NtGdiEngStretchBlt @ 0x1C00B8F70 (NtGdiEngStretchBlt.c)
 *     ?EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z @ 0x1C00BD910 (-EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z.c)
 *     EngStretchBltROP @ 0x1C00FA890 (EngStretchBltROP.c)
 *     ?SpStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C0139470 (-SpStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POIN.c)
 *     ?bStretch@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z @ 0x1C026C5FC (-bStretch@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z.c)
 *     ?PanStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C0271F00 (-PanStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POI.c)
 *     ?RedirStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C02788E0 (-RedirStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_P.c)
 *     ?MulStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C027F6E0 (-MulStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POI.c)
 * Callees:
 *     ?EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C00149D8 (-EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 *     EngCopyBits @ 0x1C002C650 (EngCopyBits.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     ?EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAH@Z @ 0x1C026ADBC (-EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 */

BOOL __stdcall EngStretchBlt(
        SURFOBJ *psoDest,
        SURFOBJ *psoSrc,
        SURFOBJ *psoMask,
        CLIPOBJ *pco,
        XLATEOBJ *pxlo,
        COLORADJUSTMENT *pca,
        POINTL *pptlHTOrg,
        RECTL *prclDest,
        RECTL *prclSrc,
        POINTL *pptlMask,
        ULONG iMode)
{
  RECTL *v12; // rcx
  RECTL *v13; // rax
  POINTL *v14; // rdx
  RECTL v16; // xmm0
  __int64 v17; // r15
  __int64 v18; // rbx
  HSURF Bitmap; // rax
  ULONG v20; // r8d
  SIZEL v21; // rcx
  HSURF v22; // rdi
  HBITMAP v23; // rax
  ULONG v24; // r8d
  SIZEL v25; // rcx
  HSURF v26; // r14
  HSURF v27; // rax
  HSURF v28; // r12
  SURFOBJ *v29; // rdi
  SURFOBJ *v30; // rsi
  SURFOBJ *v31; // rax
  SURFOBJ *v32; // r12
  int v33; // eax
  _BYTE *pvBits; // rdx
  __int64 v35; // r14
  _BYTE *v36; // rax
  int v37; // eax
  BOOL (__stdcall *v38)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  int v39[2]; // [rsp+60h] [rbp-A0h] BYREF
  int v40; // [rsp+68h] [rbp-98h]
  struct _POINTL *v41; // [rsp+70h] [rbp-90h]
  _BYTE *v42; // [rsp+78h] [rbp-88h]
  struct _RECTL *v43; // [rsp+80h] [rbp-80h]
  struct _RECTL *v44; // [rsp+88h] [rbp-78h]
  struct _POINTL *v45; // [rsp+90h] [rbp-70h]
  struct tagCOLORADJUSTMENT *v46; // [rsp+98h] [rbp-68h]
  struct _XLATEOBJ *v47; // [rsp+A0h] [rbp-60h]
  struct _CLIPOBJ *v48; // [rsp+A8h] [rbp-58h]
  struct _SURFOBJ *v49; // [rsp+B0h] [rbp-50h]
  struct _SURFOBJ *v50; // [rsp+B8h] [rbp-48h]
  HSURF v51; // [rsp+C0h] [rbp-40h]
  HSURF hsurf; // [rsp+C8h] [rbp-38h]
  HSURF v53; // [rsp+D0h] [rbp-30h]
  RECTL v54; // [rsp+D8h] [rbp-28h] BYREF
  struct _RECTL v55; // [rsp+E8h] [rbp-18h] BYREF
  struct _RECTL v56; // [rsp+F8h] [rbp-8h] BYREF

  v12 = prclSrc;
  v47 = pxlo;
  v46 = pca;
  v45 = pptlHTOrg;
  v13 = prclDest;
  v50 = psoSrc;
  v14 = pptlMask;
  v43 = prclDest;
  v48 = pco;
  v49 = psoMask;
  v44 = prclSrc;
  v41 = pptlMask;
  if ( dword_1C0334138 )
  {
    v16 = *prclDest;
    v55 = *prclSrc;
    v56 = v16;
    *(_QWORD *)&v54.left = 0LL;
    v17 = SURFOBJ_TO_SURFACE_NOT_NULL(psoDest);
    v54.right = *(_DWORD *)(v17 + 56);
    v54.bottom = *(_DWORD *)(v17 + 60);
    v18 = *(_QWORD *)(v17 + 48);
    Bitmap = (HSURF)EngCreateBitmap(*(SIZEL *)(v17 + 56), 0, *(_DWORD *)(v17 + 96), 0, 0LL);
    v20 = *(_DWORD *)(v17 + 96);
    v21 = *(SIZEL *)(v17 + 56);
    v22 = Bitmap;
    hsurf = Bitmap;
    v23 = EngCreateBitmap(v21, 0, v20, 0, 0LL);
    v24 = *(_DWORD *)(v17 + 96);
    v25 = *(SIZEL *)(v17 + 56);
    v26 = (HSURF)v23;
    v51 = (HSURF)v23;
    v27 = (HSURF)EngCreateBitmap(v25, 0, v24, 0, 0LL);
    v53 = v27;
    v28 = v27;
    if ( !v22 || !v26 || !v27 )
      DbgPrint("hsurf1 == 0 || hsurf2 == 0 || hsurf3 == 0\n");
    v29 = EngLockSurface(v22);
    v30 = EngLockSurface(v26);
    v31 = EngLockSurface(v28);
    v40 = 0;
    v32 = v31;
    if ( v29 )
    {
      if ( v30 )
      {
        if ( v31 )
        {
          EngCopyBits(v31, psoDest, 0LL, xloIdent, &v54, &gptlZero);
          memset(v29->pvBits, 0, v29->cjBits);
          memset(v30->pvBits, 0, v29->cjBits);
          v39[0] = 0;
          LODWORD(v42) = EngStretchBltOld(psoDest, v50, v49, v48, v47, v46, v45, v43, v44, v41, iMode, v39);
          if ( v39[0] )
          {
            v43 = &v56;
            v44 = &v55;
LABEL_12:
            EngCopyBits(v29, psoDest, 0LL, 0LL, &v54, &gptlZero);
            if ( (*(_DWORD *)(v17 + 112) & 0x400) != 0 )
              (*(void (__fastcall **)(SURFOBJ *, SURFOBJ *, _QWORD, XLATEOBJ *const, RECTL *, POINTL *))(v18 + 2856))(
                psoDest,
                v32,
                0LL,
                xloIdent,
                &v54,
                &gptlZero);
            else
              ((void (__fastcall *)(SURFOBJ *, SURFOBJ *, _QWORD, XLATEOBJ *const, RECTL *, POINTL *))EngCopyBits)(
                psoDest,
                v32,
                0LL,
                xloIdent,
                &v54,
                &gptlZero);
            v33 = EngStretchBltNew(psoDest, v50, v49, v48, v47, v46, v45, &v56, &v55, v41, iMode);
            if ( (unsigned int)v42 != v33 )
              DbgPrint("bOld ^ bNew\n");
            EngCopyBits(v30, psoDest, 0LL, xloIdent, &v54, &gptlZero);
            pvBits = v29->pvBits;
            v35 = 0LL;
            v36 = v30->pvBits;
            v42 = pvBits;
            *(_QWORD *)v39 = v36;
            while ( (unsigned int)v35 < v29->cjBits )
            {
              if ( pvBits[v35] != v36[v35] )
              {
                DbgPrint("memcmp failed\n");
                v37 = v40 + 1;
                v40 = v37;
                if ( v37 == 1 )
                {
                  __debugbreak();
                  if ( (*(_DWORD *)(v17 + 112) & 0x400) != 0 )
                    v38 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v18 + 2856);
                  else
                    v38 = EngCopyBits;
                  ((void (__fastcall *)(SURFOBJ *, SURFOBJ *, _QWORD, XLATEOBJ *const, RECTL *, POINTL *))v38)(
                    psoDest,
                    v32,
                    0LL,
                    xloIdent,
                    &v54,
                    &gptlZero);
                  memset(v29->pvBits, 0, v29->cjBits);
                  memset(v30->pvBits, 0, v29->cjBits);
                  v39[0] = 0;
                  LODWORD(v42) = EngStretchBltOld(psoDest, v50, v49, v48, v47, v46, v45, &v56, &v55, v41, iMode, v39);
                  if ( v39[0] )
                    goto LABEL_12;
                  break;
                }
                if ( v37 == 2 )
                {
                  __debugbreak();
                  break;
                }
                pvBits = v42;
              }
              v36 = *(_BYTE **)v39;
              v35 = (unsigned int)(v35 + 1);
            }
            v26 = v51;
          }
        }
      }
      EngUnlockSurface(v29);
    }
    if ( v30 )
      EngUnlockSurface(v30);
    if ( v32 )
      EngUnlockSurface(v32);
    if ( hsurf )
      EngDeleteSurface(hsurf);
    if ( v26 )
      EngDeleteSurface(v26);
    if ( v53 )
      EngDeleteSurface(v53);
    v14 = v41;
    v12 = v44;
    v13 = v43;
  }
  return EngStretchBltNew(psoDest, v50, v49, v48, v47, v46, v45, v13, v12, v14, iMode);
}
