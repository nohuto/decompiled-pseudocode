/*
 * XREFs of UserGetHwndDpi @ 0x1C00A0480
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
 */

__int64 __fastcall UserGetHwndDpi(void *a1, _WORD *a2)
{
  __int64 v4; // r9
  __int64 v5; // rax
  __int16 v6; // cx
  __int64 result; // rax

  if ( !W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
    return 0LL;
  v5 = ValidateHwndEx(a1, 1LL, 0LL, v4);
  if ( !v5 )
    return 0LL;
  v6 = *(_WORD *)(v5 + 372);
  result = 1LL;
  *a2 = v6;
  return result;
}
