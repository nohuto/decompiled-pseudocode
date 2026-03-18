/*
 * XREFs of NtGdiEngStretchBltROP @ 0x1C012F4E0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C0096D7C (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C0097294 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C0098090 (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1C0098174 (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x1C00981EC (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1C00984E4 (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C0098510 (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ?bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z @ 0x1C009A7B4 (-bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z.c)
 *     ?bOrder@@YAHPEAU_RECTL@@@Z @ 0x1C009A800 (-bOrder@@YAHPEAU_RECTL@@@Z.c)
 *     ?bCheckDestSurfaceOverlap@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C009A820 (-bCheckDestSurfaceOverlap@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     EngStretchBltROP @ 0x1C009AF00 (EngStretchBltROP.c)
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C009BC6C (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 *     ?bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z @ 0x1C012F2C4 (-bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z.c)
 *     ?pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z @ 0x1C012F4A4 (-pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z.c)
 *     ?CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z @ 0x1C012F920 (-CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?PROBEDISPATBRUSH@@YAHPEAU_BRUSHOBJ@@@Z @ 0x1C02906E0 (-PROBEDISPATBRUSH@@YAHPEAU_BRUSHOBJ@@@Z.c)
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
  COLORADJUSTMENT *pca; // r14
  struct _CLIPOBJ *v20; // r11
  struct _XLATEOBJ *v21; // r9
  int v22; // esi
  BRUSHOBJ *pbo; // rax
  unsigned int v24; // esi
  struct _RECTL *v26; // r9
  RECTL *prclSrc; // [rsp+70h] [rbp-148h] BYREF
  SURFOBJ *psoMask; // [rsp+78h] [rbp-140h] BYREF
  int v29; // [rsp+80h] [rbp-138h]
  SURFOBJ *psoSrc; // [rsp+88h] [rbp-130h] BYREF
  int v31; // [rsp+90h] [rbp-128h]
  struct _BRUSHOBJ *v32; // [rsp+98h] [rbp-120h]
  POINTL *pptlMask; // [rsp+A0h] [rbp-118h] BYREF
  RECTL *prclDest; // [rsp+A8h] [rbp-110h] BYREF
  DWORD v35; // [rsp+B0h] [rbp-108h]
  unsigned int v36; // [rsp+B8h] [rbp-100h] BYREF
  unsigned int v37; // [rsp+BCh] [rbp-FCh] BYREF
  COLORADJUSTMENT *v38; // [rsp+C0h] [rbp-F8h]
  POINTL *pptlHTOrg; // [rsp+C8h] [rbp-F0h] BYREF
  CLIPOBJ *pco; // [rsp+D0h] [rbp-E8h]
  XLATEOBJ *pxlo; // [rsp+D8h] [rbp-E0h]
  SURFOBJ *psoDest; // [rsp+E0h] [rbp-D8h] BYREF
  int v43; // [rsp+E8h] [rbp-D0h]
  __int64 v44; // [rsp+F0h] [rbp-C8h]
  struct _SURFOBJ *v45; // [rsp+F8h] [rbp-C0h]
  XLATEOBJ *v46; // [rsp+100h] [rbp-B8h]
  struct _POINTL v47; // [rsp+108h] [rbp-B0h] BYREF
  struct _POINTL v48; // [rsp+110h] [rbp-A8h] BYREF
  struct _BRUSHOBJ v49; // [rsp+118h] [rbp-A0h] BYREF
  __int128 v50; // [rsp+130h] [rbp-88h] BYREF
  __int64 v51; // [rsp+140h] [rbp-78h]
  struct _RECTL v52; // [rsp+148h] [rbp-70h] BYREF
  struct _RECTL v53; // [rsp+158h] [rbp-60h] BYREF
  struct _RECTL v54; // [rsp+168h] [rbp-50h] BYREF

  v46 = a4;
  v45 = a3;
  pxlo = a4;
  v44 = a5;
  v38 = a6;
  pptlHTOrg = a7;
  prclDest = a8;
  prclSrc = a9;
  pptlMask = a10;
  v32 = a12;
  v35 = rop4;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = (CLIPOBJ *)UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v17 = ThreadCurrentObj;
  pco = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0LL;
  ++ThreadCurrentObj[18].iUniq;
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)&psoDest, a1, (struct UMPDOBJ *)ThreadCurrentObj);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)&psoSrc, a2, (struct UMPDOBJ *)v17);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)&psoMask, v45, (struct UMPDOBJ *)v17);
  if ( !pptlHTOrg && iMode == 4 )
  {
    if ( v29 )
      EngUnlockSurface(psoMask);
    if ( v31 )
      EngUnlockSurface(psoSrc);
    if ( v43 )
      EngUnlockSurface(psoDest);
    if ( v17 )
      --v17[18].iUniq;
    return 0LL;
  }
  v18 = psoDest;
  if ( !psoDest || !psoSrc || !prclDest || !prclSrc )
  {
LABEL_33:
    v24 = 0;
LABEL_24:
    if ( v29 )
      EngUnlockSurface(psoMask);
    if ( v31 )
      EngUnlockSurface(psoSrc);
    if ( v43 )
      EngUnlockSurface(v18);
    if ( v17 )
      --v17[18].iUniq;
    return v24;
  }
  CaptureRECTL(&prclDest, &v52);
  CaptureRECTL(&prclSrc, &v53);
  CapturePOINTL(&pptlMask, &v47);
  CapturePOINTL(&pptlHTOrg, &v48);
  pca = v38;
  if ( v38 )
  {
    if ( (unsigned __int64)v38 >= W32UserProbeAddress )
      pca = (COLORADJUSTMENT *)W32UserProbeAddress;
    v50 = *(_OWORD *)&pca->caSize;
    v51 = *(_QWORD *)&pca->caContrast;
    pca = (COLORADJUSTMENT *)&v50;
    v38 = (COLORADJUSTMENT *)&v50;
  }
  if ( (unsigned int)bCheckDestSurfaceOverlap(v18, prclDest) )
  {
    pco = UMPDOBJ::GetDDIOBJ((UMPDOBJ *)v17, v20, &v18->sizlBitmap);
    v21 = (struct _XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>((__int64)v17, v44);
    pxlo = v21;
    v22 = (((gajRop3[(unsigned __int8)rop4] | gajRop3[BYTE1(rop4)]) & 0xD4) == 0 || bOrder(prclSrc))
       && (unsigned int)bCheckXlate(psoSrc, v21)
       && ((unsigned __int8)rop4 == BYTE1(rop4) || psoMask || (unsigned int)PROBEDISPATBRUSH(v32));
    if ( (unsigned __int8)rop4 != BYTE1(rop4) && (!psoMask || !pptlMask) )
      v22 = 0;
    if ( v22 )
    {
      if ( rop4 == 43724 )
      {
        if ( psoMask )
        {
          v22 = bCheckSurfaceRectSize(psoSrc, prclSrc, 0LL, &v37, &v36);
          if ( v22 )
          {
            v26 = pRect(pptlMask, &v54, v37, v36);
            v22 = psoMask->iBitmapFormat == 1;
            if ( psoMask->iBitmapFormat == 1 )
              v22 = bCheckSurfaceRect(psoMask, v26, 0LL);
          }
        }
      }
    }
    pbo = (BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)v17, (__int64)v32);
    if ( !pbo )
      pbo = CaptureAndFakeBRUSHOBJ(v32, &v49);
    if ( v22 )
    {
      v24 = 1;
      if ( EngStretchBltROP(
             v18,
             psoSrc,
             psoMask,
             pco,
             pxlo,
             pca,
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
  if ( v29 )
    EngUnlockSurface(psoMask);
  if ( v31 )
    EngUnlockSurface(psoSrc);
  if ( v43 )
    EngUnlockSurface(v18);
  if ( v17 )
    --v17[18].iUniq;
  return 1LL;
}
