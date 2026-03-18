/*
 * XREFs of NtGdiEngTextOut @ 0x1C009ABE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1RFONTTMPOBJ@@QEAA@XZ @ 0x1C0002988 (--1RFONTTMPOBJ@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     EngTextOut @ 0x1C0083290 (EngTextOut.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C0096D7C (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C0097294 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ??$GetDDIOBJ@U_STROBJ@@@UMPDOBJ@@QEAAPEAU_STROBJ@@PEAU1@@Z @ 0x1C0097304 (--$GetDDIOBJ@U_STROBJ@@@UMPDOBJ@@QEAAPEAU_STROBJ@@PEAU1@@Z.c)
 *     ??$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z @ 0x1C0097678 (--$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C0098090 (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1C0098174 (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1C00984E4 (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C0098510 (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1C009B524 (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEAH@Z @ 0x1C009B6D4 (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEAH@Z.c)
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C009BC6C (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 *     ?CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z @ 0x1C012F920 (-CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z.c)
 *     ??0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z @ 0x1C013C384 (--0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiEngTextOut(
        struct _SURFOBJ *a1,
        __int64 a2,
        __int64 a3,
        CLIPOBJ *a4,
        struct _RECTL *a5,
        RECTL *a6,
        struct _BRUSHOBJ *a7,
        struct _BRUSHOBJ *a8,
        POINTL *a9,
        MIX mix)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v14; // rdi
  FONTOBJ *v15; // r13
  BRUSHOBJ *pboFore; // r14
  BRUSHOBJ *pboOpaque; // r12
  SURFOBJ *v18; // r15
  RECTL *prclExtra; // r13
  struct _CLIPOBJ *DDIOBJ; // rdx
  unsigned int v21; // esi
  POINTL *pptlOrg; // [rsp+58h] [rbp-100h] BYREF
  RECTL *prclOpaque; // [rsp+60h] [rbp-F8h] BYREF
  _BYTE v26[8]; // [rsp+68h] [rbp-F0h] BYREF
  CLIPOBJ *pco; // [rsp+70h] [rbp-E8h]
  BRUSHOBJ *v28; // [rsp+78h] [rbp-E0h]
  struct _RECTL *v29; // [rsp+80h] [rbp-D8h] BYREF
  STROBJ *pstro; // [rsp+88h] [rbp-D0h]
  struct _CLIPOBJ *v31; // [rsp+90h] [rbp-C8h]
  struct UMPDOBJ *v32; // [rsp+98h] [rbp-C0h]
  FONTOBJ *pfo; // [rsp+A0h] [rbp-B8h]
  SURFOBJ *pso; // [rsp+A8h] [rbp-B0h] BYREF
  int v35; // [rsp+B0h] [rbp-A8h]
  struct _POINTL v36; // [rsp+B8h] [rbp-A0h] BYREF
  struct _BRUSHOBJ v37; // [rsp+C0h] [rbp-98h] BYREF
  struct _BRUSHOBJ v38; // [rsp+D8h] [rbp-80h] BYREF
  struct _RECTL v39; // [rsp+F0h] [rbp-68h] BYREF
  struct _RECTL v40; // [rsp+100h] [rbp-58h] BYREF

  v31 = a4;
  pco = a4;
  v29 = a5;
  prclOpaque = a6;
  pptlOrg = a9;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v14 = ThreadCurrentObj;
  v32 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0LL;
  ++*((_DWORD *)ThreadCurrentObj + 108);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)&pso, a1, ThreadCurrentObj);
  pstro = (STROBJ *)UMPDOBJ::GetDDIOBJ<_STROBJ>((__int64)v14, a2);
  v15 = (FONTOBJ *)UMPDOBJ::GetDDIOBJ<_FONTOBJ>((__int64)v14, a3);
  pfo = v15;
  pboFore = (BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)v14, (__int64)a7);
  if ( !pboFore )
    pboFore = CaptureAndFakeBRUSHOBJ(a7, &v37);
  v28 = pboFore;
  pboOpaque = (BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)v14, (__int64)a8);
  if ( !pboOpaque )
    pboOpaque = CaptureAndFakeBRUSHOBJ(a8, &v38);
  v18 = pso;
  if ( !pso || !pstro || !v15 || !pboFore || !pptlOrg )
    goto LABEL_22;
  CaptureRECTL(&v29, &v39);
  CaptureRECTL(&prclOpaque, &v40);
  CapturePOINTL(&pptlOrg, &v36);
  prclExtra = v29;
  if ( (*((_DWORD *)v14 + 103) & 0x100) != 0 )
    prclExtra = 0LL;
  if ( ((DDIOBJ = UMPDOBJ::GetDDIOBJ(v14, v31, &v18->sizlBitmap),
         pco = DDIOBJ,
         (((unsigned __int8)mix ^ BYTE1(mix)) & 0xF) == 0)
     || pboFore->iSolidColor == -1)
    && (unsigned int)bCheckSurfaceRect(v18, prclOpaque, DDIOBJ) )
  {
    PUBLIC_PFTOBJ::PUBLIC_PFTOBJ((PUBLIC_PFTOBJ *)v26, (struct PFT *)pfo);
    UMPDAcquireRFONTSem((struct RFONTOBJ *)v26, v14, 0, 0, 0LL);
    v21 = EngTextOut(v18, pstro, pfo, pco, prclExtra, prclOpaque, pboFore, pboOpaque, pptlOrg, mix);
    UMPDReleaseRFONTSem((struct RFONTOBJ *)v26, v14, 0LL, 0LL, 0LL);
    RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)v26);
  }
  else
  {
LABEL_22:
    v21 = 0;
  }
  if ( v35 )
    EngUnlockSurface(v18);
  if ( v14 )
    --*((_DWORD *)v14 + 108);
  return v21;
}
