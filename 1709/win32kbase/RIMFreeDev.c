/*
 * XREFs of RIMFreeDev @ 0x1C010CAFC
 * Callers:
 *     rimHandleAnyPnpRemovePendingDevices @ 0x1C000A1A0 (rimHandleAnyPnpRemovePendingDevices.c)
 *     RIMOnPnpNotification @ 0x1C000A430 (RIMOnPnpNotification.c)
 *     RIMDoOnPnpNotification @ 0x1C000B9F4 (RIMDoOnPnpNotification.c)
 *     rimOnPnpArrived @ 0x1C000BA68 (rimOnPnpArrived.c)
 *     RIMDeviceClassNotify @ 0x1C0018980 (RIMDeviceClassNotify.c)
 *     RIMAddInjectionDeviceOfType @ 0x1C0100490 (RIMAddInjectionDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfType @ 0x1C0100A30 (RIMAddNonPnpDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C0100D30 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 *     RIMIDERemoveInjectionDevice @ 0x1C01028C0 (RIMIDERemoveInjectionDevice.c)
 *     RIMRemoveInjectionDevice @ 0x1C01032D0 (RIMRemoveInjectionDevice.c)
 *     RIMRemoveMouseOrKeyboardInjectionDevice @ 0x1C01034C8 (RIMRemoveMouseOrKeyboardInjectionDevice.c)
 *     RIMDiscoverSpecificDevice @ 0x1C010DFDC (RIMDiscoverSpecificDevice.c)
 * Callees:
 *     RIMFreeSpecificDev @ 0x1C000C69C (RIMFreeSpecificDev.c)
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
