/*
 * XREFs of ZwQueryDirectoryFile @ 0x18009B160
 * Callers:
 *     sub_180085824 @ 0x180085824 (sub_180085824.c)
 *     sub_1800DB564 @ 0x1800DB564 (sub_1800DB564.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryDirectoryFile(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FileInformation,
        ULONG Length,
        FILE_INFORMATION_CLASS FileInformationClass,
        BOOLEAN ReturnSingleEntry,
        PUNICODE_STRING FileName,
        BOOLEAN RestartScan)
{
  NTSTATUS result; // eax

  result = 53;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
