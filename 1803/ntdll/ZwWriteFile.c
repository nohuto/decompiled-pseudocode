/*
 * XREFs of ZwWriteFile @ 0x18009ABC0
 * Callers:
 *     sub_180002CBC @ 0x180002CBC (sub_180002CBC.c)
 *     sub_180003410 @ 0x180003410 (sub_180003410.c)
 *     sub_180003794 @ 0x180003794 (sub_180003794.c)
 *     sub_1800064C0 @ 0x1800064C0 (sub_1800064C0.c)
 *     sub_1800733EC @ 0x1800733EC (sub_1800733EC.c)
 *     RtlCreateBootStatusDataFile @ 0x1800E6A70 (RtlCreateBootStatusDataFile.c)
 *     RtlRestoreBootStatusDefaults @ 0x1800E6DA0 (RtlRestoreBootStatusDefaults.c)
 *     sub_1800E70A4 @ 0x1800E70A4 (sub_1800E70A4.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwWriteFile(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID Buffer,
        ULONG Length,
        PLARGE_INTEGER ByteOffset,
        PULONG Key)
{
  NTSTATUS result; // eax

  result = 8;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
