/*
 * XREFs of UserGetHwndDpi @ 0x1C0097D60
 * Callers:
 *     ?vInheritSurfaceDpiScale@DC@@QEAAXXZ @ 0x1C0039270 (-vInheritSurfaceDpiScale@DC@@QEAAXXZ.c)
 *     ?bMakeInfoDC@DC@@QEAAHH@Z @ 0x1C00393A0 (-bMakeInfoDC@DC@@QEAAHH@Z.c)
 *     vDynamicConvertNewSurfaceDCs @ 0x1C0078060 (vDynamicConvertNewSurfaceDCs.c)
 *     hbmSelectBitmapInternal @ 0x1C00A02A0 (hbmSelectBitmapInternal.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1C00EA884 (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 *     bDynamicModeChange @ 0x1C00F2CAC (bDynamicModeChange.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C002F210 (W32GetThreadWin32Thread.c)
 *     ValidateHwndEx @ 0x1C0071600 (ValidateHwndEx.c)
 */

__int64 __fastcall UserGetHwndDpi(void *a1, _WORD *a2)
{
  __int64 v4; // rax
  __int16 v5; // cx
  __int64 result; // rax

  if ( !W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
    return 0LL;
  v4 = ValidateHwndEx(a1, 1, 0);
  if ( !v4 )
    return 0LL;
  v5 = *(_WORD *)(v4 + 372);
  result = 1LL;
  *a2 = v5;
  return result;
}
