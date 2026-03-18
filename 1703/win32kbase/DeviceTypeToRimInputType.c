/*
 * XREFs of DeviceTypeToRimInputType @ 0x1C0093CB0
 * Callers:
 *     RIMDiscoverDevicesOfInputType @ 0x1C0093588 (RIMDiscoverDevicesOfInputType.c)
 *     rimCompleteReads @ 0x1C0093A64 (rimCompleteReads.c)
 *     RIMUnRegisterForInputDeviceTypeClassNotifications @ 0x1C0093B28 (RIMUnRegisterForInputDeviceTypeClassNotifications.c)
 *     rimIssueReads @ 0x1C0093BF8 (rimIssueReads.c)
 *     RIMAddInjectionDeviceOfType @ 0x1C0100090 (RIMAddInjectionDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfType @ 0x1C01005F0 (RIMAddNonPnpDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C01008F0 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 *     RIMDeviceClassNotify @ 0x1C010F110 (RIMDeviceClassNotify.c)
 *     RIMDeviceNotify @ 0x1C010F700 (RIMDeviceNotify.c)
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
