/*
 * XREFs of NtGdiEngPlgBlt @ 0x1C028E6C0
 * Callers:
 *     <none>
 * Callees:
 *     EngPlgBlt @ 0x1C0002840 (EngPlgBlt.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00B8E18 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C00B9358 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C00BA400 (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x1C00BA55C (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1C00BA5C0 (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C00BA5EC (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ?bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z @ 0x1C00BA77C (-bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z.c)
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C00BB204 (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 *     ?bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z @ 0x1C00F3CA0 (-bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z.c)
 *     ?pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z @ 0x1C0132338 (-pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiEngPlgBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        CLIPOBJ *a5,
        COLORADJUSTMENT *a6,
        struct _POINTL *a7,
        unsigned __int64 a8,
        RECTL *a9,
        POINTL *a10,
        ULONG iMode)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v15; // rsi
  __int128 *v17; // r14
  __int64 v18; // r15
  struct _XLATEOBJ *v19; // rdx
  int v20; // ecx
  RECTL *prcl; // r15
  XLATEOBJ *pxlo; // rdx
  unsigned int v23; // edi
  SURFOBJ *v24; // r13
  struct _RECTL *v25; // rax
  ULONG iBitmapFormat; // edx
  SURFOBJ *v27; // r14
  COLORADJUSTMENT *pca; // [rsp+28h] [rbp-150h]
  SURFOBJ *psoTrga; // [rsp+60h] [rbp-118h]
  struct _SURFOBJ *v32; // [rsp+68h] [rbp-110h]
  unsigned int v33; // [rsp+70h] [rbp-108h] BYREF
  unsigned int v34; // [rsp+74h] [rbp-104h] BYREF
  COLORADJUSTMENT *v35; // [rsp+78h] [rbp-100h]
  RECTL *v36; // [rsp+80h] [rbp-F8h] BYREF
  POINTL *pptl; // [rsp+88h] [rbp-F0h] BYREF
  CLIPOBJ *pco; // [rsp+90h] [rbp-E8h]
  SURFOBJ *psoSrc; // [rsp+98h] [rbp-E0h] BYREF
  int v40; // [rsp+A0h] [rbp-D8h]
  SURFOBJ *psoMsk; // [rsp+A8h] [rbp-D0h] BYREF
  int v42; // [rsp+B0h] [rbp-C8h]
  struct _POINTL *v43; // [rsp+B8h] [rbp-C0h] BYREF
  CLIPOBJ *v44; // [rsp+C0h] [rbp-B8h]
  struct UMPDOBJ *v45; // [rsp+C8h] [rbp-B0h]
  struct _CLIPOBJ *v46; // [rsp+D0h] [rbp-A8h]
  POINTL pptlBrushOrg; // [rsp+D8h] [rbp-A0h] BYREF
  SURFOBJ *v48; // [rsp+E0h] [rbp-98h] BYREF
  int v49; // [rsp+E8h] [rbp-90h]
  struct _POINTL v50; // [rsp+F0h] [rbp-88h] BYREF
  __int128 v51; // [rsp+F8h] [rbp-80h] BYREF
  __int64 v52; // [rsp+108h] [rbp-70h]
  struct _RECTL v53; // [rsp+110h] [rbp-68h] BYREF
  struct _RECTL v54; // [rsp+120h] [rbp-58h] BYREF
  POINTFIX pptfx[2]; // [rsp+130h] [rbp-48h] BYREF
  __int64 v56; // [rsp+140h] [rbp-38h]

  v46 = a4;
  v44 = a5;
  pco = a5;
  v35 = a6;
  v43 = a7;
  v36 = a9;
  pptl = a10;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread(
                                             (__int64)KeGetCurrentThread(),
                                             (__int64)a2,
                                             (__int64)a3,
                                             (__int64)a4);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v15 = ThreadCurrentObj;
  v45 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0LL;
  ++*((_DWORD *)ThreadCurrentObj + 108);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)&v48, a1, ThreadCurrentObj);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)&psoSrc, a2, v15);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)&psoMsk, a3, v15);
  psoTrga = v48;
  if ( !v48 || !psoSrc || !v36 || !a8 )
    goto LABEL_28;
  CaptureRECTL(&v36, &v53);
  v17 = (__int128 *)v35;
  if ( v35 )
  {
    if ( (unsigned __int64)v35 >= MmUserProbeAddress )
      v17 = (__int128 *)MmUserProbeAddress;
    v51 = *v17;
    v52 = *((_QWORD *)v17 + 2);
    v17 = &v51;
    v35 = (COLORADJUSTMENT *)&v51;
  }
  CapturePOINTL(&pptl, &v50);
  CapturePOINTL(&v43, &pptlBrushOrg);
  if ( a8 + 24 < a8 || a8 + 24 > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  *(_OWORD *)&pptfx[0].x = *(_OWORD *)a8;
  v56 = *(_QWORD *)(a8 + 16);
  v18 = (__int64)v44;
  pco = UMPDOBJ::GetDDIOBJ(v15, a4, &psoTrga->sizlBitmap);
  v19 = (struct _XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>((__int64)v15, v18);
  v32 = (struct _SURFOBJ *)v19;
  v20 = 1;
  prcl = v36;
  if ( v36 && (v36->left > v36->right || v36->top > v36->bottom) )
    v20 = 0;
  if ( !v20 || !(unsigned int)bCheckXlate(psoSrc, v19) )
  {
LABEL_28:
    v23 = 0;
LABEL_29:
    v27 = psoTrga;
    goto LABEL_30;
  }
  v23 = 1;
  v24 = psoMsk;
  if ( psoMsk )
  {
    v23 = bCheckSurfaceRectSize(psoSrc, prcl, 0LL, &v34, &v33);
    if ( v23 )
    {
      v25 = pRect(pptl, &v54, v34, v33);
      iBitmapFormat = v24->iBitmapFormat;
      v23 = iBitmapFormat == 1;
      if ( iBitmapFormat == 1 )
        v23 = bCheckSurfaceRect(v24, v25, 0LL);
    }
    pxlo = (XLATEOBJ *)v32;
  }
  if ( !v23 )
    goto LABEL_29;
  pca = (COLORADJUSTMENT *)v17;
  v27 = psoTrga;
  v23 = EngPlgBlt(psoTrga, psoSrc, psoMsk, pco, pxlo, pca, &pptlBrushOrg, pptfx, prcl, pptl, iMode);
LABEL_30:
  if ( v42 )
    EngUnlockSurface(psoMsk);
  if ( v40 )
    EngUnlockSurface(psoSrc);
  if ( v49 )
    EngUnlockSurface(v27);
  if ( v15 )
    --*((_DWORD *)v15 + 108);
  return v23;
}
