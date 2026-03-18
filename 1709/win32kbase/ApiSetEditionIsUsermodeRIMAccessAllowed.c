/*
 * XREFs of ApiSetEditionIsUsermodeRIMAccessAllowed @ 0x1C0009030
 * Callers:
 *     NtRIMReadInput @ 0x1C0009060 (NtRIMReadInput.c)
 *     NtRIMAreSiblingDevices @ 0x1C00FFCD0 (NtRIMAreSiblingDevices.c)
 *     NtRIMDeviceIoControl @ 0x1C00FFD20 (NtRIMDeviceIoControl.c)
 *     NtRIMEnableMonitorMappingForDevice @ 0x1C00FFDD0 (NtRIMEnableMonitorMappingForDevice.c)
 *     NtRIMFreeInputBuffer @ 0x1C00FFED0 (NtRIMFreeInputBuffer.c)
 *     NtRIMGetDevicePreparsedData @ 0x1C00FFF10 (NtRIMGetDevicePreparsedData.c)
 *     NtRIMGetDeviceProperties @ 0x1C00FFFA0 (NtRIMGetDeviceProperties.c)
 *     NtRIMGetPhysicalDeviceRect @ 0x1C0100010 (NtRIMGetPhysicalDeviceRect.c)
 *     NtRIMGetSourceProcessId @ 0x1C0100060 (NtRIMGetSourceProcessId.c)
 *     NtRIMOnPnpNotification @ 0x1C01000D0 (NtRIMOnPnpNotification.c)
 *     NtRIMOnTimerNotification @ 0x1C01001C0 (NtRIMOnTimerNotification.c)
 *     NtRIMSetTestModeStatus @ 0x1C01002E0 (NtRIMSetTestModeStatus.c)
 *     NtRIMUnregisterForInput @ 0x1C0100310 (NtRIMUnregisterForInput.c)
 * Callees:
 *     <none>
 */

__int64 ApiSetEditionIsUsermodeRIMAccessAllowed()
{
  if ( (int)IsEditionIsUsermodeRIMAccessAllowedSupported() < 0 )
    return 0LL;
  else
    return EditionIsUsermodeRIMAccessAllowed();
}
