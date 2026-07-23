/*
 * XREFs of ZwCreateTimer2 @ 0x18009C250
 * Callers:
 *     sub_180058424 @ 0x180058424 (sub_180058424.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreateTimer2(
        PHANDLE TimerHandle,
        PVOID Reserved1,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG Attributes,
        ACCESS_MASK DesiredAccess)
{
  NTSTATUS result; // eax

  result = 189;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
