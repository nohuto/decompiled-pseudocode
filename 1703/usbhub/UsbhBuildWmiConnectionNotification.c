/*
 * XREFs of UsbhBuildWmiConnectionNotification @ 0x1C004DBF4
 * Callers:
 *     UsbhDeviceOvercurrentPopup @ 0x1C003D1F0 (UsbhDeviceOvercurrentPopup.c)
 *     UsbhEnumFailurePopup @ 0x1C004EFE0 (UsbhEnumFailurePopup.c)
 *     UsbhLegacyDevicePopup @ 0x1C004F890 (UsbhLegacyDevicePopup.c)
 *     UsbhNestedHubsPopup @ 0x1C004F9F0 (UsbhNestedHubsPopup.c)
 *     UsbhNotEnoughBandwidth_Popup @ 0x1C004FA90 (UsbhNotEnoughBandwidth_Popup.c)
 *     UsbhNotEnoughPowerPopup @ 0x1C004FB20 (UsbhNotEnoughPowerPopup.c)
 * Callees:
 *     Log @ 0x1C0013A00 (Log.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     __security_check_cookie @ 0x1C00283F0 (__security_check_cookie.c)
 *     UsbhSyncSendDeviceIoctl @ 0x1C003B920 (UsbhSyncSendDeviceIoctl.c)
 *     WPP_RECORDER_SF_d @ 0x1C003BE5C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_q @ 0x1C003C2E0 (WPP_RECORDER_SF_q.c)
 */

_QWORD *__fastcall UsbhBuildWmiConnectionNotification(__int64 a1, unsigned __int16 a2)
{
  __int64 v4; // rdx
  _QWORD *PoolWithTag; // rbx
  int v6; // eax
  __int64 v7; // r9
  int v8; // r11d
  int v9; // r10d
  int v11; // [rsp+28h] [rbp-30h]
  int v12; // [rsp+30h] [rbp-28h] BYREF

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v11 = a2;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x14u,
      (__int64)&WPP_b17c68f1d29d390fab33e43047c86516_Traceguids,
      v11);
  }
  FdoExt(a1);
  PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x18uLL, 0x42554855u);
  if ( PoolWithTag )
  {
    *PoolWithTag = 0LL;
    PoolWithTag[1] = 0LL;
    PoolWithTag[2] = 0LL;
    *((_DWORD *)PoolWithTag + 1) = a2;
    v6 = UsbhSyncSendDeviceIoctl(a1, v4, &v12, 6u);
    Log(a1, 64, 1752067121, (__int64)PoolWithTag, v6);
    if ( v9 < 0 )
      *((_DWORD *)PoolWithTag + 5) = 0;
    else
      *((_DWORD *)PoolWithTag + 5) = v12;
    Log(a1, v8, 1752067122, v7, *((unsigned int *)PoolWithTag + 5));
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_q(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v4,
      1u,
      0x15u,
      (__int64)&WPP_b17c68f1d29d390fab33e43047c86516_Traceguids,
      PoolWithTag);
  return PoolWithTag;
}
