/*
 * XREFs of ApiSetEditionIsUsermodeRIMAccessAllowed @ 0x1C009539C
 * Callers:
 *     NtRIMReadInput @ 0x1C0093040 (NtRIMReadInput.c)
 *     NtRIMAreSiblingDevices @ 0x1C00FF890 (NtRIMAreSiblingDevices.c)
 *     NtRIMDeviceIoControl @ 0x1C00FF8E0 (NtRIMDeviceIoControl.c)
 *     NtRIMFreeInputBuffer @ 0x1C00FF990 (NtRIMFreeInputBuffer.c)
 *     NtRIMGetDevicePreparsedData @ 0x1C00FF9D0 (NtRIMGetDevicePreparsedData.c)
 *     NtRIMGetDeviceProperties @ 0x1C00FFA50 (NtRIMGetDeviceProperties.c)
 *     NtRIMGetPhysicalDeviceRect @ 0x1C00FFAB0 (NtRIMGetPhysicalDeviceRect.c)
 *     NtRIMGetSourceProcessId @ 0x1C00FFB00 (NtRIMGetSourceProcessId.c)
 *     NtRIMOnPnpNotification @ 0x1C00FFB60 (NtRIMOnPnpNotification.c)
 *     NtRIMOnTimerNotification @ 0x1C00FFCD0 (NtRIMOnTimerNotification.c)
 *     NtRIMSetTestModeStatus @ 0x1C00FFE60 (NtRIMSetTestModeStatus.c)
 *     NtRIMUnregisterForInput @ 0x1C00FFE90 (NtRIMUnregisterForInput.c)
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
