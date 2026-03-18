/*
 * XREFs of ?sizl@PDEVOBJ@@QEAA?AUtagSIZE@@XZ @ 0x1C003DFBC
 * Callers:
 *     ?bMakeInfoDC@DC@@QEAAHH@Z @ 0x1C0052070 (-bMakeInfoDC@DC@@QEAAHH@Z.c)
 *     GreCreateDisplayDC @ 0x1C0055870 (GreCreateDisplayDC.c)
 *     DrvpDisplayConfigGetDisplayDeviceInfo @ 0x1C005BD64 (DrvpDisplayConfigGetDisplayDeviceInfo.c)
 *     bDynamicModeChange @ 0x1C006BCF4 (bDynamicModeChange.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1C00EEF64 (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
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
