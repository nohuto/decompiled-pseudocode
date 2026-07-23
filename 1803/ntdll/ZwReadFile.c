/*
 * XREFs of ZwReadFile @ 0x18009AB80
 * Callers:
 *     sub_180003410 @ 0x180003410 (sub_180003410.c)
 *     sub_1800064C0 @ 0x1800064C0 (sub_1800064C0.c)
 *     sub_1800DE154 @ 0x1800DE154 (sub_1800DE154.c)
 *     RtlCheckBootStatusIntegrity @ 0x1800E68B0 (RtlCheckBootStatusIntegrity.c)
 *     sub_1800E70A4 @ 0x1800E70A4 (sub_1800E70A4.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwReadFile(
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

  result = 6;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
