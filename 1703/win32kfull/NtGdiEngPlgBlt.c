/*
 * XREFs of NtGdiEngPlgBlt @ 0x1C0291FC0
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
 *     ?bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z @ 0x1C009A7B4 (-bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z.c)
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C009BC6C (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 *     ?bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z @ 0x1C012F2C4 (-bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z.c)
 *     ?pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z @ 0x1C012F4A4 (-pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     EngPlgBlt @ 0x1C026C840 (EngPlgBlt.c)
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
  struct UMPDOBJ *v15; // rdi
  __int64 result; // rax
  COLORADJUSTMENT *v17; // r14
  __int64 v18; // r15
  struct _XLATEOBJ *v19; // rdx
  int v20; // ecx
  RECTL *prcl; // r15
  XLATEOBJ *pxlo; // rdx
  unsigned int v23; // esi
  SURFOBJ *v24; // r13
  struct _RECTL *v25; // rax
  SURFOBJ *v26; // r14
  COLORADJUSTMENT *pca; // [rsp+28h] [rbp-160h]
  SURFOBJ *psoTrga; // [rsp+60h] [rbp-128h]
  struct _SURFOBJ *v31; // [rsp+68h] [rbp-120h]
  unsigned int v32; // [rsp+70h] [rbp-118h] BYREF
  unsigned int v33; // [rsp+74h] [rbp-114h] BYREF
  COLORADJUSTMENT *v34; // [rsp+78h] [rbp-110h]
  RECTL *v35; // [rsp+80h] [rbp-108h] BYREF
  POINTL *pptl; // [rsp+88h] [rbp-100h] BYREF
  CLIPOBJ *pco; // [rsp+90h] [rbp-F8h]
  SURFOBJ *psoSrc; // [rsp+98h] [rbp-F0h] BYREF
  int v39; // [rsp+A0h] [rbp-E8h]
  SURFOBJ *psoMsk; // [rsp+A8h] [rbp-E0h] BYREF
  int v41; // [rsp+B0h] [rbp-D8h]
  struct _POINTL *v42; // [rsp+B8h] [rbp-D0h] BYREF
  CLIPOBJ *v43; // [rsp+C0h] [rbp-C8h]
  struct UMPDOBJ *v44; // [rsp+C8h] [rbp-C0h]
  struct _CLIPOBJ *v45; // [rsp+D0h] [rbp-B8h]
  POINTL pptlBrushOrg; // [rsp+D8h] [rbp-B0h] BYREF
  SURFOBJ *v47; // [rsp+E0h] [rbp-A8h] BYREF
  int v48; // [rsp+E8h] [rbp-A0h]
  struct UMPDOBJ *v49; // [rsp+F0h] [rbp-98h]
  struct _POINTL v50; // [rsp+F8h] [rbp-90h] BYREF
  __int128 v51; // [rsp+100h] [rbp-88h] BYREF
  __int64 v52; // [rsp+110h] [rbp-78h]
  struct _RECTL v53; // [rsp+118h] [rbp-70h] BYREF
  struct _RECTL v54; // [rsp+128h] [rbp-60h] BYREF
  POINTFIX pptfx[2]; // [rsp+138h] [rbp-50h] BYREF
  __int64 v56; // [rsp+148h] [rbp-40h]

  v45 = a4;
  v43 = a5;
  pco = a5;
  v34 = a6;
  v42 = a7;
  v35 = a9;
  pptl = a10;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v15 = ThreadCurrentObj;
  v44 = ThreadCurrentObj;
  v49 = ThreadCurrentObj;
  if ( ThreadCurrentObj )
    ++*((_DWORD *)ThreadCurrentObj + 108);
  result = 0LL;
  if ( v15 )
  {
    UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)&v47, a1, v15);
    UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)&psoSrc, a2, v15);
    UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)&psoMsk, a3, v15);
    psoTrga = v47;
    if ( !v47 || !psoSrc || !v35 || !a8 )
      goto LABEL_28;
    CaptureRECTL(&v35, &v53);
    v17 = v34;
    if ( v34 )
    {
      if ( (unsigned __int64)v34 >= W32UserProbeAddress )
        v17 = (COLORADJUSTMENT *)W32UserProbeAddress;
      v51 = *(_OWORD *)&v17->caSize;
      v52 = *(_QWORD *)&v17->caContrast;
      v17 = (COLORADJUSTMENT *)&v51;
      v34 = (COLORADJUSTMENT *)&v51;
    }
    CapturePOINTL(&pptl, &v50);
    CapturePOINTL(&v42, &pptlBrushOrg);
    if ( a8 + 24 < a8 || a8 + 24 > W32UserProbeAddress )
      *W32UserProbeAddress = 0;
    *(_OWORD *)&pptfx[0].x = *(_OWORD *)a8;
    v56 = *(_QWORD *)(a8 + 16);
    v18 = (__int64)v43;
    pco = UMPDOBJ::GetDDIOBJ(v15, a4, &psoTrga->sizlBitmap);
    v19 = (struct _XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>((__int64)v15, v18);
    v31 = (struct _SURFOBJ *)v19;
    v20 = 1;
    prcl = v35;
    if ( v35 && (v35->left > v35->right || v35->top > v35->bottom) )
      v20 = 0;
    if ( v20 && (unsigned int)bCheckXlate(psoSrc, v19) )
    {
      v23 = 1;
      v24 = psoMsk;
      if ( psoMsk )
      {
        v23 = bCheckSurfaceRectSize(psoSrc, prcl, 0LL, &v33, &v32);
        if ( v23 )
        {
          v25 = pRect(pptl, &v54, v33, v32);
          v23 = v24->iBitmapFormat == 1;
          if ( v24->iBitmapFormat == 1 )
            v23 = bCheckSurfaceRect(v24, v25, 0LL);
        }
        pxlo = (XLATEOBJ *)v31;
      }
      if ( v23 )
      {
        pca = v17;
        v26 = psoTrga;
        v23 = EngPlgBlt(psoTrga, psoSrc, psoMsk, pco, pxlo, pca, &pptlBrushOrg, pptfx, prcl, pptl, iMode);
LABEL_30:
        if ( v41 )
          EngUnlockSurface(psoMsk);
        if ( v39 )
          EngUnlockSurface(psoSrc);
        if ( v48 )
          EngUnlockSurface(v26);
        --*((_DWORD *)v15 + 108);
        return v23;
      }
    }
    else
    {
LABEL_28:
      v23 = 0;
    }
    v26 = psoTrga;
    goto LABEL_30;
  }
  return result;
}
