/*
 * XREFs of UserIsGDIScalingApplicable @ 0x1C00735D0
 * Callers:
 *     hbmSelectBitmap @ 0x1C004F3A0 (hbmSelectBitmap.c)
 *     ?vInheritSurfaceDpiScale@DC@@QEAAXXZ @ 0x1C0051F48 (-vInheritSurfaceDpiScale@DC@@QEAAXXZ.c)
 *     ?bMakeInfoDC@DC@@QEAAHH@Z @ 0x1C0052070 (-bMakeInfoDC@DC@@QEAAHH@Z.c)
 *     vDynamicConvertNewSurfaceDCs @ 0x1C006BC10 (vDynamicConvertNewSurfaceDCs.c)
 *     bDynamicModeChange @ 0x1C006BCF4 (bDynamicModeChange.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1C00EEF64 (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 *     ?DxgkEngGetWindowGdiDpiScalingFactor@@YAGQEAUHWND__@@@Z @ 0x1C00F2F40 (-DxgkEngGetWindowGdiDpiScalingFactor@@YAGQEAUHWND__@@@Z.c)
 * Callees:
 *     ValidateHwndEx @ 0x1C00476F0 (ValidateHwndEx.c)
 *     W32GetThreadWin32Thread @ 0x1C0047A38 (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0059B98 (W32GetCurrentThreadDpiAwarenessContext.c)
 */

__int64 __fastcall UserIsGDIScalingApplicable(void *a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // ebx
  __int64 v6; // r9
  __int64 v7; // rax
  bool v8; // zf

  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(a1, a2, a3) + 12) & 0x20000000) == 0 )
    return 0LL;
  v5 = 0;
  if ( a1 && W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) && (v7 = ValidateHwndEx(a1, 1LL, 0LL, v6)) != 0 )
    v8 = (*(_DWORD *)(v7 + 368) & 0xF) == 0;
  else
    v8 = (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 0;
  LOBYTE(v5) = v8;
  return v5;
}
