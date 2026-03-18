/*
 * XREFs of rimFillKeyboardInputData @ 0x1C011472C
 * Callers:
 *     rimInvalidateHidKeyboardDeviceKeys @ 0x1C01149CC (rimInvalidateHidKeyboardDeviceKeys.c)
 *     rimReportHidKeyboardInputData @ 0x1C0114D14 (rimReportHidKeyboardInputData.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0051A08 (WPP_RECORDER_SF_D.c)
 */

__int64 __fastcall rimFillKeyboardInputData(__int64 a1, __int64 a2, __int16 a3, _WORD *a4)
{
  __int64 v6; // rbx
  unsigned int v7; // edi
  unsigned int v9; // [rsp+28h] [rbp-10h]

  v6 = a2;
  LOBYTE(a2) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    a2,
    19,
    10,
    (__int64)&WPP_c744f49e6dab323e720a14bebb6445e2_Traceguids);
  v7 = 0;
  if ( v6 && a4 )
    *a4 = a3;
  else
    v7 = -1073741811;
  v9 = v7;
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0xBu,
    (__int64)&WPP_c744f49e6dab323e720a14bebb6445e2_Traceguids,
    v9);
  return v7;
}
