/*
 * XREFs of NtGdiPATHOBJ_vEnumStartClipLines @ 0x1C028FF80
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00B8E18 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C00B9358 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C00BA400 (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ??$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z @ 0x1C028CAB8 (--$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z.c)
 *     ?bCaptureLINEATTRS@@YAHPEAPEAU_LINEATTRS@@PEAU1@@Z @ 0x1C028CE20 (-bCaptureLINEATTRS@@YAHPEAPEAU_LINEATTRS@@PEAU1@@Z.c)
 *     PATHOBJ_vEnumStartClipLines @ 0x1C0295DE0 (PATHOBJ_vEnumStartClipLines.c)
 */

__int64 NtGdiPATHOBJ_vEnumStartClipLines(__int64 a1, struct _CLIPOBJ *a2, struct _SURFOBJ *a3, ...)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  UMPDOBJ *v8; // rbx
  unsigned int v9; // edi
  unsigned __int64 v10; // rax
  SURFOBJ *v11; // rbp
  PATHOBJ *v12; // r14
  struct _CLIPOBJ *DDIOBJ; // rax
  __int64 v14; // rdx
  CLIPOBJ *v15; // rsi
  LINEATTRS *v16; // rdi
  PFLOAT_LONG pstyle; // rcx
  SURFOBJ *pso; // [rsp+20h] [rbp-58h] BYREF
  int v20; // [rsp+28h] [rbp-50h]
  struct _LINEATTRS v21; // [rsp+30h] [rbp-48h] BYREF
  LINEATTRS *pla; // [rsp+98h] [rbp+20h] BYREF
  va_list plaa; // [rsp+98h] [rbp+20h]
  va_list va1; // [rsp+A0h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(plaa, a3);
  pla = va_arg(va1, LINEATTRS *);
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread(
                                             (__int64)KeGetCurrentThread(),
                                             (__int64)a2,
                                             (__int64)a3,
                                             (__int64)pla);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v8 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
  {
    v9 = -1073741811;
    goto LABEL_24;
  }
  ++*((_DWORD *)ThreadCurrentObj + 108);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)&pso, a3, ThreadCurrentObj);
  v10 = UMPDOBJ::GetDDIOBJ<_PATHOBJ>((__int64)v8, a1);
  v11 = pso;
  v12 = (PATHOBJ *)v10;
  if ( pso && v10 && (unsigned int)bCaptureLINEATTRS((struct _LINEATTRS **)plaa, &v21) )
  {
    DDIOBJ = UMPDOBJ::GetDDIOBJ(v8, a2, &v11->sizlBitmap);
    v15 = DDIOBJ;
    if ( (*((_DWORD *)v8 + 103) & 0x100) == 0 )
    {
      v16 = pla;
      goto LABEL_18;
    }
    if ( !DDIOBJ && gfUMPDDebug )
      DbgPrint(
        "windows\\core\\ntgdi\\gre\\windows\\umpdeng.cxx:%d:NtGdiPATHOBJ_vEnumStartClipLines:pco == NULL\n",
        3961);
    v16 = pla;
    if ( !pla && gfUMPDDebug )
      DbgPrint(
        "windows\\core\\ntgdi\\gre\\windows\\umpdeng.cxx:%d:NtGdiPATHOBJ_vEnumStartClipLines:pla == NULL\n",
        3966);
    if ( !v15 )
      goto LABEL_19;
    if ( v16 )
    {
LABEL_18:
      PATHOBJ_vEnumStartClipLines(v12, v15, v11, v16);
LABEL_19:
      if ( v16 )
      {
        pstyle = v16->pstyle;
        if ( pstyle )
          Win32FreePool(pstyle, v14);
      }
    }
  }
  v9 = 0;
  if ( v20 )
    EngUnlockSurface(v11);
LABEL_24:
  if ( v8 )
    --*((_DWORD *)v8 + 108);
  return v9;
}
