/*
 * XREFs of UsbHubhInitTimeoutTimer @ 0x1C004AB70
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x1C0013A00 (Log.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     Usbh__TestPoint__Ulong @ 0x1C0022170 (Usbh__TestPoint__Ulong.c)
 *     UsbhQueueWorkItemWithRetry @ 0x1C00247B0 (UsbhQueueWorkItemWithRetry.c)
 *     Usbh_HubRootHubInitNotification @ 0x1C0028290 (Usbh_HubRootHubInitNotification.c)
 *     WPP_RECORDER_SF_ @ 0x1C003BD8C (WPP_RECORDER_SF_.c)
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
