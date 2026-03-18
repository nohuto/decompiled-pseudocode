/*
 * XREFs of NtGdiEngStrokeAndFillPath @ 0x1C028EAF0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00B8E18 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C00B9358 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C00BA400 (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ??$GetDDIOBJ@U_XFORMOBJ@@@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU1@@Z @ 0x1C00BA46C (--$GetDDIOBJ@U_XFORMOBJ@@@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU1@@Z.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1C00BA4E4 (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1C00BA5C0 (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ?CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z @ 0x1C01327B0 (-CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z.c)
 *     EngStrokeAndFillPath @ 0x1C02681D0 (EngStrokeAndFillPath.c)
 *     ??$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z @ 0x1C028CAB8 (--$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z.c)
 *     ?bCaptureLINEATTRS@@YAHPEAPEAU_LINEATTRS@@PEAU1@@Z @ 0x1C028CE20 (-bCaptureLINEATTRS@@YAHPEAPEAU_LINEATTRS@@PEAU1@@Z.c)
 *     ?bCheckSurfacePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z @ 0x1C028CF3C (-bCheckSurfacePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z.c)
 */

__int64 NtGdiEngStrokeAndFillPath(
        struct _SURFOBJ *a1,
        __int64 a2,
        struct _CLIPOBJ *a3,
        __int64 a4,
        struct _BRUSHOBJ *a5,
        LINEATTRS *a6,
        struct _BRUSHOBJ *a7,
        ...)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  UMPDOBJ *v12; // rdi
  unsigned __int64 v14; // r12
  SURFOBJ *v15; // r13
  struct _CLIPOBJ *DDIOBJ; // r14
  BRUSHOBJ *pboStroke; // r15
  struct _BRUSHOBJ *pboFill; // rsi
  unsigned int v19; // ebx
  LINEATTRS *plineattrs; // r12
  unsigned __int64 v21; // rax
  __int64 v22; // rdx
  PATHOBJ *v23; // r11
  PFLOAT_LONG pstyle; // rcx
  XFORMOBJ *pxo; // [rsp+58h] [rbp-B0h]
  SURFOBJ *pso; // [rsp+60h] [rbp-A8h] BYREF
  int v27; // [rsp+68h] [rbp-A0h]
  struct _POINTL v28; // [rsp+70h] [rbp-98h] BYREF
  struct _BRUSHOBJ v29; // [rsp+78h] [rbp-90h] BYREF
  struct _BRUSHOBJ v30; // [rsp+90h] [rbp-78h] BYREF
  struct _LINEATTRS v31; // [rsp+A8h] [rbp-60h] BYREF
  struct _PATHOBJ *v32; // [rsp+118h] [rbp+10h]
  POINTL *pptlBrushOrg; // [rsp+148h] [rbp+40h] BYREF
  va_list va; // [rsp+148h] [rbp+40h]
  __int64 mixFill; // [rsp+150h] [rbp+48h]
  __int64 flOptions; // [rsp+158h] [rbp+50h]
  va_list va1; // [rsp+160h] [rbp+58h] BYREF

  va_start(va1, a7);
  va_start(va, a7);
  pptlBrushOrg = va_arg(va1, POINTL *);
  mixFill = va_arg(va1, _QWORD);
  flOptions = va_arg(va1, _QWORD);
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, (__int64)a3, a4);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v12 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0LL;
  ++*((_DWORD *)ThreadCurrentObj + 108);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)&pso, a1, ThreadCurrentObj);
  v14 = UMPDOBJ::GetDDIOBJ<_PATHOBJ>((__int64)v12, a2);
  v32 = (struct _PATHOBJ *)v14;
  v15 = pso;
  if ( pso )
    DDIOBJ = UMPDOBJ::GetDDIOBJ(v12, a3, &pso->sizlBitmap);
  else
    DDIOBJ = 0LL;
  pboStroke = (BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)v12, (__int64)a5);
  if ( !pboStroke )
    pboStroke = CaptureAndFakeBRUSHOBJ(a5, &v29);
  pboFill = (struct _BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)v12, (__int64)a7);
  if ( !pboFill )
    pboFill = CaptureAndFakeBRUSHOBJ(a7, &v30);
  a7 = pboFill;
  if ( v15 && pboStroke && pboFill && v14 && a6 && DDIOBJ && pptlBrushOrg )
  {
    CapturePOINTL((struct _POINTL **)va, &v28);
    v19 = bCaptureLINEATTRS(&a6, &v31);
    plineattrs = a6;
    if ( v19 )
    {
      v21 = UMPDOBJ::GetDDIOBJ<_XFORMOBJ>((__int64)v12, a4);
      pxo = (XFORMOBJ *)v21;
      if ( (plineattrs->fl & 1) != 0 )
      {
        v22 = (unsigned int)-(v21 != 0);
        v19 &= v22;
      }
      v19 = v19
         && (unsigned int)bCheckSurfacePath(v15, v32, DDIOBJ)
         && ((((unsigned __int8)mixFill ^ BYTE1(mixFill)) & 0xF) == 0 || pboFill->iSolidColor == -1)
         && EngStrokeAndFillPath(
              v15,
              v23,
              DDIOBJ,
              pxo,
              pboStroke,
              plineattrs,
              pboFill,
              pptlBrushOrg,
              mixFill,
              flOptions);
      pstyle = plineattrs->pstyle;
      if ( pstyle )
        Win32FreePool(pstyle, v22);
    }
  }
  else
  {
    v19 = 0;
  }
  if ( v27 )
    EngUnlockSurface(v15);
  if ( v12 )
    --*((_DWORD *)v12 + 108);
  return v19;
}
