/*
 * XREFs of ZwCreateUserProcess @ 0x1800A6AF0
 * Callers:
 *     sub_18008D520 @ 0x18008D520 (sub_18008D520.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreateUserProcess(
        PHANDLE ProcessHandle,
        PHANDLE ThreadHandle,
        ACCESS_MASK ProcessDesiredAccess,
        ACCESS_MASK ThreadDesiredAccess,
        POBJECT_ATTRIBUTES ProcessObjectAttributes,
        POBJECT_ATTRIBUTES ThreadObjectAttributes,
        ULONG ProcessFlags,
        ULONG ThreadFlags,
        PVOID ProcessParameters,
        PPS_CREATE_INFO CreateInfo,
        PPS_ATTRIBUTE_LIST AttributeList)
{
  NTSTATUS result; // eax

  result = 192;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
