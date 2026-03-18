/*
 * XREFs of IoGetAttachedDevice @ 0x140107050
 * Callers:
 *     IoGetAttachedDeviceReferenceWithTag @ 0x140007610 (IoGetAttachedDeviceReferenceWithTag.c)
 *     IopAttachDeviceToDeviceStackSafe @ 0x1400C8670 (IopAttachDeviceToDeviceStackSafe.c)
 *     NtSetInformationFile @ 0x1400ECB00 (NtSetInformationFile.c)
 *     IoAdjustStackSizeForRedirection @ 0x1402364B0 (IoAdjustStackSizeForRedirection.c)
 *     IopShutdownBaseFileSystems @ 0x140481518 (IopShutdownBaseFileSystems.c)
 *     NtUnlockFile @ 0x140557DC0 (NtUnlockFile.c)
 *     IopCopyOffloadCapable @ 0x140583A90 (IopCopyOffloadCapable.c)
 *     NtQueryInformationFile @ 0x140596F20 (NtQueryInformationFile.c)
 *     IopXxxControlFile @ 0x1405A1A20 (IopXxxControlFile.c)
 *     IopCloseFile @ 0x1405B12E0 (IopCloseFile.c)
 *     IopDeleteFile @ 0x1405B15A0 (IopDeleteFile.c)
 *     IopParseDevice @ 0x1405B17F0 (IopParseDevice.c)
 *     FsRtlQueryOpen @ 0x140714EFC (FsRtlQueryOpen.c)
 *     VfFilterAttach @ 0x14082FFB4 (VfFilterAttach.c)
 * Callees:
 *     <none>
 */

PDEVICE_OBJECT __stdcall IoGetAttachedDevice(PDEVICE_OBJECT DeviceObject)
{
  struct _DEVICE_OBJECT *i; // rax

  for ( i = DeviceObject->AttachedDevice; i; i = i->AttachedDevice )
    DeviceObject = i;
  return DeviceObject;
}
