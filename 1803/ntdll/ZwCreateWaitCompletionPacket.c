/*
 * XREFs of ZwCreateWaitCompletionPacket @ 0x18009C310
 * Callers:
 *     sub_180058424 @ 0x180058424 (sub_180058424.c)
 *     TpAllocWait @ 0x180058B10 (TpAllocWait.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreateWaitCompletionPacket(
        PHANDLE WaitCompletionPacketHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  NTSTATUS result; // eax

  result = 195;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
