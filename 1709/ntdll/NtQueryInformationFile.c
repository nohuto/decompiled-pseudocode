/*
 * XREFs of NtQueryInformationFile @ 0x1800A02E0
 * Callers:
 *     LdrVerifyImageMatchesChecksumEx @ 0x18008A5B0 (LdrVerifyImageMatchesChecksumEx.c)
 *     LdrpResFileSize @ 0x1800E2C88 (LdrpResFileSize.c)
 *     LdrpResValidateFileHandle @ 0x1800E3938 (LdrpResValidateFileHandle.c)
 *     RtlpGetFileSize @ 0x1800F62B4 (RtlpGetFileSize.c)
 *     RtlIsPartialPlaceholderFileHandle @ 0x1800F82B0 (RtlIsPartialPlaceholderFileHandle.c)
 *     _ResGetFileSizeEx @ 0x18011039C (_ResGetFileSizeEx.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtQueryInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FileInformation,
        ULONG Length,
        FILE_INFORMATION_CLASS FileInformationClass)
{
  NTSTATUS result; // eax

  result = 17;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
