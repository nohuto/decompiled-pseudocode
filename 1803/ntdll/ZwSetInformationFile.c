/*
 * XREFs of ZwSetInformationFile @ 0x18009AFA0
 * Callers:
 *     sub_180003410 @ 0x180003410 (sub_180003410.c)
 *     sub_1800064C0 @ 0x1800064C0 (sub_1800064C0.c)
 *     sub_1800092CC @ 0x1800092CC (sub_1800092CC.c)
 *     sub_18005756C @ 0x18005756C (sub_18005756C.c)
 *     sub_1800DE900 @ 0x1800DE900 (sub_1800DE900.c)
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
