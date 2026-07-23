/*
 * XREFs of ZwQueryAttributesFile @ 0x1800A5AA0
 * Callers:
 *     sub_18003D528 @ 0x18003D528 (sub_18003D528.c)
 *     sub_18004AB20 @ 0x18004AB20 (sub_18004AB20.c)
 *     sub_180075EA0 @ 0x180075EA0 (sub_180075EA0.c)
 *     LdrAddDllDirectory @ 0x18008F390 (LdrAddDllDirectory.c)
 *     sub_1800DC344 @ 0x1800DC344 (sub_1800DC344.c)
 *     sub_1800E3538 @ 0x1800E3538 (sub_1800E3538.c)
 *     sub_18010D2E4 @ 0x18010D2E4 (sub_18010D2E4.c)
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
