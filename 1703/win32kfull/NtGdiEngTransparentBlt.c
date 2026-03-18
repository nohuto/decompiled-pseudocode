/*
 * XREFs of NtGdiEngTransparentBlt @ 0x1C0292950
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C0096D7C (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C0097294 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C0098090 (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x1C00981EC (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C0098510 (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ?bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z @ 0x1C009A7B4 (-bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z.c)
 *     ?bOrder@@YAHPEAU_RECTL@@@Z @ 0x1C009A800 (-bOrder@@YAHPEAU_RECTL@@@Z.c)
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C009BC6C (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 *     EngTransparentBlt @ 0x1C00A8840 (EngTransparentBlt.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiEngTransparentBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        CLIPOBJ *a4,
        RECTL *a5,
        RECTL *a6,
        ULONG iTransColor,
        ULONG ulReserved)
{
  unsigned int v11; // esi
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v14; // rdi
  __int64 result; // rax
  SURFOBJ *v16; // r14
  RECTL *prclDst; // r12
  RECTL *prclSrc; // r15
  struct _XLATEOBJ *v19; // r13
  SURFOBJ *v20; // rsi
  RECTL *v21; // [rsp+40h] [rbp-B8h] BYREF
  RECTL *v22; // [rsp+48h] [rbp-B0h] BYREF
  CLIPOBJ *pco; // [rsp+50h] [rbp-A8h]
  CLIPOBJ *v24; // [rsp+58h] [rbp-A0h]
  SURFOBJ *psoSrc; // [rsp+60h] [rbp-98h] BYREF
  int v26; // [rsp+68h] [rbp-90h]
  struct UMPDOBJ *v27; // [rsp+70h] [rbp-88h]
  struct _CLIPOBJ *v28; // [rsp+78h] [rbp-80h]
  SURFOBJ *psoDst; // [rsp+80h] [rbp-78h] BYREF
  int v30; // [rsp+88h] [rbp-70h]
  struct _RECTL v31; // [rsp+90h] [rbp-68h] BYREF
  struct _RECTL v32; // [rsp+A0h] [rbp-58h] BYREF

  v24 = a4;
  v28 = a3;
  pco = a4;
  v21 = a5;
  v22 = a6;
  v11 = 1;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v14 = ThreadCurrentObj;
  v27 = ThreadCurrentObj;
  if ( ThreadCurrentObj )
    ++*((_DWORD *)ThreadCurrentObj + 108);
  result = 0LL;
  if ( v14 )
  {
    UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)&psoDst, a1, v14);
    UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)&psoSrc, a2, v14);
    v16 = psoDst;
    if ( !psoDst || !psoSrc || !v21 || !v22 )
      goto LABEL_13;
    CaptureRECTL(&v22, &v31);
    CaptureRECTL(&v21, &v32);
    prclDst = v21;
    if ( !bOrder(v21) )
      goto LABEL_14;
    prclSrc = v22;
    if ( !bOrder(v22) )
      goto LABEL_14;
    pco = UMPDOBJ::GetDDIOBJ(v14, a3, &v16->sizlBitmap);
    v19 = (struct _XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>((__int64)v14, (__int64)v24);
    v20 = psoSrc;
    if ( (unsigned int)bCheckSurfaceRect(psoSrc, prclSrc, 0LL) && (unsigned int)bCheckXlate(v20, v19) )
      v11 = EngTransparentBlt(v16, v20, pco, v19, prclDst, prclSrc, iTransColor, ulReserved);
    else
LABEL_13:
      v11 = 0;
LABEL_14:
    if ( v26 )
      EngUnlockSurface(psoSrc);
    if ( v30 )
      EngUnlockSurface(v16);
    --*((_DWORD *)v14 + 108);
    return v11;
  }
  return result;
}
