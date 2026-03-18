/*
 * XREFs of PnpUnicodeStringToWstrFree @ 0x140527F10
 * Callers:
 *     IoGetDeviceInterfaceAlias @ 0x14044B2B0 (IoGetDeviceInterfaceAlias.c)
 *     IopGetDeviceInterfaces @ 0x140519D98 (IopGetDeviceInterfaces.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x140527DE0 (PiControlGetDeviceInterfaceEnabled.c)
 *     PiDeviceRegistration @ 0x1405554E4 (PiDeviceRegistration.c)
 *     PpForEachDeviceInstanceDriver @ 0x140555688 (PpForEachDeviceInstanceDriver.c)
 *     IopProcessSetInterfaceState @ 0x140556128 (IopProcessSetInterfaceState.c)
 *     IopBuildGlobalSymbolicLinkString @ 0x1405565F0 (IopBuildGlobalSymbolicLinkString.c)
 *     IopDeviceObjectFromSymbolicName @ 0x140586694 (IopDeviceObjectFromSymbolicName.c)
 *     PnpIsDeviceInstanceEnabled @ 0x14058BFFC (PnpIsDeviceInstanceEnabled.c)
 *     PnpGetDeviceInstanceCsConfigFlags @ 0x14058C190 (PnpGetDeviceInstanceCsConfigFlags.c)
 *     IoRegisterDeviceInterface @ 0x140590360 (IoRegisterDeviceInterface.c)
 *     PnpDisableDeviceInterfaces @ 0x14059DA44 (PnpDisableDeviceInterfaces.c)
 *     PnpSetDeviceInterfacePropertyData @ 0x1405D37B8 (PnpSetDeviceInterfacePropertyData.c)
 *     PipApplyFunctionToServiceInstances @ 0x1405DACFC (PipApplyFunctionToServiceInstances.c)
 *     IoReportDetectedDevice @ 0x1405DF730 (IoReportDetectedDevice.c)
 *     PnpGetDeviceDependencyList @ 0x1406BF19C (PnpGetDeviceDependencyList.c)
 *     IoOpenDeviceInterfaceRegistryKey @ 0x1406BF880 (IoOpenDeviceInterfaceRegistryKey.c)
 *     PnpDeleteDeviceInterfaces @ 0x1406BF95C (PnpDeleteDeviceInterfaces.c)
 *     PnpGetDeviceInterfacePropertyData @ 0x1406C1E54 (PnpGetDeviceInterfacePropertyData.c)
 *     PiInitializeDevice @ 0x1406D3418 (PiInitializeDevice.c)
 *     IopInitializeBootDrivers @ 0x140845EE8 (IopInitializeBootDrivers.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall PnpUnicodeStringToWstrFree(void *a1, __int64 a2)
{
  void *v2; // rax

  if ( a1 )
  {
    if ( a2 )
    {
      if ( *(_WORD *)(a2 + 2) )
      {
        v2 = *(void **)(a2 + 8);
        if ( v2 )
        {
          if ( v2 != a1 )
            ExFreePoolWithTag(a1, 0);
        }
      }
    }
  }
}
