/*
 * XREFs of IoGetAttachedDevice @ 0x1400855C0
 * Callers:
 *     NtSetInformationFile @ 0x14005F8B0 (NtSetInformationFile.c)
 *     IoGetAttachedDeviceReferenceWithTag @ 0x1400DE5E8 (IoGetAttachedDeviceReferenceWithTag.c)
 *     IopAttachDeviceToDeviceStackSafe @ 0x140127C98 (IopAttachDeviceToDeviceStackSafe.c)
 *     IoAdjustStackSizeForRedirection @ 0x1401F9080 (IoAdjustStackSizeForRedirection.c)
 *     IopShutdownBaseFileSystems @ 0x14042A9E4 (IopShutdownBaseFileSystems.c)
 *     NtQueryInformationFile @ 0x14049A060 (NtQueryInformationFile.c)
 *     IopXxxControlFile @ 0x1404AD980 (IopXxxControlFile.c)
 *     IopParseDevice @ 0x1404B86A0 (IopParseDevice.c)
 *     IopCloseFile @ 0x1404BAD60 (IopCloseFile.c)
 *     IopDeleteFile @ 0x1404BB010 (IopDeleteFile.c)
 *     NtUnlockFile @ 0x14056D1B0 (NtUnlockFile.c)
 *     IopCopyOffloadCapable @ 0x14059E01C (IopCopyOffloadCapable.c)
 *     FsRtlQueryOpen @ 0x1406B0754 (FsRtlQueryOpen.c)
 *     VfFilterAttach @ 0x1407C2A44 (VfFilterAttach.c)
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
