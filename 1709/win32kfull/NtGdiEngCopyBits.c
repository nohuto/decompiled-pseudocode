/*
 * XREFs of NtGdiEngCopyBits @ 0x1C0131CB0
 * Callers:
 *     <none>
 * Callees:
 *     EngCopyBits @ 0x1C002C650 (EngCopyBits.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00B8E18 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C00B9358 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C00BA400 (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x1C00BA55C (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1C00BA5C0 (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C00BA5EC (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ?bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z @ 0x1C00BA77C (-bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z.c)
 *     ?bOrder@@YAHPEAU_RECTL@@@Z @ 0x1C00BA7C8 (-bOrder@@YAHPEAU_RECTL@@@Z.c)
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C00BB204 (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 *     ?bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z @ 0x1C00F3CA0 (-bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z.c)
 *     ?pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z @ 0x1C0132338 (-pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiEngCopyBits(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        CLIPOBJ *a4,
        RECTL *a5,
        POINTL *a6)
{
  unsigned int v10; // esi
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v13; // rdi
  SURFOBJ *v14; // r14
  RECTL *prclDest; // r12
  struct _CLIPOBJ *DDIOBJ; // rsi
  struct _XLATEOBJ *v17; // r13
  SURFOBJ *v18; // r15
  struct _RECTL *v19; // rax
  POINTL *pptlSrc; // [rsp+30h] [rbp-B8h] BYREF
  unsigned int v22; // [rsp+38h] [rbp-B0h] BYREF
  unsigned int v23; // [rsp+3Ch] [rbp-ACh] BYREF
  RECTL *v24; // [rsp+40h] [rbp-A8h] BYREF
  CLIPOBJ *pco; // [rsp+48h] [rbp-A0h]
  SURFOBJ *psoSrc; // [rsp+50h] [rbp-98h] BYREF
  int v27; // [rsp+58h] [rbp-90h]
  struct UMPDOBJ *v28; // [rsp+60h] [rbp-88h]
  struct _CLIPOBJ *v29; // [rsp+68h] [rbp-80h]
  SURFOBJ *psoDest; // [rsp+70h] [rbp-78h] BYREF
  int v31; // [rsp+78h] [rbp-70h]
  struct _POINTL v32; // [rsp+80h] [rbp-68h] BYREF
  struct _RECTL v33; // [rsp+88h] [rbp-60h] BYREF
  struct _RECTL v34; // [rsp+98h] [rbp-50h] BYREF

  v29 = a3;
  pco = a4;
  v24 = a5;
  pptlSrc = a6;
  v10 = 1;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread(
                                             (__int64)KeGetCurrentThread(),
                                             (__int64)a2,
                                             (__int64)a3,
                                             (__int64)a4);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v13 = ThreadCurrentObj;
  v28 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0LL;
  ++*((_DWORD *)ThreadCurrentObj + 108);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)&psoDest, a1, ThreadCurrentObj);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)&psoSrc, a2, v13);
  v14 = psoDest;
  if ( !psoDest || !psoSrc || psoDest->iType || !v24 || !pptlSrc )
  {
LABEL_20:
    v10 = 0;
    goto LABEL_12;
  }
  CaptureRECTL(&v24, &v33);
  CapturePOINTL(&pptlSrc, &v32);
  prclDest = v24;
  if ( bOrder(v24) )
  {
    DDIOBJ = UMPDOBJ::GetDDIOBJ(v13, a3, &v14->sizlBitmap);
    pco = DDIOBJ;
    v17 = (struct _XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>((__int64)v13, (__int64)a4);
    if ( (unsigned int)bCheckSurfaceRectSize(v14, prclDest, DDIOBJ, &v23, &v22) )
    {
      v18 = psoSrc;
      if ( (unsigned int)bCheckXlate(psoSrc, v17) )
      {
        v19 = pRect(pptlSrc, &v34, v23, v22);
        v10 = bCheckSurfaceRect(v18, v19, 0LL);
        if ( v10 )
          v10 = EngCopyBits(v14, v18, pco, v17, prclDest, pptlSrc);
        goto LABEL_12;
      }
    }
    goto LABEL_20;
  }
LABEL_12:
  if ( v27 )
    EngUnlockSurface(psoSrc);
  if ( v31 )
    EngUnlockSurface(v14);
  if ( v13 )
    --*((_DWORD *)v13 + 108);
  return v10;
}
