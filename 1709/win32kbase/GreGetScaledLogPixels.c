/*
 * XREFs of GreGetScaledLogPixels @ 0x1C00A2100
 * Callers:
 *     hbmSelectBitmap @ 0x1C004F3A0 (hbmSelectBitmap.c)
 *     ?vInheritSurfaceDpiScale@DC@@QEAAXXZ @ 0x1C0051F48 (-vInheritSurfaceDpiScale@DC@@QEAAXXZ.c)
 *     ?bMakeInfoDC@DC@@QEAAHH@Z @ 0x1C0052070 (-bMakeInfoDC@DC@@QEAAHH@Z.c)
 *     vDynamicConvertNewSurfaceDCs @ 0x1C006BC10 (vDynamicConvertNewSurfaceDCs.c)
 *     bDynamicModeChange @ 0x1C006BCF4 (bDynamicModeChange.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1C00EEF64 (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 *     ?DxgkEngGetWindowGdiDpiScalingFactor@@YAGQEAUHWND__@@@Z @ 0x1C00F2F40 (-DxgkEngGetWindowGdiDpiScalingFactor@@YAGQEAUHWND__@@@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int16 __fastcall GreGetScaledLogPixels(unsigned __int16 a1)
{
  if ( gbUseActualGDIScale )
    return a1;
  else
    return 96 * (((unsigned int)a1 + 95) / 0x60);
}
