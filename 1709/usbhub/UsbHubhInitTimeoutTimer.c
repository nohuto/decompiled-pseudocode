/*
 * XREFs of UsbHubhInitTimeoutTimer @ 0x1C004B9E0
 * Callers:
 *     <none>
 * Callees:
 *     Usbh_HubRootHubInitNotification @ 0x1C0007FB8 (Usbh_HubRootHubInitNotification.c)
 *     Log @ 0x1C00155F0 (Log.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     Usbh__TestPoint__Ulong @ 0x1C0023280 (Usbh__TestPoint__Ulong.c)
 *     UsbhQueueWorkItemWithRetry @ 0x1C00256A0 (UsbhQueueWorkItemWithRetry.c)
 *     WPP_RECORDER_SF_ @ 0x1C003D10C (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall UsbHubhInitTimeoutTimer(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // rbp
  _DWORD *v7; // rsi

  v4 = a3;
  v7 = FdoExt(a2);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0xBu,
      (__int64)&WPP_6271d31ce3fc35b37f87279b5c49118e_Traceguids);
  Log(a2, 2, 1667388495, a4, v4);
  Usbh__TestPoint__Ulong(a2, 9u, 0, v4);
  if ( (unsigned int)Usbh_HubRootHubInitNotification(a2, 0LL, 0LL) == -1073741536 )
    UsbhQueueWorkItemWithRetry(a2, *((_QWORD *)v7 + 347), (__int64)UsbhInitCallbackWorker, 1u, a4, 0, 0x49577473u);
  return 0LL;
}
