/*
 * XREFs of _CmIsRootDevice @ 0x1404E645C
 * Callers:
 *     _CmSetDeviceMappedProperty @ 0x1404435D8 (_CmSetDeviceMappedProperty.c)
 *     _CmGetDeviceParent @ 0x1404E62FC (_CmGetDeviceParent.c)
 *     PiCMGetRelatedDeviceInstance @ 0x140572E74 (PiCMGetRelatedDeviceInstance.c)
 *     PiCMQueryRemove @ 0x140597828 (PiCMQueryRemove.c)
 *     _CmSetDeviceRegPropWorker @ 0x1405C2018 (_CmSetDeviceRegPropWorker.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x140697970 (PiDcResetChildDeviceContainerCallback.c)
 *     PiCMCreateDevice @ 0x1406A3D38 (PiCMCreateDevice.c)
 *     PiCMDeleteDevice @ 0x1406A46F0 (PiCMDeleteDevice.c)
 *     PiCMDeviceAction @ 0x1406A4EA8 (PiCMDeviceAction.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14004C0A0 (RtlInitUnicodeStringEx.c)
 *     RtlEqualUnicodeString @ 0x1404F7D80 (RtlEqualUnicodeString.c)
 */

BOOLEAN __fastcall CmIsRootDevice(PCWSTR SourceString)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  if ( RtlInitUnicodeStringEx(&DestinationString, SourceString) < 0 )
    return 0;
  else
    return RtlEqualUnicodeString(&DestinationString, &String2, 1u);
}
