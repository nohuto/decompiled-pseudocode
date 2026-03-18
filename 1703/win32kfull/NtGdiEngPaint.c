/*
 * XREFs of NtGdiEngPaint @ 0x1C0291E30
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C0096D7C (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C0097294 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C0098090 (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1C0098174 (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1C00984E4 (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C009BC6C (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 *     EngPaint @ 0x1C0122BC0 (EngPaint.c)
 *     ?CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z @ 0x1C012F920 (-CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z.c)
 */

__int64 __fastcall NtGdiEngPaint(struct _SURFOBJ *a1, struct _CLIPOBJ *a2, struct _BRUSHOBJ *a3, POINTL *a4, MIX a5)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v10; // rbx
  __int64 result; // rax
  SURFOBJ *v12; // r14
  struct _CLIPOBJ *DDIOBJ; // rdi
  BRUSHOBJ *v14; // r15
  MIX mix; // r12d
  unsigned int v16; // esi
  struct _POINTL v17; // [rsp+38h] [rbp-60h] BYREF
  SURFOBJ *pso; // [rsp+40h] [rbp-58h] BYREF
  int v19; // [rsp+48h] [rbp-50h]
  struct _BRUSHOBJ v20; // [rsp+50h] [rbp-48h] BYREF
  POINTL *pptlBrushOrg; // [rsp+B8h] [rbp+20h] BYREF

  pptlBrushOrg = a4;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v10 = ThreadCurrentObj;
  if ( ThreadCurrentObj )
    ++*((_DWORD *)ThreadCurrentObj + 108);
  result = 0LL;
  if ( v10 )
  {
    UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)&pso, a1, v10);
    v12 = pso;
    if ( pso )
      DDIOBJ = UMPDOBJ::GetDDIOBJ(v10, a2, &pso->sizlBitmap);
    else
      DDIOBJ = 0LL;
    v14 = (BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)v10, (__int64)a3);
    if ( !v14 )
      v14 = CaptureAndFakeBRUSHOBJ(a3, &v20);
    if ( v12 && DDIOBJ && !DDIOBJ->iMode && (mix = a5, (a5 & 0xFF00) != 0) )
    {
      CapturePOINTL(&pptlBrushOrg, &v17);
      v16 = bCheckSurfaceRect(v12, 0LL, DDIOBJ);
      if ( v16 )
        v16 = EngPaint(v12, DDIOBJ, v14, pptlBrushOrg, mix);
    }
    else
    {
      v16 = 0;
    }
    if ( v19 )
      EngUnlockSurface(v12);
    --*((_DWORD *)v10 + 108);
    return v16;
  }
  return result;
}
