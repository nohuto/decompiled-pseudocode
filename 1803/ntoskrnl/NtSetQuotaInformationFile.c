/*
 * XREFs of NtSetQuotaInformationFile @ 0x14071EC10
 * Callers:
 *     <none>
 * Callees:
 *     IopSetEaOrQuotaInformationFile @ 0x14071AB3C (IopSetEaOrQuotaInformationFile.c)
 */

NTSTATUS __stdcall NtSetQuotaInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID Buffer,
        ULONG Length)
{
  char v5; // [rsp+20h] [rbp-18h]

  return IopSetEaOrQuotaInformationFile(FileHandle, (unsigned __int64)IoStatusBlock, (char *)Buffer, Length, v5);
}
