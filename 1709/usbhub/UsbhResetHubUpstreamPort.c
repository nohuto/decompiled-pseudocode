/*
 * XREFs of UsbhResetHubUpstreamPort @ 0x1C0047AA0
 * Callers:
 *     UsbhFdoSetD0Cold @ 0x1C00050E0 (UsbhFdoSetD0Cold.c)
 * Callees:
 *     Log @ 0x1C00155F0 (Log.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     UsbhSyncSendInternalIoctl @ 0x1C0023F60 (UsbhSyncSendInternalIoctl.c)
 *     WPP_RECORDER_SF_ @ 0x1C003D10C (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall UsbhResetHubUpstreamPort(__int64 a1)
{
  _UNICODE_STRING *v2; // r9
  NTSTATUS v3; // eax
  unsigned int v4; // r10d

  FdoExt(a1);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0xAu,
      (__int64)&WPP_358ef723348832925fa562e6167d1570_Traceguids);
  Log(a1, 8, 1381192766, 0LL, 0LL);
  v3 = UsbhSyncSendInternalIoctl(a1, 0x220007u, 0LL, v2);
  Log(a1, 8, 1381192764, v3, 0LL);
  return v4;
}
