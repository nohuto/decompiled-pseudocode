/*
 * XREFs of ZwCreateMutant @ 0x1800A6870
 * Callers:
 *     sub_18010C758 @ 0x18010C758 (sub_18010C758.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreateMutant(
        PHANDLE MutantHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        BOOLEAN InitialOwner)
{
  NTSTATUS result; // eax

  result = 172;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
