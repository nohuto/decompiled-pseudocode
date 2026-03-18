/*
 * XREFs of NtSetQuotaInformationFile @ 0x14068DF90
 * Callers:
 *     <none>
 * Callees:
 *     IopSetEaOrQuotaInformationFile @ 0x14068A1D8 (IopSetEaOrQuotaInformationFile.c)
 */

NTSTATUS __stdcall NtSetQuotaInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID Buffer,
        ULONG Length)
{
  return IopSetEaOrQuotaInformationFile(FileHandle, (unsigned __int64)IoStatusBlock, (char *)Buffer, Length);
}
