/*
 * XREFs of NtGdiEngFillPath @ 0x1C0291620
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C0096D7C (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C0097294 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C0098090 (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1C0098174 (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1C00984E4 (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     EngFillPath @ 0x1C0122D80 (EngFillPath.c)
 *     ?CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z @ 0x1C012F920 (-CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z.c)
 *     ??$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z @ 0x1C02903E4 (--$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z.c)
 *     ?bCheckSurfacePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z @ 0x1C0290844 (-bCheckSurfacePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z.c)
 */

_BOOL8 __fastcall NtGdiEngFillPath(
        struct _SURFOBJ *a1,
        __int64 a2,
        struct _CLIPOBJ *a3,
        struct _BRUSHOBJ *a4,
        POINTL *pptlBrushOrg,
        MIX mix,
        FLONG flOptions)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v13; // rdi
  _BOOL8 result; // rax
  PATHOBJ *v15; // r15
  SURFOBJ *v16; // r14
  struct _CLIPOBJ *DDIOBJ; // rsi
  struct _BRUSHOBJ *v18; // r11
  BRUSHOBJ *v19; // r11
  BOOL v20; // [rsp+40h] [rbp-68h]
  struct _POINTL v21; // [rsp+50h] [rbp-58h] BYREF
  SURFOBJ *pso; // [rsp+58h] [rbp-50h] BYREF
  int v23; // [rsp+60h] [rbp-48h]
  struct _BRUSHOBJ v24; // [rsp+68h] [rbp-40h] BYREF

  v20 = 0;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v13 = ThreadCurrentObj;
  if ( ThreadCurrentObj )
    ++*((_DWORD *)ThreadCurrentObj + 108);
  result = 0LL;
  if ( v13 )
  {
    UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)&pso, a1, v13);
    v15 = (PATHOBJ *)UMPDOBJ::GetDDIOBJ<_PATHOBJ>((__int64)v13, a2);
    v16 = pso;
    if ( pso )
      DDIOBJ = UMPDOBJ::GetDDIOBJ(v13, a3, &pso->sizlBitmap);
    else
      DDIOBJ = 0LL;
    v18 = (struct _BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)v13, (__int64)a4);
    if ( !v18 )
      v18 = CaptureAndFakeBRUSHOBJ(a4, &v24);
    if ( v16 && v18 && v15 && DDIOBJ && !DDIOBJ->iMode && pptlBrushOrg )
    {
      CapturePOINTL(&pptlBrushOrg, &v21);
      v20 = (unsigned int)bCheckSurfacePath(v16, v15, DDIOBJ)
         && ((((unsigned __int8)mix ^ BYTE1(mix)) & 0xF) == 0 || v19->iSolidColor == -1)
         && EngFillPath(v16, v15, DDIOBJ, v19, pptlBrushOrg, mix, flOptions);
    }
    if ( v23 )
      EngUnlockSurface(v16);
    --*((_DWORD *)v13 + 108);
    return v20;
  }
  return result;
}
