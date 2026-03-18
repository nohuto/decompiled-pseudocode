/*
 * XREFs of NtGdiEngStretchBlt @ 0x1C00B8F70
 * Callers:
 *     <none>
 * Callees:
 *     EngStretchBlt @ 0x1C00148E0 (EngStretchBlt.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00B8E18 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C00B9358 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C00BA400 (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x1C00BA55C (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1C00BA5C0 (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C00BA5EC (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ?bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z @ 0x1C00BA77C (-bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z.c)
 *     ?bOrder@@YAHPEAU_RECTL@@@Z @ 0x1C00BA7C8 (-bOrder@@YAHPEAU_RECTL@@@Z.c)
 *     ?bCheckDestSurfaceOverlap@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C00BA7E8 (-bCheckDestSurfaceOverlap@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C00BB204 (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 *     ?bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z @ 0x1C00F3CA0 (-bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z.c)
 *     ?pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z @ 0x1C0132338 (-pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiEngStretchBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        __int64 a5,
        COLORADJUSTMENT *a6,
        POINTL *a7,
        RECTL *a8,
        RECTL *a9,
        POINTL *a10,
        ULONG iMode)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v16; // rdi
  SURFOBJ *v17; // r15
  __int128 *v18; // r14
  XLATEOBJ *pxlo; // r13
  struct _RECTL *v20; // r10
  unsigned int v21; // esi
  SURFOBJ *v22; // r13
  struct _RECTL *v24; // rax
  ULONG iBitmapFormat; // edx
  int pca; // [rsp+28h] [rbp-140h]
  XLATEOBJ *v27; // [rsp+60h] [rbp-108h]
  SURFOBJ *psoSrc; // [rsp+68h] [rbp-100h] BYREF
  int v29; // [rsp+70h] [rbp-F8h]
  RECTL *prclSrc; // [rsp+78h] [rbp-F0h] BYREF
  RECTL *prclDest; // [rsp+80h] [rbp-E8h] BYREF
  SURFOBJ *psoMask; // [rsp+88h] [rbp-E0h] BYREF
  int v33; // [rsp+90h] [rbp-D8h]
  unsigned int v34; // [rsp+98h] [rbp-D0h] BYREF
  unsigned int v35; // [rsp+9Ch] [rbp-CCh] BYREF
  COLORADJUSTMENT *v36; // [rsp+A0h] [rbp-C8h]
  POINTL *pptlMask; // [rsp+A8h] [rbp-C0h] BYREF
  POINTL *pptlHTOrg; // [rsp+B0h] [rbp-B8h] BYREF
  CLIPOBJ *pco; // [rsp+B8h] [rbp-B0h]
  SURFOBJ *psoDest; // [rsp+C0h] [rbp-A8h] BYREF
  int v41; // [rsp+C8h] [rbp-A0h]
  struct _SURFOBJ *v42; // [rsp+D0h] [rbp-98h]
  struct UMPDOBJ *v43; // [rsp+D8h] [rbp-90h]
  struct _POINTL v44; // [rsp+E0h] [rbp-88h] BYREF
  struct _POINTL v45; // [rsp+E8h] [rbp-80h] BYREF
  __int128 v46; // [rsp+F0h] [rbp-78h] BYREF
  __int64 v47; // [rsp+100h] [rbp-68h]
  struct _RECTL v48; // [rsp+108h] [rbp-60h] BYREF
  struct _RECTL v49; // [rsp+118h] [rbp-50h] BYREF
  struct _RECTL v50; // [rsp+128h] [rbp-40h] BYREF

  v42 = a3;
  pco = a4;
  v36 = a6;
  pptlHTOrg = a7;
  prclDest = a8;
  prclSrc = a9;
  pptlMask = a10;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread(
                                             (__int64)KeGetCurrentThread(),
                                             (__int64)a2,
                                             (__int64)a3,
                                             (__int64)a4);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v16 = ThreadCurrentObj;
  v43 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0LL;
  ++*((_DWORD *)ThreadCurrentObj + 108);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)&psoDest, a1, ThreadCurrentObj);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)&psoSrc, a2, v16);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)&psoMask, v42, v16);
  if ( !pptlHTOrg && iMode == 4 )
  {
    if ( v33 )
      EngUnlockSurface(psoMask);
    if ( v29 )
      EngUnlockSurface(psoSrc);
    if ( v41 )
      EngUnlockSurface(psoDest);
    --*((_DWORD *)v16 + 108);
    return 0LL;
  }
  v17 = psoDest;
  if ( !psoDest || !psoSrc || !prclDest || !prclSrc )
  {
    v21 = 0;
LABEL_18:
    if ( v33 )
      EngUnlockSurface(psoMask);
    if ( v29 )
      EngUnlockSurface(psoSrc);
    if ( v41 )
      EngUnlockSurface(v17);
    if ( v16 )
      --*((_DWORD *)v16 + 108);
    return v21;
  }
  CaptureRECTL(&prclDest, &v48);
  CapturePOINTL(&pptlMask, &v44);
  CaptureRECTL(&prclSrc, &v49);
  v18 = (__int128 *)v36;
  if ( v36 )
  {
    if ( (unsigned __int64)v36 >= MmUserProbeAddress )
      v18 = (__int128 *)MmUserProbeAddress;
    v46 = *v18;
    v47 = *((_QWORD *)v18 + 2);
    v18 = &v46;
    v36 = (COLORADJUSTMENT *)&v46;
  }
  CapturePOINTL(&pptlHTOrg, &v45);
  if ( (unsigned int)bCheckDestSurfaceOverlap(v17, prclDest) )
  {
    pco = UMPDOBJ::GetDDIOBJ(v16, a4, &v17->sizlBitmap);
    pxlo = (XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>(v16, a5);
    v27 = pxlo;
    if ( (unsigned int)bOrder(prclSrc) && (unsigned int)bCheckXlate(psoSrc, pxlo) )
    {
      v21 = 1;
      v22 = psoMask;
      if ( psoMask )
      {
        v21 = bCheckSurfaceRectSize(psoSrc, v20, 0LL, &v35, &v34, pca);
        if ( v21 )
        {
          v24 = pRect(pptlMask, &v50, v35, v34);
          iBitmapFormat = v22->iBitmapFormat;
          v21 = iBitmapFormat == 1;
          if ( iBitmapFormat == 1 )
            v21 = bCheckSurfaceRect(v22, v24, 0LL);
        }
      }
      pxlo = v27;
    }
    else
    {
      v21 = 0;
    }
    if ( v21 )
      v21 = EngStretchBlt(
              v17,
              psoSrc,
              psoMask,
              pco,
              pxlo,
              (COLORADJUSTMENT *)v18,
              pptlHTOrg,
              prclDest,
              prclSrc,
              pptlMask,
              iMode);
    goto LABEL_18;
  }
  if ( v33 )
    EngUnlockSurface(psoMask);
  if ( v29 )
    EngUnlockSurface(psoSrc);
  if ( v41 )
    EngUnlockSurface(v17);
  if ( v16 )
    --*((_DWORD *)v16 + 108);
  return 1LL;
}
