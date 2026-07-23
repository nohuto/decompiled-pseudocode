/*
 * XREFs of ZwSetSecurityObject @ 0x140181280
 * Callers:
 *     BiZwSetSecurityObject @ 0x14014CF48 (BiZwSetSecurityObject.c)
 *     PiDevCfgCopyDeviceKey @ 0x140593BA4 (PiDevCfgCopyDeviceKey.c)
 *     MiCreatePagingFile @ 0x1405B967C (MiCreatePagingFile.c)
 *     CmpInitBackupHive @ 0x1405BCDC0 (CmpInitBackupHive.c)
 *     CmpDoReDoSetSecurityDescriptor @ 0x140677BD8 (CmpDoReDoSetSecurityDescriptor.c)
 *     SmKmStoreFileCreateForIoType @ 0x140703078 (SmKmStoreFileCreateForIoType.c)
 *     _RegRtlCopyTreeInternal @ 0x140741D70 (_RegRtlCopyTreeInternal.c)
 *     IopApplySystemPartitionProt @ 0x1408332A0 (IopApplySystemPartitionProt.c)
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
