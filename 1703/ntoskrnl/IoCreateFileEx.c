/*
 * XREFs of IoCreateFileEx @ 0x140541850
 * Callers:
 *     IopOpenLinkOrRenameTarget @ 0x140449118 (IopOpenLinkOrRenameTarget.c)
 *     IoCreateFileSpecifyDeviceObjectHint @ 0x140454050 (IoCreateFileSpecifyDeviceObjectHint.c)
 *     NtCreateUserProcess @ 0x140544094 (NtCreateUserProcess.c)
 * Callees:
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     IopCreateFile @ 0x140541AA0 (IopCreateFile.c)
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
  int v16; // r10d
  int v17; // ebp
  struct _ECP_LIST *BugCheckParameter4; // rcx
  ULONG v19; // edx
  struct _LIST_ENTRY *Flink; // rax
  int v21; // ecx
  SIZE_T NumberOfBytes; // [rsp+50h] [rbp-38h]

  v16 = (Options >> 10) & 2;
  v17 = (int)FileHandle;
  if ( DriverContext )
  {
    BugCheckParameter4 = DriverContext->ExtraCreateParameter;
    v19 = v16 | 1;
    if ( !DriverContext->DeviceObjectHint )
      v19 = (Options >> 10) & 2;
    if ( BugCheckParameter4 )
    {
      BugCheckParameter4->Flags |= 1u;
      Flink = BugCheckParameter4->EcpList.Flink;
      if ( Flink == &BugCheckParameter4->EcpList )
        KeBugCheckEx(0x10Cu, 0x15uLL, 0LL, 0LL, (ULONG_PTR)BugCheckParameter4);
      do
      {
        LODWORD(Flink[2].Blink) |= 1u;
        Flink = Flink->Flink;
      }
      while ( Flink != &BugCheckParameter4->EcpList );
    }
    v21 = v19 | 4;
    if ( !DriverContext->TxnParameters )
      v21 = v19;
    v16 = v21;
    if ( DriverContext->Size >= 0x28u && *(_QWORD *)&DriverContext[1].Size != 1LL )
      v16 = v21 | 0x40;
  }
  LODWORD(NumberOfBytes) = EaLength;
  return IopCreateFile(
           v17,
           DesiredAccess,
           (int)ObjectAttributes,
           (int)IoStatusBlock,
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
           v16,
           DriverContext);
}
