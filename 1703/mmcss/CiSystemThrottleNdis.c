/*
 * XREFs of CiSystemThrottleNdis @ 0x1C000B760
 * Callers:
 *     CiThreadIncrementScheduledCount @ 0x1C000ACC0 (CiThreadIncrementScheduledCount.c)
 *     CiThreadDecrementScheduledCount @ 0x1C000B650 (CiThreadDecrementScheduledCount.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002D40 (__security_check_cookie.c)
 *     WPP_SF_d @ 0x1C00048B4 (WPP_SF_d.c)
 *     CiSystemOpenNdisDevice @ 0x1C000B850 (CiSystemOpenNdisDevice.c)
 */

NTSTATUS __fastcall CiSystemThrottleNdis(char a1)
{
  NTSTATUS result; // eax
  int v2; // ebx
  HANDLE v4; // rcx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-38h] BYREF
  _DWORD InputBuffer[2]; // [rsp+60h] [rbp-28h] BYREF
  __int64 v7; // [rsp+68h] [rbp-20h]

  result = (NTSTATUS)WPP_MAIN_CB.Dpc.DpcData;
  v2 = -1;
  if ( LODWORD(WPP_MAIN_CB.Dpc.DpcData) != -1 && CiSystemResponsiveness != 100 )
  {
    v4 = CiNdisDeviceHandle;
    if ( CiNdisDeviceHandle != (HANDLE)0xFFFFFFFFLL )
    {
      if ( !CiNdisDeviceHandle )
      {
        result = CiSystemOpenNdisDevice();
        if ( result < 0 )
          return result;
        v4 = CiNdisDeviceHandle;
        result = (NTSTATUS)WPP_MAIN_CB.Dpc.DpcData;
      }
      InputBuffer[0] = 1048577;
      v7 = -1LL;
      if ( a1 )
        v2 = result;
      InputBuffer[1] = v2;
      result = ZwDeviceIoControlFile(v4, 0LL, 0LL, 0LL, &IoStatusBlock, 0x170040u, InputBuffer, 0x10u, 0LL, 0);
      if ( result < 0 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
        return WPP_SF_d(
                 (__int64)WPP_GLOBAL_Control->AttachedDevice,
                 0xDu,
                 (__int64)&WPP_68588231b6903e227175acd4ac9f80b2_Traceguids,
                 result);
    }
  }
  return result;
}
