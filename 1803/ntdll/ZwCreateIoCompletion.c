/*
 * XREFs of ZwCreateIoCompletion @ 0x18009BF90
 * Callers:
 *     sub_180057618 @ 0x180057618 (sub_180057618.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreateIoCompletion(
        PHANDLE IoCompletionHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG Count)
{
  NTSTATUS result; // eax

  result = 167;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
