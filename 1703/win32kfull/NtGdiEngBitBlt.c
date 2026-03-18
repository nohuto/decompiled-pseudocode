/*
 * XREFs of NtGdiEngBitBlt @ 0x1C012EE90
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     EngBitBlt @ 0x1C00769E0 (EngBitBlt.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C0096D7C (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C0097294 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C0098090 (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1C0098174 (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x1C00981EC (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1C00984E4 (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C0098510 (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ?bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z @ 0x1C009A7B4 (-bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z.c)
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C009BC6C (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 *     ?bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z @ 0x1C012F2C4 (-bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z.c)
 *     ?pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z @ 0x1C012F4A4 (-pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z.c)
 *     ?CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z @ 0x1C012F920 (-CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
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
  __int64 result; // rax
  BRUSHOBJ *pbo; // rsi
  struct _XLATEOBJ *v17; // r13
  char v18; // al
  SURFOBJ *v19; // r15
  unsigned int v20; // r9d
  unsigned int v21; // r8d
  POINTL *pptlSrc; // r13
  struct _RECTL *v23; // r11
  POINTL *pptlMask; // r14
  int v25; // edx
  unsigned int v26; // r14d
  int prclTrg; // [rsp+28h] [rbp-160h]
  struct _RECTL *v29; // [rsp+60h] [rbp-128h]
  unsigned int v30; // [rsp+68h] [rbp-120h] BYREF
  unsigned int v31; // [rsp+6Ch] [rbp-11Ch] BYREF
  POINTL *v32; // [rsp+70h] [rbp-118h] BYREF
  RECTL *v33; // [rsp+78h] [rbp-110h] BYREF
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
  v33 = a6;
  v32 = a7;
  v40 = a8;
  pptlBrush = a10;
  v39 = rop4;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v14 = ThreadCurrentObj;
  v46 = ThreadCurrentObj;
  if ( ThreadCurrentObj )
    ++*((_DWORD *)ThreadCurrentObj + 108);
  result = 0LL;
  if ( v14 )
  {
    UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)&psoTrg, a1, v14);
    UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)&psoSrc, (struct _SURFOBJ *)pxlo, v14);
    UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)&psoMask, a3, v14);
    pbo = (BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)v14, (__int64)a9);
    if ( !pbo )
      pbo = CaptureAndFakeBRUSHOBJ(a9, &v50);
    v17 = (struct _XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>((__int64)v14, a5);
    pxlo = v17;
    if ( (rop4 & 0xFFFF0000) == 0
      && v33
      && ((v18 = gajRop3[(unsigned __int8)rop4] | gajRop3[BYTE1(rop4)], (v18 & 0xE8) == 0)
       || pbo && (pbo->iSolidColor != -1 || pptlBrush))
      && ((v18 & 0xD4) == 0 || v32 && psoSrc)
      && ((unsigned __int8)rop4 == BYTE1(rop4) || psoMask || pbo && pbo->iSolidColor == -1) )
    {
      v19 = psoTrg;
      if ( !psoTrg )
        goto LABEL_45;
      CaptureRECTL(&v33, &v51);
      CapturePOINTL(&v32, &v47);
      CapturePOINTL(&v40, &v48);
      CapturePOINTL(&pptlBrush, &v49);
      pco = UMPDOBJ::GetDDIOBJ(v14, v45, &v19->sizlBitmap);
      if ( !(unsigned int)bCheckSurfaceRectSize(v19, v33, pco, &v31, &v30, prclTrg)
        || !(unsigned int)bCheckXlate(psoSrc, v17) )
      {
        goto LABEL_45;
      }
      v20 = v30;
      v21 = v31;
      pptlSrc = v32;
      v23 = psoSrc ? pRect(v32, &v52, v31, v30) : 0LL;
      pptlMask = v40;
      v29 = psoMask ? pRect(v40, &v53, v21, v20) : 0LL;
      if ( !(unsigned int)bCheckSurfaceRect(psoSrc, v23, 0LL) )
        goto LABEL_45;
      v25 = 1;
      if ( psoMask )
      {
        v25 = psoMask->iBitmapFormat == 1;
        if ( psoMask->iBitmapFormat == 1 )
          v25 = bCheckSurfaceRect(psoMask, v29, 0LL);
      }
      if ( v25 )
        v26 = EngBitBlt(v19, psoSrc, psoMask, pco, pxlo, v33, pptlSrc, pptlMask, pbo, pptlBrush, rop4);
      else
LABEL_45:
        v26 = 0;
      if ( v38 )
        EngUnlockSurface(psoMask);
      if ( v36 )
        EngUnlockSurface(psoSrc);
      if ( v44 )
        EngUnlockSurface(v19);
      --*((_DWORD *)v14 + 108);
      return v26;
    }
    else
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
  }
  return result;
}
