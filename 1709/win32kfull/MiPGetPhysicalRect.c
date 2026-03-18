/*
 * XREFs of MiPGetPhysicalRect @ 0x1C01CA450
 * Callers:
 *     ?MiPConvertPoint@@YA?AUtagPOINT@@PEBU1@@Z @ 0x1C000B298 (-MiPConvertPoint@@YA-AUtagPOINT@@PEBU1@@Z.c)
 *     _GetPointerDeviceRects @ 0x1C004A640 (_GetPointerDeviceRects.c)
 * Callees:
 *     VirtualizeMultiMonDigitizerSize @ 0x1C01C43B4 (VirtualizeMultiMonDigitizerSize.c)
 */

_OWORD *__fastcall MiPGetPhysicalRect(_OWORD *a1)
{
  __int64 v2; // r8
  __int64 v3; // r9
  _BYTE v5[24]; // [rsp+20h] [rbp-18h] BYREF

  *a1 = *(_OWORD *)RIMGetVirtualDesktopPhysicalSize(v5);
  if ( *(_DWORD *)*gpDispInfo > 1u )
    VirtualizeMultiMonDigitizerSize((__int64)a1, gpDispInfo, v2, v3);
  return a1;
}
