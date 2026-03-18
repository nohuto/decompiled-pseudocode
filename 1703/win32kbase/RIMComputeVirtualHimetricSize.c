/*
 * XREFs of RIMComputeVirtualHimetricSize @ 0x1C0107CA0
 * Callers:
 *     RIMOnMonitorNotification @ 0x1C0009AF0 (RIMOnMonitorNotification.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C000A11C (RIMCreatePointerDeviceInfo.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C01098C8 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     rimFreeQDCActivePathsData @ 0x1C00086BC (rimFreeQDCActivePathsData.c)
 *     rimGetQDCActivePathsData @ 0x1C0009A20 (rimGetQDCActivePathsData.c)
 *     RIMComputePTPCurtainRegions @ 0x1C0107540 (RIMComputePTPCurtainRegions.c)
 *     RIMComputeVirtualDesktopPhysicalSize @ 0x1C0107870 (RIMComputeVirtualDesktopPhysicalSize.c)
 */

__int64 __fastcall RIMComputeVirtualHimetricSize(__int64 a1, const wchar_t *a2)
{
  _QWORD *v3; // rbx
  _QWORD v5[5]; // [rsp+20h] [rbp-28h] BYREF
  int v6; // [rsp+50h] [rbp+8h] BYREF
  int v7; // [rsp+60h] [rbp+18h] BYREF

  if ( *(_DWORD *)(a1 + 24) == 7 && (_DWORD)a2 )
  {
    *(_DWORD *)(a1 + 212) = *(_DWORD *)(a1 + 164);
    *(_DWORD *)(a1 + 216) = *(_DWORD *)(a1 + 168);
    RIMComputePTPCurtainRegions((_DWORD *)a1, a2);
  }
  v3 = v5;
  if ( (int)rimGetQDCActivePathsData(v5) < 0 )
    v3 = 0LL;
  RIMComputeVirtualDesktopPhysicalSize(&v6, &v7, (__int64)v3);
  *(_DWORD *)(a1 + 148) = 1000 * v6;
  *(_DWORD *)(a1 + 152) = 1000 * v7;
  *(_OWORD *)(a1 + 156) = *(_OWORD *)(a1 + 140);
  return rimFreeQDCActivePathsData(v3);
}
