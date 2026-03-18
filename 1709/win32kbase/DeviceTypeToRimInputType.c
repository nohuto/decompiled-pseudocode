/*
 * XREFs of DeviceTypeToRimInputType @ 0x1C0009F40
 * Callers:
 *     RIMDiscoverDevicesOfInputType @ 0x1C0009818 (RIMDiscoverDevicesOfInputType.c)
 *     rimCompleteReads @ 0x1C0009CF4 (rimCompleteReads.c)
 *     RIMUnRegisterForInputDeviceTypeClassNotifications @ 0x1C0009DB8 (RIMUnRegisterForInputDeviceTypeClassNotifications.c)
 *     rimIssueReads @ 0x1C0009E88 (rimIssueReads.c)
 *     RIMDeviceClassNotify @ 0x1C0018980 (RIMDeviceClassNotify.c)
 *     RIMAddInjectionDeviceOfType @ 0x1C0100490 (RIMAddInjectionDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfType @ 0x1C0100A30 (RIMAddNonPnpDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C0100D30 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 *     RIMDeviceNotify @ 0x1C010E070 (RIMDeviceNotify.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DeviceTypeToRimInputType(int a1)
{
  unsigned int v1; // edx

  v1 = 0;
  if ( !a1 )
    return 1LL;
  if ( a1 == 1 )
    return 2LL;
  if ( (unsigned int)(a1 - 2) <= 1 )
    return 60;
  return v1;
}
