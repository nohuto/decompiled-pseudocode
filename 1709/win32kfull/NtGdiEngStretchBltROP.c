/*
 * XREFs of NtGdiEngStretchBltROP @ 0x1C0132370
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00B8E18 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C00B9358 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C00BA400 (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1C00BA4E4 (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x1C00BA55C (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1C00BA5C0 (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C00BA5EC (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ?bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z @ 0x1C00BA77C (-bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z.c)
 *     ?bOrder@@YAHPEAU_RECTL@@@Z @ 0x1C00BA7C8 (-bOrder@@YAHPEAU_RECTL@@@Z.c)
 *     ?bCheckDestSurfaceOverlap@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C00BA7E8 (-bCheckDestSurfaceOverlap@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C00BB204 (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 *     ?bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z @ 0x1C00F3CA0 (-bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z.c)
 *     EngStretchBltROP @ 0x1C00FA890 (EngStretchBltROP.c)
 *     ?pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z @ 0x1C0132338 (-pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z.c)
 *     ?CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z @ 0x1C01327B0 (-CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ?PROBEDISPATBRUSH@@YAHPEAU_BRUSHOBJ@@@Z @ 0x1C028CDCC (-PROBEDISPATBRUSH@@YAHPEAU_BRUSHOBJ@@@Z.c)
 */

__int64 __fastcall NtGdiEngStretchBltROP(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        XLATEOBJ *a4,
        __int64 a5,
        COLORADJUSTMENT *a6,
        POINTL *a7,
        RECTL *a8,
        RECTL *a9,
        POINTL *a10,
        ULONG iMode,
        struct _BRUSHOBJ *a12,
        DWORD rop4)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  CLIPOBJ *ThreadCurrentObj; // rax
  CLIPOBJ *v17; // rdi
  SURFOBJ *v18; // r15
  __int128 *pca; // r14
  struct _CLIPOBJ *v20; // r11
  struct _XLATEOBJ *v21; // r9
  int v22; // esi
  BRUSHOBJ *pbo; // rax
  unsigned int v24; // esi
  struct _RECTL *v26; // r9
  ULONG iBitmapFormat; // edx
  RECTL *prclSrc; // [rsp+70h] [rbp-148h] BYREF
  SURFOBJ *psoMask; // [rsp+78h] [rbp-140h] BYREF
  int v30; // [rsp+80h] [rbp-138h]
  SURFOBJ *psoSrc; // [rsp+88h] [rbp-130h] BYREF
  int v32; // [rsp+90h] [rbp-128h]
  struct _BRUSHOBJ *v33; // [rsp+98h] [rbp-120h]
  POINTL *pptlMask; // [rsp+A0h] [rbp-118h] BYREF
  RECTL *prclDest; // [rsp+A8h] [rbp-110h] BYREF
  DWORD v36; // [rsp+B0h] [rbp-108h]
  unsigned int v37; // [rsp+B8h] [rbp-100h] BYREF
  unsigned int v38; // [rsp+BCh] [rbp-FCh] BYREF
  COLORADJUSTMENT *v39; // [rsp+C0h] [rbp-F8h]
  POINTL *pptlHTOrg; // [rsp+C8h] [rbp-F0h] BYREF
  CLIPOBJ *pco; // [rsp+D0h] [rbp-E8h]
  XLATEOBJ *pxlo; // [rsp+D8h] [rbp-E0h]
  SURFOBJ *psoDest; // [rsp+E0h] [rbp-D8h] BYREF
  int v44; // [rsp+E8h] [rbp-D0h]
  __int64 v45; // [rsp+F0h] [rbp-C8h]
  struct _SURFOBJ *v46; // [rsp+F8h] [rbp-C0h]
  XLATEOBJ *v47; // [rsp+100h] [rbp-B8h]
  struct _POINTL v48; // [rsp+108h] [rbp-B0h] BYREF
  struct _POINTL v49; // [rsp+110h] [rbp-A8h] BYREF
  struct _BRUSHOBJ v50; // [rsp+118h] [rbp-A0h] BYREF
  __int128 v51; // [rsp+130h] [rbp-88h] BYREF
  __int64 v52; // [rsp+140h] [rbp-78h]
  struct _RECTL v53; // [rsp+148h] [rbp-70h] BYREF
  struct _RECTL v54; // [rsp+158h] [rbp-60h] BYREF
  struct _RECTL v55; // [rsp+168h] [rbp-50h] BYREF

  v47 = a4;
  v46 = a3;
  pxlo = a4;
  v45 = a5;
  v39 = a6;
  pptlHTOrg = a7;
  prclDest = a8;
  prclSrc = a9;
  pptlMask = a10;
  v33 = a12;
  v36 = rop4;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread(
                                             (__int64)KeGetCurrentThread(),
                                             (__int64)a2,
                                             (__int64)a3,
                                             (__int64)a4);
  ThreadCurrentObj = (CLIPOBJ *)UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v17 = ThreadCurrentObj;
  pco = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0LL;
  ++ThreadCurrentObj[18].iUniq;
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)&psoDest, a1, (struct UMPDOBJ *)ThreadCurrentObj);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)&psoSrc, a2, (struct UMPDOBJ *)v17);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)&psoMask, v46, (struct UMPDOBJ *)v17);
  if ( !pptlHTOrg && iMode == 4 )
  {
    if ( v30 )
      EngUnlockSurface(psoMask);
    if ( v32 )
      EngUnlockSurface(psoSrc);
    if ( v44 )
      EngUnlockSurface(psoDest);
    --v17[18].iUniq;
    return 0LL;
  }
  v18 = psoDest;
  if ( !psoDest || !psoSrc || !prclDest || !prclSrc )
  {
LABEL_33:
    v24 = 0;
LABEL_24:
    if ( v30 )
      EngUnlockSurface(psoMask);
    if ( v32 )
      EngUnlockSurface(psoSrc);
    if ( v44 )
      EngUnlockSurface(v18);
    if ( v17 )
      --v17[18].iUniq;
    return v24;
  }
  CaptureRECTL(&prclDest, &v53);
  CaptureRECTL(&prclSrc, &v54);
  CapturePOINTL(&pptlMask, &v48);
  CapturePOINTL(&pptlHTOrg, &v49);
  pca = (__int128 *)v39;
  if ( v39 )
  {
    if ( (unsigned __int64)v39 >= MmUserProbeAddress )
      pca = (__int128 *)MmUserProbeAddress;
    v51 = *pca;
    v52 = *((_QWORD *)pca + 2);
    pca = &v51;
    v39 = (COLORADJUSTMENT *)&v51;
  }
  if ( (unsigned int)bCheckDestSurfaceOverlap(v18, prclDest) )
  {
    pco = UMPDOBJ::GetDDIOBJ((UMPDOBJ *)v17, v20, &v18->sizlBitmap);
    v21 = (struct _XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>((__int64)v17, v45);
    pxlo = v21;
    v22 = (((gajRop3[(unsigned __int8)rop4] | gajRop3[BYTE1(rop4)]) & 0xD4) == 0 || bOrder(prclSrc))
       && (unsigned int)bCheckXlate(psoSrc, v21)
       && ((unsigned __int8)rop4 == BYTE1(rop4) || psoMask || (unsigned int)PROBEDISPATBRUSH(v33));
    if ( (unsigned __int8)rop4 != BYTE1(rop4) && (!psoMask || !pptlMask) )
      v22 = 0;
    if ( v22 )
    {
      if ( rop4 == 43724 )
      {
        if ( psoMask )
        {
          v22 = bCheckSurfaceRectSize(psoSrc, prclSrc, 0LL, &v38, &v37);
          if ( v22 )
          {
            v26 = pRect(pptlMask, &v55, v38, v37);
            iBitmapFormat = psoMask->iBitmapFormat;
            v22 = iBitmapFormat == 1;
            if ( iBitmapFormat == 1 )
              v22 = bCheckSurfaceRect(psoMask, v26, 0LL);
          }
        }
      }
    }
    pbo = (BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)v17, (__int64)v33);
    if ( !pbo )
      pbo = CaptureAndFakeBRUSHOBJ(v33, &v50);
    if ( v22 )
    {
      v24 = 1;
      if ( EngStretchBltROP(
             v18,
             psoSrc,
             psoMask,
             pco,
             pxlo,
             (COLORADJUSTMENT *)pca,
             pptlHTOrg,
             prclDest,
             prclSrc,
             pptlMask,
             iMode,
             pbo,
             rop4) )
      {
        goto LABEL_24;
      }
    }
    goto LABEL_33;
  }
  if ( v30 )
    EngUnlockSurface(psoMask);
  if ( v32 )
    EngUnlockSurface(psoSrc);
  if ( v44 )
    EngUnlockSurface(v18);
  if ( v17 )
    --v17[18].iUniq;
  return 1LL;
}
