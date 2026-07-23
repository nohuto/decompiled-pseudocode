/*
 * XREFs of ZwOpenSection @ 0x1800A59E0
 * Callers:
 *     sub_18000B7EC @ 0x18000B7EC (sub_18000B7EC.c)
 *     sub_18003ADA8 @ 0x18003ADA8 (sub_18003ADA8.c)
 *     LdrGetKnownDllSectionHandle @ 0x180085BC0 (LdrGetKnownDllSectionHandle.c)
 *     sub_18010D4D4 @ 0x18010D4D4 (sub_18010D4D4.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwOpenSection(PHANDLE SectionHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  NTSTATUS result; // eax

  result = 55;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
