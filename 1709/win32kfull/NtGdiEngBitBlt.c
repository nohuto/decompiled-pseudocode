/*
 * XREFs of NtGdiEngBitBlt @ 0x1C0131F00
 * Callers:
 *     <none>
 * Callees:
 *     EngBitBlt @ 0x1C002DC60 (EngBitBlt.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00B8E18 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C00B9358 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C00BA400 (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1C00BA4E4 (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x1C00BA55C (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1C00BA5C0 (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C00BA5EC (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ?bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z @ 0x1C00BA77C (-bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z.c)
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C00BB204 (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 *     ?bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z @ 0x1C00F3CA0 (-bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z.c)
 *     ?pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z @ 0x1C0132338 (-pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z.c)
 *     ?CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z @ 0x1C01327B0 (-CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiEngBitBlt(
        struct _SURFOBJ *a1,
        XLATEOBJ *a2,
        struct _SURFOBJ *a3,
        CLIPOBJ *a4,
        __int64 a5,
        RECTL *a6,
        POINTL *a7,
        POINTL *a8,
        struct _BRUSHOBJ *a9,
        POINTL *a10,
        ROP4 rop4)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v14; // rdi
  struct _BRUSHOBJ *pbo; // rsi
  struct _XLATEOBJ *v16; // r13
  char v17; // al
  SURFOBJ *v18; // r15
  unsigned int v19; // r9d
  unsigned int v20; // r8d
  POINTL *pptlSrc; // r13
  struct _RECTL *v22; // r11
  POINTL *pptlMask; // r14
  int v24; // edx
  unsigned int v25; // r14d
  ULONG iBitmapFormat; // eax
  struct _RECTL *v29; // [rsp+60h] [rbp-128h]
  unsigned int v30; // [rsp+68h] [rbp-120h] BYREF
  unsigned int v31; // [rsp+6Ch] [rbp-11Ch] BYREF
  POINTL *v32; // [rsp+70h] [rbp-118h] BYREF
  RECTL *prclTrg; // [rsp+78h] [rbp-110h] BYREF
  XLATEOBJ *pxlo; // [rsp+80h] [rbp-108h]
  SURFOBJ *psoSrc; // [rsp+88h] [rbp-100h] BYREF
  int v36; // [rsp+90h] [rbp-F8h]
  SURFOBJ *psoMask; // [rsp+98h] [rbp-F0h] BYREF
  int v38; // [rsp+A0h] [rbp-E8h]
  ROP4 v39; // [rsp+A8h] [rbp-E0h]
  POINTL *v40; // [rsp+B0h] [rbp-D8h] BYREF
  POINTL *pptlBrush; // [rsp+B8h] [rbp-D0h] BYREF
  CLIPOBJ *pco; // [rsp+C0h] [rbp-C8h]
  SURFOBJ *psoTrg; // [rsp+C8h] [rbp-C0h] BYREF
  int v44; // [rsp+D0h] [rbp-B8h]
  struct _CLIPOBJ *v45; // [rsp+D8h] [rbp-B0h]
  struct UMPDOBJ *v46; // [rsp+E0h] [rbp-A8h]
  struct _POINTL v47; // [rsp+E8h] [rbp-A0h] BYREF
  struct _POINTL v48; // [rsp+F0h] [rbp-98h] BYREF
  struct _POINTL v49; // [rsp+F8h] [rbp-90h] BYREF
  struct _BRUSHOBJ v50; // [rsp+100h] [rbp-88h] BYREF
  struct _RECTL v51; // [rsp+118h] [rbp-70h] BYREF
  struct _RECTL v52; // [rsp+128h] [rbp-60h] BYREF
  struct _RECTL v53; // [rsp+138h] [rbp-50h] BYREF

  v45 = a4;
  pxlo = a2;
  pco = a4;
  prclTrg = a6;
  v32 = a7;
  v40 = a8;
  pptlBrush = a10;
  v39 = rop4;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread(
                                             (__int64)KeGetCurrentThread(),
                                             (__int64)a2,
                                             (__int64)a3,
                                             (__int64)a4);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v14 = ThreadCurrentObj;
  v46 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0LL;
  ++*((_DWORD *)ThreadCurrentObj + 108);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)&psoTrg, a1, ThreadCurrentObj);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)&psoSrc, (struct _SURFOBJ *)pxlo, v14);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)&psoMask, a3, v14);
  pbo = (struct _BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)v14, (__int64)a9);
  if ( !pbo )
    pbo = CaptureAndFakeBRUSHOBJ(a9, &v50);
  v16 = (struct _XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>((__int64)v14, a5);
  pxlo = v16;
  if ( (rop4 & 0xFFFF0000) != 0
    || !prclTrg
    || (v17 = gajRop3[(unsigned __int8)rop4] | gajRop3[BYTE1(rop4)], (v17 & 0xE8) != 0)
    && (!pbo || pbo->iSolidColor == -1 && !pptlBrush)
    || (v17 & 0xD4) != 0 && (!v32 || !psoSrc)
    || (unsigned __int8)rop4 != BYTE1(rop4) && !psoMask && (!pbo || pbo->iSolidColor != -1) )
  {
    if ( v38 )
      EngUnlockSurface(psoMask);
    if ( v36 )
      EngUnlockSurface(psoSrc);
    if ( v44 )
      EngUnlockSurface(psoTrg);
    --*((_DWORD *)v14 + 108);
    return 0LL;
  }
  v18 = psoTrg;
  if ( !psoTrg )
    goto LABEL_45;
  CaptureRECTL(&prclTrg, &v51);
  CapturePOINTL(&v32, &v47);
  CapturePOINTL(&v40, &v48);
  CapturePOINTL(&pptlBrush, &v49);
  pco = UMPDOBJ::GetDDIOBJ(v14, v45, &v18->sizlBitmap);
  if ( !(unsigned int)bCheckSurfaceRectSize(v18, prclTrg, pco, &v31, &v30) || !(unsigned int)bCheckXlate(psoSrc, v16) )
    goto LABEL_45;
  v19 = v30;
  v20 = v31;
  pptlSrc = v32;
  v22 = psoSrc ? pRect(v32, &v52, v31, v30) : 0LL;
  pptlMask = v40;
  v29 = psoMask ? pRect(v40, &v53, v20, v19) : 0LL;
  if ( !(unsigned int)bCheckSurfaceRect(psoSrc, v22, 0LL) )
    goto LABEL_45;
  v24 = 1;
  if ( psoMask )
  {
    iBitmapFormat = psoMask->iBitmapFormat;
    v24 = iBitmapFormat == 1;
    if ( iBitmapFormat == 1 )
      v24 = bCheckSurfaceRect(psoMask, v29, 0LL);
  }
  if ( v24 )
    v25 = EngBitBlt(v18, psoSrc, psoMask, pco, pxlo, prclTrg, pptlSrc, pptlMask, pbo, pptlBrush, rop4);
  else
LABEL_45:
    v25 = 0;
  if ( v38 )
    EngUnlockSurface(psoMask);
  if ( v36 )
    EngUnlockSurface(psoSrc);
  if ( v44 )
    EngUnlockSurface(v18);
  if ( v14 )
    --*((_DWORD *)v14 + 108);
  return v25;
}
