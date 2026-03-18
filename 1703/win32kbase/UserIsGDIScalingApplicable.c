/*
 * XREFs of UserIsGDIScalingApplicable @ 0x1C0071560
 * Callers:
 *     ?vInheritSurfaceDpiScale@DC@@QEAAXXZ @ 0x1C0039270 (-vInheritSurfaceDpiScale@DC@@QEAAXXZ.c)
 *     ?bMakeInfoDC@DC@@QEAAHH@Z @ 0x1C00393A0 (-bMakeInfoDC@DC@@QEAAHH@Z.c)
 *     vDynamicConvertNewSurfaceDCs @ 0x1C0078060 (vDynamicConvertNewSurfaceDCs.c)
 *     hbmSelectBitmapInternal @ 0x1C00A02A0 (hbmSelectBitmapInternal.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1C00EA884 (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 *     bDynamicModeChange @ 0x1C00F2CAC (bDynamicModeChange.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C002A93C (W32GetCurrentThreadDpiAwarenessContext.c)
 *     W32GetThreadWin32Thread @ 0x1C002F210 (W32GetThreadWin32Thread.c)
 *     ValidateHwndEx @ 0x1C0071600 (ValidateHwndEx.c)
 */

__int64 __fastcall UserIsGDIScalingApplicable(void *a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // ebx
  __int64 v6; // rax
  bool v7; // zf

  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(a1, a2, a3) + 12) & 0x20000000) == 0 )
    return 0LL;
  v5 = 0;
  if ( a1 && W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) && (v6 = ValidateHwndEx(a1)) != 0 )
    v7 = (*(_DWORD *)(v6 + 368) & 0xF) == 0;
  else
    v7 = (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 0;
  LOBYTE(v5) = v7;
  return v5;
}
