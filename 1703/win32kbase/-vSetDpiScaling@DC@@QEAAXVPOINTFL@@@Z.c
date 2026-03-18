/*
 * XREFs of ?vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z @ 0x1C00E8B34
 * Callers:
 *     ?vInheritSurfaceDpiScale@DC@@QEAAXXZ @ 0x1C0039270 (-vInheritSurfaceDpiScale@DC@@QEAAXXZ.c)
 *     ?bMakeInfoDC@DC@@QEAAHH@Z @ 0x1C00393A0 (-bMakeInfoDC@DC@@QEAAHH@Z.c)
 *     vDynamicConvertNewSurfaceDCs @ 0x1C0078060 (vDynamicConvertNewSurfaceDCs.c)
 *     hbmSelectBitmapInternal @ 0x1C00A02A0 (hbmSelectBitmapInternal.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1C00EA884 (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 *     bDynamicModeChange @ 0x1C00F2CAC (bDynamicModeChange.c)
 * Callees:
 *     ?bDpiScaledSurface@DC@@QEAAHXZ @ 0x1C0039248 (-bDpiScaledSurface@DC@@QEAAHXZ.c)
 */

__int64 __fastcall DC::vSetDpiScaling(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // r8

  *(_DWORD *)(a1 + 536) |= 5u;
  *(_DWORD *)(a1 + 36) |= 0x10u;
  *(_QWORD *)(a1 + 540) = a2;
  result = DC::bDpiScaledSurface((DC *)a1);
  if ( (_DWORD)result )
  {
    result = *(_QWORD *)(v3 + 512);
    *(_QWORD *)(v3 + 548) = *(_QWORD *)(result + 604);
  }
  return result;
}
