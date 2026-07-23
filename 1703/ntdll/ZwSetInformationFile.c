/*
 * XREFs of ZwSetInformationFile @ 0x1800A57E0
 * Callers:
 *     sub_1800102BC @ 0x1800102BC (sub_1800102BC.c)
 *     sub_1800518CC @ 0x1800518CC (sub_1800518CC.c)
 *     sub_1800531B0 @ 0x1800531B0 (sub_1800531B0.c)
 *     sub_1800537C0 @ 0x1800537C0 (sub_1800537C0.c)
 *     sub_1800E34A8 @ 0x1800E34A8 (sub_1800E34A8.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FileInformation,
        ULONG Length,
        FILE_INFORMATION_CLASS FileInformationClass)
{
  NTSTATUS result; // eax

  result = 39;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
