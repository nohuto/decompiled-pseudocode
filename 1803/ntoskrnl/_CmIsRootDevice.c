/*
 * XREFs of _CmIsRootDevice @ 0x140586738
 * Callers:
 *     _CmGetDeviceParent @ 0x1405865D0 (_CmGetDeviceParent.c)
 *     _CmUpdateDevicePanel @ 0x1405CB46C (_CmUpdateDevicePanel.c)
 *     _CmSetDeviceMappedProperty @ 0x1405CC730 (_CmSetDeviceMappedProperty.c)
 *     _CmSetDeviceRegPropWorker @ 0x1405CF72C (_CmSetDeviceRegPropWorker.c)
 *     PiCMGetRelatedDeviceInstance @ 0x1405DE554 (PiCMGetRelatedDeviceInstance.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x1407294D0 (PiDcResetChildDeviceContainerCallback.c)
 *     PiCMCreateDevice @ 0x140735F78 (PiCMCreateDevice.c)
 *     PiCMDeleteDevice @ 0x140736980 (PiCMDeleteDevice.c)
 *     PiCMDeviceAction @ 0x140737184 (PiCMDeviceAction.c)
 *     PiCMQueryRemove @ 0x140737E40 (PiCMQueryRemove.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14006DDA0 (RtlInitUnicodeStringEx.c)
 *     RtlEqualUnicodeString @ 0x1404C91A0 (RtlEqualUnicodeString.c)
 */

BOOLEAN __fastcall CmIsRootDevice(PCWSTR SourceString)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  if ( RtlInitUnicodeStringEx(&DestinationString, SourceString) < 0 )
    return 0;
  else
    return RtlEqualUnicodeString(&DestinationString, &String2, 1u);
}
