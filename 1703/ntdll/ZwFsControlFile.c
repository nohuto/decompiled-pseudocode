/*
 * XREFs of ZwFsControlFile @ 0x1800A5A20
 * Callers:
 *     sub_18007B108 @ 0x18007B108 (sub_18007B108.c)
 *     RtlUnlockBootStatusData @ 0x180089B20 (RtlUnlockBootStatusData.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwFsControlFile(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG FsControlCode,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength)
{
  NTSTATUS result; // eax

  result = 57;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
