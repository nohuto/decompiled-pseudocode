/*
 * XREFs of rimDoRimDevChange @ 0x1C001AEAC
 * Callers:
 *     rimHandleAnyPnpRemovePendingDevices @ 0x1C000A1A0 (rimHandleAnyPnpRemovePendingDevices.c)
 *     RIMOnPnpNotification @ 0x1C000A430 (RIMOnPnpNotification.c)
 *     RIMDoOnPnpNotification @ 0x1C000B9F4 (RIMDoOnPnpNotification.c)
 *     RIMRemoveDevOfInputType @ 0x1C000C5D4 (RIMRemoveDevOfInputType.c)
 *     RIMFreeSpecificDev @ 0x1C000C69C (RIMFreeSpecificDev.c)
 *     RIMCreateDev @ 0x1C000D350 (RIMCreateDev.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C0100D30 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 *     RIMIDERemoveInjectionDevice @ 0x1C01028C0 (RIMIDERemoveInjectionDevice.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C001802C (WPP_RECORDER_SF_d.c)
 *     rimDoRimDevChangeCallback @ 0x1C001AE20 (rimDoRimDevChangeCallback.c)
 *     RIMHandleTTMDeviceRemoval @ 0x1C009C32C (RIMHandleTTMDeviceRemoval.c)
 *     RIMHandleTTMDeviceArrival @ 0x1C009C380 (RIMHandleTTMDeviceArrival.c)
 */

void __fastcall rimDoRimDevChange(__int64 a1, __int64 a2, int a3)
{
  unsigned int v6; // edi
  int v7; // eax
  int v8; // eax

  if ( a3 == 1 )
  {
    LOBYTE(v6) = 1;
    goto LABEL_8;
  }
  if ( a3 != 2 )
  {
    if ( a3 != 3 )
    {
      if ( a3 != 4 )
        goto LABEL_10;
      if ( *(_BYTE *)(a1 + 74) && (*(_DWORD *)(a2 + 184) & 0x10000000) != 0 )
        rimDoRimDevChangeCallback(a1, a2, 3);
      goto LABEL_9;
    }
    v6 = (*(_DWORD *)(a2 + 184) & 0x10000000u) >> 28;
    v8 = RIMHandleTTMDeviceRemoval(a2);
    if ( v8 < 0 )
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x14u,
        0xFu,
        (__int64)&WPP_90e310c6b5353faf2d096768653107e7_Traceguids,
        v8);
LABEL_8:
    if ( !(_BYTE)v6 )
      goto LABEL_10;
    goto LABEL_9;
  }
  *(_DWORD *)(a2 + 184) |= 0x10000000u;
  v7 = RIMHandleTTMDeviceArrival(a2);
  if ( v7 < 0 )
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x14u,
      0xEu,
      (__int64)&WPP_90e310c6b5353faf2d096768653107e7_Traceguids,
      v7);
LABEL_9:
  rimDoRimDevChangeCallback(a1, a2, a3);
LABEL_10:
  if ( a3 == 3 )
    *(_DWORD *)(a2 + 184) &= ~0x10000000u;
}
