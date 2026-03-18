/*
 * XREFs of ?sizl@PDEVOBJ@@QEAA?AUtagSIZE@@XZ @ 0x1C0038EA8
 * Callers:
 *     DrvpDisplayConfigGetDisplayDeviceInfo @ 0x1C000D9C4 (DrvpDisplayConfigGetDisplayDeviceInfo.c)
 *     GreCreateDisplayDC @ 0x1C002C340 (GreCreateDisplayDC.c)
 *     ?bMakeInfoDC@DC@@QEAAHH@Z @ 0x1C00393A0 (-bMakeInfoDC@DC@@QEAAHH@Z.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1C00EA884 (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 *     bDynamicModeChange @ 0x1C00F2CAC (bDynamicModeChange.c)
 * Callees:
 *     <none>
 */

struct tagSIZE __fastcall PDEVOBJ::sizl(PDEVOBJ *this, _QWORD *a2)
{
  __int64 v2; // r8
  __int64 v3; // rax

  v2 = *(_QWORD *)this;
  if ( (*(_DWORD *)(*(_QWORD *)this + 32LL) & 0x20000) != 0 )
    v3 = *(_QWORD *)(v2 + 1736);
  else
    v3 = *(_QWORD *)(v2 + 2168);
  *a2 = v3;
  return (struct tagSIZE)a2;
}
