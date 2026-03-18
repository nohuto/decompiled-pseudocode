/*
 * XREFs of rimFillKeyboardInputData @ 0x1C0113200
 * Callers:
 *     rimInvalidateHidKeyboardDeviceKeys @ 0x1C01134A0 (rimInvalidateHidKeyboardDeviceKeys.c)
 *     rimReportHidKeyboardInputData @ 0x1C01137E8 (rimReportHidKeyboardInputData.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C001802C (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall rimFillKeyboardInputData(__int64 a1, __int64 a2, __int16 a3, _WORD *a4)
{
  unsigned int v7; // edi
  unsigned int v9; // [rsp+28h] [rbp-10h]

  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0xAu,
    (__int64)&WPP_c744f49e6dab323e720a14bebb6445e2_Traceguids);
  v7 = 0;
  if ( a2 && a4 )
    *a4 = a3;
  else
    v7 = -1073741811;
  v9 = v7;
  WPP_RECORDER_SF_d(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0xBu,
    (__int64)&WPP_c744f49e6dab323e720a14bebb6445e2_Traceguids,
    v9);
  return v7;
}
