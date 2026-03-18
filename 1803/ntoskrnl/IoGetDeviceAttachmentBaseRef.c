/*
 * XREFs of IoGetDeviceAttachmentBaseRef @ 0x140064E70
 * Callers:
 *     FsRtlReleaseFile @ 0x1404C1550 (FsRtlReleaseFile.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x1404C1720 (FsRtlAcquireFileExclusiveCommon.c)
 *     FsRtlReleaseFileForCcFlush @ 0x1404E0808 (FsRtlReleaseFileForCcFlush.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x1404E0A44 (FsRtlAcquireFileForCcFlushEx.c)
 *     sub_1405E3D3C @ 0x1405E3D3C (sub_1405E3D3C.c)
 *     IoWMIDeviceObjectToInstanceName @ 0x140613010 (IoWMIDeviceObjectToInstanceName.c)
 *     PipSetDevNodeStateFlags @ 0x140727DF4 (PipSetDevNodeStateFlags.c)
 *     PipRecordOpenHandleVeto @ 0x14073F080 (PipRecordOpenHandleVeto.c)
 *     PopRegisterCoolingExtensionProtection @ 0x14075EB2C (PopRegisterCoolingExtensionProtection.c)
 * Callees:
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x140064E8C (IoGetDeviceAttachmentBaseRefWithTag.c)
 */

PDEVICE_OBJECT __stdcall IoGetDeviceAttachmentBaseRef(PDEVICE_OBJECT DeviceObject)
{
  return (PDEVICE_OBJECT)IoGetDeviceAttachmentBaseRefWithTag(DeviceObject, 1953261124LL);
}
