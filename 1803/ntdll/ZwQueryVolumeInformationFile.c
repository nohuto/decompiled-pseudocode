/*
 * XREFs of ZwQueryVolumeInformationFile @ 0x18009B3E0
 * Callers:
 *     sub_180003410 @ 0x180003410 (sub_180003410.c)
 *     sub_1800064C0 @ 0x1800064C0 (sub_1800064C0.c)
 *     sub_180076B90 @ 0x180076B90 (sub_180076B90.c)
 *     sub_1800CC838 @ 0x1800CC838 (sub_1800CC838.c)
 *     sub_18010CB1C @ 0x18010CB1C (sub_18010CB1C.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryVolumeInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FsInformation,
        ULONG Length,
        FSINFOCLASS FsInformationClass)
{
  NTSTATUS result; // eax

  result = 73;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
