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

__int64 NtQueryInformationFile()
{
  __int64 result; // rax

  result = 17LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
