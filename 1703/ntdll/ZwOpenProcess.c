/*
 * XREFs of ZwOpenProcess @ 0x1800A57C0
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x180067770 (RtlQueryProcessDebugInformation.c)
 *     sub_1800686F4 @ 0x1800686F4 (sub_1800686F4.c)
 *     sub_1800DD1E4 @ 0x1800DD1E4 (sub_1800DD1E4.c)
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
