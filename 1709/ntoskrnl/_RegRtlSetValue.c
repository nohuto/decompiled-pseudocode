/*
 * XREFs of _RegRtlSetValue @ 0x14058E7F0
 * Callers:
 *     DrvDbSetDriverPackageMappedProperty @ 0x140443FC8 (DrvDbSetDriverPackageMappedProperty.c)
 *     DrvDbSetRegValueMappedProperty @ 0x14044435C (DrvDbSetRegValueMappedProperty.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x1404490D4 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     _CmSetDeviceMappedPropertyFromDriverKeyRegValue @ 0x140459DBC (_CmSetDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     _PnpSetPropertyWorker @ 0x14053034C (_PnpSetPropertyWorker.c)
 *     _CmAddDeviceToContainerWorker @ 0x14054E500 (_CmAddDeviceToContainerWorker.c)
 *     _CmSetDeviceRegPropWorker @ 0x140551408 (_CmSetDeviceRegPropWorker.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x1405C88A0 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     _CmSetDeviceInterfaceMappedPropertyFromRegValue @ 0x1405DA954 (_CmSetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     PiCMCreateDevice @ 0x1406CF00C (PiCMCreateDevice.c)
 *     PiCMGenerateDeviceInstance @ 0x1406D0308 (PiCMGenerateDeviceInstance.c)
 *     _PnpCtxRegSetValue @ 0x14077E3A4 (_PnpCtxRegSetValue.c)
 *     _CmSetInstallerClassRegPropWorker @ 0x140780680 (_CmSetInstallerClassRegPropWorker.c)
 *     _CmSetDeviceMappedPropertyFromInstanceKeyRegValue @ 0x140784AE0 (_CmSetDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     _CmSetInstallerClassMappedPropertyFromCoInstallers @ 0x140784EC0 (_CmSetInstallerClassMappedPropertyFromCoInstallers.c)
 *     _CmSetInstallerClassMappedPropertyFromRegValue @ 0x1407850A4 (_CmSetInstallerClassMappedPropertyFromRegValue.c)
 *     _CmSetInterfaceClassMappedPropertyFromRegValue @ 0x140785500 (_CmSetInterfaceClassMappedPropertyFromRegValue.c)
 *     _RegRtlCopyTreeInternal @ 0x140785B88 (_RegRtlCopyTreeInternal.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1400DED10 (RtlInitUnicodeStringEx.c)
 *     ZwSetValueKey @ 0x14017E4C0 (ZwSetValueKey.c)
 */

int __fastcall RegRtlSetValue(HANDLE KeyHandle, const WCHAR *a2, ULONG a3, void *a4, ULONG DataSize)
{
  int result; // eax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  result = RtlInitUnicodeStringEx(&DestinationString, a2);
  if ( result >= 0 )
    return ZwSetValueKey(KeyHandle, &DestinationString, 0, a3, a4, DataSize);
  return result;
}
