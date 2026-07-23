/*
 * XREFs of ZwQueryAttributesFile @ 0x18009B260
 * Callers:
 *     sub_18003C82C @ 0x18003C82C (sub_18003C82C.c)
 *     sub_18003FC1C @ 0x18003FC1C (sub_18003FC1C.c)
 *     sub_180054094 @ 0x180054094 (sub_180054094.c)
 *     LdrAddDllDirectory @ 0x180089810 (LdrAddDllDirectory.c)
 *     sub_1800D5B04 @ 0x1800D5B04 (sub_1800D5B04.c)
 *     sub_1800DE990 @ 0x1800DE990 (sub_1800DE990.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryAttributesFile(POBJECT_ATTRIBUTES ObjectAttributes, PFILE_BASIC_INFORMATION FileInformation)
{
  NTSTATUS result; // eax

  result = 61;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
