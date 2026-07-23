/*
 * XREFs of ZwQueryFullAttributesFile @ 0x1800A7A10
 * Callers:
 *     sub_18010D1BC @ 0x18010D1BC (sub_18010D1BC.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryFullAttributesFile(
        POBJECT_ATTRIBUTES ObjectAttributes,
        PFILE_NETWORK_OPEN_INFORMATION FileInformation)
{
  NTSTATUS result; // eax

  result = 313;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
