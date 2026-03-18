/*
 * XREFs of NtCreatePagingFile @ 0x1405B9644
 * Callers:
 *     <none>
 * Callees:
 *     MiCreatePagingFile @ 0x1405B967C (MiCreatePagingFile.c)
 */

NTSTATUS __stdcall NtCreatePagingFile(
        PUNICODE_STRING FileName,
        PLARGE_INTEGER InitialSize,
        PLARGE_INTEGER MaxiumSize,
        ULONG Reserved)
{
  ULONG v4; // r10d

  v4 = Reserved;
  LOBYTE(Reserved) = KeGetCurrentThread()->PreviousMode;
  return MiCreatePagingFile(FileName, InitialSize, MaxiumSize, Reserved, v4, &MiSystemPartition);
}
