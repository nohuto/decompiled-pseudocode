/*
 * XREFs of RIMGetMonitorPhysicalSize @ 0x1C01060B0
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C000F028 (RIMCreatePointerDeviceInfo.c)
 *     ?rimSetPointerDeviceOutputConfig@@YAXPEAURIMDEV@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedOutputConfig@@PEAUCRegionConfig@@@Z @ 0x1C0090768 (-rimSetPointerDeviceOutputConfig@@YAXPEAURIMDEV@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedOutp.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C0108964 (RIMIDECreatePointerDeviceInfo.c)
 *     RIMQuirkSetPointerDeviceOutputConfig @ 0x1C0115BF4 (RIMQuirkSetPointerDeviceOutputConfig.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     GetMonitorPhysicalDimensions @ 0x1C00784F0 (GetMonitorPhysicalDimensions.c)
 */

__int64 __fastcall RIMGetMonitorPhysicalSize(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  int MonitorPhysicalDimensions; // eax
  __int64 v5; // rcx
  int v6; // eax
  int v7; // ecx
  int v9; // [rsp+40h] [rbp+8h] BYREF
  int v10; // [rsp+48h] [rbp+10h] BYREF

  v2 = a2;
  v9 = 0;
  v10 = 0;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  if ( !a2 )
    v2 = *(_QWORD *)(gpDispInfo + 88);
  MonitorPhysicalDimensions = GetMonitorPhysicalDimensions(*(_QWORD *)(v2 + 232), &v9, &v10, 0LL, 0LL);
  if ( MonitorPhysicalDimensions >= 0 )
    goto LABEL_8;
  v5 = *(_QWORD *)(gpDispInfo + 88);
  if ( v2 != v5 )
    MonitorPhysicalDimensions = GetMonitorPhysicalDimensions(*(_QWORD *)(v5 + 232), &v9, &v10, 0LL, 0LL);
  if ( MonitorPhysicalDimensions >= 0 )
  {
LABEL_8:
    v6 = 1000 * v9;
    v7 = 1000 * v10;
    *(_DWORD *)(a1 + 8) = 1000 * v9;
    *(_DWORD *)(a1 + 12) = v7;
    if ( v6 <= 0 || v7 <= 0 )
    {
      *(_DWORD *)(a1 + 8) = 20320;
      *(_DWORD *)(a1 + 12) = 15240;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 8) = 20320;
    *(_DWORD *)(a1 + 12) = 15240;
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x12u,
      0x10u,
      (__int64)&WPP_fde1f29744cf32a1006834eb8d6e2bcd_Traceguids);
  }
  return a1;
}
