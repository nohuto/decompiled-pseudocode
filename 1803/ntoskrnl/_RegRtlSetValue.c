/*
 * XREFs of _RegRtlSetValue @ 0x1405E2DB0
 * Callers:
 *     _CmSetDeviceMappedPropertyFromDriverKeyRegValue @ 0x1405CC920 (_CmSetDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     _CmSetDeviceRegPropWorker @ 0x1405CF72C (_CmSetDeviceRegPropWorker.c)
 *     _PnpSetPropertyWorker @ 0x1405D3304 (_PnpSetPropertyWorker.c)
 *     _CmAddDeviceToContainerWorker @ 0x1405D3F7C (_CmAddDeviceToContainerWorker.c)
 *     _CmSetDeviceInterfaceMappedPropertyFromRegValue @ 0x1405F0B64 (_CmSetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     _SysCtxOpenControlSet @ 0x140624574 (_SysCtxOpenControlSet.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x14063418C (PnpHardwareConfigCreateBootDriverFlags.c)
 *     PiCMCreateDevice @ 0x140735F78 (PiCMCreateDevice.c)
 *     PiCMGenerateDeviceInstance @ 0x140737610 (PiCMGenerateDeviceInstance.c)
 *     PiDrvDbOverlayCopyKeys @ 0x14073C89C (PiDrvDbOverlayCopyKeys.c)
 *     PiDrvDbQuerySyncNodesUpdated @ 0x14073D110 (PiDrvDbQuerySyncNodesUpdated.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x14073D4AC (PiDrvDbResolveFilePathKeyValues.c)
 *     _PnpCtxRegSetValue @ 0x1407E6DC0 (_PnpCtxRegSetValue.c)
 *     _CmSetInstallerClassRegPropWorker @ 0x1407E943C (_CmSetInstallerClassRegPropWorker.c)
 *     _CmAddPanelDeviceWorker @ 0x1407EC114 (_CmAddPanelDeviceWorker.c)
 *     _CmSetDeviceMappedPropertyFromInstanceKeyRegValue @ 0x1407EF7B0 (_CmSetDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     _CmSetInstallerClassMappedPropertyFromCoInstallers @ 0x1407EFB90 (_CmSetInstallerClassMappedPropertyFromCoInstallers.c)
 *     _CmSetInstallerClassMappedPropertyFromRegValue @ 0x1407EFD6C (_CmSetInstallerClassMappedPropertyFromRegValue.c)
 *     _CmSetInterfaceClassMappedPropertyFromRegValue @ 0x1407F01D0 (_CmSetInterfaceClassMappedPropertyFromRegValue.c)
 *     _RegRtlCopyTreeInternal @ 0x1407F09B8 (_RegRtlCopyTreeInternal.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x1407F2A34 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x1407F37B4 (DrvDbSetDriverPackageMappedProperty.c)
 *     DrvDbSetRegValueMappedProperty @ 0x1407F3DB4 (DrvDbSetRegValueMappedProperty.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14006DDA0 (RtlInitUnicodeStringEx.c)
 *     ZwSetValueKey @ 0x1401A80C0 (ZwSetValueKey.c)
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
