/*
 * XREFs of WER_UpdateThrottlePolicy @ 0x1C0035C4C
 * Callers:
 *     WER_CreateReport @ 0x1C0035FAC (WER_CreateReport.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019D4 (WPP_RECORDER_SF_d.c)
 *     HUBREG_QueryDeviceWerThrottleMask @ 0x1C0072B1C (HUBREG_QueryDeviceWerThrottleMask.c)
 *     HUBREG_WriteDeviceWerThrottleMask @ 0x1C0072D08 (HUBREG_WriteDeviceWerThrottleMask.c)
 */

__int64 __fastcall WER_UpdateThrottlePolicy(__int64 a1, char a2, __int64 a3)
{
  unsigned int DeviceWerThrottleMask; // eax
  __int64 result; // rax
  int v8; // [rsp+28h] [rbp-10h]

  DeviceWerThrottleMask = HUBREG_QueryDeviceWerThrottleMask(a1, a3);
  result = HUBREG_WriteDeviceWerThrottleMask(a1, (1 << (a2 & 0x1F)) | DeviceWerThrottleMask, a3);
  if ( (int)result < 0 )
  {
    v8 = result;
    return WPP_RECORDER_SF_d(a3, 2u, 5u, 0xAu, (__int64)&WPP_b61b56af14d53371dd11efabef6a8b4a_Traceguids, v8);
  }
  return result;
}
