/*
 * XREFs of _RegRtlSetValue @ 0x140456A24
 * Callers:
 *     _CmAddDeviceToContainerWorker @ 0x1404DB004 (_CmAddDeviceToContainerWorker.c)
 *     _PnpSetPropertyWorker @ 0x1404DB1E0 (_PnpSetPropertyWorker.c)
 *     _CmSetDeviceMappedPropertyFromDriverKeyRegValue @ 0x1405926B4 (_CmSetDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     _CmSetDeviceInterfaceMappedPropertyFromRegValue @ 0x140596B0C (_CmSetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x1405B66DC (PnpHardwareConfigCreateBootDriverFlags.c)
 *     _CmSetDeviceRegPropWorker @ 0x1405C2018 (_CmSetDeviceRegPropWorker.c)
 *     PiCMCreateDevice @ 0x1406A3D38 (PiCMCreateDevice.c)
 *     PiCMGenerateDeviceInstance @ 0x1406A532C (PiCMGenerateDeviceInstance.c)
 *     _PnpCtxRegSetValue @ 0x140739CC4 (_PnpCtxRegSetValue.c)
 *     _CmSetInstallerClassRegPropWorker @ 0x14073BF60 (_CmSetInstallerClassRegPropWorker.c)
 *     _CmSetDeviceMappedPropertyFromInstanceKeyRegValue @ 0x140740B6C (_CmSetDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     _CmSetInstallerClassMappedPropertyFromCoInstallers @ 0x140740F4C (_CmSetInstallerClassMappedPropertyFromCoInstallers.c)
 *     _CmSetInstallerClassMappedPropertyFromRegValue @ 0x140741130 (_CmSetInstallerClassMappedPropertyFromRegValue.c)
 *     _CmSetInterfaceClassMappedPropertyFromRegValue @ 0x14074158C (_CmSetInterfaceClassMappedPropertyFromRegValue.c)
 *     _RegRtlCopyTreeInternal @ 0x140741D70 (_RegRtlCopyTreeInternal.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x140743E28 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x140744B74 (DrvDbSetDriverPackageMappedProperty.c)
 *     DrvDbSetRegValueMappedProperty @ 0x140745158 (DrvDbSetRegValueMappedProperty.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14004C0A0 (RtlInitUnicodeStringEx.c)
 *     ZwSetValueKey @ 0x14017EB40 (ZwSetValueKey.c)
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
