/*
 * XREFs of CiNdisThrottle @ 0x1C00090E0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0001130 (__security_check_cookie.c)
 *     WPP_SF_d @ 0x1C00022F4 (WPP_SF_d.c)
 *     CiSystemAcquirePushLock @ 0x1C000B314 (CiSystemAcquirePushLock.c)
 */

void __fastcall CiNdisThrottle(PDEVICE_OBJECT DeviceObject, PVOID Context)
{
  NTSTATUS v2; // ebx
  bool v3; // di
  int DpcData; // ecx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-38h] BYREF
  _DWORD InputBuffer[2]; // [rsp+60h] [rbp-28h] BYREF
  __int64 v7; // [rsp+68h] [rbp-20h]

  InputBuffer[0] = 1048577;
  v7 = -1LL;
  v2 = 0;
  CiSystemAcquirePushLock(&WPP_MAIN_CB.Queue, Context);
  v3 = LODWORD(WPP_MAIN_CB.DeviceExtension) != 0;
  if ( (LODWORD(WPP_MAIN_CB.DeviceExtension) != 0) != CiNdisThrottledDown )
  {
    DpcData = -1;
    if ( LODWORD(WPP_MAIN_CB.DeviceExtension) )
      DpcData = (int)WPP_MAIN_CB.Dpc.DpcData;
    InputBuffer[1] = DpcData;
    v2 = ZwDeviceIoControlFile(CiNdisDeviceHandle, 0LL, 0LL, 0LL, &IoStatusBlock, 0x170040u, InputBuffer, 0x10u, 0LL, 0);
    if ( v2 >= 0 )
      CiNdisThrottledDown = v3;
  }
  WPP_MAIN_CB.Queue.ListEntry.Blink = 0LL;
  CiNdisThrottleInProgress = 0;
  ExReleasePushLockExclusiveEx(&WPP_MAIN_CB.Queue, 0LL);
  if ( v2 < 0 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    WPP_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0xDu,
      (__int64)&WPP_01eae20d47c6343f3bd70f9720892b24_Traceguids,
      v2);
}
