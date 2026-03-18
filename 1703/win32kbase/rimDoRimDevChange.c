/*
 * XREFs of rimDoRimDevChange @ 0x1C0051F54
 * Callers:
 *     RIMCreateDev @ 0x1C005428C (RIMCreateDev.c)
 *     rimHandleAnyPnpRemovePendingDevices @ 0x1C0093F10 (rimHandleAnyPnpRemovePendingDevices.c)
 *     RIMRemoveDevOfInputType @ 0x1C0094240 (RIMRemoveDevOfInputType.c)
 *     RIMFreeSpecificDev @ 0x1C0094300 (RIMFreeSpecificDev.c)
 *     RIMDoOnPnpNotification @ 0x1C0094468 (RIMDoOnPnpNotification.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C01008F0 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 *     RIMIDERemoveInjectionDevice @ 0x1C01020DC (RIMIDERemoveInjectionDevice.c)
 *     RIMOnPnpNotification @ 0x1C01027D0 (RIMOnPnpNotification.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0051A08 (WPP_RECORDER_SF_D.c)
 *     rimDoRimDevChangeCallback @ 0x1C0051ECC (rimDoRimDevChangeCallback.c)
 *     RIMHandleTTMDeviceRemoval @ 0x1C0092B2C (RIMHandleTTMDeviceRemoval.c)
 *     RIMHandleTTMDeviceArrival @ 0x1C0092B80 (RIMHandleTTMDeviceArrival.c)
 */

void __fastcall rimDoRimDevChange(__int64 a1, __int64 a2, int a3)
{
  int v6; // eax
  unsigned __int16 v7; // r9

  if ( a3 == 2 )
  {
    v6 = RIMHandleTTMDeviceArrival(a2);
    if ( v6 < 0 )
    {
      v7 = 14;
LABEL_7:
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x14u,
        v7,
        (__int64)&WPP_b10d7901ec9437b632f459d6891cab5f_Traceguids,
        v6);
    }
  }
  else if ( a3 == 3 )
  {
    v6 = RIMHandleTTMDeviceRemoval(a2);
    if ( v6 < 0 )
    {
      v7 = 15;
      goto LABEL_7;
    }
  }
  if ( *(_BYTE *)(a1 + 74) && a3 == 4 )
    rimDoRimDevChangeCallback(a1, a2, 3);
  rimDoRimDevChangeCallback(a1, a2, a3);
}
