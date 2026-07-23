/*
 * XREFs of ZwOpenKeyEx @ 0x18009CDD0
 * Callers:
 *     sub_1800C8808 @ 0x1800C8808 (sub_1800C8808.c)
 *     sub_1800CB770 @ 0x1800CB770 (sub_1800CB770.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwOpenKeyEx(
        PHANDLE KeyHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG OpenOptions)
{
  NTSTATUS result; // eax

  result = 281;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
