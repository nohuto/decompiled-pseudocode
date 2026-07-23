/*
 * XREFs of ZwCreateWaitCompletionPacket @ 0x1800A6B10
 * Callers:
 *     sub_1800134A4 @ 0x1800134A4 (sub_1800134A4.c)
 *     TpAllocWait @ 0x180013DF0 (TpAllocWait.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreateWaitCompletionPacket(
        PHANDLE WaitCompletionPacketHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  NTSTATUS result; // eax

  result = 193;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
