/*
 * XREFs of ZwQueryVolumeInformationFile @ 0x1800A5C20
 * Callers:
 *     sub_1800518CC @ 0x1800518CC (sub_1800518CC.c)
 *     sub_1800531B0 @ 0x1800531B0 (sub_1800531B0.c)
 *     sub_18007B250 @ 0x18007B250 (sub_18007B250.c)
 *     sub_18007D620 @ 0x18007D620 (sub_18007D620.c)
 *     sub_1800D6D28 @ 0x1800D6D28 (sub_1800D6D28.c)
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
