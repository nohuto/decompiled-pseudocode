/*
 * XREFs of ZwOpenProcess @ 0x18009AF80
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x180077500 (RtlQueryProcessDebugInformation.c)
 *     sub_180077F84 @ 0x180077F84 (sub_180077F84.c)
 *     sub_180085718 @ 0x180085718 (sub_180085718.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwOpenProcess(
        PHANDLE ProcessHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PCLIENT_ID ClientId)
{
  NTSTATUS result; // eax

  result = 38;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
