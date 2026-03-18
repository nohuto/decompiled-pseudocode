/*
 * XREFs of IoCreateFileEx @ 0x1404F2DE0
 * Callers:
 *     NtCreateUserProcess @ 0x1404F200C (NtCreateUserProcess.c)
 *     IopOpenLinkOrRenameTarget @ 0x140576138 (IopOpenLinkOrRenameTarget.c)
 *     IoCreateFileSpecifyDeviceObjectHint @ 0x14057CA70 (IoCreateFileSpecifyDeviceObjectHint.c)
 * Callees:
 *     IopCreateFile @ 0x1404F3030 (IopCreateFile.c)
 *     FsRtlpValidateExtraCreateParameters @ 0x1404F3A94 (FsRtlpValidateExtraCreateParameters.c)
 */

NTSTATUS __stdcall IoCreateFileEx(
        PHANDLE FileHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PIO_STATUS_BLOCK IoStatusBlock,
        PLARGE_INTEGER AllocationSize,
        ULONG FileAttributes,
        ULONG ShareAccess,
        ULONG Disposition,
        ULONG CreateOptions,
        PVOID EaBuffer,
        ULONG EaLength,
        CREATE_FILE_TYPE CreateFileType,
        PVOID InternalParameters,
        ULONG Options,
        PIO_DRIVER_CREATE_CONTEXT DriverContext)
{
  int v15; // ebp
  int v16; // r14d
  int v17; // r10d
  int v19; // r12d
  struct _ECP_LIST *ExtraCreateParameter; // rcx
  ULONG v21; // edi
  int v22; // ecx
  SIZE_T NumberOfBytes; // [rsp+50h] [rbp-48h]

  v15 = (int)IoStatusBlock;
  v16 = (int)ObjectAttributes;
  v17 = (Options >> 10) & 2;
  v19 = (int)FileHandle;
  if ( DriverContext )
  {
    ExtraCreateParameter = DriverContext->ExtraCreateParameter;
    v21 = v17 | 1;
    if ( !DriverContext->DeviceObjectHint )
      v21 = (Options >> 10) & 2;
    if ( ExtraCreateParameter )
      FsRtlpValidateExtraCreateParameters((ULONG_PTR)ExtraCreateParameter);
    v22 = v21 | 4;
    if ( !DriverContext->TxnParameters )
      v22 = v21;
    v17 = v22;
    if ( DriverContext->Size >= 0x28u && *(_QWORD *)&DriverContext[1].Size != 1LL )
      v17 = v22 | 0x40;
  }
  LODWORD(NumberOfBytes) = EaLength;
  return IopCreateFile(
           v19,
           DesiredAccess,
           v16,
           v15,
           (__int64)AllocationSize,
           FileAttributes,
           ShareAccess,
           Disposition,
           CreateOptions,
           EaBuffer,
           NumberOfBytes,
           CreateFileType,
           (__int64)InternalParameters,
           Options | 0x100,
           v17,
           DriverContext);
}
