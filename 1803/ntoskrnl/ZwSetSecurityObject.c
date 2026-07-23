/*
 * XREFs of ZwSetSecurityObject @ 0x1401AA8A0
 * Callers:
 *     BiZwSetSecurityObject @ 0x1401643D0 (BiZwSetSecurityObject.c)
 *     PiDevCfgCopyDeviceKey @ 0x1405D81C8 (PiDevCfgCopyDeviceKey.c)
 *     CmpInitBackupHive @ 0x140633278 (CmpInitBackupHive.c)
 *     MiCreatePagingFile @ 0x14063BE50 (MiCreatePagingFile.c)
 *     CmpDoReDoSetSecurityDescriptor @ 0x1407072E0 (CmpDoReDoSetSecurityDescriptor.c)
 *     PiDrvDbOverlayCopyKeys @ 0x14073C89C (PiDrvDbOverlayCopyKeys.c)
 *     SmKmStoreFileCreateForIoType @ 0x14079E384 (SmKmStoreFileCreateForIoType.c)
 *     _RegRtlCopyTreeInternal @ 0x1407F09B8 (_RegRtlCopyTreeInternal.c)
 *     IopApplySystemPartitionProt @ 0x1408DEBB0 (IopApplySystemPartitionProt.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetSecurityObject(
        HANDLE Handle,
        SECURITY_INFORMATION SecurityInformation,
        PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Handle);
}
