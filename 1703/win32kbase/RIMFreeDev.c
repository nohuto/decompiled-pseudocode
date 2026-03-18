/*
 * XREFs of RIMFreeDev @ 0x1C010DB18
 * Callers:
 *     rimHandleAnyPnpRemovePendingDevices @ 0x1C0093F10 (rimHandleAnyPnpRemovePendingDevices.c)
 *     RIMDoOnPnpNotification @ 0x1C0094468 (RIMDoOnPnpNotification.c)
 *     rimOnPnpArrived @ 0x1C0094660 (rimOnPnpArrived.c)
 *     RIMAddInjectionDeviceOfType @ 0x1C0100090 (RIMAddInjectionDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfType @ 0x1C01005F0 (RIMAddNonPnpDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C01008F0 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 *     RIMIDERemoveInjectionDevice @ 0x1C01020DC (RIMIDERemoveInjectionDevice.c)
 *     RIMOnPnpNotification @ 0x1C01027D0 (RIMOnPnpNotification.c)
 *     RIMRemoveInjectionDevice @ 0x1C0103110 (RIMRemoveInjectionDevice.c)
 *     RIMRemoveMouseOrKeyboardInjectionDevice @ 0x1C0103300 (RIMRemoveMouseOrKeyboardInjectionDevice.c)
 *     RIMDiscoverSpecificDevice @ 0x1C010F07C (RIMDiscoverSpecificDevice.c)
 *     RIMDeviceClassNotify @ 0x1C010F110 (RIMDeviceClassNotify.c)
 * Callees:
 *     RIMFreeSpecificDev @ 0x1C0094300 (RIMFreeSpecificDev.c)
 */

__int64 __fastcall RIMFreeDev(__int64 a1, __int64 a2)
{
  _QWORD *i; // r8

  for ( i = (_QWORD *)(a1 + 552); *i; i = (_QWORD *)(*i + 40LL) )
  {
    if ( *i == a2 )
    {
      *i = *(_QWORD *)(a2 + 40);
      *(_QWORD *)(a2 + 40) = 0LL;
      RIMFreeSpecificDev(a1, a2);
      return 0LL;
    }
  }
  return 0LL;
}
