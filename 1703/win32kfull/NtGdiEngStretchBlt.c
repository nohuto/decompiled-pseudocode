/*
 * XREFs of NtGdiEngStretchBlt @ 0x1C0096EB0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C0096D7C (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C0097294 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C0098090 (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x1C00981EC (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1C00984E4 (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C0098510 (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     EngStretchBlt @ 0x1C00986A0 (EngStretchBlt.c)
 *     ?bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z @ 0x1C009A7B4 (-bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z.c)
 *     ?bOrder@@YAHPEAU_RECTL@@@Z @ 0x1C009A800 (-bOrder@@YAHPEAU_RECTL@@@Z.c)
 *     ?bCheckDestSurfaceOverlap@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C009A820 (-bCheckDestSurfaceOverlap@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C009BC6C (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 *     ?bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z @ 0x1C012F2C4 (-bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z.c)
 *     ?pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z @ 0x1C012F4A4 (-pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
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
  __int64 result; // rax
  SURFOBJ *v18; // r15
  COLORADJUSTMENT *v19; // r14
  XLATEOBJ *pxlo; // r13
  struct _RECTL *v21; // r10
  unsigned int v22; // esi
  SURFOBJ *v23; // r13
  struct _RECTL *v24; // rax
  int pca; // [rsp+28h] [rbp-140h]
  XLATEOBJ *v26; // [rsp+60h] [rbp-108h]
  SURFOBJ *psoSrc; // [rsp+68h] [rbp-100h] BYREF
  int v28; // [rsp+70h] [rbp-F8h]
  RECTL *prclSrc; // [rsp+78h] [rbp-F0h] BYREF
  RECTL *prclDest; // [rsp+80h] [rbp-E8h] BYREF
  SURFOBJ *psoMask; // [rsp+88h] [rbp-E0h] BYREF
  int v32; // [rsp+90h] [rbp-D8h]
  unsigned int v33; // [rsp+98h] [rbp-D0h] BYREF
  unsigned int v34; // [rsp+9Ch] [rbp-CCh] BYREF
  COLORADJUSTMENT *v35; // [rsp+A0h] [rbp-C8h]
  POINTL *pptlMask; // [rsp+A8h] [rbp-C0h] BYREF
  POINTL *pptlHTOrg; // [rsp+B0h] [rbp-B8h] BYREF
  CLIPOBJ *pco; // [rsp+B8h] [rbp-B0h]
  SURFOBJ *psoDest; // [rsp+C0h] [rbp-A8h] BYREF
  int v40; // [rsp+C8h] [rbp-A0h]
  struct _SURFOBJ *v41; // [rsp+D0h] [rbp-98h]
  struct UMPDOBJ *v42; // [rsp+D8h] [rbp-90h]
  struct _POINTL v43; // [rsp+E0h] [rbp-88h] BYREF
  struct _POINTL v44; // [rsp+E8h] [rbp-80h] BYREF
  __int128 v45; // [rsp+F0h] [rbp-78h] BYREF
  __int64 v46; // [rsp+100h] [rbp-68h]
  struct _RECTL v47; // [rsp+108h] [rbp-60h] BYREF
  struct _RECTL v48; // [rsp+118h] [rbp-50h] BYREF
  struct _RECTL v49; // [rsp+128h] [rbp-40h] BYREF

  v41 = a3;
  pco = a4;
  v35 = a6;
  pptlHTOrg = a7;
  prclDest = a8;
  prclSrc = a9;
  pptlMask = a10;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v16 = ThreadCurrentObj;
  v42 = ThreadCurrentObj;
  if ( ThreadCurrentObj )
    ++*((_DWORD *)ThreadCurrentObj + 108);
  result = 0LL;
  if ( v16 )
  {
    UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)&psoDest, a1, v16);
    UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)&psoSrc, a2, v16);
    UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)&psoMask, v41, v16);
    if ( !pptlHTOrg && iMode == 4 )
    {
      if ( v32 )
        EngUnlockSurface(psoMask);
      if ( v28 )
        EngUnlockSurface(psoSrc);
      if ( v40 )
        EngUnlockSurface(psoDest);
      --*((_DWORD *)v16 + 108);
      return 0LL;
    }
    v18 = psoDest;
    if ( !psoDest || !psoSrc || !prclDest || !prclSrc )
    {
      v22 = 0;
LABEL_20:
      if ( v32 )
        EngUnlockSurface(psoMask);
      if ( v28 )
        EngUnlockSurface(psoSrc);
      if ( v40 )
        EngUnlockSurface(v18);
      --*((_DWORD *)v16 + 108);
      return v22;
    }
    CaptureRECTL(&prclDest, &v47);
    CapturePOINTL(&pptlMask, &v43);
    CaptureRECTL(&prclSrc, &v48);
    v19 = v35;
    if ( v35 )
    {
      if ( (unsigned __int64)v35 >= W32UserProbeAddress )
        v19 = (COLORADJUSTMENT *)W32UserProbeAddress;
      v45 = *(_OWORD *)&v19->caSize;
      v46 = *(_QWORD *)&v19->caContrast;
      v19 = (COLORADJUSTMENT *)&v45;
      v35 = (COLORADJUSTMENT *)&v45;
    }
    CapturePOINTL(&pptlHTOrg, &v44);
    if ( (unsigned int)bCheckDestSurfaceOverlap(v18, prclDest) )
    {
      pco = UMPDOBJ::GetDDIOBJ(v16, a4, &v18->sizlBitmap);
      pxlo = (XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>(v16, a5);
      v26 = pxlo;
      if ( (unsigned int)bOrder(prclSrc) && (unsigned int)bCheckXlate(psoSrc, pxlo) )
      {
        v22 = 1;
        v23 = psoMask;
        if ( psoMask )
        {
          v22 = bCheckSurfaceRectSize(psoSrc, v21, 0LL, &v34, &v33, pca);
          if ( v22 )
          {
            v24 = pRect(pptlMask, &v49, v34, v33);
            v22 = v23->iBitmapFormat == 1;
            if ( v23->iBitmapFormat == 1 )
              v22 = bCheckSurfaceRect(v23, v24, 0LL);
          }
        }
        pxlo = v26;
      }
      else
      {
        v22 = 0;
      }
      if ( v22 )
        v22 = EngStretchBlt(v18, psoSrc, psoMask, pco, pxlo, v19, pptlHTOrg, prclDest, prclSrc, pptlMask, iMode);
      goto LABEL_20;
    }
    if ( v32 )
      EngUnlockSurface(psoMask);
    if ( v28 )
      EngUnlockSurface(psoSrc);
    if ( v40 )
      EngUnlockSurface(v18);
    --*((_DWORD *)v16 + 108);
    return 1LL;
  }
  return result;
}
